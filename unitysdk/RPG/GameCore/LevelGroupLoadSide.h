#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGroupLoadSide_TypeDefinitionIndex = 16331;

	enum class LevelGroupLoadSide : ::System::Int32
	{
		Client = 0,
		Server = 1,
	};
}
