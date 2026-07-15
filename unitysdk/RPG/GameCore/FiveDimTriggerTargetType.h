#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimTriggerTargetType_TypeDefinitionIndex = 17906;

	enum class FiveDimTriggerTargetType : ::System::UInt32
	{
		None = 0x0,
		Player = 0x1,
		Arrow = 0x2,
		MascotFakePlayer = 0x4,
		Gecko = 0x8,
		FloatingSpirit = 0x10,
		PlayerPhysicsProxy = 0x20,
		MascotFakePlayerPhysicsProxy = 0x40,
		CleanerBot = 0x80,
		DragonDog = 0x100,
	};
}
