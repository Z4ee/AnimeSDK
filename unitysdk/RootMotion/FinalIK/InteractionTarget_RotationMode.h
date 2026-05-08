#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int InteractionTarget_RotationMode_TypeDefinitionIndex = 36662;

	enum class InteractionTarget_RotationMode : ::System::Int32
	{
		TwoDOF = 0,
		ThreeDOF = 1,
	};
}
