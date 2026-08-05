#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Enum_3_CAEA556991ED2261_TypeDefinitionIndex = 52284;

enum class Enum_3_CAEA556991ED2261 : ::System::Byte
{
	Pending = 0x2,
	Paused = 0x5,
	Interrupted = 0x7,
	InputAwaiting = 0x3,
	Destroy = 0x9,
	Exception = 0x8,
	None = 0x0,
	Interacting = 0x4,
	Initialized = 0x1,
	Finished = 0x6,
};
