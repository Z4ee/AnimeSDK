#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int EMaterialModifierPerformanceLevel_TypeDefinitionIndex = 50107;

	enum class EMaterialModifierPerformanceLevel : ::System::Int32
	{
		VeryHigh = 3,
		Low = 0,
		Medium = 1,
		High = 2,
	};
}
