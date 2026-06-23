#pragma once
#include "unitysdk/unitysdk.h"

namespace NapStreaming
{
	inline static constexpr unsigned int POIMODE_TypeDefinitionIndex = 81951;

	enum class POIMODE : ::System::Int32
	{
		UNLOAD_SMALL = 1,
		ONLY_HLOD = 2,
		UNLOAD_ALL = 3,
		FORCE_HLOD = 0,
	};
}
