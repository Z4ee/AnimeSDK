#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerTagSourceType_TypeDefinitionIndex = 12660;

	enum class DrinkMakerTagSourceType : ::System::Int32
	{
		None = 0,
		Ingredient = 1,
		Cup = 2,
		Ice = 3,
		Decoration = 4,
		Layer = 5,
		Mix = 6,
	};
}
