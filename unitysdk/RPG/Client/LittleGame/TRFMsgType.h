#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int TRFMsgType_TypeDefinitionIndex = 40268;

	enum class TRFMsgType : ::System::Int32
	{
		None = 0,
		Reset = 1,
		Ignite = 2,
		Finish = 3,
		Quit = 4,
		TraceBackFail = 5,
		HpZeroFail = 6,
		BoxCrushFail = 7,
		AutoSpawnFail = 8,
		ClonedPlayerStart = 9,
		ClonedPlayerEnd = 10,
		FallFail = 11,
		ClonePlayerFallFail = 12,
		Teleport = 13,
		TeleportFail = 14,
		ClonePlayerTeleportFail = 15,
		PlayerMove = 16,
		SetOpCount = 17,
		AddOp = 18,
		UseOp = 19,
		RefreshOp = 20,
		EnableOp = 21,
		CameraShake = 22,
		ShowHint = 23,
		EnableQuit = 24,
		FallAchievement = 25,
		TeleportAchievement = 26,
	};
}
