#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int EntityInvisibleReason_TypeDefinitionIndex = 40699;

	enum class EntityInvisibleReason : ::System::UInt32
	{
		None = 0x0,
		Default = 0x1,
		LevelVar = 0x2,
		PlayerIn = 0x4,
		PlayerOut = 0x8,
		PlayerCreation = 0x10,
		MinionOwnerInvisible = 0x20,
		ActionOrTask = 0x40,
		CurveViewLoadModeNone = 0x80,
		EvilSmileDisappear = 0x100,
	};
}
