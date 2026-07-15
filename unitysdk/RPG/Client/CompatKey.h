#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int CompatKey_TypeDefinitionIndex = 59431;

	enum class CompatKey : ::System::Int32
	{
		None = 0,
		Hide = 1,
		LoadHLOD = 2,
		Load = 3,
		HLOD = 4,
		Show = 5,
	};
}
