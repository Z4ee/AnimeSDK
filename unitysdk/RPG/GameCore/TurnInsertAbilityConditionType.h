#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnInsertAbilityConditionType_TypeDefinitionIndex = 17519;

	enum class TurnInsertAbilityConditionType : ::System::Int32
	{
		None = 0,
		AbilityOwnerInsertCount = 1,
		AbilityOwnerInsertUnusedCount = 2,
		HasSelectableAliveAbilityTarget = 3,
	};
}
