#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraModuleFlag.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera { class ICameraCommonContext; }
namespace PipelineCamera { class ICameraEvaluateContext; }
namespace PipelineCamera { class ICameraFlushContext; }
namespace PipelineCamera { class ICameraPrepareContext; }
namespace PipelineCamera { class ICameraTouchContext; }
namespace PipelineCamera { class ICameraWritableCollectContext; }
namespace PipelineCamera { template <typename T1, typename T2> class ICameraPipelineConfig_2; }
namespace System { class Object; }

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraPipeline_2_TypeDefinitionIndex = 38190;

	template <typename T1, typename T2>
	struct CameraPipeline_2
	{
		::System::Int32 _PipelineType_k__BackingField; // 0x0
		T1 _module1; // 0x0
		T2 _module2; // 0x0
		::PipelineCamera::CameraModuleFlag _moduleFlag1; // 0x0
		::PipelineCamera::CameraModuleFlag _moduleFlag2; // 0x0
	};
}
