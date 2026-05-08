#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverVR_PositionOffset_TypeDefinitionIndex = 36643;

	enum class IKSolverVR_PositionOffset : ::System::Int32
	{
		Pelvis = 0,
		Chest = 1,
		Head = 2,
		LeftHand = 3,
		RightHand = 4,
		LeftFoot = 5,
		RightFoot = 6,
		LeftHeel = 7,
		RightHeel = 8,
	};
}
