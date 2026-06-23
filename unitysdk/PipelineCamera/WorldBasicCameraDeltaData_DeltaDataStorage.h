#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDataDeltaFlag.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDeltaData_DeltaBlendingCoreSpace.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDeltaData_DeltaBlendingFinalSpace.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDeltaData_LockSourceCoreSpace.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDeltaData_LockSourceFinalSpace.h"
#include "unitysdk/System/ValueType.h"

#define PIPELINECAMERA_WORLDBASICCAMERADELTADATA_DELTADATASTORAGE_UPDATE_OFFSET UNITYSDK_OFFSET(0xA3E920)

namespace PipelineCamera
{
	inline static constexpr unsigned int WorldBasicCameraDeltaData_DeltaDataStorage_TypeDefinitionIndex = 37609;

	struct alignas(4) WorldBasicCameraDeltaData_DeltaDataStorage
	{
		::PipelineCamera::WorldBasicCameraDeltaData_DeltaBlendingFinalSpace _deltaBlendingFinalSpace; // 0x10
		::PipelineCamera::WorldBasicCameraDeltaData_DeltaBlendingCoreSpace _deltaBlendingCoreSpace; // 0x10
		::PipelineCamera::WorldBasicCameraDeltaData_LockSourceFinalSpace _lockSourceFinalSpace; // 0x10
		::PipelineCamera::WorldBasicCameraDeltaData_LockSourceCoreSpace _lockSourceCoreSpace; // 0x10

		/*
		::PipelineCamera::WorldBasicCameraData Update(::System::Single fadedAlpha, ::PipelineCamera::WorldBasicCameraData& cameraData, ::PipelineCamera::WorldBasicCameraDataDeltaFlag flag)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::WorldBasicCameraDataDeltaFlag))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDBASICCAMERADELTADATA_DELTADATASTORAGE_UPDATE_OFFSET))(this, fadedAlpha, cameraData, flag);
		}
		*/
	};
}
