#pragma once
#include "unitysdk/unitysdk.h"

namespace AstraFX::Fireworks
{
	inline static constexpr unsigned int RibbonPatternChannel_TypeDefinitionIndex = 49456;

	enum class RibbonPatternChannel : ::System::Int32
	{
		R = 0,
		G = 1,
		B = 2,
		RGB = 3,
	};
}
