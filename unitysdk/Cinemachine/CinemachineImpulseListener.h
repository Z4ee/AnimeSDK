#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"
#include "unitysdk/Cinemachine/CinemachineExtension.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }

#define CINEMACHINE_CINEMACHINEIMPULSELISTENER_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x18C63AF0)
#define CINEMACHINE_CINEMACHINEIMPULSELISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x18C641C0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineImpulseListener_TypeDefinitionIndex = 38572;

	class CinemachineImpulseListener : public ::Cinemachine::CinemachineExtension
	{
	public:
		::System::Int32 m_ChannelMask; // 0x28
		::System::Single m_Gain; // 0x2C
		::System::Boolean m_Use2DDistance; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSELISTENER__CTOR_OFFSET))(this);
		}

		::System::Void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* a1, ::Cinemachine::CinemachineCore_Stage a2, ::Cinemachine::CameraState& a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineCore_Stage, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSELISTENER_POSTPIPELINESTAGECALLBACK_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
