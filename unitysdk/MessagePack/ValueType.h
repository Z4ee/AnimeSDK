#pragma once
#include "unitysdk/unitysdk.h"

namespace MessagePack
{
	inline static constexpr unsigned int ValueType_TypeDefinitionIndex = 30589;

	enum class ValueType : ::System::Byte
	{
		True = 0x1,
		Decimal = 0x6,
		Double = 0x3,
		Null = 0x0,
		Long = 0x4,
		ULong = 0x5,
		String = 0x7,
		False = 0x2,
	};
}
