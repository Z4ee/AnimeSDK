#pragma once
#include "unitysdk/unitysdk.h"

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int MethodOptions_Types_IdempotencyLevel_TypeDefinitionIndex = 5513;

	enum class MethodOptions_Types_IdempotencyLevel : ::System::Int32
	{
		IdempotencyUnknown = 0,
		NoSideEffects = 1,
		Idempotent = 2,
	};
}
