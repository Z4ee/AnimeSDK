#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDataDeltaFlag.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define PIPELINECAMERA_WORLDBASICCAMERADELTADATA_DELTABLENDINGFINALSPACE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9514E0)
#define PIPELINECAMERA_WORLDBASICCAMERADELTADATA_DELTABLENDINGFINALSPACE__INVOKE_G__APPLY_5_0_OFFSET UNITYSDK_OFFSET(0x1B1247C0)
#define PIPELINECAMERA_WORLDBASICCAMERADELTADATA_DELTABLENDINGFINALSPACE__INVOKE_G__UPDATEASCURRENT_5_1_OFFSET UNITYSDK_OFFSET(0x1B1244E0)
#define PIPELINECAMERA_WORLDBASICCAMERADELTADATA_DELTABLENDINGFINALSPACE__INVOKE_G__UPDATEASSOURCE_5_2_OFFSET UNITYSDK_OFFSET(0x1B124100)

namespace PipelineCamera
{
	inline static constexpr unsigned int WorldBasicCameraDeltaData_DeltaBlendingFinalSpace_TypeDefinitionIndex = 35995;

	struct alignas(4) WorldBasicCameraDeltaData_DeltaBlendingFinalSpace
	{
		::UnityEngine::Vector3 _deltaPivotLocation; // 0x10
		::UnityEngine::Vector3 _deltaLocation; // 0x1C
		::UnityEngine::Vector3 _deltaEuler; // 0x28
		::System::Single _deltaFieldOfView; // 0x34
		::System::Single _alpha; // 0x38

		/*
		::PipelineCamera::WorldBasicCameraData Invoke(::System::Single fadedAlpha, ::PipelineCamera::WorldBasicCameraData& cameraData, ::PipelineCamera::WorldBasicCameraDataDeltaFlag flag)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::WorldBasicCameraDataDeltaFlag))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDBASICCAMERADELTADATA_DELTABLENDINGFINALSPACE_INVOKE_OFFSET))(this, fadedAlpha, cameraData, flag);
		}
		*/

		/*
		static ::PipelineCamera::WorldBasicCameraData _Invoke_g__Apply_5_0(::PipelineCamera::WorldBasicCameraDeltaData_DeltaBlendingFinalSpace& delta, ::PipelineCamera::WorldBasicCameraData& input, ::System::Boolean rotateByShortestPath)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PipelineCamera::WorldBasicCameraDeltaData_DeltaBlendingFinalSpace&, ::PipelineCamera::WorldBasicCameraData&, ::System::Boolean))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDBASICCAMERADELTADATA_DELTABLENDINGFINALSPACE__INVOKE_G__APPLY_5_0_OFFSET))(delta, input, rotateByShortestPath);
		}
		*/

		/*
		static ::PipelineCamera::WorldBasicCameraData _Invoke_g__UpdateAsCurrent_5_1(::PipelineCamera::WorldBasicCameraDeltaData_DeltaBlendingFinalSpace& self, ::System::Single newFadedAlpha, ::PipelineCamera::WorldBasicCameraData& input, ::PipelineCamera::WorldBasicCameraDataDeltaFlag deltaFlag, ::PipelineCamera::WorldBasicCameraDeltaData_DeltaBlendingFinalSpace___c__DisplayClass5_0& a5)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PipelineCamera::WorldBasicCameraDeltaData_DeltaBlendingFinalSpace&, ::System::Single, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::WorldBasicCameraDataDeltaFlag, ::PipelineCamera::WorldBasicCameraDeltaData_DeltaBlendingFinalSpace___c__DisplayClass5_0&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDBASICCAMERADELTADATA_DELTABLENDINGFINALSPACE__INVOKE_G__UPDATEASCURRENT_5_1_OFFSET))(self, newFadedAlpha, input, deltaFlag, a5);
		}
		*/

		/*
		static ::PipelineCamera::WorldBasicCameraData _Invoke_g__UpdateAsSource_5_2(::PipelineCamera::WorldBasicCameraDeltaData_DeltaBlendingFinalSpace& self, ::System::Single newFadedAlpha, ::PipelineCamera::WorldBasicCameraData& input, ::PipelineCamera::WorldBasicCameraDataDeltaFlag deltaFlag, ::PipelineCamera::WorldBasicCameraDeltaData_DeltaBlendingFinalSpace___c__DisplayClass5_0& a5)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PipelineCamera::WorldBasicCameraDeltaData_DeltaBlendingFinalSpace&, ::System::Single, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::WorldBasicCameraDataDeltaFlag, ::PipelineCamera::WorldBasicCameraDeltaData_DeltaBlendingFinalSpace___c__DisplayClass5_0&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDBASICCAMERADELTADATA_DELTABLENDINGFINALSPACE__INVOKE_G__UPDATEASSOURCE_5_2_OFFSET))(self, newFadedAlpha, input, deltaFlag, a5);
		}
		*/
	};
}
