#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Concurrent
{
	inline static constexpr unsigned int PaddedHeadAndTail_TypeDefinitionIndex = 1516;

	struct alignas(4) PaddedHeadAndTail
	{
		::System::Int32 Head; // 0x90
		::System::Int32 Tail; // 0x110
	};
}
