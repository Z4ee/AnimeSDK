#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int StreamingLightMode_TypeDefinitionIndex = 23570;

	enum class StreamingLightMode : ::System::Int32
	{
		HideLimitLight = 0,
		MainLightGroup = 1,
		HideAllLight = 2,
	};
}
