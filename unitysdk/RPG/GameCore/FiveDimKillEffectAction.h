#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameKillEffectParams; }

#define RPG_GAMECORE_FIVEDIMKILLEFFECTACTION_METHOD_3_6F4F70C55A92EB76_OFFSET UNITYSDK_OFFSET(0x1D866390)
#define RPG_GAMECORE_FIVEDIMKILLEFFECTACTION_METHOD_3_EFFC29FDF5A5ADB3_OFFSET UNITYSDK_OFFSET(0x1D8662E0)
#define RPG_GAMECORE_FIVEDIMKILLEFFECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D866380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimKillEffectAction_TypeDefinitionIndex = 18530;

	class FiveDimKillEffectAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::LittleGameKillEffectParams* KillParams; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMKILLEFFECTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EFFC29FDF5A5ADB3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimKillEffectAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimKillEffectAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMKILLEFFECTACTION_METHOD_3_EFFC29FDF5A5ADB3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6F4F70C55A92EB76(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimKillEffectAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimKillEffectAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMKILLEFFECTACTION_METHOD_3_6F4F70C55A92EB76_OFFSET))(a1, a2);
		}
	};
}
