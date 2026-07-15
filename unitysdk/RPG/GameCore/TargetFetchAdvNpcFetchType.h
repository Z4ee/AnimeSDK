#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvNpcFetchType_TypeDefinitionIndex = 23919;

	enum class TargetFetchAdvNpcFetchType : ::System::Int32
	{
		Owner = 0,
		SingleNpcByNpcKey = 1,
		SingleNpcByNpcID = 2,
		SingleNpcByUniqueName = 3,
		SingleNpcByOwnerGroupAndID = 4,
	};
}
