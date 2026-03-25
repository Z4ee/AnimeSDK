#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"
#include "unitysdk/Cinemachine/CinemachineExtension.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }

#define CINEMACHINERECOMPOSER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x119E3740)
#define CINEMACHINERECOMPOSER_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x119E37C0)
#define CINEMACHINERECOMPOSER_PREPIPELINEMUTATECAMERASTATECALLBACK_OFFSET UNITYSDK_OFFSET(0x119E37A0)
#define CINEMACHINERECOMPOSER_RESET_OFFSET UNITYSDK_OFFSET(0x119E3720)
#define CINEMACHINERECOMPOSER__CTOR_OFFSET UNITYSDK_OFFSET(0x119E3C00)

inline static constexpr unsigned int CinemachineRecomposer_TypeDefinitionIndex = 30754;

class CinemachineRecomposer : public ::Cinemachine::CinemachineExtension
{
public:
	::Cinemachine::CinemachineCore_Stage m_ApplyAfter; // 0x28
	::System::Single m_Tilt; // 0x2C
	::System::Single m_Pan; // 0x30
	::System::Single m_Dutch; // 0x34
	::System::Single m_ZoomScale; // 0x38
	::System::Single m_FollowAttachment; // 0x3C
	::System::Single m_LookAtAttachment; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINERECOMPOSER__CTOR_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINERECOMPOSER_RESET_OFFSET))(this);
	}

	::System::Void OnValidate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINERECOMPOSER_ONVALIDATE_OFFSET))(this);
	}

	::System::Void PrePipelineMutateCameraStateCallback(::Cinemachine::CinemachineVirtualCameraBase* vcam, ::Cinemachine::CameraState& curState, ::System::Single deltaTime)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINERECOMPOSER_PREPIPELINEMUTATECAMERASTATECALLBACK_OFFSET))(this, vcam, curState, deltaTime);
	}

	::System::Void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* vcam, ::Cinemachine::CinemachineCore_Stage stage, ::Cinemachine::CameraState& state, ::System::Single deltaTime)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineCore_Stage, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINERECOMPOSER_POSTPIPELINESTAGECALLBACK_OFFSET))(this, vcam, stage, state, deltaTime);
	}
};
