#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int EDebugChanelMask_TypeDefinitionIndex = 36328;

	enum class EDebugChanelMask : ::System::Int32
	{
		RGB = 0,
		R = 1,
		G = 2,
		B = 3,
		A = 4,
	};
}
