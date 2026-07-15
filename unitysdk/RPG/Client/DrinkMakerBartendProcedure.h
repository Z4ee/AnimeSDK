#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerBartendProcedure_TypeDefinitionIndex = 60800;

	enum class DrinkMakerBartendProcedure : ::System::Int32
	{
		Cup = 1,
		Ice = 2,
		Ingredient = 3,
		Deco = 4,
	};
}
