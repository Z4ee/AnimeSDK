#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraModuleAccessPattern_TypeDefinitionIndex = 37551;

	enum class CameraModuleAccessPattern : ::System::Int32
	{
		Nearest = 0,
		Farthest = 1,
		Forward = 2,
		Backward = 3,
	};
}
