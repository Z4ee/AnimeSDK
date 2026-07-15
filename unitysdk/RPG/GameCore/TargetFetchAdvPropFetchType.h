#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvPropFetchType_TypeDefinitionIndex = 23918;

	enum class TargetFetchAdvPropFetchType : ::System::Int32
	{
		Owner = 0,
		SinglePropByPropKey = 1,
		SinglePropByPropID = 2,
		SinglePropByUniqueName = 3,
		MultiPropByPropKey = 4,
		MultiPropByPropID = 5,
		MultiPropByUniqueName = 6,
		MultiPropByGroup = 7,
		SinglePropByOwnerGroupAndID = 8,
	};
}
