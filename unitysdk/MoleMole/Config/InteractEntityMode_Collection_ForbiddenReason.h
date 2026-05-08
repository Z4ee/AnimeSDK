#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int InteractEntityMode_Collection_ForbiddenReason_TypeDefinitionIndex = 62139;

	enum class InteractEntityMode_Collection_ForbiddenReason : ::System::Int32
	{
		REACH_MAX_INTERACT_COUNT = 1,
		NORMAL = 0,
		STILL_IN_CD = 2,
	};
}
