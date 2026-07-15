#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AssistantShowCaseType_TypeDefinitionIndex = 12193;

	enum class AssistantShowCaseType : ::System::Int32
	{
		Unknown = 0,
		ElfRestaurantEditRecipe = 1,
		ElfRestaurantSettleManage = 2,
		ElfRestaurantNextDay = 3,
		ElfRestaurantLoading = 4,
	};
}
