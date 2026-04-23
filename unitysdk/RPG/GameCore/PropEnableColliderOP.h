#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropEnableColliderOP_TypeDefinitionIndex = 19347;

	enum class PropEnableColliderOP : ::System::Int32
	{
		ColliderAndTrigger = 0,
		ColliderOnly = 1,
		TriggerOnly = 2,
	};
}
