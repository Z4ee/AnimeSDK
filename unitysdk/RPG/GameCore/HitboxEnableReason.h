#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int HitboxEnableReason_TypeDefinitionIndex = 54666;

	enum class HitboxEnableReason : ::System::Int32
	{
		Default = 0,
		Sneak = 1,
		Dying = 2,
		Performance = 3,
		OpticalIllusionPuzzle = 4,
		RogueDLC = 5,
		RemoteControl = 6,
		Task = 7,
		MapRotation = 8,
		MonsterResetPos = 9,
		PuzzleSwitchMascot = 10,
		EraFlipDeviceControl = 11,
		MonsterAvaliable = 12,
		FiveDim = 13,
	};
}
