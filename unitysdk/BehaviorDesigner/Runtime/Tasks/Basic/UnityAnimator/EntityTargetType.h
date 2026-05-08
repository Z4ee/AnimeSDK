#pragma once
#include "unitysdk/unitysdk.h"

namespace BehaviorDesigner::Runtime::Tasks::Basic::UnityAnimator
{
	inline static constexpr unsigned int EntityTargetType_TypeDefinitionIndex = 62111;

	enum class EntityTargetType : ::System::Int32
	{
		LocalAvatar = 2,
		Self = 0,
		LockTarget = 1,
		Custom = 3,
	};
}
