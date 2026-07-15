#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantEmployeeType_TypeDefinitionIndex = 10950;

	enum class RestaurantEmployeeType : ::System::Int32
	{
		Unknown = 0,
		Waiter = 1,
		Chef = 2,
		Farmer = 3,
		HeadChef = 4,
		HeadWaiter = 5,
	};
}
