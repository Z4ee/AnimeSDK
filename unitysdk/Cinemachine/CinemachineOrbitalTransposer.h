#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/AxisState.h"
#include "unitysdk/Cinemachine/AxisState_Recentering.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineOrbitalTransposer_Heading.h"
#include "unitysdk/Cinemachine/CinemachineTransposer.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase_TransitionParams.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineOrbitalTransposer_UpdateHeadingDelegate; }
namespace Cinemachine { class ICinemachineCamera; }
namespace Cinemachine::Utility { class HeadingTracker; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x1C2FA630)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_GETAXISCLOSESTVALUE_OFFSET UNITYSDK_OFFSET(0x1C2FA720)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_GETTARGETCAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x1C2FBD60)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_GETTARGETHEADING_OFFSET UNITYSDK_OFFSET(0x1C2F99C0)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_GET_LASTHEADING_OFFSET UNITYSDK_OFFSET(0x1C2FB040)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_GET_PREVIOUSTARGET_OFFSET UNITYSDK_OFFSET(0x1C2FA490)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_MUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1C2FB060)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C2FA2C0)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x1C2FA4B0)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x1C2FAEC0)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1C2F96F0)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_SET_LASTHEADING_OFFSET UNITYSDK_OFFSET(0x1C2FB050)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_SET_PREVIOUSTARGET_OFFSET UNITYSDK_OFFSET(0x1C2FA4A0)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_UPDATEHEADING_1_OFFSET UNITYSDK_OFFSET(0x1C2F98A0)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_UPDATEHEADING_OFFSET UNITYSDK_OFFSET(0x1C2F9860)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_UPDATEINPUTAXISPROVIDER_OFFSET UNITYSDK_OFFSET(0x1C2FA2F0)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2FC090)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineOrbitalTransposer_TypeDefinitionIndex = 32521;

	class CinemachineOrbitalTransposer : public ::Cinemachine::CinemachineTransposer
	{
	public:
		::Cinemachine::CinemachineOrbitalTransposer_Heading m_Heading; // 0xC8
		::Cinemachine::AxisState_Recentering m_RecenterToTargetHeading; // 0xD4
		::Cinemachine::AxisState m_XAxis; // 0xF0
		::System::Single m_LegacyRadius; // 0x158
		::System::Single m_LegacyHeightOffset; // 0x15C
		::System::Single m_LegacyHeadingBias; // 0x160
		::System::Boolean m_HeadingIsSlave; // 0x164
		::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate* HeadingUpdater; // 0x168
		::UnityEngine::Vector3 mLastTargetPosition; // 0x170
		::Cinemachine::Utility::HeadingTracker* mHeadingTracker; // 0x180
		::UnityEngine::Rigidbody* mTargetRigidBody; // 0x188
		::UnityEngine::Transform* _PreviousTarget_k__BackingField; // 0x190
		::UnityEngine::Vector3 mLastCameraPosition; // 0x198
		::System::Single _LastHeading_k__BackingField; // 0x1A4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER__CTOR_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_ONVALIDATE_OFFSET))(this);
		}

		::System::Single UpdateHeading(::System::Single deltaTime, ::UnityEngine::Vector3 up, ::Cinemachine::AxisState& axis)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::Cinemachine::AxisState&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_UPDATEHEADING_OFFSET))(this, deltaTime, up, axis);
		}

		::System::Single UpdateHeading_1(::System::Single deltaTime, ::UnityEngine::Vector3 up, ::Cinemachine::AxisState& axis, ::Cinemachine::AxisState_Recentering& recentering, ::System::Boolean isLive)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::Cinemachine::AxisState&, ::Cinemachine::AxisState_Recentering&, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_UPDATEHEADING_1_OFFSET))(this, deltaTime, up, axis, recentering, isLive);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_ONENABLE_OFFSET))(this);
		}

		::System::Void UpdateInputAxisProvider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_UPDATEINPUTAXISPROVIDER_OFFSET))(this);
		}

		::UnityEngine::Transform* get_PreviousTarget()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_GET_PREVIOUSTARGET_OFFSET))(this);
		}

		::System::Void set_PreviousTarget(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_SET_PREVIOUSTARGET_OFFSET))(this, value);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* target, ::UnityEngine::Vector3 positionDelta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_ONTARGETOBJECTWARPED_OFFSET))(this, target, positionDelta);
		}

		::System::Void ForceCameraPosition(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_FORCECAMERAPOSITION_OFFSET))(this, pos, rot);
		}

		::System::Boolean OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* fromCam, ::UnityEngine::Vector3 worldUp, ::System::Single deltaTime, ::Cinemachine::CinemachineVirtualCameraBase_TransitionParams& transitionParams)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single, ::Cinemachine::CinemachineVirtualCameraBase_TransitionParams&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_ONTRANSITIONFROMCAMERA_OFFSET))(this, fromCam, worldUp, deltaTime, transitionParams);
		}

		::System::Single GetAxisClosestValue(::UnityEngine::Vector3 cameraPos, ::UnityEngine::Vector3 up)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_GETAXISCLOSESTVALUE_OFFSET))(this, cameraPos, up);
		}

		::System::Single get_LastHeading()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_GET_LASTHEADING_OFFSET))(this);
		}

		::System::Void set_LastHeading(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_SET_LASTHEADING_OFFSET))(this, value);
		}

		::System::Void MutateCameraState(::Cinemachine::CameraState& curState, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_MUTATECAMERASTATE_OFFSET))(this, curState, deltaTime);
		}

		::UnityEngine::Vector3 GetTargetCameraPosition(::UnityEngine::Vector3 worldUp)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_GETTARGETCAMERAPOSITION_OFFSET))(this, worldUp);
		}

		::System::Single GetTargetHeading(::System::Single currentHeading, ::UnityEngine::Quaternion targetOrientation)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_GETTARGETHEADING_OFFSET))(this, currentHeading, targetOrientation);
		}
	};
}
