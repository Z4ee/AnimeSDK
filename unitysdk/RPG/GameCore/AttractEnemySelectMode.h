#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AttractEnemySelectMode_TypeDefinitionIndex = 23616;

	enum class AttractEnemySelectMode : ::System::Int32
	{
		ByDistance = 1,
		ByGroup = 2,
	};
}
