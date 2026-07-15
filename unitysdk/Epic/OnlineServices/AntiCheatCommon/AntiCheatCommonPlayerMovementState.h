#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int AntiCheatCommonPlayerMovementState_TypeDefinitionIndex = 44130;

	enum class AntiCheatCommonPlayerMovementState : ::System::Int32
	{
		None = 0,
		Crouching = 1,
		Prone = 2,
		Mounted = 3,
		Swimming = 4,
		Falling = 5,
		Flying = 6,
		OnLadder = 7,
	};
}
