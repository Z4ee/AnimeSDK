#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRegion_TypeDefinitionIndex = 10205;

	enum class GridFightRegion : ::System::Int32
	{
		Unknow = 0,
		Front = 1,
		Back = 2,
		Bench = 3,
		Overflow = 4,
	};
}
