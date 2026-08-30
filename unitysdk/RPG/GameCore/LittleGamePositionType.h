#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGamePositionType_TypeDefinitionIndex = 24281;

	enum class LittleGamePositionType : ::System::Int32
	{
		SmartObjectAgent = 0,
		TargetPosition = 1,
	};
}
