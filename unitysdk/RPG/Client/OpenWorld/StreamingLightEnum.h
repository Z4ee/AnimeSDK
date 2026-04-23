#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int StreamingLightEnum_TypeDefinitionIndex = 68134;

	enum class StreamingLightEnum : ::System::Int32
	{
		HideLimitLight = 0,
		MainLightGroup = 1,
		HideAllLight = 2,
		UseLodLight = 3,
		Unkown = 4,
	};
}
