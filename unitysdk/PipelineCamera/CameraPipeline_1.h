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
namespace PipelineCamera { template <typename T> class ICameraPipelineConfig_1; }
namespace System { class Object; }

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraPipeline_1_TypeDefinitionIndex = 35922;

	template <typename T1>
	struct CameraPipeline_1
	{
		::System::Int32 _PipelineType_k__BackingField; // 0x0
		T1 _module1; // 0x0
		::PipelineCamera::CameraModuleFlag _moduleFlag1; // 0x0
	};
}
