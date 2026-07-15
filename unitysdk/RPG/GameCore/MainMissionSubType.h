#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MainMissionSubType_TypeDefinitionIndex = 13610;

	enum class MainMissionSubType : ::System::Int32
	{
		Story = 0,
		Game = 1,
		System = 2,
		Activity = 3,
		Rogue = 4,
		World = 5,
		Endmost = 6,
	};
}
