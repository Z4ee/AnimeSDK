#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int PlayerOnViewState_TypeDefinitionIndex = 79557;

	enum class PlayerOnViewState : ::System::Byte
	{
		TeleportOut = 0x7,
		MoveFail = 0x9,
		Born = 0x1,
		UP = 0x5,
		BM = 0x6,
		None = 0x0,
		LF = 0x3,
		Teleport = 0x2,
		RT = 0x4,
		JumpMove = 0x8,
	};
}
