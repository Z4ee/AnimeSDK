#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PropInstanceManageBehavior_UpdateType_TypeDefinitionIndex = 67591;

	enum class PropInstanceManageBehavior_UpdateType : ::System::Int32
	{
		UpdatePerFrame = 0,
		UpdateOnEnable = 1,
		FromScript = 2,
	};
}
