#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantFacilityType_TypeDefinitionIndex = 10945;

	enum class RestaurantFacilityType : ::System::Int32
	{
		Unknown = 0,
		Table = 1,
		Environment = 2,
		Harp = 3,
		SignBoard = 4,
		DrinkMachine = 5,
		TipTable = 6,
		Platform = 7,
	};
}
