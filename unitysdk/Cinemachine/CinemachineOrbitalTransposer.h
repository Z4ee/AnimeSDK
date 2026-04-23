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
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x12B90F00)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_GETAXISCLOSESTVALUE_OFFSET UNITYSDK_OFFSET(0x12B84590)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_GETFULLNAME_OFFSET UNITYSDK_OFFSET(0x12B93D40)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_GETTARGETCAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x12B85B70)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_GETTARGETHEADING_OFFSET UNITYSDK_OFFSET(0x12B8FD90)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_GET_LASTHEADING_OFFSET UNITYSDK_OFFSET(0x12B91540)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_GET_PREVIOUSTARGET_OFFSET UNITYSDK_OFFSET(0x12B90560)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_MUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x12B91560)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12B903D0)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x12B90580)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x12B912D0)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x12B8F710)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_ONWORLDWARPED_OFFSET UNITYSDK_OFFSET(0x12B907E0)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_SET_LASTHEADING_OFFSET UNITYSDK_OFFSET(0x12B91550)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_SET_PREVIOUSTARGET_OFFSET UNITYSDK_OFFSET(0x12B90570)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_UPDATEHEADING_1_OFFSET UNITYSDK_OFFSET(0x12B87E10)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_UPDATEHEADING_OFFSET UNITYSDK_OFFSET(0x12B8F8C0)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_UPDATEINPUTAXISPROVIDER_OFFSET UNITYSDK_OFFSET(0x12B90400)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER__CTOR_OFFSET UNITYSDK_OFFSET(0x12B93E10)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineOrbitalTransposer_TypeDefinitionIndex = 36543;

	class CinemachineOrbitalTransposer : public ::Cinemachine::CinemachineTransposer
	{
	public:
		::Cinemachine::CinemachineOrbitalTransposer_Heading m_Heading; // 0xC8
		::Cinemachine::AxisState_Recentering m_RecenterToTargetHeading; // 0xD4
		::Cinemachine::AxisState m_XAxis; // 0xF0
		::System::Single m_LegacyRadius; // 0x168
		::System::Single m_LegacyHeightOffset; // 0x16C
		::System::Single m_LegacyHeadingBias; // 0x170
		::System::Boolean m_HeadingIsSlave; // 0x174
		::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate* HeadingUpdater; // 0x178
		::UnityEngine::Vector3 mLastTargetPosition; // 0x180
		::Cinemachine::Utility::HeadingTracker* mHeadingTracker; // 0x190
		::UnityEngine::Rigidbody* mTargetRigidBody; // 0x198
		::UnityEngine::Transform* _PreviousTarget_k__BackingField; // 0x1A0
		::UnityEngine::Vector3 mLastCameraPosition; // 0x1A8
		::System::Single _LastHeading_k__BackingField; // 0x1B4

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

		::System::Void OnWorldWarped(::UnityEngine::Vector3 positionDelta, ::System::Single yawDelta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_ONWORLDWARPED_OFFSET))(this, positionDelta, yawDelta);
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

		static ::System::String* GetFullName(::UnityEngine::GameObject* current)
		{
			return ((::System::String*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_GETFULLNAME_OFFSET))(current);
		}

		::System::Single GetTargetHeading(::System::Single currentHeading, ::UnityEngine::Quaternion targetOrientation)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER_GETTARGETHEADING_OFFSET))(this, currentHeading, targetOrientation);
		}
	};
}
