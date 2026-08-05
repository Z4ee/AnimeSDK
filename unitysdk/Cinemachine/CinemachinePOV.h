#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/AxisState.h"
#include "unitysdk/Cinemachine/AxisState_Recentering.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineComponentBase.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"
#include "unitysdk/Cinemachine/CinemachinePOV_RecenterTargetMode.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase_TransitionParams.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class ICinemachineCamera; }

#define CINEMACHINE_CINEMACHINEPOV_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x1F394A00)
#define CINEMACHINE_CINEMACHINEPOV_GETRECENTERTARGET_OFFSET UNITYSDK_OFFSET(0x1F394380)
#define CINEMACHINE_CINEMACHINEPOV_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1F393BC0)
#define CINEMACHINE_CINEMACHINEPOV_GET_STAGE_OFFSET UNITYSDK_OFFSET(0x1F393BD0)
#define CINEMACHINE_CINEMACHINEPOV_MUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1F393F60)
#define CINEMACHINE_CINEMACHINEPOV_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F393C90)
#define CINEMACHINE_CINEMACHINEPOV_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x1F395370)
#define CINEMACHINE_CINEMACHINEPOV_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1F393BE0)
#define CINEMACHINE_CINEMACHINEPOV_PREPIPELINEMUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1F393F50)
#define CINEMACHINE_CINEMACHINEPOV_SETAXESFORROTATION_OFFSET UNITYSDK_OFFSET(0x1F394A20)
#define CINEMACHINE_CINEMACHINEPOV_UPDATEINPUTAXISPROVIDER_OFFSET UNITYSDK_OFFSET(0x1F393CA0)
#define CINEMACHINE_CINEMACHINEPOV__CTOR_OFFSET UNITYSDK_OFFSET(0x1F395580)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachinePOV_TypeDefinitionIndex = 34713;

	class CinemachinePOV : public ::Cinemachine::CinemachineComponentBase
	{
	public:
		::Cinemachine::CinemachinePOV_RecenterTargetMode m_RecenterTarget; // 0x50
		::Cinemachine::AxisState m_VerticalAxis; // 0x58
		::Cinemachine::AxisState_Recentering m_VerticalRecentering; // 0xC0
		::Cinemachine::AxisState m_HorizontalAxis; // 0xE0
		::Cinemachine::AxisState_Recentering m_HorizontalRecentering; // 0x148
		::System::Boolean m_ApplyBeforeBody; // 0x164

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_GET_ISVALID_OFFSET))(this);
		}

		::Cinemachine::CinemachineCore_Stage get_Stage()
		{
			return ((::Cinemachine::CinemachineCore_Stage(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_GET_STAGE_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_ONVALIDATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_ONENABLE_OFFSET))(this);
		}

		::System::Void UpdateInputAxisProvider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_UPDATEINPUTAXISPROVIDER_OFFSET))(this);
		}

		::System::Void PrePipelineMutateCameraState(::Cinemachine::CameraState& state, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_PREPIPELINEMUTATECAMERASTATE_OFFSET))(this, state, deltaTime);
		}

		::System::Void MutateCameraState(::Cinemachine::CameraState& curState, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_MUTATECAMERASTATE_OFFSET))(this, curState, deltaTime);
		}

		::UnityEngine::Vector2 GetRecenterTarget()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_GETRECENTERTARGET_OFFSET))(this);
		}

		::System::Void ForceCameraPosition(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_FORCECAMERAPOSITION_OFFSET))(this, pos, rot);
		}

		::System::Boolean OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* fromCam, ::UnityEngine::Vector3 worldUp, ::System::Single deltaTime, ::Cinemachine::CinemachineVirtualCameraBase_TransitionParams& transitionParams)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single, ::Cinemachine::CinemachineVirtualCameraBase_TransitionParams&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_ONTRANSITIONFROMCAMERA_OFFSET))(this, fromCam, worldUp, deltaTime, transitionParams);
		}

		::System::Void SetAxesForRotation(::UnityEngine::Quaternion targetRot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_SETAXESFORROTATION_OFFSET))(this, targetRot);
		}
	};
}
