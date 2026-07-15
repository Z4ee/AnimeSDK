#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimGameplayMode_TypeDefinitionIndex = 17777;

	enum class FiveDimGameplayMode : ::System::UInt32
	{
		Default = 0x0,
		ChenLingGameBoy = 0x1,
		WaterReflection = 0x2,
		MiniGameCollectCoin = 0x4,
		FlappyMove = 0x8,
		MusicStage = 0x10,
		WindowStage = 0x20,
		Train = 0x40,
		SimpleUI = 0x100,
		HundredFloor = 0x200,
	};
}
