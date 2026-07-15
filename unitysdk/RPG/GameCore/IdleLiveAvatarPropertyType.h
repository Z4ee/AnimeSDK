#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveAvatarPropertyType_TypeDefinitionIndex = 13278;

	enum class IdleLiveAvatarPropertyType : ::System::Int32
	{
		None = 0,
		BaseHP = 1,
		BaseAttack = 2,
		BaseDefence = 3,
		CriticalChanceBase = 4,
		CriticalDamageBase = 5,
		HPAddedRatio = 6,
		AttackAddedRatio = 7,
		DefenceAddedRatio = 8,
		AllDamageTypeAddedRatio = 9,
		AllDamageTypeTakenRatio = 10,
		AllDamageReduce = 11,
		FatigueRatio = 12,
		BlockRatio = 13,
		LifeStealRatio = 14,
		DamageReflectRatio = 15,
		ElementMastery = 16,
		HealRatioBase = 17,
		SPRatioBase = 18,
	};
}
