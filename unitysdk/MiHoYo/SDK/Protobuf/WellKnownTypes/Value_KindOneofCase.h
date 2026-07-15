#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Value_KindOneofCase_TypeDefinitionIndex = 34314;

	enum class Value_KindOneofCase : ::System::Int32
	{
		None = 0,
		NullValue = 1,
		NumberValue = 2,
		StringValue = 3,
		BoolValue = 4,
		StructValue = 5,
		ListValue = 6,
	};
}
