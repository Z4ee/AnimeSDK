#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterSomatoType_TypeDefinitionIndex = 15903;

	enum class CharacterSomatoType : ::System::Int32
	{
		MiddleMonster = 0,
		MiddleAvatar = 1,
		LittleMonster = 2,
		LittleAvatar = 3,
		LargeMonster = 4,
		LargeAvatar = 5,
		MiddleFakeAvatar = 6,
		FloatingFakeAvatar = 7,
		LittleFakeAvatar = 8,
		TallFakeAvatar = 9,
		LargeFakeAvatar = 10,
		SmallServant = 11,
		MiddleServant = 12,
		LargeServant = 13,
		Unknown = 14,
	};
}
