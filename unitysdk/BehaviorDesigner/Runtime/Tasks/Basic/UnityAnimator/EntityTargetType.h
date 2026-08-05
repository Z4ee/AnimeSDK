#pragma once
#include "unitysdk/unitysdk.h"

namespace BehaviorDesigner::Runtime::Tasks::Basic::UnityAnimator
{
	inline static constexpr unsigned int EntityTargetType_TypeDefinitionIndex = 66069;

	enum class EntityTargetType : ::System::Int32
	{
		LocalAvatar = 2,
		Custom = 3,
		LockTarget = 1,
		Self = 0,
	};
}
