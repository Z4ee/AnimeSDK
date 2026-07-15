#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterEmoState_TypeDefinitionIndex = 56393;

	enum class CharacterEmoState : ::System::Int32
	{
		Default = 0,
		Visual = 1,
		Hit = 2,
		Stun = 3,
	};
}
