#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PointsAnimCustomDataModule_ValueMode_TypeDefinitionIndex = 67466;

	enum class PointsAnimCustomDataModule_ValueMode : ::System::Int32
	{
		Constants = 0,
		RandomBetweenTwoConstants = 1,
		RandomBetweenMultiConstants = 2,
		Curve = 3,
	};
}
