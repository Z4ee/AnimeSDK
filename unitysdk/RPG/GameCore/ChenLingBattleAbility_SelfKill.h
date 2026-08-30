#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityNodeConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGBATTLEABILITY_SELFKILL_METHOD_3_314749C5BA38AB3A_OFFSET UNITYSDK_OFFSET(0x1E008A30)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_SELFKILL_METHOD_3_418EB1CFB6D05B5B_OFFSET UNITYSDK_OFFSET(0x1E008AD0)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_SELFKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x1E008AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbility_SelfKill_TypeDefinitionIndex = 15577;

	class ChenLingBattleAbility_SelfKill : public ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_SELFKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_314749C5BA38AB3A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbility_SelfKill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbility_SelfKill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_SELFKILL_METHOD_3_314749C5BA38AB3A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_418EB1CFB6D05B5B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbility_SelfKill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbility_SelfKill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_SELFKILL_METHOD_3_418EB1CFB6D05B5B_OFFSET))(a1, a2);
		}
	};
}
