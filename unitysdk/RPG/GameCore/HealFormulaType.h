#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int HealFormulaType_TypeDefinitionIndex = 10080;

	enum class HealFormulaType : ::System::Int32
	{
		HealByHealerAttack = 0,
		HealByHealerDefence = 1,
		HealByHealerMaxHP = 2,
		HealByTargetMaxHP = 3,
		HealByTargetLostHP = 4,
		HealByBaseValue = 5,
		HealByBaseValueWithBonus = 6,
	};
}
