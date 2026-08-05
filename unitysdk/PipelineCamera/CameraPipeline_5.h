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
namespace PipelineCamera { template <typename T1, typename T2, typename T3, typename T4, typename T5> class ICameraPipelineConfig_5; }
namespace System { class Object; }

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraPipeline_5_TypeDefinitionIndex = 38187;

	template <typename T1, typename T2, typename T3, typename T4, typename T5>
	struct CameraPipeline_5
	{
		::System::Int32 _PipelineType_k__BackingField; // 0x0
		T1 _module1; // 0x0
		T2 _module2; // 0x0
		T3 _module3; // 0x0
		T4 _module4; // 0x0
		T5 _module5; // 0x0
		::PipelineCamera::CameraModuleFlag _moduleFlag1; // 0x0
		::PipelineCamera::CameraModuleFlag _moduleFlag2; // 0x0
		::PipelineCamera::CameraModuleFlag _moduleFlag3; // 0x0
		::PipelineCamera::CameraModuleFlag _moduleFlag4; // 0x0
		::PipelineCamera::CameraModuleFlag _moduleFlag5; // 0x0
	};
}
