#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceTimePointType_TypeDefinitionIndex = 37842;

	enum class CameraSequenceTimePointType : ::System::Int32
	{
		Absolute = 0,
		Relative = 1,
		Proportional = 2,
	};
}
