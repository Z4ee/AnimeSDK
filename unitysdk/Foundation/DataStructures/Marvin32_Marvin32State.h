#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::DataStructures
{
	inline static constexpr unsigned int Marvin32_Marvin32State_TypeDefinitionIndex = 7886;

	struct alignas(4) Marvin32_Marvin32State
	{
		::System::UInt32 lo; // 0x10
		::System::UInt32 hi; // 0x14
	};
}
