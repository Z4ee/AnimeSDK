#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameKillEffectParams; }

#define RPG_GAMECORE_FIVEDIMKILLEFFECTACTION_METHOD_4_7EC15761DD3DF46E_OFFSET UNITYSDK_OFFSET(0x1D6C5710)
#define RPG_GAMECORE_FIVEDIMKILLEFFECTACTION_METHOD_4_F86CD208FD264EEB_OFFSET UNITYSDK_OFFSET(0x1D6C57C0)
#define RPG_GAMECORE_FIVEDIMKILLEFFECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C57B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimKillEffectAction_TypeDefinitionIndex = 18740;

	class FiveDimKillEffectAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::LittleGameKillEffectParams* KillParams; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMKILLEFFECTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7EC15761DD3DF46E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimKillEffectAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimKillEffectAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMKILLEFFECTACTION_METHOD_4_7EC15761DD3DF46E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F86CD208FD264EEB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimKillEffectAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimKillEffectAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMKILLEFFECTACTION_METHOD_4_F86CD208FD264EEB_OFFSET))(a1, a2);
		}
	};
}
