#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemFoodSubType_TypeDefinitionIndex = 13354;

	enum class ItemFoodSubType : ::System::Int32
	{
		Unknown = 0,
		Lineup = 1,
		Avatar = 2,
		External = 3,
	};
}
