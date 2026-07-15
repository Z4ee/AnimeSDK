#pragma once
#include "unitysdk/unitysdk.h"

namespace Hdg
{
	inline static constexpr unsigned int SerialisationHelpers_PrimitiveType_TypeDefinitionIndex = 45168;

	enum class SerialisationHelpers_PrimitiveType : ::System::Int32
	{
		Byte = 0,
		SByte = 1,
		Int = 2,
		UInt = 3,
		Short = 4,
		UShort = 5,
		Long = 6,
		ULong = 7,
		Float = 8,
		Double = 9,
		Char = 10,
		Bool = 11,
		String = 12,
		Decimal = 13,
		Null = 14,
	};
}
