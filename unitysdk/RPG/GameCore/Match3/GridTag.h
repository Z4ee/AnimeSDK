#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int GridTag_TypeDefinitionIndex = 23993;

	enum class GridTag : ::System::Int32
	{
		Invalid = 0,
		Ice = 1,
		Fire = 2,
		Melody = 3,
		Ice2 = 4,
		Activization = 5,
	};
}
