#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameKillEffectParams; }

#define RPG_GAMECORE_FIVEDIMKILLAVATAREFFECTACTION_METHOD_4_1579E4365E257B57_OFFSET UNITYSDK_OFFSET(0x1D697B70)
#define RPG_GAMECORE_FIVEDIMKILLAVATAREFFECTACTION_METHOD_4_BEC72773D3CC2BFA_OFFSET UNITYSDK_OFFSET(0x1D697C20)
#define RPG_GAMECORE_FIVEDIMKILLAVATAREFFECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D697C10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimKillAvatarEffectAction_TypeDefinitionIndex = 18742;

	class FiveDimKillAvatarEffectAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::LittleGameKillEffectParams* KillParams; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMKILLAVATAREFFECTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1579E4365E257B57(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimKillAvatarEffectAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimKillAvatarEffectAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMKILLAVATAREFFECTACTION_METHOD_4_1579E4365E257B57_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BEC72773D3CC2BFA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimKillAvatarEffectAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimKillAvatarEffectAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMKILLAVATAREFFECTACTION_METHOD_4_BEC72773D3CC2BFA_OFFSET))(a1, a2);
		}
	};
}
