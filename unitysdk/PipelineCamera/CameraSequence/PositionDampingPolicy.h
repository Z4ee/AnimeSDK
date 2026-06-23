#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceRuntimeDataProvider_3.h"
#include "unitysdk/PipelineCamera/PositionDampingAxis.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define PIPELINECAMERA_CAMERASEQUENCE_POSITIONDAMPINGPOLICY_PROCESS_OFFSET UNITYSDK_OFFSET(0x1D87A800)
#define PIPELINECAMERA_CAMERASEQUENCE_POSITIONDAMPINGPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D87A8D0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int PositionDampingPolicy_TypeDefinitionIndex = 37916;

	class PositionDampingPolicy : public ::PipelineCamera::CameraSequence::CameraSequenceRuntimeDataProvider_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3>
	{
	public:
		::PipelineCamera::PositionDampingAxis dampingAxis; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_POSITIONDAMPINGPOLICY__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 Process(::UnityEngine::Vector3 damped, ::UnityEngine::Vector3 target)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_POSITIONDAMPINGPOLICY_PROCESS_OFFSET))(this, damped, target);
		}
	};
}
