#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDataDeltaFlag.h"
#include "unitysdk/System/ValueType.h"

#define PIPELINECAMERA_WORLDBASICCAMERADELTADATA_LOCKSOURCECORESPACE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9D3100)
#define PIPELINECAMERA_WORLDBASICCAMERADELTADATA_LOCKSOURCECORESPACE__INVOKE_G__UPDATEASCURRENT_2_0_OFFSET UNITYSDK_OFFSET(0x1DCE0C80)
#define PIPELINECAMERA_WORLDBASICCAMERADELTADATA_LOCKSOURCECORESPACE__INVOKE_G__UPDATEASSOURCE_2_1_OFFSET UNITYSDK_OFFSET(0x1DCE0730)

namespace PipelineCamera
{
	inline static constexpr unsigned int WorldBasicCameraDeltaData_LockSourceCoreSpace_TypeDefinitionIndex = 38269;

	struct alignas(4) WorldBasicCameraDeltaData_LockSourceCoreSpace
	{
		::PipelineCamera::WorldBasicCameraData _sourceData; // 0x10
		::System::Single _alpha; // 0x3C

		::PipelineCamera::WorldBasicCameraData Invoke(::System::Single fadedAlpha, ::PipelineCamera::WorldBasicCameraData& cameraData, ::PipelineCamera::WorldBasicCameraDataDeltaFlag flag)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::WorldBasicCameraDataDeltaFlag))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDBASICCAMERADELTADATA_LOCKSOURCECORESPACE_INVOKE_OFFSET))(this, fadedAlpha, cameraData, flag);
		}

		static ::PipelineCamera::WorldBasicCameraData _Invoke_g__UpdateAsCurrent_2_0(::PipelineCamera::WorldBasicCameraDeltaData_LockSourceCoreSpace& self, ::System::Single newFadedAlpha, ::PipelineCamera::WorldBasicCameraData& input, ::PipelineCamera::WorldBasicCameraDataDeltaFlag deltaFlag)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PipelineCamera::WorldBasicCameraDeltaData_LockSourceCoreSpace&, ::System::Single, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::WorldBasicCameraDataDeltaFlag))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDBASICCAMERADELTADATA_LOCKSOURCECORESPACE__INVOKE_G__UPDATEASCURRENT_2_0_OFFSET))(self, newFadedAlpha, input, deltaFlag);
		}

		static ::PipelineCamera::WorldBasicCameraData _Invoke_g__UpdateAsSource_2_1(::PipelineCamera::WorldBasicCameraDeltaData_LockSourceCoreSpace& self, ::System::Single newFadedAlpha, ::PipelineCamera::WorldBasicCameraData& input, ::PipelineCamera::WorldBasicCameraDataDeltaFlag deltaFlag)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PipelineCamera::WorldBasicCameraDeltaData_LockSourceCoreSpace&, ::System::Single, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::WorldBasicCameraDataDeltaFlag))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDBASICCAMERADELTADATA_LOCKSOURCECORESPACE__INVOKE_G__UPDATEASSOURCE_2_1_OFFSET))(self, newFadedAlpha, input, deltaFlag);
		}
	};
}
