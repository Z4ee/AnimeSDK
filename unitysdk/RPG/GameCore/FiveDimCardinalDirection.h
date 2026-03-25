#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimCardinalDirection_TypeDefinitionIndex = 17017;

	enum class FiveDimCardinalDirection : ::System::Int32
	{
		Down = 0,
		Up = 1,
		Left = 2,
		Right = 3,
	};
}
