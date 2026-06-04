#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::Sample::Utils
{
	inline static constexpr unsigned int UnmanagedArray_1_TypeDefinitionIndex = 69128;

	template <typename T>
	struct UnmanagedArray_1
	{
		::System::Int32 Length; // 0x0
		::System::Int32 ElementSize; // 0x0
		::System::Void* Memory; // 0x0
	};
}
