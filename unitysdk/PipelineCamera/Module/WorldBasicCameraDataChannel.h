#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera::Module
{
	inline static constexpr unsigned int WorldBasicCameraDataChannel_TypeDefinitionIndex = 38667;

	enum class WorldBasicCameraDataChannel : ::System::Int32
	{
		None = 0,
		PivotLocationX = 1,
		PivotLocationY = 2,
		PivotLocationZ = 4,
		PivotLocation = 7,
		RotationX = 8,
		RotationY = 16,
		RotationZ = 32,
		Rotation = 56,
		Radius = 64,
		OffsetX = 128,
		OffsetY = 256,
		Offset = 384,
		FieldOfView = 512,
		All = 1023,
	};
}
