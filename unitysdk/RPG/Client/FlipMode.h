#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int FlipMode_TypeDefinitionIndex = 65488;

	enum class FlipMode : ::System::Int32
	{
		RightToLeft = 0,
		LeftToRight = 1,
	};
}
