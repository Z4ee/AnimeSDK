#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantSuperEventType_TypeDefinitionIndex = 10033;

	enum class RestaurantSuperEventType : ::System::Int32
	{
		Unknown = 0,
		Birthday = 1,
		SuperChef = 2,
		Dancing = 3,
	};
}
