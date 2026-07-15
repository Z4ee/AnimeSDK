#pragma once
#include "unitysdk/unitysdk.h"

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Field_Types_Kind_TypeDefinitionIndex = 5451;

	enum class Field_Types_Kind : ::System::Int32
	{
		TypeUnknown = 0,
		TypeDouble = 1,
		TypeFloat = 2,
		TypeInt64 = 3,
		TypeUint64 = 4,
		TypeInt32 = 5,
		TypeFixed64 = 6,
		TypeFixed32 = 7,
		TypeBool = 8,
		TypeString = 9,
		TypeGroup = 10,
		TypeMessage = 11,
		TypeBytes = 12,
		TypeUint32 = 13,
		TypeEnum = 14,
		TypeSfixed32 = 15,
		TypeSfixed64 = 16,
		TypeSint32 = 17,
		TypeSint64 = 18,
	};
}
