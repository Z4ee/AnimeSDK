#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantSelectionType_TypeDefinitionIndex = 10991;

	enum class RestaurantSelectionType : ::System::Int32
	{
		Unknown = 0,
		Normal = 1,
		RecommendTag = 2,
		RecommendMaterial = 3,
		RecommendPrice = 4,
	};
}
