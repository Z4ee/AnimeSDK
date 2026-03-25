#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/GroundRaycastHit.h"
#include "unitysdk/RootMotion/FinalIK/GroundingThread_Leg_TipPoint.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class GroundingThread; }

#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_GETHEIGHTFROMGROUND_OFFSET UNITYSDK_OFFSET(0x2A3A0)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_GETRAYCASTHIT_OFFSET UNITYSDK_OFFSET(0x2A250)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_GETROTATIONOFFSETTARGET_OFFSET UNITYSDK_OFFSET(0x2A540)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_GETSPHEREHIT_OFFSET UNITYSDK_OFFSET(0x2A220)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_GET_ROOTYOFFSET_OFFSET UNITYSDK_OFFSET(0x2A560)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_GET_STEPHEIGHTFROMGROUND_OFFSET UNITYSDK_OFFSET(0x2A1D0)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_MOVEIKOFFSET_OFFSET UNITYSDK_OFFSET(0x2A160)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_PROCESSROTATION_OFFSET UNITYSDK_OFFSET(0x2A6E0)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_PROCESS_OFFSET UNITYSDK_OFFSET(0x2A1B0)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_ROTATEFOOT_OFFSET UNITYSDK_OFFSET(0x2A4B0)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_ROTATENORMAL_OFFSET UNITYSDK_OFFSET(0x2A280)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_SETFOOTTOPLANE_OFFSET UNITYSDK_OFFSET(0x2A360)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_SETFOOTTOPOINT_OFFSET UNITYSDK_OFFSET(0x2A320)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_STEPUPFOOTOFFSET_OFFSET UNITYSDK_OFFSET(0x2A1C0)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_UPDATETRANSFORM_OFFSET UNITYSDK_OFFSET(0x2A610)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int GroundingThread_Leg_TypeDefinitionIndex = 35189;

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

		::System::Void MoveIKOffset(::System::Single offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_MOVEIKOFFSET_OFFSET))(this, offset);
		}

		::System::Void Process(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_PROCESS_OFFSET))(this, dt);
		}

		::System::Void StepUpFootOffset(::System::Single& offsetTarget)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_STEPUPFOOTOFFSET_OFFSET))(this, offsetTarget);
		}

		::System::Single get_stepHeightFromGround()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_GET_STEPHEIGHTFROMGROUND_OFFSET))(this);
		}

		::RootMotion::FinalIK::GroundRaycastHit GetSphereHit(::UnityEngine::Vector3 offsetFromHeel, ::System::Single radius)
		{
			return ((::RootMotion::FinalIK::GroundRaycastHit(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_GETSPHEREHIT_OFFSET))(this, offsetFromHeel, radius);
		}

		::RootMotion::FinalIK::GroundRaycastHit GetRaycastHit(::UnityEngine::Vector3 offsetFromHeel)
		{
			return ((::RootMotion::FinalIK::GroundRaycastHit(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_GETRAYCASTHIT_OFFSET))(this, offsetFromHeel);
		}

		::UnityEngine::Vector3 RotateNormal(::UnityEngine::Vector3 normal)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_ROTATENORMAL_OFFSET))(this, normal);
		}

		::System::Void SetFootToPoint(::UnityEngine::Vector3 normal, ::UnityEngine::Vector3 point)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_SETFOOTTOPOINT_OFFSET))(this, normal, point);
		}

		::System::Void SetFootToPlane(::UnityEngine::Vector3 planeNormal, ::UnityEngine::Vector3 planePoint, ::UnityEngine::Vector3 heelHitPoint)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_SETFOOTTOPLANE_OFFSET))(this, planeNormal, planePoint, heelHitPoint);
		}

		::System::Single GetHeightFromGround(::UnityEngine::Vector3 hitPoint)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_GETHEIGHTFROMGROUND_OFFSET))(this, hitPoint);
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

		::System::Void ProcessRotation(::System::Single lowestOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_LEG_PROCESSROTATION_OFFSET))(this, lowestOffset);
		}
	};
}
