#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelLittleGameLoadType_TypeDefinitionIndex = 17335;

	enum class LevelLittleGameLoadType : ::System::Int32
	{
		Default = 0,
		Custom = 1,
		GroupProperty = 2,
	};
}
