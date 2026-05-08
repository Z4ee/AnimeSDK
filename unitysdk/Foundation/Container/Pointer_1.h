#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int Pointer_1_TypeDefinitionIndex = 8976;

	template <typename T>
	struct Pointer_1
	{
		::System::Byte* _buffer; // 0x0
		::System::Int64 Stride; // 0x0
	};
}
