#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RPGAnimationEvent_InvokeType_TypeDefinitionIndex = 68060;

	enum class RPGAnimationEvent_InvokeType : ::System::Int32
	{
		RightAway = 1,
		EndFrame = 2,
		NextFrame = 3,
	};
}
