#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int FramePivotInCoreChannel_TypeDefinitionIndex = 38645;

	enum class FramePivotInCoreChannel : ::System::Int32
	{
		None = 0,
		FieldOfView = 1,
		Radius = 2,
		HorizontalOffset = 4,
		VerticalOffset = 8,
		Offset = 12,
		All = 15,
	};
}
