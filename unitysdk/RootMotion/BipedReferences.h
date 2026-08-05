#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/BipedNaming_BoneSide.h"
#include "unitysdk/RootMotion/BipedNaming_BoneType.h"
#include "unitysdk/RootMotion/BipedReferences_AutoDetectParams.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_BIPEDREFERENCES_ADDBONETOEYES_OFFSET UNITYSDK_OFFSET(0x1EED9160)
#define ROOTMOTION_BIPEDREFERENCES_ADDBONETOHIERARCHY_OFFSET UNITYSDK_OFFSET(0x1EED9420)
#define ROOTMOTION_BIPEDREFERENCES_ADDBONETOSPINE_OFFSET UNITYSDK_OFFSET(0x1EED8F10)
#define ROOTMOTION_BIPEDREFERENCES_ASSIGNHUMANOIDREFERENCES_OFFSET UNITYSDK_OFFSET(0x1EED6EB0)
#define ROOTMOTION_BIPEDREFERENCES_AUTODETECTREFERENCES_OFFSET UNITYSDK_OFFSET(0x1EED6AA0)
#define ROOTMOTION_BIPEDREFERENCES_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1EED6650)
#define ROOTMOTION_BIPEDREFERENCES_DETECTLIMB_OFFSET UNITYSDK_OFFSET(0x1EED8DD0)
#define ROOTMOTION_BIPEDREFERENCES_DETECTREFERENCESBYNAMING_OFFSET UNITYSDK_OFFSET(0x1EED7830)
#define ROOTMOTION_BIPEDREFERENCES_EYESERROR_OFFSET UNITYSDK_OFFSET(0x1EEDA620)
#define ROOTMOTION_BIPEDREFERENCES_EYESWARNING_OFFSET UNITYSDK_OFFSET(0x1EEDACD0)
#define ROOTMOTION_BIPEDREFERENCES_FACINGAXISWARNING_OFFSET UNITYSDK_OFFSET(0x1EEDB1A0)
#define ROOTMOTION_BIPEDREFERENCES_GETVERTICALOFFSET_OFFSET UNITYSDK_OFFSET(0x1EEDB6D0)
#define ROOTMOTION_BIPEDREFERENCES_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1EED5CD0)
#define ROOTMOTION_BIPEDREFERENCES_GET_ISFILLED_OFFSET UNITYSDK_OFFSET(0x1EED5470)
#define ROOTMOTION_BIPEDREFERENCES_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1EED5CF0)
#define ROOTMOTION_BIPEDREFERENCES_ISNECKBONE_OFFSET UNITYSDK_OFFSET(0x1EED9600)
#define ROOTMOTION_BIPEDREFERENCES_LIMBERROR_OFFSET UNITYSDK_OFFSET(0x1EED9790)
#define ROOTMOTION_BIPEDREFERENCES_LIMBWARNING_OFFSET UNITYSDK_OFFSET(0x1EEDA960)
#define ROOTMOTION_BIPEDREFERENCES_ROOTHEIGHTWARNING_OFFSET UNITYSDK_OFFSET(0x1EEDACE0)
#define ROOTMOTION_BIPEDREFERENCES_SETUPERROR_OFFSET UNITYSDK_OFFSET(0x1EED8C30)
#define ROOTMOTION_BIPEDREFERENCES_SETUPWARNING_OFFSET UNITYSDK_OFFSET(0x1EED8D20)
#define ROOTMOTION_BIPEDREFERENCES_SPINEERROR_OFFSET UNITYSDK_OFFSET(0x1EED9FF0)
#define ROOTMOTION_BIPEDREFERENCES_SPINEWARNING_OFFSET UNITYSDK_OFFSET(0x1EEDACC0)
#define ROOTMOTION_BIPEDREFERENCES__CTOR_OFFSET UNITYSDK_OFFSET(0x1EED6E50)

namespace RootMotion
{
	inline static constexpr unsigned int BipedReferences_TypeDefinitionIndex = 39007;

	class BipedReferences : public ::System::Object
	{
	public:
		::UnityEngine::Transform* root; // 0x10
		::UnityEngine::Transform* pelvis; // 0x18
		::UnityEngine::Transform* leftThigh; // 0x20
		::UnityEngine::Transform* leftCalf; // 0x28
		::UnityEngine::Transform* leftFoot; // 0x30
		::UnityEngine::Transform* rightThigh; // 0x38
		::UnityEngine::Transform* rightCalf; // 0x40
		::UnityEngine::Transform* rightFoot; // 0x48
		::UnityEngine::Transform* leftUpperArm; // 0x50
		::UnityEngine::Transform* leftForearm; // 0x58
		::UnityEngine::Transform* leftHand; // 0x60
		::UnityEngine::Transform* rightUpperArm; // 0x68
		::UnityEngine::Transform* rightForearm; // 0x70
		::UnityEngine::Transform* rightHand; // 0x78
		::UnityEngine::Transform* head; // 0x80
		::Il2CppArray<::UnityEngine::Transform*>* spine; // 0x88
		::Il2CppArray<::UnityEngine::Transform*>* eyes; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDREFERENCES__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isFilled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDREFERENCES_GET_ISFILLED_OFFSET))(this);
		}

		::System::Boolean get_isEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDREFERENCES_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Boolean IsEmpty(::System::Boolean includeRoot)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDREFERENCES_ISEMPTY_OFFSET))(this, includeRoot);
		}

		::System::Boolean Contains(::UnityEngine::Transform* t, ::System::Boolean ignoreRoot)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDREFERENCES_CONTAINS_OFFSET))(this, t, ignoreRoot);
		}

		static ::System::Boolean AutoDetectReferences(::RootMotion::BipedReferences*& references, ::UnityEngine::Transform* root, ::RootMotion::BipedReferences_AutoDetectParams autoDetectParams)
		{
			return ((::System::Boolean(*)(::RootMotion::BipedReferences*&, ::UnityEngine::Transform*, ::RootMotion::BipedReferences_AutoDetectParams))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDREFERENCES_AUTODETECTREFERENCES_OFFSET))(references, root, autoDetectParams);
		}

		static ::System::Void DetectReferencesByNaming(::RootMotion::BipedReferences*& references, ::UnityEngine::Transform* root, ::RootMotion::BipedReferences_AutoDetectParams autoDetectParams)
		{
			return ((::System::Void(*)(::RootMotion::BipedReferences*&, ::UnityEngine::Transform*, ::RootMotion::BipedReferences_AutoDetectParams))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDREFERENCES_DETECTREFERENCESBYNAMING_OFFSET))(references, root, autoDetectParams);
		}

		static ::System::Void AssignHumanoidReferences(::RootMotion::BipedReferences*& references, ::UnityEngine::Animator* animator, ::RootMotion::BipedReferences_AutoDetectParams autoDetectParams)
		{
			return ((::System::Void(*)(::RootMotion::BipedReferences*&, ::UnityEngine::Animator*, ::RootMotion::BipedReferences_AutoDetectParams))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDREFERENCES_ASSIGNHUMANOIDREFERENCES_OFFSET))(references, animator, autoDetectParams);
		}

		static ::System::Boolean SetupError(::RootMotion::BipedReferences* references, ::System::String*& errorMessage)
		{
			return ((::System::Boolean(*)(::RootMotion::BipedReferences*, ::System::String*&))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDREFERENCES_SETUPERROR_OFFSET))(references, errorMessage);
		}

		static ::System::Boolean SetupWarning(::RootMotion::BipedReferences* references, ::System::String*& warningMessage)
		{
			return ((::System::Boolean(*)(::RootMotion::BipedReferences*, ::System::String*&))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDREFERENCES_SETUPWARNING_OFFSET))(references, warningMessage);
		}

		static ::System::Boolean IsNeckBone(::UnityEngine::Transform* bone, ::UnityEngine::Transform* leftUpperArm)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDREFERENCES_ISNECKBONE_OFFSET))(bone, leftUpperArm);
		}

		static ::System::Boolean AddBoneToEyes(::UnityEngine::Transform* bone, ::RootMotion::BipedReferences*& references, ::RootMotion::BipedReferences_AutoDetectParams autoDetectParams)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform*, ::RootMotion::BipedReferences*&, ::RootMotion::BipedReferences_AutoDetectParams))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDREFERENCES_ADDBONETOEYES_OFFSET))(bone, references, autoDetectParams);
		}

		static ::System::Boolean AddBoneToSpine(::UnityEngine::Transform* bone, ::RootMotion::BipedReferences*& references, ::RootMotion::BipedReferences_AutoDetectParams autoDetectParams)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform*, ::RootMotion::BipedReferences*&, ::RootMotion::BipedReferences_AutoDetectParams))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDREFERENCES_ADDBONETOSPINE_OFFSET))(bone, references, autoDetectParams);
		}

		static ::System::Void DetectLimb(::RootMotion::BipedNaming_BoneType boneType, ::RootMotion::BipedNaming_BoneSide boneSide, ::UnityEngine::Transform*& firstBone, ::UnityEngine::Transform*& secondBone, ::UnityEngine::Transform*& lastBone, ::Il2CppArray<::UnityEngine::Transform*>* transforms)
		{
			return ((::System::Void(*)(::RootMotion::BipedNaming_BoneType, ::RootMotion::BipedNaming_BoneSide, ::UnityEngine::Transform*&, ::UnityEngine::Transform*&, ::UnityEngine::Transform*&, ::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDREFERENCES_DETECTLIMB_OFFSET))(boneType, boneSide, firstBone, secondBone, lastBone, transforms);
		}

		static ::System::Void AddBoneToHierarchy(::Il2CppArray<::UnityEngine::Transform*>*& bones, ::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Transform*>*&, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDREFERENCES_ADDBONETOHIERARCHY_OFFSET))(bones, transform);
		}

		static ::System::Boolean LimbError(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::UnityEngine::Transform* bone3, ::System::String*& errorMessage)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::String*&))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDREFERENCES_LIMBERROR_OFFSET))(bone1, bone2, bone3, errorMessage);
		}

		static ::System::Boolean LimbWarning(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::UnityEngine::Transform* bone3, ::System::String*& warningMessage)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::String*&))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDREFERENCES_LIMBWARNING_OFFSET))(bone1, bone2, bone3, warningMessage);
		}

		static ::System::Boolean SpineError(::RootMotion::BipedReferences* references, ::System::String*& errorMessage)
		{
			return ((::System::Boolean(*)(::RootMotion::BipedReferences*, ::System::String*&))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDREFERENCES_SPINEERROR_OFFSET))(references, errorMessage);
		}

		static ::System::Boolean SpineWarning(::RootMotion::BipedReferences* references, ::System::String*& warningMessage)
		{
			return ((::System::Boolean(*)(::RootMotion::BipedReferences*, ::System::String*&))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDREFERENCES_SPINEWARNING_OFFSET))(references, warningMessage);
		}

		static ::System::Boolean EyesError(::RootMotion::BipedReferences* references, ::System::String*& errorMessage)
		{
			return ((::System::Boolean(*)(::RootMotion::BipedReferences*, ::System::String*&))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDREFERENCES_EYESERROR_OFFSET))(references, errorMessage);
		}

		static ::System::Boolean EyesWarning(::RootMotion::BipedReferences* references, ::System::String*& warningMessage)
		{
			return ((::System::Boolean(*)(::RootMotion::BipedReferences*, ::System::String*&))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDREFERENCES_EYESWARNING_OFFSET))(references, warningMessage);
		}

		static ::System::Boolean RootHeightWarning(::RootMotion::BipedReferences* references, ::System::String*& warningMessage)
		{
			return ((::System::Boolean(*)(::RootMotion::BipedReferences*, ::System::String*&))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDREFERENCES_ROOTHEIGHTWARNING_OFFSET))(references, warningMessage);
		}

		static ::System::Boolean FacingAxisWarning(::RootMotion::BipedReferences* references, ::System::String*& warningMessage)
		{
			return ((::System::Boolean(*)(::RootMotion::BipedReferences*, ::System::String*&))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDREFERENCES_FACINGAXISWARNING_OFFSET))(references, warningMessage);
		}

		static ::System::Single GetVerticalOffset(::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDREFERENCES_GETVERTICALOFFSET_OFFSET))(p1, p2, rotation);
		}
	};
}
