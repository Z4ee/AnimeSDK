#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class IKSolver_Bone; }
namespace RootMotion::FinalIK { class IKSolver_Point; }
namespace RootMotion::FinalIK { class IKSolver_UpdateDelegate; }
namespace RootMotion::FinalIK { class RotationLookAt; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_IKSOLVER_CONTAINSDUPLICATEBONE_OFFSET UNITYSDK_OFFSET(0x1BE17170)
#define ROOTMOTION_FINALIK_IKSOLVER_GETIKPOSITIONWEIGHT_OFFSET UNITYSDK_OFFSET(0x1BE17090)
#define ROOTMOTION_FINALIK_IKSOLVER_GETIKPOSITION_OFFSET UNITYSDK_OFFSET(0x1BE17060)
#define ROOTMOTION_FINALIK_IKSOLVER_GETROOT_OFFSET UNITYSDK_OFFSET(0x1BE170D0)
#define ROOTMOTION_FINALIK_IKSOLVER_GET_INITIATED_OFFSET UNITYSDK_OFFSET(0x1BE170E0)
#define ROOTMOTION_FINALIK_IKSOLVER_HIERARCHYISVALID_OFFSET UNITYSDK_OFFSET(0x1BE172D0)
#define ROOTMOTION_FINALIK_IKSOLVER_INITIATE_OFFSET UNITYSDK_OFFSET(0x1BE16DC0)
#define ROOTMOTION_FINALIK_IKSOLVER_ISVALID_OFFSET UNITYSDK_OFFSET(0x1BE16D90)
#define ROOTMOTION_FINALIK_IKSOLVER_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x1BE17100)
#define ROOTMOTION_FINALIK_IKSOLVER_PRESOLVEBONES_OFFSET UNITYSDK_OFFSET(0x1BE17370)
#define ROOTMOTION_FINALIK_IKSOLVER_SETIKPOSITIONWEIGHT_OFFSET UNITYSDK_OFFSET(0x1BE170A0)
#define ROOTMOTION_FINALIK_IKSOLVER_SETIKPOSITION_OFFSET UNITYSDK_OFFSET(0x1BE17080)
#define ROOTMOTION_FINALIK_IKSOLVER_SET_INITIATED_OFFSET UNITYSDK_OFFSET(0x1BE170F0)
#define ROOTMOTION_FINALIK_IKSOLVER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BE17000)
#define ROOTMOTION_FINALIK_IKSOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE178B0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolver_TypeDefinitionIndex = 36607;

	class IKSolver : public ::System::Object
	{
	public:
		::System::Boolean executedInEditor; // 0x10
		::UnityEngine::Vector3 IKPosition; // 0x14
		::System::Single IKPositionWeight; // 0x20
		::System::Boolean _initiated_k__BackingField; // 0x24
		::RootMotion::FinalIK::IKSolver_UpdateDelegate* OnPreInitiate; // 0x28
		::RootMotion::FinalIK::IKSolver_UpdateDelegate* OnPostInitiate; // 0x30
		::RootMotion::FinalIK::IKSolver_UpdateDelegate* OnPreUpdate; // 0x38
		::RootMotion::FinalIK::IKSolver_UpdateDelegate* OnPostUpdate; // 0x40
		::System::Boolean firstInitiation; // 0x48
		::UnityEngine::Transform* root; // 0x50
		::Il2CppArray<::RootMotion::FinalIK::RotationLookAt*>* rotationLookAts; // 0x58

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
