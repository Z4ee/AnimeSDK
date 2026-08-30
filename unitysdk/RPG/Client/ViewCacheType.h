#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ViewCacheType_TypeDefinitionIndex = 73096;

	enum class ViewCacheType : ::System::Int32
	{
		LRUCached = 0,
		AlwaysCached = 1,
		DontCache = 2,
	};
}
