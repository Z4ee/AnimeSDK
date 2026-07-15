#pragma once
#include "unitysdk/unitysdk.h"

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackPrimitives_DecodeResult_TypeDefinitionIndex = 7133;

	enum class MessagePackPrimitives_DecodeResult : ::System::Int32
	{
		Success = 0,
		TokenMismatch = 1,
		EmptyBuffer = 2,
		InsufficientBuffer = 3,
	};
}
