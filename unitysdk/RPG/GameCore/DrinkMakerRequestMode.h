#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerRequestMode_TypeDefinitionIndex = 12651;

	enum class DrinkMakerRequestMode : ::System::Int32
	{
		ByFormula = 1,
		ByTags = 2,
	};
}
