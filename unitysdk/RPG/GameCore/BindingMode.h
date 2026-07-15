#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BindingMode_TypeDefinitionIndex = 15792;

	enum class BindingMode : ::System::Int32
	{
		None = -1,
		LockToTargetOnAssign = 0,
		LockToTargetWithWorldUp = 1,
		LockToTargetNoRoll = 2,
		LockToTarget = 3,
		WorldSpace = 4,
		SimpleFollowWithWorldUp = 5,
	};
}
