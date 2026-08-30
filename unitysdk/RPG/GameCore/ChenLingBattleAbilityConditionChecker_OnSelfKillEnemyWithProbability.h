#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityConditionChecker.h"
#include "unitysdk/RPG/GameCore/ChenLingDamageType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFKILLENEMYWITHPROBABILITY_METHOD_3_7C77C183AC7370B8_OFFSET UNITYSDK_OFFSET(0x1E0064F0)
#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFKILLENEMYWITHPROBABILITY_METHOD_3_B5647CBFAC08D214_OFFSET UNITYSDK_OFFSET(0x1E006550)
#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFKILLENEMYWITHPROBABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E006540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbilityConditionChecker_OnSelfKillEnemyWithProbability_TypeDefinitionIndex = 15551;

	class ChenLingBattleAbilityConditionChecker_OnSelfKillEnemyWithProbability : public ::RPG::GameCore::BaseChenLingBattleAbilityConditionChecker
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* Probability; // 0x10
		::Il2CppArray<::RPG::GameCore::ChenLingDamageType>* ForbidDamageType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFKILLENEMYWITHPROBABILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7C77C183AC7370B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnSelfKillEnemyWithProbability*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnSelfKillEnemyWithProbability*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFKILLENEMYWITHPROBABILITY_METHOD_3_7C77C183AC7370B8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B5647CBFAC08D214(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnSelfKillEnemyWithProbability* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnSelfKillEnemyWithProbability*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFKILLENEMYWITHPROBABILITY_METHOD_3_B5647CBFAC08D214_OFFSET))(a1, a2);
		}
	};
}
