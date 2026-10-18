#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityPropertyChangeReason_TypeDefinitionIndex = 10480;

	enum class AbilityPropertyChangeReason : ::System::Int32
	{
		None = 0,
		SummonInit = 1,
		Damage = 2,
		LoseHPByRatio = 3,
		LoseHP = 4,
		SyncProperty = 5,
		ByUseSkill = 6,
		EntityDie = 7,
		SyncHpShared = 8,
		ByUseSkillAdd = 9,
		ByDealDamage = 10,
		ByBeingDamage = 11,
		ByDealHeal = 12,
		ByModifySPTask = 13,
		ReduceStanceRatioTask = 14,
		ByDebugCommand = 15,
	};
}
