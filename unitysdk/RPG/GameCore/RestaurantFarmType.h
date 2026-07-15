#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantFarmType_TypeDefinitionIndex = 10980;

	enum class RestaurantFarmType : ::System::Int32
	{
		Unknown = 0,
		Player = 1,
		Villager = 2,
	};
}
