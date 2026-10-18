#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Class_2_3D203C82F08F6855_MemberFrontPoseRejectReason_TypeDefinitionIndex = 53088;

enum class Class_2_3D203C82F08F6855_MemberFrontPoseRejectReason : ::System::Int32
{
	None = 0,
	InvalidRuntimeData = 1,
	Overlapping = 2,
	PositionOutOfTolerance = 3,
	MoverFacingOutOfTolerance = 4,
	ClearanceBlocked = 5,
};
