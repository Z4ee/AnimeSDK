#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimJumpType_TypeDefinitionIndex = 16007;

	enum class FiveDimJumpType : ::System::UInt32
	{
		Jump = 0x1,
		WallJump = 0x2,
		Flip = 0x4,
	};
}
