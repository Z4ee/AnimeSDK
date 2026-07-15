#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightAugmentUnlockType_TypeDefinitionIndex = 12902;

	enum class GridFightAugmentUnlockType : ::System::Int32
	{
		None = 0,
		HaveSpecifyEquipCategory = 1,
		HaveNpc = 2,
	};
}
