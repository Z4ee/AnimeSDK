#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace StateTreeGameplay
{
	inline static constexpr unsigned int DebugContextState_TypeDefinitionIndex = 69656;

	struct alignas(4) DebugContextState
	{
		::System::UInt32 DebugID; // 0x10
	};
}
