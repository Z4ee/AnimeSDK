#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class IKSolver_Bone; }
namespace RootMotion::FinalIK { class IKSolver_Point; }
namespace RootMotion::FinalIK { class IKSolver_TipPoint; }
namespace RootMotion::FinalIK { class IKSolver_UpdateDelegate; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_IKSOLVER_CONTAINSDUPLICATEBONE_OFFSET UNITYSDK_OFFSET(0x85EAF90)
#define ROOTMOTION_FINALIK_IKSOLVER_GETIKPOSITIONWEIGHT_OFFSET UNITYSDK_OFFSET(0x85EA8A0)
#define ROOTMOTION_FINALIK_IKSOLVER_GETIKPOSITION_OFFSET UNITYSDK_OFFSET(0x85EA870)
#define ROOTMOTION_FINALIK_IKSOLVER_GETIKROTATIONWEIGHT_OFFSET UNITYSDK_OFFSET(0x85EA930)
#define ROOTMOTION_FINALIK_IKSOLVER_GETIKROTATION_OFFSET UNITYSDK_OFFSET(0x85EA920)
#define ROOTMOTION_FINALIK_IKSOLVER_GETROOT_OFFSET UNITYSDK_OFFSET(0x85EA940)
#define ROOTMOTION_FINALIK_IKSOLVER_GET_INITIATED_OFFSET UNITYSDK_OFFSET(0x85EA950)
#define ROOTMOTION_FINALIK_IKSOLVER_HIERARCHYISVALID_OFFSET UNITYSDK_OFFSET(0x85EB070)
#define ROOTMOTION_FINALIK_IKSOLVER_INITIATE_OFFSET UNITYSDK_OFFSET(0x85E8E50)
#define ROOTMOTION_FINALIK_IKSOLVER_ISVALID_OFFSET UNITYSDK_OFFSET(0x85E8FE0)
#define ROOTMOTION_FINALIK_IKSOLVER_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x85EAF70)
#define ROOTMOTION_FINALIK_IKSOLVER_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x85EA970)
#define ROOTMOTION_FINALIK_IKSOLVER_PRESOLVEBONES_OFFSET UNITYSDK_OFFSET(0x85EB200)
#define ROOTMOTION_FINALIK_IKSOLVER_SETIKPOSITIONWEIGHT_OFFSET UNITYSDK_OFFSET(0x85EA8B0)
#define ROOTMOTION_FINALIK_IKSOLVER_SETIKPOSITION_OFFSET UNITYSDK_OFFSET(0x85EA890)
#define ROOTMOTION_FINALIK_IKSOLVER_SETIKROTATIONWEIGHT_OFFSET UNITYSDK_OFFSET(0x85EA8F0)
#define ROOTMOTION_FINALIK_IKSOLVER_SETIKROTATION_OFFSET UNITYSDK_OFFSET(0x85EA8E0)
#define ROOTMOTION_FINALIK_IKSOLVER_SET_INITIATED_OFFSET UNITYSDK_OFFSET(0x85EA960)
#define ROOTMOTION_FINALIK_IKSOLVER_UPDATE_OFFSET UNITYSDK_OFFSET(0x85E8D90)
#define ROOTMOTION_FINALIK_IKSOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x85EB740)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolver_TypeDefinitionIndex = 35202;

	class IKSolver : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 IKPosition; // 0x10
		::System::Single IKPositionWeight; // 0x1C
		::System::Single IKRotationWeight; // 0x20
		::UnityEngine::Quaternion IKRotation; // 0x24
		::System::Boolean _initiated_k__BackingField; // 0x34
		::RootMotion::FinalIK::IKSolver_UpdateDelegate* OnPreInitiate; // 0x38
		::RootMotion::FinalIK::IKSolver_UpdateDelegate* OnPostInitiate; // 0x40
		::RootMotion::FinalIK::IKSolver_UpdateDelegate* OnPreUpdate; // 0x48
		::RootMotion::FinalIK::IKSolver_UpdateDelegate* OnPostUpdate; // 0x50
		::System::Boolean firstInitiation; // 0x58
		::UnityEngine::Transform* root; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER__CTOR_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_ISVALID_OFFSET))(this);
		}

		::System::Void Initiate(::UnityEngine::Transform* root)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_INITIATE_OFFSET))(this, root);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_UPDATE_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetIKPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_GETIKPOSITION_OFFSET))(this);
		}

		::System::Void SetIKPosition(::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_SETIKPOSITION_OFFSET))(this, position);
		}

		::System::Single GetIKPositionWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_GETIKPOSITIONWEIGHT_OFFSET))(this);
		}

		::System::Void SetIKPositionWeight(::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_SETIKPOSITIONWEIGHT_OFFSET))(this, weight);
		}

		::System::Void SetIKRotation(::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_SETIKROTATION_OFFSET))(this, rotation);
		}

		::System::Void SetIKRotationWeight(::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_SETIKROTATIONWEIGHT_OFFSET))(this, weight);
		}

		::UnityEngine::Quaternion GetIKRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_GETIKROTATION_OFFSET))(this);
		}

		::System::Single GetIKRotationWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_GETIKROTATIONWEIGHT_OFFSET))(this);
		}

		::UnityEngine::Transform* GetRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_GETROOT_OFFSET))(this);
		}

		::System::Boolean get_initiated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_GET_INITIATED_OFFSET))(this);
		}

		::System::Void set_initiated(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_SET_INITIATED_OFFSET))(this, value);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_ONDRAWGIZMOS_OFFSET))(this);
		}

		::System::Void LogWarning(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_LOGWARNING_OFFSET))(this, message);
		}

		static ::UnityEngine::Transform* ContainsDuplicateBone(::Il2CppArray<::RootMotion::FinalIK::IKSolver_Bone*>* bones)
		{
			return ((::UnityEngine::Transform*(*)(::Il2CppArray<::RootMotion::FinalIK::IKSolver_Bone*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_CONTAINSDUPLICATEBONE_OFFSET))(bones);
		}

		static ::System::Boolean HierarchyIsValid(::Il2CppArray<::RootMotion::FinalIK::IKSolver_Bone*>* bones)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::RootMotion::FinalIK::IKSolver_Bone*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_HIERARCHYISVALID_OFFSET))(bones);
		}

		static ::System::Single PreSolveBones(::Il2CppArray<::RootMotion::FinalIK::IKSolver_Bone*>*& bones)
		{
			return ((::System::Single(*)(::Il2CppArray<::RootMotion::FinalIK::IKSolver_Bone*>*&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_PRESOLVEBONES_OFFSET))(bones);
		}
	};
}
