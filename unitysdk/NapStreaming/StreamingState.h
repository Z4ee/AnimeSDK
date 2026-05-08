#pragma once
#include "unitysdk/unitysdk.h"

namespace NapStreaming
{
	inline static constexpr unsigned int StreamingState_TypeDefinitionIndex = 70970;

	enum class StreamingState : ::System::Int32
	{
		INITED = 0,
		OBJECT = 31,
		UNLOAD_DISTANCE = 10,
		UNLOAD_LAYER = 12,
		HLOD = 21,
		LOADING_HLOD = 20,
		LOADING_OBJECT = 30,
		UNLOAD_CULLED = 11,
	};
}
