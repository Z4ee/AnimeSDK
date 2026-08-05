#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int FinalBasicCameraDataChannel_TypeDefinitionIndex = 38557;

	enum class FinalBasicCameraDataChannel : ::System::Int32
	{
		None = 0,
		LocationX = 1,
		LocationY = 2,
		LocationZ = 4,
		Location = 7,
		RotationX = 8,
		RotationY = 16,
		RotationZ = 32,
		Rotation = 56,
		FieldOfView = 64,
		All = 127,
	};
}
