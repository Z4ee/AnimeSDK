#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelLittleGameLoadType_TypeDefinitionIndex = 17140;

	enum class LevelLittleGameLoadType : ::System::Int32
	{
		Default = 0,
		Custom = 1,
		GroupProperty = 2,
	};
}
