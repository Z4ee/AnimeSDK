#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEnvironmentPath.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_SCOPEDWORKSPACEHANDLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B8200)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_SCOPEDWORKSPACEHANDLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9B81A0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_SCOPEDWORKSPACEHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x9B8110)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceContext_ScopedWorkspaceHandle_TypeDefinitionIndex = 36331;

	struct alignas(8) CameraSequenceContext_ScopedWorkspaceHandle
	{
		::PipelineCamera::CameraSequence::CameraSequenceContext* _context; // 0x10
		::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath _workspace; // 0x18

		/*
		::System::Void _ctor(::System::Guid& newWorkspace, ::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid&, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_SCOPEDWORKSPACEHANDLE__CTOR_OFFSET))(this, newWorkspace, context);
		}
		*/

		::System::Void _ctor_1(::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath& newEnv, ::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath&, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_SCOPEDWORKSPACEHANDLE__CTOR_1_OFFSET))(this, newEnv, context);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_SCOPEDWORKSPACEHANDLE_DISPOSE_OFFSET))(this);
		}
	};
}
