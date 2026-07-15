#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ESwitchHandGestureType_TypeDefinitionIndex = 10176;

	enum class ESwitchHandGestureType : ::System::Int32
	{
		Default = 0,
		Lift = 1,
		Rocket = 2,
		Catch = 3,
	};
}
