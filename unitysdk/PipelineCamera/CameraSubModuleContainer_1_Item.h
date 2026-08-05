#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSubModuleContainer_1_ItemStatus.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera { class ICameraDataBlenderBuilder; }
namespace PipelineCamera { class ICameraPrepareContext; }
namespace PipelineCamera { template <typename T> class ICameraSubModuleInternal_1; }

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraSubModuleContainer_1_Item_TypeDefinitionIndex = 38195;

	template <typename T>
	struct CameraSubModuleContainer_1_Item
	{
		::PipelineCamera::CameraSubModuleContainer_1_ItemStatus<T> Status; // 0x0
		::PipelineCamera::ICameraSubModuleInternal_1<T>* SubModule; // 0x0
		::System::UInt64 UniqueId; // 0x0
		::PipelineCamera::ICameraDataBlenderBuilder* _blendIn; // 0x0
		::PipelineCamera::ICameraDataBlenderBuilder* _blendOut; // 0x0
	};
}
