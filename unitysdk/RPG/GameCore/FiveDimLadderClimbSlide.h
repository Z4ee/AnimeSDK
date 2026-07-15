#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimLadderClimbSlide_TypeDefinitionIndex = 17808;

	enum class FiveDimLadderClimbSlide : ::System::UInt32
	{
		None = 0x0,
		Left = 0x1,
		Right = 0x2,
		Both = 0x3,
	};
}
