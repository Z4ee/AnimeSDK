#pragma once
#include "unitysdk/unitysdk.h"

namespace NapStreaming
{
	inline static constexpr unsigned int StreamingCommandFlag_TypeDefinitionIndex = 89173;

	enum class StreamingCommandFlag : ::System::Int32
	{
		UNLOAD_HLOD = 3,
		UNLOAD_OBJECT = 2,
		UNLOAD_ALL = 4,
		LOAD_HLOD = 1,
		LOAD_OBJECT = 0,
	};
}
