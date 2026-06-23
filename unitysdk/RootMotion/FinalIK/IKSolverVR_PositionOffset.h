#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverVR_PositionOffset_TypeDefinitionIndex = 38339;

	enum class IKSolverVR_PositionOffset : ::System::Int32
	{
		RightHeel = 8,
		RightFoot = 6,
		RightHand = 4,
		Head = 2,
		LeftHeel = 7,
		Chest = 1,
		LeftFoot = 5,
		LeftHand = 3,
		Pelvis = 0,
	};
}
