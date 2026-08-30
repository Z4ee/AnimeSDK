#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MonoLifeCircleEvent_TypeDefinitionIndex = 68383;

	enum class MonoLifeCircleEvent : ::System::Int32
	{
		Enable = 0,
		Disable = 1,
	};
}
