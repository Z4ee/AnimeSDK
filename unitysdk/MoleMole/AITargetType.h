#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AITargetType_TypeDefinitionIndex = 85196;

	enum class AITargetType : ::System::Int32
	{
		LocalAvatar = 2,
		Custom = 3,
		LockTarget = 1,
		Self = 0,
	};
}
