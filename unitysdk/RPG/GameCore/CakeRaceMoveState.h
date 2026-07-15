#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceMoveState_TypeDefinitionIndex = 17675;

	enum class CakeRaceMoveState : ::System::Int32
	{
		None = 0,
		Locked = 1,
		Grounded = 2,
		Hitted = 3,
		TopHitted = 4,
		Pushed = 5,
		IceSlided = 6,
		Fall = 7,
		Transfer = 8,
		Jump = 9,
		Dash = 10,
		SlopeSlided = 11,
		ToiletTransfer = 12,
		Conveying = 13,
		Bounced = 14,
		BubbleAbsorbed = 15,
		BubbleReleased = 16,
		Dashed = 17,
		ChargedJump = 18,
		ModChargedJump = 19,
		ContinueLocked = 20,
		WubbabooPush = 21,
		Parabole = 22,
		IceBounceBack = 23,
		BottomHitted = 24,
		EscapeOverlap = 25,
	};
}
