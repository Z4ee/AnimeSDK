#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int Quality_TypeDefinitionIndex = 35989;

	enum class Quality : ::System::Int32
	{
		None = 0,
		VeryLow = 1,
		Low = 2,
		Medium = 3,
		High = 4,
		VeryHigh = 5,
	};
}
