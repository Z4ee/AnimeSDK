#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Adapter
{
	inline static constexpr unsigned int RefStack_1_TypeDefinitionIndex = 8467;

	template <typename T>
	struct RefStack_1
	{
		::System::Span_1<T> _storage; // 0x0
		::System::Int32 _length; // 0x0
	};
}
