#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int LookAtDisableCause_TypeDefinitionIndex = 64055;

	enum class LookAtDisableCause : ::System::Int32
	{
		None = 0,
		Task = 1,
		BehaviorVisual = 2,
	};
}
