#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalArgueGoalMode_TypeDefinitionIndex = 50025;

	enum class GalArgueGoalMode : ::System::Int32
	{
		AddToMax = 1,
		ReduceToZero = 0,
	};
}
