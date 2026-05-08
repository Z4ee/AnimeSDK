#pragma once
#include "unitysdk/unitysdk.h"

namespace MessagePack
{
	inline static constexpr unsigned int ValueType_TypeDefinitionIndex = 27413;

	enum class ValueType : ::System::Byte
	{
		Null = 0x0,
		String = 0x7,
		Decimal = 0x6,
		Long = 0x4,
		ULong = 0x5,
		Double = 0x3,
		True = 0x1,
		False = 0x2,
	};
}
