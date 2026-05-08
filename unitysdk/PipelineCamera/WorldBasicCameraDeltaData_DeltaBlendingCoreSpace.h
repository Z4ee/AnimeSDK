#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDataDeltaFlag.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define PIPELINECAMERA_WORLDBASICCAMERADELTADATA_DELTABLENDINGCORESPACE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9CED70)
#define PIPELINECAMERA_WORLDBASICCAMERADELTADATA_DELTABLENDINGCORESPACE__INVOKE_G__APPLY_6_0_OFFSET UNITYSDK_OFFSET(0x1C2B9630)
#define PIPELINECAMERA_WORLDBASICCAMERADELTADATA_DELTABLENDINGCORESPACE__INVOKE_G__UPDATEASCURRENT_6_1_OFFSET UNITYSDK_OFFSET(0x1C2B9210)
#define PIPELINECAMERA_WORLDBASICCAMERADELTADATA_DELTABLENDINGCORESPACE__INVOKE_G__UPDATEASSOURCE_6_2_OFFSET UNITYSDK_OFFSET(0x1C2B8D00)

namespace PipelineCamera
{
	inline static constexpr unsigned int WorldBasicCameraDeltaData_DeltaBlendingCoreSpace_TypeDefinitionIndex = 35997;

	struct alignas(4) WorldBasicCameraDeltaData_DeltaBlendingCoreSpace
	{
		::UnityEngine::Vector3 _deltaPivotLocation; // 0x10
		::UnityEngine::Vector3 _deltaEuler; // 0x1C
		::System::Single _deltaRadius; // 0x28
		::UnityEngine::Vector2 _deltaOffset; // 0x2C
		::System::Single _deltaFieldOfView; // 0x34
		::System::Single _alpha; // 0x38

		/*
		::PipelineCamera::WorldBasicCameraData Invoke(::System::Single fadedAlpha, ::PipelineCamera::WorldBasicCameraData& cameraData, ::PipelineCamera::WorldBasicCameraDataDeltaFlag flag)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::WorldBasicCameraDataDeltaFlag))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDBASICCAMERADELTADATA_DELTABLENDINGCORESPACE_INVOKE_OFFSET))(this, fadedAlpha, cameraData, flag);
		}
		*/

		/*
		static ::PipelineCamera::WorldBasicCameraData _Invoke_g__Apply_6_0(::PipelineCamera::WorldBasicCameraDeltaData_DeltaBlendingCoreSpace& delta, ::PipelineCamera::WorldBasicCameraData& input, ::System::Boolean rotateByShortestPath)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PipelineCamera::WorldBasicCameraDeltaData_DeltaBlendingCoreSpace&, ::PipelineCamera::WorldBasicCameraData&, ::System::Boolean))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDBASICCAMERADELTADATA_DELTABLENDINGCORESPACE__INVOKE_G__APPLY_6_0_OFFSET))(delta, input, rotateByShortestPath);
		}
		*/

		/*
		static ::PipelineCamera::WorldBasicCameraData _Invoke_g__UpdateAsCurrent_6_1(::PipelineCamera::WorldBasicCameraDeltaData_DeltaBlendingCoreSpace& self, ::System::Single newFadedAlpha, ::PipelineCamera::WorldBasicCameraData& input, ::PipelineCamera::WorldBasicCameraDataDeltaFlag deltaFlag)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PipelineCamera::WorldBasicCameraDeltaData_DeltaBlendingCoreSpace&, ::System::Single, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::WorldBasicCameraDataDeltaFlag))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDBASICCAMERADELTADATA_DELTABLENDINGCORESPACE__INVOKE_G__UPDATEASCURRENT_6_1_OFFSET))(self, newFadedAlpha, input, deltaFlag);
		}
		*/

		/*
		static ::PipelineCamera::WorldBasicCameraData _Invoke_g__UpdateAsSource_6_2(::PipelineCamera::WorldBasicCameraDeltaData_DeltaBlendingCoreSpace& self, ::System::Single newFadedAlpha, ::PipelineCamera::WorldBasicCameraData& input, ::PipelineCamera::WorldBasicCameraDataDeltaFlag deltaFlag, ::PipelineCamera::WorldBasicCameraDeltaData_DeltaBlendingCoreSpace___c__DisplayClass6_0& a5)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PipelineCamera::WorldBasicCameraDeltaData_DeltaBlendingCoreSpace&, ::System::Single, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::WorldBasicCameraDataDeltaFlag, ::PipelineCamera::WorldBasicCameraDeltaData_DeltaBlendingCoreSpace___c__DisplayClass6_0&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDBASICCAMERADELTADATA_DELTABLENDINGCORESPACE__INVOKE_G__UPDATEASSOURCE_6_2_OFFSET))(self, newFadedAlpha, input, deltaFlag, a5);
		}
		*/
	};
}
