#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleBuffType_TypeDefinitionIndex = 15091;

	enum class ChenLingBattleBuffType : ::System::Int32
	{
		Invalid = 0,
		Shield = 1,
		NextAttackCertainCritical = 2,
		DamageReduction = 3,
		Frozen = 4,
		AlwaysCertainCritical = 5,
		SkillCdReduction = 6,
		DamageImmunity = 7,
		ImmuneDamageAttenuation = 8,
		SkillCDBaseAdd = 9,
		SkillCDMultipierAdd = 10,
		LeapSlamRangeAdd = 11,
		AttackRangeAdd = 12,
		SplitNumAdd = 13,
		BoomRangeBaseAdd = 14,
		BoomRangeMultipierAdd = 15,
		BoomDamageBaseAdd = 16,
		BoomDamageMultipierAdd = 17,
		MagicMissileCountBaseAdd = 18,
	};
}
