#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/GroundRaycastHit.h"
#include "unitysdk/RootMotion/FinalIK/Grounding_EFinalIKLockFootMode.h"
#include "unitysdk/RootMotion/FinalIK/Grounding_GroundingLegLockTransform.h"
#include "unitysdk/RootMotion/FinalIK/Grounding_Quality.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class GroundingThread; }
namespace RootMotion::FinalIK { class Grounding_Leg; }
namespace RootMotion::FinalIK { class Grounding_Pelvis; }
namespace RootMotion::FinalIK { class IK; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_GROUNDING_COPYFROM_OFFSET UNITYSDK_OFFSET(0x19694FC0)
#define ROOTMOTION_FINALIK_GROUNDING_COPYTO_OFFSET UNITYSDK_OFFSET(0x19694980)
#define ROOTMOTION_FINALIK_GROUNDING_FLATTEN_OFFSET UNITYSDK_OFFSET(0x1969FD20)
#define ROOTMOTION_FINALIK_GROUNDING_GETLEGLOCKTRANSFORM_OFFSET UNITYSDK_OFFSET(0x196A00B0)
#define ROOTMOTION_FINALIK_GROUNDING_GETLEGSPLANENORMAL_OFFSET UNITYSDK_OFFSET(0x196965D0)
#define ROOTMOTION_FINALIK_GROUNDING_GETROOTHIT_OFFSET UNITYSDK_OFFSET(0x1969D110)
#define ROOTMOTION_FINALIK_GROUNDING_GETVERTICALOFFSET_OFFSET UNITYSDK_OFFSET(0x1969FAA0)
#define ROOTMOTION_FINALIK_GROUNDING_GET_IKPOSITIONWEIGHT_OFFSET UNITYSDK_OFFSET(0x1969CA60)
#define ROOTMOTION_FINALIK_GROUNDING_GET_IKROTATIONWEIGHT_OFFSET UNITYSDK_OFFSET(0x1969CA80)
#define ROOTMOTION_FINALIK_GROUNDING_GET_ISGROUNDED_OFFSET UNITYSDK_OFFSET(0x1969C9B0)
#define ROOTMOTION_FINALIK_GROUNDING_GET_ISROOTMOVE_OFFSET UNITYSDK_OFFSET(0x1969CAA0)
#define ROOTMOTION_FINALIK_GROUNDING_GET_LEGS_OFFSET UNITYSDK_OFFSET(0x1969C970)
#define ROOTMOTION_FINALIK_GROUNDING_GET_PELVIS_OFFSET UNITYSDK_OFFSET(0x1969C990)
#define ROOTMOTION_FINALIK_GROUNDING_GET_ROOTGROUNDED_OFFSET UNITYSDK_OFFSET(0x1969CA40)
#define ROOTMOTION_FINALIK_GROUNDING_GET_ROOTHIT_OFFSET UNITYSDK_OFFSET(0x1969C9F0)
#define ROOTMOTION_FINALIK_GROUNDING_GET_ROOT_OFFSET UNITYSDK_OFFSET(0x1969C9D0)
#define ROOTMOTION_FINALIK_GROUNDING_GET_UP_OFFSET UNITYSDK_OFFSET(0x1969D580)
#define ROOTMOTION_FINALIK_GROUNDING_GET_USEROOTROTATION_OFFSET UNITYSDK_OFFSET(0x1969F910)
#define ROOTMOTION_FINALIK_GROUNDING_INITIATE_OFFSET UNITYSDK_OFFSET(0x19696E90)
#define ROOTMOTION_FINALIK_GROUNDING_ISVALID_OFFSET UNITYSDK_OFFSET(0x1969D860)
#define ROOTMOTION_FINALIK_GROUNDING_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x1969DC10)
#define ROOTMOTION_FINALIK_GROUNDING_ONENABLE_OFFSET UNITYSDK_OFFSET(0x196958F0)
#define ROOTMOTION_FINALIK_GROUNDING_RESETPOSITIONIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x19693610)
#define ROOTMOTION_FINALIK_GROUNDING_RESETPOSITION_OFFSET UNITYSDK_OFFSET(0x19693460)
#define ROOTMOTION_FINALIK_GROUNDING_RESET_OFFSET UNITYSDK_OFFSET(0x19693140)
#define ROOTMOTION_FINALIK_GROUNDING_SET_IKPOSITIONWEIGHT_OFFSET UNITYSDK_OFFSET(0x1969CA70)
#define ROOTMOTION_FINALIK_GROUNDING_SET_IKROTATIONWEIGHT_OFFSET UNITYSDK_OFFSET(0x1969CA90)
#define ROOTMOTION_FINALIK_GROUNDING_SET_ISGROUNDED_OFFSET UNITYSDK_OFFSET(0x1969C9C0)
#define ROOTMOTION_FINALIK_GROUNDING_SET_ISROOTMOVE_OFFSET UNITYSDK_OFFSET(0x1969CAB0)
#define ROOTMOTION_FINALIK_GROUNDING_SET_LEGS_OFFSET UNITYSDK_OFFSET(0x1969C980)
#define ROOTMOTION_FINALIK_GROUNDING_SET_PELVIS_OFFSET UNITYSDK_OFFSET(0x1969C9A0)
#define ROOTMOTION_FINALIK_GROUNDING_SET_ROOTHIT_OFFSET UNITYSDK_OFFSET(0x1969CA20)
#define ROOTMOTION_FINALIK_GROUNDING_SET_ROOT_OFFSET UNITYSDK_OFFSET(0x1969C9E0)
#define ROOTMOTION_FINALIK_GROUNDING_UPDATE_OFFSET UNITYSDK_OFFSET(0x19697430)
#define ROOTMOTION_FINALIK_GROUNDING__CTOR_OFFSET UNITYSDK_OFFSET(0x19692CE0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Grounding_TypeDefinitionIndex = 44865;

	class Grounding : public ::System::Object
	{
	public:
		::UnityEngine::LayerMask layers; // 0x10
		::System::Single maxStep; // 0x14
		::System::Boolean stayOriginIfNoGround; // 0x18
		::System::Single heightOffset; // 0x1C
		::System::Single footSpeed; // 0x20
		::System::Single footRadius; // 0x24
		::System::Single prediction; // 0x28
		::System::Single footRotationWeight; // 0x2C
		::System::Single footRotationSpeed; // 0x30
		::System::Single maxFootRotationAngle; // 0x34
		::System::Single maxFootRotationRollAngle; // 0x38
		::UnityEngine::AnimationCurve* maxFootUpperRotateRatioCurve; // 0x40
		::System::Boolean useToeBone; // 0x48
		::System::Boolean bUseStepUp; // 0x49
		::System::Boolean rotateSolver; // 0x4A
		::System::Single pelvisSpeed; // 0x4C
		::System::Single pelvisDamper; // 0x50
		::System::Single lowerPelvisWeight; // 0x54
		::System::Single liftPelvisWeight; // 0x58
		::System::Single rootSphereCastRadius; // 0x5C
		::RootMotion::FinalIK::Grounding_Quality quality; // 0x60
		::System::Boolean applyTipBoneOnLockModeOnly; // 0x64
		::RootMotion::FinalIK::Grounding_EFinalIKLockFootMode lockFootMode; // 0x68
		::Il2CppArray<::RootMotion::FinalIK::Grounding_GroundingLegLockTransform>* legLockTransforms; // 0x70
		::Il2CppArray<::RootMotion::FinalIK::Grounding_Leg*>* _legs_k__BackingField; // 0x78
		::RootMotion::FinalIK::Grounding_Pelvis* _pelvis_k__BackingField; // 0x80
		::System::Boolean _isGrounded_k__BackingField; // 0x88
		::UnityEngine::Transform* _root_k__BackingField; // 0x90
		::RootMotion::FinalIK::GroundRaycastHit _rootHit_k__BackingField; // 0x98
		::System::Single _IKPositionWeight_k__BackingField; // 0xBC
		::System::Single _IKRotationWeight_k__BackingField; // 0xC0
		::System::Boolean _IsRootMove_k__BackingField; // 0xC4
		::UnityEngine::Quaternion _lastRootRotation; // 0xC8
		::UnityEngine::Quaternion _deltaRootRotation; // 0xD8
		::UnityEngine::Vector3 _lastRootPosition; // 0xE8
		::UnityEngine::Vector3 _deltaRootPosition; // 0xF4
		::System::Boolean initiated; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::RootMotion::FinalIK::Grounding_Leg*>* get_legs()
		{
			return ((::Il2CppArray<::RootMotion::FinalIK::Grounding_Leg*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GET_LEGS_OFFSET))(this);
		}

		::System::Void set_legs(::Il2CppArray<::RootMotion::FinalIK::Grounding_Leg*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RootMotion::FinalIK::Grounding_Leg*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_SET_LEGS_OFFSET))(this, a1);
		}

		::RootMotion::FinalIK::Grounding_Pelvis* get_pelvis()
		{
			return ((::RootMotion::FinalIK::Grounding_Pelvis*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GET_PELVIS_OFFSET))(this);
		}

		::System::Void set_pelvis(::RootMotion::FinalIK::Grounding_Pelvis* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::Grounding_Pelvis*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_SET_PELVIS_OFFSET))(this, a1);
		}

		::System::Boolean get_isGrounded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GET_ISGROUNDED_OFFSET))(this);
		}

		::System::Void set_isGrounded(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_SET_ISGROUNDED_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_root()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GET_ROOT_OFFSET))(this);
		}

		::System::Void set_root(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_SET_ROOT_OFFSET))(this, a1);
		}

		::RootMotion::FinalIK::GroundRaycastHit get_rootHit()
		{
			return ((::RootMotion::FinalIK::GroundRaycastHit(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GET_ROOTHIT_OFFSET))(this);
		}

		::System::Void set_rootHit(::RootMotion::FinalIK::GroundRaycastHit a1)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::GroundRaycastHit))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_SET_ROOTHIT_OFFSET))(this, a1);
		}

		::System::Boolean get_rootGrounded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GET_ROOTGROUNDED_OFFSET))(this);
		}

		::System::Single get_IKPositionWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GET_IKPOSITIONWEIGHT_OFFSET))(this);
		}

		::System::Void set_IKPositionWeight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_SET_IKPOSITIONWEIGHT_OFFSET))(this, a1);
		}

		::System::Single get_IKRotationWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GET_IKROTATIONWEIGHT_OFFSET))(this);
		}

		::System::Void set_IKRotationWeight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_SET_IKROTATIONWEIGHT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRootMove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GET_ISROOTMOVE_OFFSET))(this);
		}

		::System::Void set_IsRootMove(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_SET_ISROOTMOVE_OFFSET))(this, a1);
		}

		::System::Void CopyTo(::RootMotion::FinalIK::GroundingThread* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::GroundingThread*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_COPYTO_OFFSET))(this, a1);
		}

		::System::Void CopyFrom(::RootMotion::FinalIK::GroundingThread* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::GroundingThread*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_COPYFROM_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_ONENABLE_OFFSET))(this);
		}

		::System::Void ResetPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_RESETPOSITION_OFFSET))(this);
		}

		::System::Void ResetPositionImmediately(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_RESETPOSITIONIMMEDIATELY_OFFSET))(this, a1);
		}

		::RootMotion::FinalIK::GroundRaycastHit GetRootHit(::System::Single a1)
		{
			return ((::RootMotion::FinalIK::GroundRaycastHit(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GETROOTHIT_OFFSET))(this, a1);
		}

		::System::Boolean IsValid(::System::String*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_ISVALID_OFFSET))(this, a1);
		}

		::System::Void Initiate(::UnityEngine::Transform* a1, ::Il2CppArray<::UnityEngine::Transform*>* a2, ::Il2CppArray<::RootMotion::FinalIK::IK*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::Il2CppArray<::UnityEngine::Transform*>*, ::Il2CppArray<::RootMotion::FinalIK::IK*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_INITIATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_UPDATE_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetLegsPlaneNormal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GETLEGSPLANENORMAL_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_RESET_OFFSET))(this);
		}

		::System::Void LogWarning(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LOGWARNING_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_up()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GET_UP_OFFSET))(this);
		}

		::System::Single GetVerticalOffset(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GETVERTICALOFFSET_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 Flatten(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_FLATTEN_OFFSET))(this, a1);
		}

		::System::Boolean GetLegLockTransform(::RootMotion::FinalIK::Grounding_Leg* a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RootMotion::FinalIK::Grounding_Leg*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GETLEGLOCKTRANSFORM_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_useRootRotation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GET_USEROOTROTATION_OFFSET))(this);
		}
	};
}
