#pragma once
#include "unitysdk/unitysdk.h"

namespace NapStreaming
{
	inline static constexpr unsigned int POIMODE_TypeDefinitionIndex = 74622;

	enum class POIMODE : ::System::Int32
	{
		FORCE_HLOD = 0,
		UNLOAD_SMALL = 1,
		UNLOAD_ALL = 3,
		ONLY_HLOD = 2,
	};
}
