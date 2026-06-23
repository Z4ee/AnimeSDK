#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ReadOnlySpan_1_Enumerator.h"
#include "unitysdk/System/ValueType.h"

namespace ObservableCollections
{
	inline static constexpr unsigned int RingBufferSpan_1_Enumerator_TypeDefinitionIndex = 28287;

	template <typename T>
	struct RingBufferSpan_1_Enumerator
	{
		::System::ReadOnlySpan_1_Enumerator<T> firstEnumerator; // 0x0
		::System::ReadOnlySpan_1_Enumerator<T> secondEnumerator; // 0x0
		::System::Boolean useFirst; // 0x0
	};
}
