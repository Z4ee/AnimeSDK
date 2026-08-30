#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"
#include "unitysdk/Cinemachine/CinemachineExtension.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }

#define CINEMACHINECAMERAOFFSET_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x1648ED40)
#define CINEMACHINECAMERAOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1648F210)

inline static constexpr unsigned int CinemachineCameraOffset_TypeDefinitionIndex = 38414;

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

	::System::Void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* a1, ::Cinemachine::CinemachineCore_Stage a2, ::Cinemachine::CameraState& a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineCore_Stage, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINECAMERAOFFSET_POSTPIPELINESTAGECALLBACK_OFFSET))(this, a1, a2, a3, a4);
	}
};
