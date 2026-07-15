#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIValueInTeamType_TypeDefinitionIndex = 14977;

	enum class ComplexSkillAIValueInTeamType : ::System::Int32
	{
		MaxHP = 0,
		CurHP = 1,
		HPRatio = 2,
		CurSP = 3,
		SPRatio = 4,
		CurSpecialSP = 5,
		SpecialSPRatio = 6,
		Stance = 7,
		Speed = 8,
		DPT = 9,
		Attack = 10,
		criticalChance = 11,
		criticalDamage = 12,
		ED = 13,
		ActionDelay = 14,
		AITag_DamageCarry = 15,
		TotalPower = 16,
		WeightedTotalPower = 17,
		FormulaTotalPower = 18,
	};
}
