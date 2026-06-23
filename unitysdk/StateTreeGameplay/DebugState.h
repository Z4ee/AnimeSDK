#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace StateTreeGameplay
{
	inline static constexpr unsigned int DebugState_TypeDefinitionIndex = 52910;

	struct alignas(4) DebugState
	{
		::System::UInt32 DebugID; // 0x10
	};
}
