#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FollowState_TypeDefinitionIndex = 50023;

	enum class FollowState : ::System::Int32
	{
		Wait = 0,
		Follow = 1,
		Stopping = 2,
	};
}
