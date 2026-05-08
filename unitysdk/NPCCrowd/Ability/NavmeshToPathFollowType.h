#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NavmeshToPathFollowType_TypeDefinitionIndex = 53156;

	enum class NavmeshToPathFollowType : ::System::Int32
	{
		AlreadyRes = 3,
		Default = 0,
		IgnoreObstacle = 1,
		CalcObstacle = 2,
	};
}
