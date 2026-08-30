#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int RoomTransitionPhase_TypeDefinitionIndex = 41559;

	enum class RoomTransitionPhase : ::System::Int32
	{
		None = 0,
		RequestPending = 1,
		CheckBlockers = 2,
		AcquireLocks = 3,
		PlayExitAnimation = 4,
		ApplyUIMask = 5,
		Teleport = 6,
		SwitchVisibility = 7,
		SwitchEnvironment = 8,
		SwitchBGM = 9,
		PlayEnterAnimation = 10,
		RemoveUIMask = 11,
		ReleaseLocks = 12,
		Complete = 13,
		Aborted = 14,
	};
}
