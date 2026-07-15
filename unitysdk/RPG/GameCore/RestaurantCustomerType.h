#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantCustomerType_TypeDefinitionIndex = 10971;

	enum class RestaurantCustomerType : ::System::Int32
	{
		Unknown = 0,
		Normal = 1,
		Special = 2,
	};
}
