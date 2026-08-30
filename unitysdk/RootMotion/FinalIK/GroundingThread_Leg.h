#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/GroundRaycastHit.h"
#include "unitysdk/RootMotion/FinalIK/GroundingThread_Leg_TipPoint.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class GroundingThread; }

#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_GETHEIGHTFROMGROUND_OFFSET UNITYSDK_OFFSET(0x303A0)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_GETRAYCASTHIT_OFFSET UNITYSDK_OFFSET(0x30250)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_GETROTATIONOFFSETTARGET_OFFSET UNITYSDK_OFFSET(0x304C0)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_GETSPHEREHIT_OFFSET UNITYSDK_OFFSET(0x30220)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_GET_ROOTYOFFSET_OFFSET UNITYSDK_OFFSET(0x30600)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_GET_STEPHEIGHTFROMGROUND_OFFSET UNITYSDK_OFFSET(0x301D0)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_MOVEIKOFFSET_OFFSET UNITYSDK_OFFSET(0x30160)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_PROCESSROTATION_OFFSET UNITYSDK_OFFSET(0x30790)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_PROCESS_OFFSET UNITYSDK_OFFSET(0x301B0)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_ROTATEFOOT_OFFSET UNITYSDK_OFFSET(0x304B0)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_ROTATENORMAL_OFFSET UNITYSDK_OFFSET(0x30280)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_SETFOOTTOPLANE_OFFSET UNITYSDK_OFFSET(0x30360)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_SETFOOTTOPOINT_OFFSET UNITYSDK_OFFSET(0x30320)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_STEPUPFOOTOFFSET_OFFSET UNITYSDK_OFFSET(0x301C0)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_UPDATETRANSFORM_OFFSET UNITYSDK_OFFSET(0x306C0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int GroundingThread_Leg_TypeDefinitionIndex = 44861;

	struct alignas(8) GroundingThread_Leg
	{
		::System::Boolean isLockIKPhysics; // 0x10
		::System::Boolean isGrounded; // 0x11
		::UnityEngine::Vector3 IKPosition; // 0x14
		::UnityEngine::Quaternion rotationOrigin; // 0x20
		::UnityEngine::Quaternion rotationOffset; // 0x30
		::System::Single heightFromGround; // 0x40
		::UnityEngine::Vector3 velocity; // 0x44
		::RootMotion::IKJob::IKTransformRef transform; // 0x50
		::RootMotion::IKJob::IKTransformRef toeTransform; // 0x60
		::RootMotion::FinalIK::GroundingThread_Leg_TipPoint tipPoint; // 0x70
		::System::Single IKOffset; // 0x90
		::RootMotion::FinalIK::GroundingThread* grounding; // 0x98
		::System::Single footHeight; // 0xA0
		::System::Single deltaTime; // 0xA4
		::UnityEngine::Vector3 lastPosition; // 0xA8
		::UnityEngine::Quaternion toHitNormal; // 0xB4
		::UnityEngine::Quaternion r; // 0xC4
		::RootMotion::FinalIK::GroundRaycastHit heelHit; // 0xD4
		::UnityEngine::Vector3 up; // 0xF8
		::UnityEngine::Vector3 transformPosition; // 0x104
		::UnityEngine::Quaternion transformRotation; // 0x110
		::System::Boolean resetPositionFlag; // 0x120

		::System::Void MoveIKOffset(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_MOVEIKOFFSET_OFFSET))(this, a1);
		}

		::System::Void Process(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_PROCESS_OFFSET))(this, a1);
		}

		::System::Void StepUpFootOffset(::System::Single& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_STEPUPFOOTOFFSET_OFFSET))(this, a1);
		}

		::System::Single get_stepHeightFromGround()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_GET_STEPHEIGHTFROMGROUND_OFFSET))(this);
		}

		::RootMotion::FinalIK::GroundRaycastHit GetSphereHit(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::RootMotion::FinalIK::GroundRaycastHit(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_GETSPHEREHIT_OFFSET))(this, a1, a2);
		}

		::RootMotion::FinalIK::GroundRaycastHit GetRaycastHit(::UnityEngine::Vector3 a1)
		{
			return ((::RootMotion::FinalIK::GroundRaycastHit(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_GETRAYCASTHIT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 RotateNormal(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_ROTATENORMAL_OFFSET))(this, a1);
		}

		::System::Void SetFootToPoint(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_SETFOOTTOPOINT_OFFSET))(this, a1, a2);
		}

		::System::Void SetFootToPlane(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_SETFOOTTOPLANE_OFFSET))(this, a1, a2, a3);
		}

		::System::Single GetHeightFromGround(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_GETHEIGHTFROMGROUND_OFFSET))(this, a1);
		}

		::System::Void RotateFoot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_ROTATEFOOT_OFFSET))(this);
		}

		::UnityEngine::Quaternion GetRotationOffsetTarget()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_GETROTATIONOFFSETTARGET_OFFSET))(this);
		}

		::System::Single get_rootYOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_GET_ROOTYOFFSET_OFFSET))(this);
		}

		::System::Void UpdateTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_UPDATETRANSFORM_OFFSET))(this);
		}

		::System::Void ProcessRotation(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_PROCESSROTATION_OFFSET))(this, a1);
		}
	};
}
