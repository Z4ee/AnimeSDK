#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverVR_Locomotion_Mode_TypeDefinitionIndex = 38945;

	enum class IKSolverVR_Locomotion_Mode : ::System::Int32
	{
		Animated = 1,
		Procedural = 0,
	};
}
