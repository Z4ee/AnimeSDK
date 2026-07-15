#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int FieldDescriptorProto_Types_Type_TypeDefinitionIndex = 34335;

	enum class FieldDescriptorProto_Types_Type : ::System::Int32
	{
		Double = 1,
		Float = 2,
		Int64 = 3,
		Uint64 = 4,
		Int32 = 5,
		Fixed64 = 6,
		Fixed32 = 7,
		Bool = 8,
		String = 9,
		Group = 10,
		Message = 11,
		Bytes = 12,
		Uint32 = 13,
		Enum = 14,
		Sfixed32 = 15,
		Sfixed64 = 16,
		Sint32 = 17,
		Sint64 = 18,
	};
}
