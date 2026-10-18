#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"
#include "unitysdk/Cinemachine/CinemachineExtension.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }

#define CINEMACHINE_CINEMACHINEFOLLOWZOOM_GETMAXDAMPTIME_OFFSET UNITYSDK_OFFSET(0x16680CB0)
#define CINEMACHINE_CINEMACHINEFOLLOWZOOM_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x16680C50)
#define CINEMACHINE_CINEMACHINEFOLLOWZOOM_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x16680CC0)
#define CINEMACHINE_CINEMACHINEFOLLOWZOOM__CTOR_OFFSET UNITYSDK_OFFSET(0x16681280)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineFollowZoom_TypeDefinitionIndex = 39736;

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

		::System::Void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* a1, ::Cinemachine::CinemachineCore_Stage a2, ::Cinemachine::CameraState& a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineCore_Stage, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFOLLOWZOOM_POSTPIPELINESTAGECALLBACK_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
