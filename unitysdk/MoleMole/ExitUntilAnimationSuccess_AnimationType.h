#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ExitUntilAnimationSuccess_AnimationType_TypeDefinitionIndex = 70966;

	enum class ExitUntilAnimationSuccess_AnimationType : ::System::Int32
	{
		Normal = 0,
		LoopCheckFirst = 1,
		LoopCheckAlways = 2,
	};
}
