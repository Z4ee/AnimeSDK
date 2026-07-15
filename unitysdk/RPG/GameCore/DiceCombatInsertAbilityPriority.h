#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatInsertAbilityPriority_TypeDefinitionIndex = 15510;

	enum class DiceCombatInsertAbilityPriority : ::System::Int32
	{
		Highest = -1000000,
		DCIAP_StrikeBack = -500000,
		Default = 0,
		Lowest = 1000000,
	};
}
