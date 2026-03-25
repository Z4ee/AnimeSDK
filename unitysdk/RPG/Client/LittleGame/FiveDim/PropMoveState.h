#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int PropMoveState_TypeDefinitionIndex = 33541;

	enum class PropMoveState : ::System::Int32
	{
		None = 0,
		Arrow = 1,
		ArrowSwitchSurface = 2,
		CleanerBotGround = 3,
		CleanerBotLowFall = 4,
		CleanerBotFall = 5,
		CleanerBotLand = 6,
		CleanerBotIdle = 7,
		GeckoGround = 8,
		GeckoFall = 9,
		GeckoLand = 10,
		FloatingSpiritMove = 11,
		FloatingSpiritStun = 12,
		FloatingSpiritMoveOnBeat = 13,
		GarbageBinIdle = 14,
		GarbageBinStun = 15,
		GarbageBinGroundMove = 16,
		GarbageBinFall = 17,
		MissileMove = 18,
		DragonDogIdle = 19,
		DragonDogGroundMove = 20,
		DragonDogBeatBack = 21,
		DragonDogTrampolineJump = 22,
		DragonDogFall = 23,
		DragonDogLand = 24,
		DragonDogStun = 25,
		GrenadierPatrol = 26,
		GrenadierTrace = 27,
		GrenadierStun = 28,
		SimpleProjectileMove = 29,
		Dying = 30,
	};
}
