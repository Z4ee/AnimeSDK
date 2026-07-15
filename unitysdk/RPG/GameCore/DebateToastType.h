#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DebateToastType_TypeDefinitionIndex = 23726;

	enum class DebateToastType : ::System::Int32
	{
		Start = 0,
		Success = 1,
		Failure = 2,
	};
}
