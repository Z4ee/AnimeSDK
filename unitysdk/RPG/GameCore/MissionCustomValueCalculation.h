#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionCustomValueCalculation_TypeDefinitionIndex = 23642;

	enum class MissionCustomValueCalculation : ::System::Int32
	{
		Add = 0,
		Multiply = 1,
		Random = 2,
	};
}
