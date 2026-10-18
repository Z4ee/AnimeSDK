#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantShopItemRefreshType_TypeDefinitionIndex = 11353;

	enum class RestaurantShopItemRefreshType : ::System::Int32
	{
		Day = 0,
		Progress = 1,
		Once = 2,
	};
}
