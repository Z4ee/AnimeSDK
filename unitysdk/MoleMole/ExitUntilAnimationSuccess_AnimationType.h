#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ExitUntilAnimationSuccess_AnimationType_TypeDefinitionIndex = 85965;

	enum class ExitUntilAnimationSuccess_AnimationType : ::System::Int32
	{
		LoopCheckFirst = 1,
		Normal = 0,
		LoopCheckAlways = 2,
	};
}
