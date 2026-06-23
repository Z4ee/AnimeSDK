#pragma once
#include "unitysdk/unitysdk.h"

namespace NapStreaming
{
	inline static constexpr unsigned int StreamingCommandFlag_TypeDefinitionIndex = 53582;

	enum class StreamingCommandFlag : ::System::Int32
	{
		UNLOAD_OBJECT = 2,
		UNLOAD_ALL = 4,
		LOAD_OBJECT = 0,
		UNLOAD_HLOD = 3,
		LOAD_HLOD = 1,
	};
}
