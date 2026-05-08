#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int GraphRuntimeHelper_GraphBinaryMode_TypeDefinitionIndex = 27704;

	enum class GraphRuntimeHelper_GraphBinaryMode : ::System::Int32
	{
		NONE_BINARY = 0,
		BINARY_DESERIALIZE = 8,
		BINARY_V2_DESERIALIZE = 32,
		BINARY_SERIALIZE = 4,
		BINARY_V2_SERIALIZE = 16,
	};
}
