#pragma once
#include "unitysdk/unitysdk.h"

namespace MessagePack
{
	inline static constexpr unsigned int ValueType_TypeDefinitionIndex = 31430;

	enum class ValueType : ::System::Byte
	{
		ULong = 0x5,
		String = 0x7,
		True = 0x1,
		Decimal = 0x6,
		Long = 0x4,
		Null = 0x0,
		False = 0x2,
		Double = 0x3,
	};
}
