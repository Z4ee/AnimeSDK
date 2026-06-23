#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDataDeltaFlag.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define PIPELINECAMERA_WORLDBASICCAMERADELTADATA_LOCKSOURCEFINALSPACE_INVOKE_OFFSET UNITYSDK_OFFSET(0xA38FB0)
#define PIPELINECAMERA_WORLDBASICCAMERADELTADATA_LOCKSOURCEFINALSPACE__INVOKE_G__UPDATEASCURRENT_3_0_OFFSET UNITYSDK_OFFSET(0x1DC31BB0)
#define PIPELINECAMERA_WORLDBASICCAMERADELTADATA_LOCKSOURCEFINALSPACE__INVOKE_G__UPDATEASSOURCE_3_1_OFFSET UNITYSDK_OFFSET(0x1DC31760)

namespace PipelineCamera
{
	inline static constexpr unsigned int WorldBasicCameraDeltaData_LockSourceFinalSpace_TypeDefinitionIndex = 37607;

	struct alignas(4) WorldBasicCameraDeltaData_LockSourceFinalSpace
	{
		::UnityEngine::Vector3 _pivotLocation; // 0x10
		::PipelineCamera::FinalCameraData _sourceData; // 0x1C
		::System::Single _alpha; // 0x3C

		/*
		::PipelineCamera::WorldBasicCameraData Invoke(::System::Single fadedAlpha, ::PipelineCamera::WorldBasicCameraData& cameraData, ::PipelineCamera::WorldBasicCameraDataDeltaFlag flag)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::WorldBasicCameraDataDeltaFlag))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDBASICCAMERADELTADATA_LOCKSOURCEFINALSPACE_INVOKE_OFFSET))(this, fadedAlpha, cameraData, flag);
		}
		*/

		/*
		static ::PipelineCamera::WorldBasicCameraData _Invoke_g__UpdateAsCurrent_3_0(::PipelineCamera::WorldBasicCameraDeltaData_LockSourceFinalSpace& self, ::System::Single newFadedAlpha, ::PipelineCamera::WorldBasicCameraData& input, ::PipelineCamera::WorldBasicCameraDataDeltaFlag deltaFlag)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PipelineCamera::WorldBasicCameraDeltaData_LockSourceFinalSpace&, ::System::Single, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::WorldBasicCameraDataDeltaFlag))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDBASICCAMERADELTADATA_LOCKSOURCEFINALSPACE__INVOKE_G__UPDATEASCURRENT_3_0_OFFSET))(self, newFadedAlpha, input, deltaFlag);
		}
		*/

		/*
		static ::PipelineCamera::WorldBasicCameraData _Invoke_g__UpdateAsSource_3_1(::PipelineCamera::WorldBasicCameraDeltaData_LockSourceFinalSpace& self, ::System::Single newFadedAlpha, ::PipelineCamera::WorldBasicCameraData& input, ::PipelineCamera::WorldBasicCameraDataDeltaFlag deltaFlag)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PipelineCamera::WorldBasicCameraDeltaData_LockSourceFinalSpace&, ::System::Single, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::WorldBasicCameraDataDeltaFlag))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDBASICCAMERADELTADATA_LOCKSOURCEFINALSPACE__INVOKE_G__UPDATEASSOURCE_3_1_OFFSET))(self, newFadedAlpha, input, deltaFlag);
		}
		*/
	};
}
