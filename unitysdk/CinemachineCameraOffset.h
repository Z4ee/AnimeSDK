#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"
#include "unitysdk/Cinemachine/CinemachineExtension.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }

#define CINEMACHINECAMERAOFFSET_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x1E2A50E0)
#define CINEMACHINECAMERAOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A5640)

inline static constexpr unsigned int CinemachineCameraOffset_TypeDefinitionIndex = 33996;

class CinemachineCameraOffset : public ::Cinemachine::CinemachineExtension
{
public:
	::UnityEngine::Vector3 m_Offset; // 0x28
	::Cinemachine::CinemachineCore_Stage m_ApplyAfter; // 0x34
	::System::Boolean m_PreserveComposition; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINECAMERAOFFSET__CTOR_OFFSET))(this);
	}

	::System::Void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* vcam, ::Cinemachine::CinemachineCore_Stage stage, ::Cinemachine::CameraState& state, ::System::Single deltaTime)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineCore_Stage, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINECAMERAOFFSET_POSTPIPELINESTAGECALLBACK_OFFSET))(this, vcam, stage, state, deltaTime);
	}
};
