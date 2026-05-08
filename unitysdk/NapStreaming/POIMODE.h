#pragma once
#include "unitysdk/unitysdk.h"

namespace NapStreaming
{
	inline static constexpr unsigned int POIMODE_TypeDefinitionIndex = 39463;

	enum class POIMODE : ::System::Int32
	{
		FORCE_HLOD = 0,
		ONLY_HLOD = 2,
		UNLOAD_ALL = 3,
		UNLOAD_SMALL = 1,
	};
}
