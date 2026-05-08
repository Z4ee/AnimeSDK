#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceRuntimeDataProvider_1.h"
#include "unitysdk/PipelineCamera/CameraSequence/FramePivotDataInCore.h"

#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEPIVOTINCORE_DATAPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6C5B30)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int FramePivotInCore_DataProvider_TypeDefinitionIndex = 36361;

	class FramePivotInCore_DataProvider : public ::PipelineCamera::CameraSequence::CameraSequenceRuntimeDataProvider_1<::PipelineCamera::CameraSequence::FramePivotDataInCore>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEPIVOTINCORE_DATAPROVIDER__CTOR_OFFSET))(this);
		}
	};
}
