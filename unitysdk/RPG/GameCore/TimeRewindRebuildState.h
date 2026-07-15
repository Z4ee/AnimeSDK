#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindRebuildState_TypeDefinitionIndex = 54906;

	enum class TimeRewindRebuildState : ::System::Int32
	{
		BlendOut = 0,
		BlendIn = 1,
		Finish = 2,
	};
}
