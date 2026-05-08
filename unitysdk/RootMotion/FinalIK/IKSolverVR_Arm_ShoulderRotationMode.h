#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverVR_Arm_ShoulderRotationMode_TypeDefinitionIndex = 36636;

	enum class IKSolverVR_Arm_ShoulderRotationMode : ::System::Int32
	{
		YawPitch = 0,
		FromTo = 1,
	};
}
