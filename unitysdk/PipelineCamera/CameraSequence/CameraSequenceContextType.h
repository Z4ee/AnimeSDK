#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/SubClassOf_1.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXTTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD46010)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceContextType_TypeDefinitionIndex = 37940;

	class CameraSequenceContextType : public ::PipelineCamera::SubClassOf_1<::PipelineCamera::CameraSequence::CameraSequenceContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXTTYPE__CTOR_OFFSET))(this);
		}
	};
}
