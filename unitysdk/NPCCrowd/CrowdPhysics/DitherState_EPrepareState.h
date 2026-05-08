#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::CrowdPhysics
{
	inline static constexpr unsigned int DitherState_EPrepareState_TypeDefinitionIndex = 51700;

	enum class DitherState_EPrepareState : ::System::Int32
	{
		PrepareFadeIn = 1,
		PrepareFadeOut = 2,
		None = 0,
	};
}
