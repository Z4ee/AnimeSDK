#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterForceVisibleReason_TypeDefinitionIndex = 54668;

	enum class CharacterForceVisibleReason : ::System::Byte
	{
		Default = 0x0,
		ViewMode = 0x1,
		Task = 0x2,
	};
}
