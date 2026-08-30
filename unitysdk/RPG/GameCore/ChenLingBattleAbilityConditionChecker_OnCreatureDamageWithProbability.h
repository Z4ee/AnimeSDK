#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityConditionChecker.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONCREATUREDAMAGEWITHPROBABILITY_METHOD_3_C8645ECA68158880_OFFSET UNITYSDK_OFFSET(0x1CFA3BC0)
#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONCREATUREDAMAGEWITHPROBABILITY_METHOD_3_F028F19D7C22E234_OFFSET UNITYSDK_OFFSET(0x1CFA3AF0)
#define RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONCREATUREDAMAGEWITHPROBABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFA3BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbilityConditionChecker_OnCreatureDamageWithProbability_TypeDefinitionIndex = 15557;

	class ChenLingBattleAbilityConditionChecker_OnCreatureDamageWithProbability : public ::RPG::GameCore::BaseChenLingBattleAbilityConditionChecker
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* Probability; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONCREATUREDAMAGEWITHPROBABILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F028F19D7C22E234(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnCreatureDamageWithProbability*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnCreatureDamageWithProbability*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONCREATUREDAMAGEWITHPROBABILITY_METHOD_3_F028F19D7C22E234_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C8645ECA68158880(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnCreatureDamageWithProbability* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbilityConditionChecker_OnCreatureDamageWithProbability*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITYCONDITIONCHECKER_ONCREATUREDAMAGEWITHPROBABILITY_METHOD_3_C8645ECA68158880_OFFSET))(a1, a2);
		}
	};
}
