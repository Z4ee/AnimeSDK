#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_CacheProperty_TypeDefinitionIndex = 38326;

	enum class HAPI_CacheProperty : ::System::Int32
	{
		HAPI_CACHEPROP_CURRENT = 0,
		HAPI_CACHEPROP_HAS_MIN = 1,
		HAPI_CACHEPROP_MIN = 2,
		HAPI_CACHEPROP_HAS_MAX = 3,
		HAPI_CACHEPROP_MAX = 4,
		HAPI_CACHEPROP_CULL_LEVEL = 5,
	};
}
