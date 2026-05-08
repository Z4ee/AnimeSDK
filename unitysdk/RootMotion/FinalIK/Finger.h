#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/Finger_DOF.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class IKSolverLimb; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_FINGER_FIXTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1BCA3360)
#define ROOTMOTION_FINALIK_FINGER_GET_IKPOSITION_OFFSET UNITYSDK_OFFSET(0x1BCA2150)
#define ROOTMOTION_FINALIK_FINGER_GET_IKROTATION_OFFSET UNITYSDK_OFFSET(0x1BCA21B0)
#define ROOTMOTION_FINALIK_FINGER_GET_INITIATED_OFFSET UNITYSDK_OFFSET(0x1BCA2130)
#define ROOTMOTION_FINALIK_FINGER_INITIATE_OFFSET UNITYSDK_OFFSET(0x1BCA2510)
#define ROOTMOTION_FINALIK_FINGER_ISVALID_OFFSET UNITYSDK_OFFSET(0x1BCA2200)
#define ROOTMOTION_FINALIK_FINGER_SET_IKPOSITION_OFFSET UNITYSDK_OFFSET(0x1BCA2180)
#define ROOTMOTION_FINALIK_FINGER_SET_IKROTATION_OFFSET UNITYSDK_OFFSET(0x1BCA21E0)
#define ROOTMOTION_FINALIK_FINGER_SET_INITIATED_OFFSET UNITYSDK_OFFSET(0x1BCA2140)
#define ROOTMOTION_FINALIK_FINGER_STOREDEFAULTLOCALSTATE_OFFSET UNITYSDK_OFFSET(0x1BCA3550)
#define ROOTMOTION_FINALIK_FINGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BCA3710)
#define ROOTMOTION_FINALIK_FINGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCA4510)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Finger_TypeDefinitionIndex = 36558;

	class Finger : public ::System::Object
	{
	public:
		::System::Single weight; // 0x10
		::System::Single rotationWeight; // 0x14
		::RootMotion::FinalIK::Finger_DOF rotationDOF; // 0x18
		::System::Boolean fixBone1Twist; // 0x1C
		::UnityEngine::Transform* bone1; // 0x20
		::UnityEngine::Transform* bone2; // 0x28
		::UnityEngine::Transform* bone3; // 0x30
		::UnityEngine::Transform* tip; // 0x38
		::UnityEngine::Transform* target; // 0x40
		::System::Boolean _initiated_k__BackingField; // 0x48
		::RootMotion::FinalIK::IKSolverLimb* solver; // 0x50
		::UnityEngine::Quaternion bone3RelativeToTarget; // 0x58
		::UnityEngine::Vector3 bone3DefaultLocalPosition; // 0x68
		::UnityEngine::Quaternion bone3DefaultLocalRotation; // 0x74
		::UnityEngine::Vector3 bone1Axis; // 0x84
		::UnityEngine::Vector3 tipAxis; // 0x90
		::UnityEngine::Vector3 bone1TwistAxis; // 0x9C
		::UnityEngine::Vector3 defaultBendNormal; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FINGER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_initiated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FINGER_GET_INITIATED_OFFSET))(this);
		}

		::System::Void set_initiated(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FINGER_SET_INITIATED_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_IKPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FINGER_GET_IKPOSITION_OFFSET))(this);
		}

		::System::Void set_IKPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FINGER_SET_IKPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::Quaternion get_IKRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FINGER_GET_IKROTATION_OFFSET))(this);
		}

		::System::Void set_IKRotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FINGER_SET_IKROTATION_OFFSET))(this, value);
		}

		::System::Boolean IsValid(::System::String*& errorMessage)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FINGER_ISVALID_OFFSET))(this, errorMessage);
		}

		::System::Void Initiate(::UnityEngine::Transform* hand, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FINGER_INITIATE_OFFSET))(this, hand, index);
		}

		::System::Void FixTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FINGER_FIXTRANSFORMS_OFFSET))(this);
		}

		::System::Void StoreDefaultLocalState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FINGER_STOREDEFAULTLOCALSTATE_OFFSET))(this);
		}

		::System::Void Update(::System::Single masterWeight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FINGER_UPDATE_OFFSET))(this, masterWeight);
		}
	};
}
