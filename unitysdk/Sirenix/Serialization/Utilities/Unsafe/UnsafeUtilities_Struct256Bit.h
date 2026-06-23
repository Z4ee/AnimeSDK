#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/ValueType.h"

namespace Sirenix::Serialization::Utilities::Unsafe
{
	inline static constexpr unsigned int UnsafeUtilities_Struct256Bit_TypeDefinitionIndex = 7663;

	struct alignas(4) UnsafeUtilities_Struct256Bit
	{
		::System::Decimal d1; // 0x10
		::System::Decimal d2; // 0x20
	};
}
