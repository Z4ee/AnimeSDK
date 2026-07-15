#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeBuffType_TypeDefinitionIndex = 10219;

	enum class MazeBuffType : ::System::Int32
	{
		None = 0,
		Character = 1,
		Team = 2,
		Level = 3,
		CharacterKeepScene = 4,
		TeamKeepScene = 5,
		LevelKeepScene = 6,
	};
}
