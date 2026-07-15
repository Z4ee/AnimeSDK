#pragma once
#include "unitysdk/unitysdk.h"

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int FieldType_TypeDefinitionIndex = 5546;

	enum class FieldType : ::System::Int32
	{
		Double = 0,
		Float = 1,
		Int64 = 2,
		UInt64 = 3,
		Int32 = 4,
		Fixed64 = 5,
		Fixed32 = 6,
		Bool = 7,
		String = 8,
		Group = 9,
		Message = 10,
		Bytes = 11,
		UInt32 = 12,
		SFixed32 = 13,
		SFixed64 = 14,
		SInt32 = 15,
		SInt64 = 16,
		Enum = 17,
	};
}
