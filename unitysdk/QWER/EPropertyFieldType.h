#pragma once
#include "unitysdk/unitysdk.h"

namespace QWER
{
	inline static constexpr unsigned int EPropertyFieldType_TypeDefinitionIndex = 9685;

	enum class EPropertyFieldType : ::System::Int32
	{
		Bool = 0,
		Int8 = 1,
		UInt8 = 2,
		Int16 = 3,
		UInt16 = 4,
		Int32 = 5,
		UInt32 = 6,
		Int64 = 7,
		UInt64 = 8,
		Float = 9,
		Double = 10,
		Enum = 11,
		String = 12,
		Dictionary = 13,
		DoubleKeyDictionary = 14,
		HashSet = 15,
		List = 16,
		Object = 17,
	};
}
