#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraDebugStatus_TypeDefinitionIndex = 35975;

	enum class CameraDebugStatus : ::System::Int32
	{
		Inactive = 0,
		ActiveSelf = 1,
		ActiveAll = 2,
	};
}
