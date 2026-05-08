#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int SpanUtils_SpanIterator_1_TypeDefinitionIndex = 9045;

	template <typename T>
	struct SpanUtils_SpanIterator_1
	{
		::System::Span_1<T> _span; // 0x0
		::System::Int32 _index; // 0x0
		::System::Int32 _step; // 0x0
	};
}
