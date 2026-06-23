#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"
#include "unitysdk/Cinemachine/CinemachineExtension.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }

#define CINEMACHINE_POSTFX_CINEMACHINEPOSTPROCESSING_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x1E2A4E90)
#define CINEMACHINE_POSTFX_CINEMACHINEPOSTPROCESSING__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A4EA0)

namespace Cinemachine::PostFX
{
	inline static constexpr unsigned int CinemachinePostProcessing_TypeDefinitionIndex = 34188;

	class CinemachinePostProcessing : public ::Cinemachine::CinemachineExtension
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_POSTFX_CINEMACHINEPOSTPROCESSING__CTOR_OFFSET))(this);
		}

		::System::Void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* vcam, ::Cinemachine::CinemachineCore_Stage stage, ::Cinemachine::CameraState& state, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineCore_Stage, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_POSTFX_CINEMACHINEPOSTPROCESSING_POSTPIPELINESTAGECALLBACK_OFFSET))(this, vcam, stage, state, deltaTime);
		}
	};
}
