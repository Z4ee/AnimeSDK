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

#define ROOTMOTION_FINALIK_GROUNDING_COPYFROM_OFFSET UNITYSDK_OFFSET(0x85D6FD0)
#define ROOTMOTION_FINALIK_GROUNDING_COPYTO_OFFSET UNITYSDK_OFFSET(0x85D6950)
#define ROOTMOTION_FINALIK_GROUNDING_FLATTEN_OFFSET UNITYSDK_OFFSET(0x85E2080)
#define ROOTMOTION_FINALIK_GROUNDING_GETLEGLOCKTRANSFORM_OFFSET UNITYSDK_OFFSET(0x85E2410)
#define ROOTMOTION_FINALIK_GROUNDING_GETLEGSPLANENORMAL_OFFSET UNITYSDK_OFFSET(0x85D8780)
#define ROOTMOTION_FINALIK_GROUNDING_GETROOTHIT_OFFSET UNITYSDK_OFFSET(0x85DF500)
#define ROOTMOTION_FINALIK_GROUNDING_GETVERTICALOFFSET_OFFSET UNITYSDK_OFFSET(0x85E1E00)
#define ROOTMOTION_FINALIK_GROUNDING_GET_IKPOSITIONWEIGHT_OFFSET UNITYSDK_OFFSET(0x85DEE80)
#define ROOTMOTION_FINALIK_GROUNDING_GET_IKROTATIONWEIGHT_OFFSET UNITYSDK_OFFSET(0x85DEEA0)
#define ROOTMOTION_FINALIK_GROUNDING_GET_ISGROUNDED_OFFSET UNITYSDK_OFFSET(0x85DEDD0)
#define ROOTMOTION_FINALIK_GROUNDING_GET_ISROOTMOVE_OFFSET UNITYSDK_OFFSET(0x85DEEC0)
#define ROOTMOTION_FINALIK_GROUNDING_GET_LEGS_OFFSET UNITYSDK_OFFSET(0x85DED90)
#define ROOTMOTION_FINALIK_GROUNDING_GET_PELVIS_OFFSET UNITYSDK_OFFSET(0x85DEDB0)
#define ROOTMOTION_FINALIK_GROUNDING_GET_ROOTGROUNDED_OFFSET UNITYSDK_OFFSET(0x85DEE60)
#define ROOTMOTION_FINALIK_GROUNDING_GET_ROOTHIT_OFFSET UNITYSDK_OFFSET(0x85DEE10)
#define ROOTMOTION_FINALIK_GROUNDING_GET_ROOT_OFFSET UNITYSDK_OFFSET(0x85DEDF0)
#define ROOTMOTION_FINALIK_GROUNDING_GET_UP_OFFSET UNITYSDK_OFFSET(0x85DF980)
#define ROOTMOTION_FINALIK_GROUNDING_GET_USEROOTROTATION_OFFSET UNITYSDK_OFFSET(0x85E1C70)
#define ROOTMOTION_FINALIK_GROUNDING_INITIATE_OFFSET UNITYSDK_OFFSET(0x85D9150)
#define ROOTMOTION_FINALIK_GROUNDING_ISVALID_OFFSET UNITYSDK_OFFSET(0x85DFC60)
#define ROOTMOTION_FINALIK_GROUNDING_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x85E0010)
#define ROOTMOTION_FINALIK_GROUNDING_ONENABLE_OFFSET UNITYSDK_OFFSET(0x85D7A50)
#define ROOTMOTION_FINALIK_GROUNDING_RESETPOSITIONIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x85D5770)
#define ROOTMOTION_FINALIK_GROUNDING_RESETPOSITION_OFFSET UNITYSDK_OFFSET(0x85D55C0)
#define ROOTMOTION_FINALIK_GROUNDING_RESET_OFFSET UNITYSDK_OFFSET(0x85D52A0)
#define ROOTMOTION_FINALIK_GROUNDING_SET_IKPOSITIONWEIGHT_OFFSET UNITYSDK_OFFSET(0x85DEE90)
#define ROOTMOTION_FINALIK_GROUNDING_SET_IKROTATIONWEIGHT_OFFSET UNITYSDK_OFFSET(0x85DEEB0)
#define ROOTMOTION_FINALIK_GROUNDING_SET_ISGROUNDED_OFFSET UNITYSDK_OFFSET(0x85DEDE0)
#define ROOTMOTION_FINALIK_GROUNDING_SET_ISROOTMOVE_OFFSET UNITYSDK_OFFSET(0x85DEED0)
#define ROOTMOTION_FINALIK_GROUNDING_SET_LEGS_OFFSET UNITYSDK_OFFSET(0x85DEDA0)
#define ROOTMOTION_FINALIK_GROUNDING_SET_PELVIS_OFFSET UNITYSDK_OFFSET(0x85DEDC0)
#define ROOTMOTION_FINALIK_GROUNDING_SET_ROOTHIT_OFFSET UNITYSDK_OFFSET(0x85DEE40)
#define ROOTMOTION_FINALIK_GROUNDING_SET_ROOT_OFFSET UNITYSDK_OFFSET(0x85DEE00)
#define ROOTMOTION_FINALIK_GROUNDING_UPDATE_OFFSET UNITYSDK_OFFSET(0x85D9740)
#define ROOTMOTION_FINALIK_GROUNDING__CTOR_OFFSET UNITYSDK_OFFSET(0x85D4E90)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Grounding_TypeDefinitionIndex = 35193;

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

		::System::Void set_legs(::Il2CppArray<::RootMotion::FinalIK::Grounding_Leg*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RootMotion::FinalIK::Grounding_Leg*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_SET_LEGS_OFFSET))(this, value);
		}

		::RootMotion::FinalIK::Grounding_Pelvis* get_pelvis()
		{
			return ((::RootMotion::FinalIK::Grounding_Pelvis*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GET_PELVIS_OFFSET))(this);
		}

		::System::Void set_pelvis(::RootMotion::FinalIK::Grounding_Pelvis* value)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::Grounding_Pelvis*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_SET_PELVIS_OFFSET))(this, value);
		}

		::System::Boolean get_isGrounded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GET_ISGROUNDED_OFFSET))(this);
		}

		::System::Void set_isGrounded(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_SET_ISGROUNDED_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_root()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GET_ROOT_OFFSET))(this);
		}

		::System::Void set_root(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_SET_ROOT_OFFSET))(this, value);
		}

		::RootMotion::FinalIK::GroundRaycastHit get_rootHit()
		{
			return ((::RootMotion::FinalIK::GroundRaycastHit(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GET_ROOTHIT_OFFSET))(this);
		}

		::System::Void set_rootHit(::RootMotion::FinalIK::GroundRaycastHit value)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::GroundRaycastHit))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_SET_ROOTHIT_OFFSET))(this, value);
		}

		::System::Boolean get_rootGrounded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GET_ROOTGROUNDED_OFFSET))(this);
		}

		::System::Single get_IKPositionWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GET_IKPOSITIONWEIGHT_OFFSET))(this);
		}

		::System::Void set_IKPositionWeight(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_SET_IKPOSITIONWEIGHT_OFFSET))(this, value);
		}

		::System::Single get_IKRotationWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GET_IKROTATIONWEIGHT_OFFSET))(this);
		}

		::System::Void set_IKRotationWeight(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_SET_IKROTATIONWEIGHT_OFFSET))(this, value);
		}

		::System::Boolean get_IsRootMove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GET_ISROOTMOVE_OFFSET))(this);
		}

		::System::Void set_IsRootMove(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_SET_ISROOTMOVE_OFFSET))(this, value);
		}

		::System::Void CopyTo(::RootMotion::FinalIK::GroundingThread* solver)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::GroundingThread*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_COPYTO_OFFSET))(this, solver);
		}

		::System::Void CopyFrom(::RootMotion::FinalIK::GroundingThread* solver)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::GroundingThread*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_COPYFROM_OFFSET))(this, solver);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_ONENABLE_OFFSET))(this);
		}

		::System::Void ResetPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_RESETPOSITION_OFFSET))(this);
		}

		::System::Void ResetPositionImmediately(::UnityEngine::Vector3 deltaMove)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_RESETPOSITIONIMMEDIATELY_OFFSET))(this, deltaMove);
		}

		::RootMotion::FinalIK::GroundRaycastHit GetRootHit(::System::Single maxDistanceMlp)
		{
			return ((::RootMotion::FinalIK::GroundRaycastHit(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GETROOTHIT_OFFSET))(this, maxDistanceMlp);
		}

		::System::Boolean IsValid(::System::String*& errorMessage)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_ISVALID_OFFSET))(this, errorMessage);
		}

		::System::Void Initiate(::UnityEngine::Transform* root, ::Il2CppArray<::UnityEngine::Transform*>* feet, ::Il2CppArray<::RootMotion::FinalIK::IK*>* iks)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::Il2CppArray<::UnityEngine::Transform*>*, ::Il2CppArray<::RootMotion::FinalIK::IK*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_INITIATE_OFFSET))(this, root, feet, iks);
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

		::System::Void LogWarning(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LOGWARNING_OFFSET))(this, message);
		}

		::UnityEngine::Vector3 get_up()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GET_UP_OFFSET))(this);
		}

		::System::Single GetVerticalOffset(::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GETVERTICALOFFSET_OFFSET))(this, p1, p2);
		}

		::UnityEngine::Vector3 Flatten(::UnityEngine::Vector3 v)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_FLATTEN_OFFSET))(this, v);
		}

		::System::Boolean GetLegLockTransform(::RootMotion::FinalIK::Grounding_Leg* leg, ::UnityEngine::Vector3& outPosition, ::UnityEngine::Quaternion& outRotation)
		{
			return ((::System::Boolean(*)(::PVOID, ::RootMotion::FinalIK::Grounding_Leg*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GETLEGLOCKTRANSFORM_OFFSET))(this, leg, outPosition, outRotation);
		}

		::System::Boolean get_useRootRotation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_GET_USEROOTROTATION_OFFSET))(this);
		}
	};
}
