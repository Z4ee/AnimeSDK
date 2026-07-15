#pragma once
#include "unitysdk/unitysdk.h"

namespace Google::Protobuf
{
	inline static constexpr unsigned int WireFormat_WireType_TypeDefinitionIndex = 5420;

	enum class WireFormat_WireType : ::System::UInt32
	{
		Varint = 0x0,
		Fixed64 = 0x1,
		LengthDelimited = 0x2,
		StartGroup = 0x3,
		EndGroup = 0x4,
		Fixed32 = 0x5,
	};
}
