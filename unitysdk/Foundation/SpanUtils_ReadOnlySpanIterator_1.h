#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int SpanUtils_ReadOnlySpanIterator_1_TypeDefinitionIndex = 9044;

	template <typename T>
	struct SpanUtils_ReadOnlySpanIterator_1
	{
		::System::ReadOnlySpan_1<T> _span; // 0x0
		::System::Int32 _index; // 0x0
		::System::Int32 _step; // 0x0
	};
}
