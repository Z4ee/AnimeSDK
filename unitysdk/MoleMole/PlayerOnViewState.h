#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int PlayerOnViewState_TypeDefinitionIndex = 82839;

	enum class PlayerOnViewState : ::System::Byte
	{
		BM = 0x6,
		Born = 0x1,
		MoveFail = 0x9,
		RT = 0x4,
		None = 0x0,
		Teleport = 0x2,
		JumpMove = 0x8,
		UP = 0x5,
		LF = 0x3,
		TeleportOut = 0x7,
	};
}
