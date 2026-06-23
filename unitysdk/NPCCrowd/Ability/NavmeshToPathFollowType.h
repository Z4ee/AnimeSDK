#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NavmeshToPathFollowType_TypeDefinitionIndex = 42204;

	enum class NavmeshToPathFollowType : ::System::Int32
	{
		CalcObstacle = 2,
		Default = 0,
		IgnoreObstacle = 1,
		AlreadyRes = 3,
	};
}
