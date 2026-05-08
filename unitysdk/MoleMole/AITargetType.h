#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AITargetType_TypeDefinitionIndex = 61408;

	enum class AITargetType : ::System::Int32
	{
		Self = 0,
		LockTarget = 1,
		Custom = 3,
		LocalAvatar = 2,
	};
}
