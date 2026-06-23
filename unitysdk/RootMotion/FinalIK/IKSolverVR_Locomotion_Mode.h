#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverVR_Locomotion_Mode_TypeDefinitionIndex = 38336;

	enum class IKSolverVR_Locomotion_Mode : ::System::Int32
	{
		Procedural = 0,
		Animated = 1,
	};
}
