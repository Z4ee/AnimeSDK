#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityConditionChecker.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFATTACKWITHPROBABILITY_METHOD_3_11AEA74022F404D2_OFFSET UNITYSDK_OFFSET(0x187DD6A0)
#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFATTACKWITHPROBABILITY_METHOD_3_1D8997D9A6962766_OFFSET UNITYSDK_OFFSET(0x187DD5D0)
#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFATTACKWITHPROBABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x187DD690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbilityConditionChecker_OnSelfAttackWithProbability_TypeDefinitionIndex = 14884;

	class ChenLingBattleAbilityConditionChecker_OnSelfAttackWithProbability : public ::RPG::GameCore::BaseChenLingBattleAbilityConditionChecker
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* Probability; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFATTACKWITHPROBABILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1D8997D9A6962766(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnSelfAttackWithProbability*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnSelfAttackWithProbability*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFATTACKWITHPROBABILITY_METHOD_3_1D8997D9A6962766_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_11AEA74022F404D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnSelfAttackWithProbability* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnSelfAttackWithProbability*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFATTACKWITHPROBABILITY_METHOD_3_11AEA74022F404D2_OFFSET))(a1, a2);
		}
	};
}
