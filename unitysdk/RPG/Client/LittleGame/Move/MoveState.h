#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::Move
{
	inline static constexpr unsigned int MoveState_TypeDefinitionIndex = 33669;

	enum class MoveState : ::System::Int32
	{
		None = 0,
		Ground = 1,
		Jump = 2,
		Fall = 3,
		Land = 4,
		SwitchSurface = 5,
		WallSlide = 6,
		WallJump = 7,
		WallJumpAlt = 8,
		WallLadder = 9,
		LadderFlip = 10,
		TrampolineJump = 11,
		TrampolineJumpAlt = 12,
		TrampolineFall = 13,
		DoubleJump = 14,
		DoubleJumpAlt = 15,
		LadderJump = 16,
		WallJumpUpward = 17,
		PortalOut = 18,
		PortalIn = 19,
		ResetProtection = 20,
		BeatBack = 21,
		MascotBeatBack = 22,
		FlappyJumpMove = 23,
		FlappyJumpMoveAlt = 24,
		MusicJump = 25,
		MusicAirJump = 26,
		MusicAirJumpAlt = 27,
		TrampolineMusicJump = 28,
		TrampolineMusicJumpAlt = 29,
		MusicFall = 30,
		SkillInAir = 31,
		SkillOnGround = 32,
		LedgeFlip = 33,
		ConveyorFlip = 34,
		PendingResetProtection = 35,
		PendingTeleportProtection = 36,
		TeleportProtection = 37,
		DashPrepare = 38,
		Dash = 39,
		FRVReset = 40,
		FRVWorldRotate = 41,
		FRVCrushToDeath = 42,
		FRVCrossTunnel = 43,
		FRVResetProtected = 44,
	};
}
