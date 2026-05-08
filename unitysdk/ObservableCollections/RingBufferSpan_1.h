#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/ValueType.h"

namespace ObservableCollections
{
	inline static constexpr unsigned int RingBufferSpan_1_TypeDefinitionIndex = 25585;

	template <typename T>
	struct RingBufferSpan_1
	{
		::System::ReadOnlySpan_1<T> First; // 0x0
		::System::ReadOnlySpan_1<T> Second; // 0x0
		::System::Int32 Count; // 0x0
	};
}
