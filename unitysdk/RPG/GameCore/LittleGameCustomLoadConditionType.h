#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameCustomLoadConditionType_TypeDefinitionIndex = 18865;

	enum class LittleGameCustomLoadConditionType : ::System::Int32
	{
		LevelVar = 0,
		SubMission = 1,
	};
}
