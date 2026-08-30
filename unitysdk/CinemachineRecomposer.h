#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"
#include "unitysdk/Cinemachine/CinemachineExtension.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }

#define CINEMACHINERECOMPOSER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1648F250)
#define CINEMACHINERECOMPOSER_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x1648F2D0)
#define CINEMACHINERECOMPOSER_PREPIPELINEMUTATECAMERASTATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1648F2B0)
#define CINEMACHINERECOMPOSER_RESET_OFFSET UNITYSDK_OFFSET(0x1648F230)
#define CINEMACHINERECOMPOSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1648F710)

inline static constexpr unsigned int CinemachineRecomposer_TypeDefinitionIndex = 38415;

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

	::System::Void PrePipelineMutateCameraStateCallback(::Cinemachine::CinemachineVirtualCameraBase* a1, ::Cinemachine::CameraState& a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINERECOMPOSER_PREPIPELINEMUTATECAMERASTATECALLBACK_OFFSET))(this, a1, a2, a3);
	}

	::System::Void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* a1, ::Cinemachine::CinemachineCore_Stage a2, ::Cinemachine::CameraState& a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineCore_Stage, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINERECOMPOSER_POSTPIPELINESTAGECALLBACK_OFFSET))(this, a1, a2, a3, a4);
	}
};
