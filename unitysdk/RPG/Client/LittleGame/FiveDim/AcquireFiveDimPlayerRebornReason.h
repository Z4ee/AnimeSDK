#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int AcquireFiveDimPlayerRebornReason_TypeDefinitionIndex = 40836;

	enum class AcquireFiveDimPlayerRebornReason : ::System::Int32
	{
		None = 1,
		FallStuck = 2,
		InvalidSurface = 4,
		InvalidGround = 8,
		GroundStuck = 16,
		Task = 32,
		BodyStuck = 64,
		CameraDrivenStuck = 128,
		MascotFakePlayerOutOfLegalArea = 256,
		Spike = 512,
		Missile = 1024,
		MiniGameFail = 2048,
		Lightning = 4096,
		EvilSmile = 8192,
		SimpleHitBox = 16384,
		InvalidResetPoint = 32768,
	};
}
