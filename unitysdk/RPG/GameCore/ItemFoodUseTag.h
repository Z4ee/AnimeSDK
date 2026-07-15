#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemFoodUseTag_TypeDefinitionIndex = 13356;

	enum class ItemFoodUseTag : ::System::Int32
	{
		HP = 0,
		BP = 1,
		SP = 2,
	};
}
