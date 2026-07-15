#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Buffers
{
	inline static constexpr unsigned int ArrayPoolEventSource_BufferAllocatedReason_TypeDefinitionIndex = 3741;

	enum class ArrayPoolEventSource_BufferAllocatedReason : ::System::Int32
	{
		Pooled = 0,
		OverMaximumSize = 1,
		PoolExhausted = 2,
	};
}
