#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/GroundRaycastHit.h"
#include "unitysdk/RootMotion/FinalIK/GroundingThread_Leg.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class Grounding; }
namespace RootMotion::FinalIK { class IKSolver_TipPoint; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_GROUNDING_LEG_COPYFROM_OFFSET UNITYSDK_OFFSET(0xA2628A0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_COPYTO_OFFSET UNITYSDK_OFFSET(0xA2626A0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_FINDTOEBONE_OFFSET UNITYSDK_OFFSET(0xA265F70)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GETHEIGHTFROMGROUND_OFFSET UNITYSDK_OFFSET(0xA267C00)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GETLEGLOCKTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA266100)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GETRAYCASTHIT_OFFSET UNITYSDK_OFFSET(0xA2665F0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GETROTATIONOFFSETTARGET_OFFSET UNITYSDK_OFFSET(0xA267A40)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GETSPHEREHIT_OFFSET UNITYSDK_OFFSET(0xA266A40)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_FOOTHEIGHT_OFFSET UNITYSDK_OFFSET(0xA265F60)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_HEIGHTFROMGROUND_OFFSET UNITYSDK_OFFSET(0xA265E80)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_IKOFFSET_OFFSET UNITYSDK_OFFSET(0xA265F40)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_IKPOSITION_OFFSET UNITYSDK_OFFSET(0xA265E00)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_INITIATED_OFFSET UNITYSDK_OFFSET(0xA265E60)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_ISGROUNDED_OFFSET UNITYSDK_OFFSET(0xA265DE0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_ISLASTLOCKIKPOSITION_OFFSET UNITYSDK_OFFSET(0xA265DC0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_ISLOCKIKPHYSICS_OFFSET UNITYSDK_OFFSET(0xA265DA0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_ISLOCKIKPOSITION_OFFSET UNITYSDK_OFFSET(0xA265D80)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_ROOTYOFFSET_OFFSET UNITYSDK_OFFSET(0xA266020)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_ROTATIONOFFSET_OFFSET UNITYSDK_OFFSET(0xA265E40)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_STEPHEIGHTFROMGROUND_OFFSET UNITYSDK_OFFSET(0xA267440)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_TIPPOINT_OFFSET UNITYSDK_OFFSET(0xA265F20)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_TOETRANSFORM_OFFSET UNITYSDK_OFFSET(0xA265F00)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xA265EE0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0xA265EA0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_INITIATE_OFFSET UNITYSDK_OFFSET(0xA2634C0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_MOVEIKOFFSET_OFFSET UNITYSDK_OFFSET(0xA264720)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA262A40)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_PROCESSROTATION_OFFSET UNITYSDK_OFFSET(0xA264780)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_PROCESS_OFFSET UNITYSDK_OFFSET(0xA263890)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_RESETPOSITIONIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xA262C60)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_RESETPOSITION_OFFSET UNITYSDK_OFFSET(0xA262C50)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_RESET_OFFSET UNITYSDK_OFFSET(0xA265440)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_ROTATEFOOT_OFFSET UNITYSDK_OFFSET(0xA267E10)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_ROTATENORMAL_OFFSET UNITYSDK_OFFSET(0xA267B60)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SETFOOTTOPLANE_OFFSET UNITYSDK_OFFSET(0xA266FD0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SETFOOTTOPOINT_OFFSET UNITYSDK_OFFSET(0xA266850)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_HEIGHTFROMGROUND_OFFSET UNITYSDK_OFFSET(0xA265E90)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_IKOFFSET_OFFSET UNITYSDK_OFFSET(0xA265F50)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_IKPOSITION_OFFSET UNITYSDK_OFFSET(0xA265E20)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_INITIATED_OFFSET UNITYSDK_OFFSET(0xA265E70)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_ISGROUNDED_OFFSET UNITYSDK_OFFSET(0xA265DF0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_ISLASTLOCKIKPOSITION_OFFSET UNITYSDK_OFFSET(0xA265DD0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_ISLOCKIKPHYSICS_OFFSET UNITYSDK_OFFSET(0xA265DB0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_ISLOCKIKPOSITION_OFFSET UNITYSDK_OFFSET(0xA265D90)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_ROTATIONOFFSET_OFFSET UNITYSDK_OFFSET(0xA265E50)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_TIPPOINT_OFFSET UNITYSDK_OFFSET(0xA265F30)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_TOETRANSFORM_OFFSET UNITYSDK_OFFSET(0xA265F10)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xA265EF0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_VELOCITY_OFFSET UNITYSDK_OFFSET(0xA265EC0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_STEPUPFOOTOFFSET_OFFSET UNITYSDK_OFFSET(0xA267490)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_UPDATETRANSFORM_OFFSET UNITYSDK_OFFSET(0xA266310)
#define ROOTMOTION_FINALIK_GROUNDING_LEG__CTOR_OFFSET UNITYSDK_OFFSET(0xA263440)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Grounding_Leg_TypeDefinitionIndex = 41826;

	class Grounding_Leg : public ::System::Object
	{
	public:
		::UnityEngine::Transform* _toeTransform_k__BackingField; // 0x10
		::UnityEngine::Transform* _transform_k__BackingField; // 0x18
		::RootMotion::FinalIK::IKSolver_TipPoint* _tipPoint_k__BackingField; // 0x20
		::RootMotion::FinalIK::Grounding* grounding; // 0x28
		::UnityEngine::Vector3 lastPosition; // 0x30
		::System::Boolean _isLockIKPosition_k__BackingField; // 0x3C
		::System::Boolean _isLockIKPhysics_k__BackingField; // 0x3D
		::System::Boolean _isLastLockIKPosition_k__BackingField; // 0x3E
		::System::Boolean resetPositionFlag; // 0x3F
		::System::Single footHeight; // 0x40
		::UnityEngine::Quaternion lockRotation; // 0x44
		::RootMotion::FinalIK::GroundRaycastHit heelHit; // 0x54
		::UnityEngine::Vector3 _velocity_k__BackingField; // 0x78
		::System::Single _IKOffset_k__BackingField; // 0x84
		::UnityEngine::Quaternion toHitNormal; // 0x88
		::UnityEngine::Quaternion _rotationOffset_k__BackingField; // 0x98
		::UnityEngine::Vector3 lockPosition; // 0xA8
		::System::Single _heightFromGround_k__BackingField; // 0xB4
		::UnityEngine::Vector3 _IKPosition_k__BackingField; // 0xB8
		::UnityEngine::Quaternion r; // 0xC4
		::System::Single deltaTime; // 0xD4
		::UnityEngine::Vector3 transformPosition; // 0xD8
		::UnityEngine::Quaternion transformRotation; // 0xE4
		::UnityEngine::Vector3 up; // 0xF4
		::System::Boolean _initiated_k__BackingField; // 0x100
		::System::Boolean _isGrounded_k__BackingField; // 0x101
		::System::Single lastTime; // 0x104

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isLockIKPosition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_ISLOCKIKPOSITION_OFFSET))(this);
		}

		::System::Void set_isLockIKPosition(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SET_ISLOCKIKPOSITION_OFFSET))(this, a1);
		}

		::System::Boolean get_isLockIKPhysics()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_ISLOCKIKPHYSICS_OFFSET))(this);
		}

		::System::Void set_isLockIKPhysics(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SET_ISLOCKIKPHYSICS_OFFSET))(this, a1);
		}

		::System::Boolean get_isLastLockIKPosition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_ISLASTLOCKIKPOSITION_OFFSET))(this);
		}

		::System::Void set_isLastLockIKPosition(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SET_ISLASTLOCKIKPOSITION_OFFSET))(this, a1);
		}

		::System::Boolean get_isGrounded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_ISGROUNDED_OFFSET))(this);
		}

		::System::Void set_isGrounded(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SET_ISGROUNDED_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_IKPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_IKPOSITION_OFFSET))(this);
		}

		::System::Void set_IKPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SET_IKPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion get_rotationOffset()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_ROTATIONOFFSET_OFFSET))(this);
		}

		::System::Void set_rotationOffset(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SET_ROTATIONOFFSET_OFFSET))(this, a1);
		}

		::System::Boolean get_initiated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_INITIATED_OFFSET))(this);
		}

		::System::Void set_initiated(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SET_INITIATED_OFFSET))(this, a1);
		}

		::System::Single get_heightFromGround()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_HEIGHTFROMGROUND_OFFSET))(this);
		}

		::System::Void set_heightFromGround(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SET_HEIGHTFROMGROUND_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_velocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_VELOCITY_OFFSET))(this);
		}

		::System::Void set_velocity(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SET_VELOCITY_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_TRANSFORM_OFFSET))(this);
		}

		::System::Void set_transform(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SET_TRANSFORM_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_toeTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_TOETRANSFORM_OFFSET))(this);
		}

		::System::Void set_toeTransform(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SET_TOETRANSFORM_OFFSET))(this, a1);
		}

		::RootMotion::FinalIK::IKSolver_TipPoint* get_tipPoint()
		{
			return ((::RootMotion::FinalIK::IKSolver_TipPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_TIPPOINT_OFFSET))(this);
		}

		::System::Void set_tipPoint(::RootMotion::FinalIK::IKSolver_TipPoint* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolver_TipPoint*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SET_TIPPOINT_OFFSET))(this, a1);
		}

		::System::Single get_IKOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_IKOFFSET_OFFSET))(this);
		}

		::System::Void set_IKOffset(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SET_IKOFFSET_OFFSET))(this, a1);
		}

		::System::Single get_FootHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_FOOTHEIGHT_OFFSET))(this);
		}

		::System::Void Initiate(::RootMotion::FinalIK::Grounding* a1, ::UnityEngine::Transform* a2, ::RootMotion::FinalIK::IKSolver_TipPoint* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::Grounding*, ::UnityEngine::Transform*, ::RootMotion::FinalIK::IKSolver_TipPoint*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_INITIATE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Transform* FindToeBone()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_FINDTOEBONE_OFFSET))(this);
		}

		::System::Void CopyTo(::RootMotion::FinalIK::GroundingThread_Leg& a1)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::GroundingThread_Leg&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_COPYTO_OFFSET))(this, a1);
		}

		::System::Void CopyFrom(::RootMotion::FinalIK::GroundingThread_Leg& a1)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::GroundingThread_Leg&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_COPYFROM_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_ONENABLE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_RESET_OFFSET))(this);
		}

		::System::Void ResetPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_RESETPOSITION_OFFSET))(this);
		}

		::System::Void ResetPositionImmediately(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_RESETPOSITIONIMMEDIATELY_OFFSET))(this, a1);
		}

		::System::Void MoveIKOffset(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_MOVEIKOFFSET_OFFSET))(this, a1);
		}

		::System::Void Process()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_PROCESS_OFFSET))(this);
		}

		::System::Void StepUpFootOffset(::System::Single& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_STEPUPFOOTOFFSET_OFFSET))(this, a1);
		}

		::System::Single get_stepHeightFromGround()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_STEPHEIGHTFROMGROUND_OFFSET))(this);
		}

		::System::Void GetLegLockTransform(::UnityEngine::Vector3& a1, ::UnityEngine::Quaternion& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GETLEGLOCKTRANSFORM_OFFSET))(this, a1, a2);
		}

		::RootMotion::FinalIK::GroundRaycastHit GetSphereHit(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::RootMotion::FinalIK::GroundRaycastHit(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GETSPHEREHIT_OFFSET))(this, a1, a2);
		}

		::RootMotion::FinalIK::GroundRaycastHit GetRaycastHit(::UnityEngine::Vector3 a1)
		{
			return ((::RootMotion::FinalIK::GroundRaycastHit(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GETRAYCASTHIT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 RotateNormal(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_ROTATENORMAL_OFFSET))(this, a1);
		}

		::System::Void SetFootToPoint(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SETFOOTTOPOINT_OFFSET))(this, a1, a2);
		}

		::System::Void SetFootToPlane(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SETFOOTTOPLANE_OFFSET))(this, a1, a2, a3);
		}

		::System::Single GetHeightFromGround(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GETHEIGHTFROMGROUND_OFFSET))(this, a1);
		}

		::System::Void RotateFoot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_ROTATEFOOT_OFFSET))(this);
		}

		::UnityEngine::Quaternion GetRotationOffsetTarget()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GETROTATIONOFFSETTARGET_OFFSET))(this);
		}

		::System::Single get_rootYOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_ROOTYOFFSET_OFFSET))(this);
		}

		::System::Void UpdateTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_UPDATETRANSFORM_OFFSET))(this);
		}

		::System::Void ProcessRotation(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_PROCESSROTATION_OFFSET))(this, a1);
		}
	};
}
