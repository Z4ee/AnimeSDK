#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GraphicQuality_TypeDefinitionIndex = 23582;

	enum class GraphicQuality : ::System::Int32
	{
		Full = 0,
		VeryHigh = 1,
		High = 2,
		Middle = 3,
		Low = 4,
		VeryLow = 5,
	};
}
