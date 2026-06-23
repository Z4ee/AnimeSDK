#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int ProperBitConverter_DoubleByteUnion_TypeDefinitionIndex = 7523;

	struct alignas(8) ProperBitConverter_DoubleByteUnion
	{
		::System::Byte Byte0; // 0x10
		::System::Byte Byte1; // 0x11
		::System::Byte Byte2; // 0x12
		::System::Byte Byte3; // 0x13
		::System::Byte Byte4; // 0x14
		::System::Byte Byte5; // 0x15
		::System::Byte Byte6; // 0x16
		::System::Byte Byte7; // 0x17
		::System::Double Value; // 0x10
	};
}
