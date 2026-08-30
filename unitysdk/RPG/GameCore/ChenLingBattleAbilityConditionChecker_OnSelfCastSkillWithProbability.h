#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityConditionChecker.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFCASTSKILLWITHPROBABILITY_METHOD_3_8DFF4DB0ED0C59CD_OFFSET UNITYSDK_OFFSET(0x1CFA3DF0)
#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFCASTSKILLWITHPROBABILITY_METHOD_3_D0BEE40F2B4B760F_OFFSET UNITYSDK_OFFSET(0x1CFA3D90)
#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFCASTSKILLWITHPROBABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFA3DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbilityConditionChecker_OnSelfCastSkillWithProbability_TypeDefinitionIndex = 15556;

	class ChenLingBattleAbilityConditionChecker_OnSelfCastSkillWithProbability : public ::RPG::GameCore::BaseChenLingBattleAbilityConditionChecker
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* SkillID; // 0x10
		::RPG::GameCore::BaseChenLingBattleValueGetter* Probability; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFCASTSKILLWITHPROBABILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D0BEE40F2B4B760F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnSelfCastSkillWithProbability*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnSelfCastSkillWithProbability*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFCASTSKILLWITHPROBABILITY_METHOD_3_D0BEE40F2B4B760F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8DFF4DB0ED0C59CD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnSelfCastSkillWithProbability* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnSelfCastSkillWithProbability*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONSELFCASTSKILLWITHPROBABILITY_METHOD_3_8DFF4DB0ED0C59CD_OFFSET))(a1, a2);
		}
	};
}
