#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterVisionDisableReason_TypeDefinitionIndex = 54423;

	enum class CharacterVisionDisableReason : ::System::Int32
	{
		Task = 1,
		RemoteControl = 2,
		LevelConfig = 4,
	};
}
