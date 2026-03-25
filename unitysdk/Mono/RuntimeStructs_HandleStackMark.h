#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Mono
{
	inline static constexpr unsigned int RuntimeStructs_HandleStackMark_TypeDefinitionIndex = 17;

	struct alignas(8) RuntimeStructs_HandleStackMark
	{
		::System::Int32 size; // 0x10
		::System::Int32 interior_size; // 0x14
		::System::IntPtr chunk; // 0x18
	};
}
