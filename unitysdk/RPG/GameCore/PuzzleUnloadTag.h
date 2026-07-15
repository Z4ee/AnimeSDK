#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PuzzleUnloadTag_TypeDefinitionIndex = 54821;

	enum class PuzzleUnloadTag : ::System::Byte
	{
		None = 0x0,
		LOD = 0x1,
		Conflict = 0x2,
		MapRotation = 0x4,
		GroupVisibility = 0x8,
		EraFlipper = 0x10,
		FiveDim = 0x20,
	};
}
