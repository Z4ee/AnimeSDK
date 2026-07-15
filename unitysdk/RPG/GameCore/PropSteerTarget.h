#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropSteerTarget_TypeDefinitionIndex = 54810;

	enum class PropSteerTarget : ::System::Int32
	{
		Angle = 0,
		Target = 1,
		FollowTarget = 2,
		FollowTargetWithThreshold = 3,
	};
}
