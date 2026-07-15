#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AssistantRuleType_TypeDefinitionIndex = 12194;

	enum class AssistantRuleType : ::System::Int32
	{
		Unknown = 0,
		AlwaysPassed = 1,
		ElfRestaurantTargetRecipe = 2,
		ElfRestaurantEmptySlot = 3,
		ElfRestaurantExpensiveRecipe = 4,
		ElfRestaurantEmployeeHint = 5,
		ElfRestaurantFacilityHint = 6,
		ElfRestaurantFarmHint = 7,
		ElfRestaurantRecipeStorage = 8,
	};
}
