#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicAffixType_TypeDefinitionIndex = 10519;

	enum class RelicAffixType : ::System::Int32
	{
		None = 0,
		Attack = 1,
		HP = 2,
		Defence = 3,
		Speed = 4,
		StatusProbability = 6,
		StatusResistance = 7,
		BreakDamage = 8,
		DamageAddedRatio = 9,
		SPRatio = 10,
		HealRatio = 11,
		CriticalChance = 12,
		CriticalDamage = 13,
	};
}
