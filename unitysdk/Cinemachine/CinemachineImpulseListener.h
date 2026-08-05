#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"
#include "unitysdk/Cinemachine/CinemachineExtension.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }

#define CINEMACHINE_CINEMACHINEIMPULSELISTENER_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x1F84DF00)
#define CINEMACHINE_CINEMACHINEIMPULSELISTENER_RESET_OFFSET UNITYSDK_OFFSET(0x1F84DEE0)
#define CINEMACHINE_CINEMACHINEIMPULSELISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F84E150)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineImpulseListener_TypeDefinitionIndex = 34814;

	class CinemachineImpulseListener : public ::Cinemachine::CinemachineExtension
	{
	public:
		::Cinemachine::CinemachineCore_Stage m_ApplyAfter; // 0x28
		::System::Int32 m_ChannelMask; // 0x2C
		::System::Single m_Gain; // 0x30
		::System::Boolean m_Use2DDistance; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSELISTENER__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSELISTENER_RESET_OFFSET))(this);
		}

		::System::Void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* vcam, ::Cinemachine::CinemachineCore_Stage stage, ::Cinemachine::CameraState& state, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineCore_Stage, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSELISTENER_POSTPIPELINESTAGECALLBACK_OFFSET))(this, vcam, stage, state, deltaTime);
		}
	};
}
