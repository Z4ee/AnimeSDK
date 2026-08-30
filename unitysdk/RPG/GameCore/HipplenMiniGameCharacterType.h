#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenMiniGameCharacterType_TypeDefinitionIndex = 16614;

	enum class HipplenMiniGameCharacterType : ::System::Int32
	{
		StoryNPC = 0,
		StaticPrefab = 1,
		LocalPlayer = 2,
	};
}
