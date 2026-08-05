#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int Method_CameraLogCategory_TypeDefinitionIndex = 38149;

	enum class Method_CameraLogCategory : ::System::Int32
	{
		CameraSequence = 0,
		CameraModule = 1,
		CameraSubModule = 2,
		CameraController = 3,
	};
}
