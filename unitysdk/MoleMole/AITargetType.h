#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AITargetType_TypeDefinitionIndex = 45769;

	enum class AITargetType : ::System::Int32
	{
		Custom = 3,
		Self = 0,
		LockTarget = 1,
		LocalAvatar = 2,
	};
}
