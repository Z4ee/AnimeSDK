#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropAttractEnemyBehaviourType_TypeDefinitionIndex = 10104;

	enum class PropAttractEnemyBehaviourType : ::System::Int32
	{
		AlertToGuard = 0,
		AlertToMax = 1,
		AlertAddDelta = 2,
		AlertAddTo = 3,
		AlertSetTo = 4,
	};
}
