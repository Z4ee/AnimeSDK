#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int Quadrant_TypeDefinitionIndex = 17836;

	enum class Quadrant : ::System::Int32
	{
		FirstQuadrant = 0,
		SecondQuadrant = 1,
		ThirdQuadrant = 2,
		FourthQuadrant = 3,
	};
}
