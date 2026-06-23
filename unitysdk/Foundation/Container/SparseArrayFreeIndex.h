#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int SparseArrayFreeIndex_TypeDefinitionIndex = 8498;

	struct alignas(8) SparseArrayFreeIndex
	{
		::System::Int64 Previous; // 0x10
		::System::Int64 Next; // 0x18
	};
}
