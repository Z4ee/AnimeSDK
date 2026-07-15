#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int PropMoveState_TypeDefinitionIndex = 40924;

	enum class PropMoveState : ::System::Int32
	{
		None = 0,
		Arrow = 1,
		ArrowSwitchSurface = 2,
		CleanerBotGround = 3,
		CleanerBotSwitchSurface = 4,
		CleanerBotLowFall = 5,
		CleanerBotFall = 6,
		CleanerBotLand = 7,
		CleanerBotIdle = 8,
		GeckoGround = 9,
		GeckoFall = 10,
		GeckoLand = 11,
		FloatingSpiritMove = 12,
		FloatingSpiritStun = 13,
		FloatingSpiritMoveOnBeat = 14,
		GarbageBinIdle = 15,
		GarbageBinStun = 16,
		GarbageBinGroundMove = 17,
		GarbageBinFall = 18,
		MissileMove = 19,
		DragonDogIdle = 20,
		DragonDogGroundMove = 21,
		DragonDogBeatBack = 22,
		DragonDogTrampolineJump = 23,
		DragonDogFall = 24,
		DragonDogLand = 25,
		DragonDogStun = 26,
		EvilSmileIdle = 27,
		EvilSmileMove = 28,
		GrenadierPatrol = 29,
		GrenadierTrace = 30,
		GrenadierStun = 31,
		SimpleProjectileMove = 32,
		Dying = 33,
	};
}
