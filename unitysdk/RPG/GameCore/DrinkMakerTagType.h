#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerTagType_TypeDefinitionIndex = 13048;

	enum class DrinkMakerTagType : ::System::Int32
	{
		Temperature = 1,
		Taste = 2,
		Special = 3,
	};
}
