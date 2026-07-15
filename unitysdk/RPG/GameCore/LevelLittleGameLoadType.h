#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelLittleGameLoadType_TypeDefinitionIndex = 16638;

	enum class LevelLittleGameLoadType : ::System::Int32
	{
		Default = 0,
		Custom = 1,
		GroupProperty = 2,
	};
}
