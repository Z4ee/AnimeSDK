#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityConditionChecker.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFDEADWITHPROBABILITY_METHOD_3_68DD6D34F225A1E4_OFFSET UNITYSDK_OFFSET(0x1C375780)
#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFDEADWITHPROBABILITY_METHOD_3_8E0A7D98C44FA530_OFFSET UNITYSDK_OFFSET(0x1C375850)
#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFDEADWITHPROBABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C375840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbilityConditionChecker_OnSelfDeadWithProbability_TypeDefinitionIndex = 15116;

	class ChenLingBattleAbilityConditionChecker_OnSelfDeadWithProbability : public ::RPG::GameCore::BaseChenLingBattleAbilityConditionChecker
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* Probability; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFDEADWITHPROBABILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_68DD6D34F225A1E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnSelfDeadWithProbability*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnSelfDeadWithProbability*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFDEADWITHPROBABILITY_METHOD_3_68DD6D34F225A1E4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8E0A7D98C44FA530(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnSelfDeadWithProbability* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnSelfDeadWithProbability*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFDEADWITHPROBABILITY_METHOD_3_8E0A7D98C44FA530_OFFSET))(a1, a2);
		}
	};
}
