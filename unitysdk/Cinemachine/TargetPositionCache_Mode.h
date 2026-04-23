#pragma once
#include "unitysdk/unitysdk.h"

namespace Cinemachine
{
	inline static constexpr unsigned int TargetPositionCache_Mode_TypeDefinitionIndex = 36609;

	enum class TargetPositionCache_Mode : ::System::Int32
	{
		Disabled = 0,
		Record = 1,
		Playback = 2,
	};
}
