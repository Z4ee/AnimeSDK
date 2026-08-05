#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"
#include "unitysdk/Cinemachine/CinemachineExtension.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }

#define CINEMACHINE_CINEMACHINEFOLLOWZOOM_GETMAXDAMPTIME_OFFSET UNITYSDK_OFFSET(0x1F6C4400)
#define CINEMACHINE_CINEMACHINEFOLLOWZOOM_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1F6C43A0)
#define CINEMACHINE_CINEMACHINEFOLLOWZOOM_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x1F6C4410)
#define CINEMACHINE_CINEMACHINEFOLLOWZOOM__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6C4790)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineFollowZoom_TypeDefinitionIndex = 34665;

	class CinemachineFollowZoom : public ::Cinemachine::CinemachineExtension
	{
	public:
		::System::Single m_Width; // 0x28
		::System::Single m_Damping; // 0x2C
		::System::Single m_MinFOV; // 0x30
		::System::Single m_MaxFOV; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFOLLOWZOOM__CTOR_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFOLLOWZOOM_ONVALIDATE_OFFSET))(this);
		}

		::System::Single GetMaxDampTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFOLLOWZOOM_GETMAXDAMPTIME_OFFSET))(this);
		}

		::System::Void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* vcam, ::Cinemachine::CinemachineCore_Stage stage, ::Cinemachine::CameraState& state, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineCore_Stage, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFOLLOWZOOM_POSTPIPELINESTAGECALLBACK_OFFSET))(this, vcam, stage, state, deltaTime);
		}
	};
}
