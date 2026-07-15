#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerCupType_TypeDefinitionIndex = 12668;

	enum class DrinkMakerCupType : ::System::Int32
	{
		None = 0,
		SmallCup = 1,
		MediumCup = 2,
		LargeCup = 3,
	};
}
