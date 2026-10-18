#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterAdventureSomatoType_TypeDefinitionIndex = 16555;

	enum class CharacterAdventureSomatoType : ::System::Int32
	{
		Normal = 0,
		LargeMonster = 1,
	};
}
