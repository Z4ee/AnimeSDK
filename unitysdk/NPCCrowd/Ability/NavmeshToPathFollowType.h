#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NavmeshToPathFollowType_TypeDefinitionIndex = 41761;

	enum class NavmeshToPathFollowType : ::System::Int32
	{
		IgnoreObstacle = 1,
		CalcObstacle = 2,
		AlreadyRes = 3,
		Default = 0,
	};
}
