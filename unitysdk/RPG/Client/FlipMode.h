#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int FlipMode_TypeDefinitionIndex = 71059;

	enum class FlipMode : ::System::Int32
	{
		RightToLeft = 0,
		LeftToRight = 1,
	};
}
