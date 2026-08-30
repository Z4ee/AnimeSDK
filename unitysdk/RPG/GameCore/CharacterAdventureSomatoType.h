#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterAdventureSomatoType_TypeDefinitionIndex = 16380;

	enum class CharacterAdventureSomatoType : ::System::Int32
	{
		Normal = 0,
		LargeMonster = 1,
	};
}
