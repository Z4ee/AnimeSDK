#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantDynamicValueType_TypeDefinitionIndex = 10907;

	enum class RestaurantDynamicValueType : ::System::Int32
	{
		RecipeID = 0,
		Phase = 1,
	};
}
