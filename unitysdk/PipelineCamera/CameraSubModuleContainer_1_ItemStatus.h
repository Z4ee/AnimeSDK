#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraSubModuleContainer_1_ItemStatus_TypeDefinitionIndex = 37532;

	enum class CameraSubModuleContainer_1_ItemStatus : ::System::Byte
	{
		Init = 0x1,
		Active = 0x2,
		MarkForRemoval = 0x4,
	};
}
