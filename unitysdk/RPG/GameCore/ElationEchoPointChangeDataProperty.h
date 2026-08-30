#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElationEchoPointChangeDataProperty_TypeDefinitionIndex = 24378;

	enum class ElationEchoPointChangeDataProperty : ::System::Int32
	{
		CurrentValue = 0,
		OriginalCurrentValue = 1,
		BaseValue = 2,
		OverflowValue = 3,
	};
}
