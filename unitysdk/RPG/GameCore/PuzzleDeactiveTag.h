#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PuzzleDeactiveTag_TypeDefinitionIndex = 57388;

	enum class PuzzleDeactiveTag : ::System::Byte
	{
		None = 0x0,
		Performance = 0x1,
		PhotoGraphShow = 0x2,
		EraFlipper = 0x4,
		HideAllProp = 0x8,
	};
}
