#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitSourceMask_TypeDefinitionIndex = 53751;

	enum class GridFightTraitSourceMask : ::System::Int32
	{
		None = 1,
		Role = 2,
		Equip = 4,
		Dummy = 8,
		AllType = 14,
	};
}
