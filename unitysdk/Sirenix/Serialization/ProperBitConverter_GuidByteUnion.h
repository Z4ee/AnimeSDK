#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/ValueType.h"

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int ProperBitConverter_GuidByteUnion_TypeDefinitionIndex = 7529;

	struct alignas(4) ProperBitConverter_GuidByteUnion
	{
		::System::Byte Byte0; // 0x10
		::System::Byte Byte1; // 0x11
		::System::Byte Byte2; // 0x12
		::System::Byte Byte3; // 0x13
		::System::Byte Byte4; // 0x14
		::System::Byte Byte5; // 0x15
		::System::Byte Byte6; // 0x16
		::System::Byte Byte7; // 0x17
		::System::Byte Byte8; // 0x18
		::System::Byte Byte9; // 0x19
		::System::Byte Byte10; // 0x1A
		::System::Byte Byte11; // 0x1B
		::System::Byte Byte12; // 0x1C
		::System::Byte Byte13; // 0x1D
		::System::Byte Byte14; // 0x1E
		::System::Byte Byte15; // 0x1F
		::System::Guid Value; // 0x10
	};
}
