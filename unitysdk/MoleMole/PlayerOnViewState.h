#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int PlayerOnViewState_TypeDefinitionIndex = 86090;

	enum class PlayerOnViewState : ::System::Byte
	{
		Born = 0x1,
		Teleport = 0x2,
		None = 0x0,
		RT = 0x4,
		JumpMove = 0x8,
		MoveFail = 0x9,
		BM = 0x6,
		TeleportOut = 0x7,
		UP = 0x5,
		LF = 0x3,
	};
}
