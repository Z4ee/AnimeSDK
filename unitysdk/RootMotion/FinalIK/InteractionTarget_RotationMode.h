#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int InteractionTarget_RotationMode_TypeDefinitionIndex = 38287;

	enum class InteractionTarget_RotationMode : ::System::Int32
	{
		ThreeDOF = 1,
		TwoDOF = 0,
	};
}
