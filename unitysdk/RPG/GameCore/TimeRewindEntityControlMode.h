#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindEntityControlMode_TypeDefinitionIndex = 23665;

	enum class TimeRewindEntityControlMode : ::System::Int32
	{
		LongPress = 0,
		Tap = 1,
	};
}
