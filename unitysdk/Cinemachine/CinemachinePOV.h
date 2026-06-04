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

#define CINEMACHINE_CINEMACHINEPOV_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x14652F30)
#define CINEMACHINE_CINEMACHINEPOV_GETRECENTERTARGET_OFFSET UNITYSDK_OFFSET(0x14652B30)
#define CINEMACHINE_CINEMACHINEPOV_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x146524B0)
#define CINEMACHINE_CINEMACHINEPOV_GET_STAGE_OFFSET UNITYSDK_OFFSET(0x146524C0)
#define CINEMACHINE_CINEMACHINEPOV_MUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x14652720)
#define CINEMACHINE_CINEMACHINEPOV_ONENABLE_OFFSET UNITYSDK_OFFSET(0x14652580)
#define CINEMACHINE_CINEMACHINEPOV_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x14653800)
#define CINEMACHINE_CINEMACHINEPOV_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x146524D0)
#define CINEMACHINE_CINEMACHINEPOV_PREPIPELINEMUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x14652710)
#define CINEMACHINE_CINEMACHINEPOV_SETAXESFORROTATION_OFFSET UNITYSDK_OFFSET(0x14652F50)
#define CINEMACHINE_CINEMACHINEPOV_UPDATEINPUTAXISPROVIDER_OFFSET UNITYSDK_OFFSET(0x14652590)
#define CINEMACHINE_CINEMACHINEPOV__CTOR_OFFSET UNITYSDK_OFFSET(0x14653B00)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachinePOV_TypeDefinitionIndex = 36848;

	class CinemachinePOV : public ::Cinemachine::CinemachineComponentBase
	{
	public:
		::Cinemachine::CinemachinePOV_RecenterTargetMode m_RecenterTarget; // 0x50
		::Cinemachine::AxisState m_VerticalAxis; // 0x58
		::Cinemachine::AxisState_Recentering m_VerticalRecentering; // 0xD0
		::Cinemachine::AxisState m_HorizontalAxis; // 0xF0
		::Cinemachine::AxisState_Recentering m_HorizontalRecentering; // 0x168
		::System::Boolean m_ApplyBeforeBody; // 0x184

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

		::System::Void PrePipelineMutateCameraState(::Cinemachine::CameraState& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_PREPIPELINEMUTATECAMERASTATE_OFFSET))(this, a1, a2);
		}

		::System::Void MutateCameraState(::Cinemachine::CameraState& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_MUTATECAMERASTATE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 GetRecenterTarget()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_GETRECENTERTARGET_OFFSET))(this);
		}

		::System::Void ForceCameraPosition(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_FORCECAMERAPOSITION_OFFSET))(this, a1, a2);
		}

		::System::Boolean OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::Cinemachine::CinemachineVirtualCameraBase_TransitionParams& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single, ::Cinemachine::CinemachineVirtualCameraBase_TransitionParams&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_ONTRANSITIONFROMCAMERA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetAxesForRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPOV_SETAXESFORROTATION_OFFSET))(this, a1);
		}
	};
}
