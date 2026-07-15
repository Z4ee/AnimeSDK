#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantSelectEventBubbleType_TypeDefinitionIndex = 10936;

	enum class RestaurantSelectEventBubbleType : ::System::Int32
	{
		Unknown = 0,
		Normal = 1,
		Special = 2,
		Super = 3,
	};
}
