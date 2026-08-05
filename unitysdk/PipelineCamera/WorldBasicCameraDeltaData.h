#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDataDeltaFlag.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDeltaData_DeltaDataStorage.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define PIPELINECAMERA_WORLDBASICCAMERADELTADATA_GET_FLAG_OFFSET UNITYSDK_OFFSET(0xA5F9D0)
#define PIPELINECAMERA_WORLDBASICCAMERADELTADATA_UPDATE_OFFSET UNITYSDK_OFFSET(0xA5FA30)

namespace PipelineCamera
{
	inline static constexpr unsigned int WorldBasicCameraDeltaData_TypeDefinitionIndex = 38263;

	struct alignas(4) WorldBasicCameraDeltaData
	{
		// static const ::System::String* BlendingCategoryError; // 0x0
		::System::Nullable_1<::PipelineCamera::WorldBasicCameraDataDeltaFlag> _flag; // 0x10
		::PipelineCamera::WorldBasicCameraDeltaData_DeltaDataStorage _storage; // 0x18

		::PipelineCamera::WorldBasicCameraDataDeltaFlag get_Flag()
		{
			return ((::PipelineCamera::WorldBasicCameraDataDeltaFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDBASICCAMERADELTADATA_GET_FLAG_OFFSET))(this);
		}

		/*
		::PipelineCamera::WorldBasicCameraData Update(::System::Single fadedAlpha, ::PipelineCamera::WorldBasicCameraData& cameraData)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_WORLDBASICCAMERADELTADATA_UPDATE_OFFSET))(this, fadedAlpha, cameraData);
		}
		*/
	};
}
