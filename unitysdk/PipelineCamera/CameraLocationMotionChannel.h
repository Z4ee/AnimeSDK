#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraLocationMotionChannel_TypeDefinitionIndex = 38304;

	enum class CameraLocationMotionChannel : ::System::Int32
	{
		None = 0,
		Right = 1,
		Up = 2,
		Forward = 4,
		All = 7,
	};
}
