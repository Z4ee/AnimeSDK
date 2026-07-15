#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyGridType_TypeDefinitionIndex = 59544;

	enum class AlleyGridType : ::System::Int32
	{
		Walkable = 0,
		Shop = 1,
		Dock = 2,
	};
}
