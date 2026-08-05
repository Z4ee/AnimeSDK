#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera { class ICameraCollectContext; }

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraSubModuleEvaluateContext_1_TypeDefinitionIndex = 38252;

	template <typename T>
	struct CameraSubModuleEvaluateContext_1
	{
		T OriginalValue; // 0x0
		::System::Nullable_1<T> LastValue; // 0x0
		::PipelineCamera::WorldBasicCameraData LastCameraData; // 0x0
		::PipelineCamera::WorldBasicCameraData LastReferenceCameraData; // 0x0
		::PipelineCamera::FinalCameraData LastFinalCameraData; // 0x0
	};
}
