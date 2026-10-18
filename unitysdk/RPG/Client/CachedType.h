#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int CachedType_TypeDefinitionIndex = 41377;

	enum class CachedType : ::System::Int32
	{
		NoCached = 0,
		Cached = 1,
		NoRecord = 2,
	};
}
