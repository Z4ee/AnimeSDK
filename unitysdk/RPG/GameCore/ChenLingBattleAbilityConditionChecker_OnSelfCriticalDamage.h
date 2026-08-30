#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityConditionChecker.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFCRITICALDAMAGE_METHOD_3_3BF24F56A84384C0_OFFSET UNITYSDK_OFFSET(0x1E006240)
#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFCRITICALDAMAGE_METHOD_3_CBE3790A72600F85_OFFSET UNITYSDK_OFFSET(0x1E0061A0)
#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFCRITICALDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E006230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbilityConditionChecker_OnSelfCriticalDamage_TypeDefinitionIndex = 15552;

	class ChenLingBattleAbilityConditionChecker_OnSelfCriticalDamage : public ::RPG::GameCore::BaseChenLingBattleAbilityConditionChecker
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFCRITICALDAMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CBE3790A72600F85(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnSelfCriticalDamage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnSelfCriticalDamage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFCRITICALDAMAGE_METHOD_3_CBE3790A72600F85_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3BF24F56A84384C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnSelfCriticalDamage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnSelfCriticalDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFCRITICALDAMAGE_METHOD_3_3BF24F56A84384C0_OFFSET))(a1, a2);
		}
	};
}
