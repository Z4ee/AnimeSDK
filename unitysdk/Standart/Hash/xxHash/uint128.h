#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Standart::Hash::xxHash
{
	inline static constexpr unsigned int uint128_TypeDefinitionIndex = 7806;

	struct alignas(8) uint128
	{
		::System::UInt64 low64; // 0x10
		::System::UInt64 high64; // 0x18
	};
}
