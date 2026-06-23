#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int Pointer_2_TypeDefinitionIndex = 8532;

	template <typename T1, typename T2>
	struct Pointer_2
	{
		::System::Byte* _buffer; // 0x0
		::System::Int64 Stride; // 0x0
	};
}
