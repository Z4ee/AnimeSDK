#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimAvatarMoveAbility_TypeDefinitionIndex = 16055;

	enum class FiveDimAvatarMoveAbility : ::System::UInt32
	{
		None = 0x0,
		Ladder = 0x1,
		Slide = 0x2,
		DropOneSidePass = 0x4,
	};
}
