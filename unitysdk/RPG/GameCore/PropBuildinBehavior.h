#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropBuildinBehavior_TypeDefinitionIndex = 16842;

	enum class PropBuildinBehavior : ::System::Int32
	{
		None = 0,
		DisableTrigger = 1,
		EnableTrigger = 2,
		Invisible = 3,
	};
}
