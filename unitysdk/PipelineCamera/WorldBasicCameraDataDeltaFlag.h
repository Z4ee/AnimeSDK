#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int WorldBasicCameraDataDeltaFlag_TypeDefinitionIndex = 38262;

	enum class WorldBasicCameraDataDeltaFlag : ::System::Int32
	{
		None = 0,
		FinalSpace = 1,
		LockSource = 2,
		IgnorePivotY = 4,
		IgnorePivotXZ = 8,
		IgnorePivot = 12,
		IgnorePitch = 16,
		IgnoreYaw = 32,
		IgnoreRoll = 64,
		IgnoreRotation = 112,
		IgnoreFieldOfVIew = 128,
		IgnoreRadius = 256,
		IgnoreHorizontalOffset = 512,
		IgnoreVerticalOffset = 1024,
		IgnoreOffset = 1792,
		FromCurrent = 2048,
		RotationByShortest = 4096,
	};
}
