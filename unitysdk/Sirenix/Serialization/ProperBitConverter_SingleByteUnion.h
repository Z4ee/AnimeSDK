#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int ProperBitConverter_SingleByteUnion_TypeDefinitionIndex = 7522;

	struct alignas(4) ProperBitConverter_SingleByteUnion
	{
		::System::Byte Byte0; // 0x10
		::System::Byte Byte1; // 0x11
		::System::Byte Byte2; // 0x12
		::System::Byte Byte3; // 0x13
		::System::Single Value; // 0x10
	};
}
