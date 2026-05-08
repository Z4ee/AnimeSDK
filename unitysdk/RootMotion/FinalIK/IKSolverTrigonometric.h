#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IKSolver.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class IKSolverTrigonometric_TrigonometricBone; }
namespace RootMotion::FinalIK { class IKSolver_Point; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_FIXTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1C3A0ED0)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_GETBENDDIRECTION_OFFSET UNITYSDK_OFFSET(0x1C3A32A0)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_GETDIRECTIONTOBENDPOINT_OFFSET UNITYSDK_OFFSET(0x1C3A1EA0)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_GETIKROTATIONWEIGHT_OFFSET UNITYSDK_OFFSET(0x1C3A0A00)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_GETIKROTATION_OFFSET UNITYSDK_OFFSET(0x1C3A09F0)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_GETPOINTS_OFFSET UNITYSDK_OFFSET(0x1C3A0A10)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_GETPOINT_OFFSET UNITYSDK_OFFSET(0x1C3A0BE0)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_INITIATEBONES_OFFSET UNITYSDK_OFFSET(0x1C3A22E0)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_ISDIRECTHIERARCHY_OFFSET UNITYSDK_OFFSET(0x1C3A2450)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_ISVALID_OFFSET UNITYSDK_OFFSET(0x1C3A0F30)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_ONINITIATEVIRTUAL_OFFSET UNITYSDK_OFFSET(0x1C3A3670)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_ONINITIATE_OFFSET UNITYSDK_OFFSET(0x1C3A21A0)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_ONPOSTSOLVEVIRTUAL_OFFSET UNITYSDK_OFFSET(0x1C3A3690)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_ONUPDATEVIRTUAL_OFFSET UNITYSDK_OFFSET(0x1C3A3680)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1C3A2570)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_SETBENDGOALPOSITION_OFFSET UNITYSDK_OFFSET(0x1C3A0570)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_SETBENDPLANETOCURRENT_OFFSET UNITYSDK_OFFSET(0x1C3A0780)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_SETCHAIN_OFFSET UNITYSDK_OFFSET(0x1C3A1780)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_SETIKROTATIONWEIGHT_OFFSET UNITYSDK_OFFSET(0x1C3A09C0)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_SETIKROTATION_OFFSET UNITYSDK_OFFSET(0x1C3A09B0)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_SOLVE_OFFSET UNITYSDK_OFFSET(0x1C3A17E0)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_STOREDEFAULTLOCALSTATE_OFFSET UNITYSDK_OFFSET(0x1C3A0D10)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3A36A0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverTrigonometric_TypeDefinitionIndex = 36632;

	class IKSolverTrigonometric : public ::RootMotion::FinalIK::IKSolver
	{
	public:
		::UnityEngine::Transform* target; // 0x60
		::System::Single IKRotationWeight; // 0x68
		::UnityEngine::Quaternion IKRotation; // 0x6C
		::UnityEngine::Vector3 bendNormal; // 0x7C
		::RootMotion::FinalIK::IKSolverTrigonometric_TrigonometricBone* bone1; // 0x88
		::RootMotion::FinalIK::IKSolverTrigonometric_TrigonometricBone* bone2; // 0x90
		::RootMotion::FinalIK::IKSolverTrigonometric_TrigonometricBone* bone3; // 0x98
		::UnityEngine::Vector3 weightIKPosition; // 0xA0
		::System::Boolean directHierarchy; // 0xAC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC__CTOR_OFFSET))(this);
		}

		::System::Void SetBendGoalPosition(::UnityEngine::Vector3 goalPosition, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_SETBENDGOALPOSITION_OFFSET))(this, goalPosition, weight);
		}

		::System::Void SetBendPlaneToCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_SETBENDPLANETOCURRENT_OFFSET))(this);
		}

		::System::Void SetIKRotation(::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_SETIKROTATION_OFFSET))(this, rotation);
		}

		::System::Void SetIKRotationWeight(::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_SETIKROTATIONWEIGHT_OFFSET))(this, weight);
		}

		::UnityEngine::Quaternion GetIKRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_GETIKROTATION_OFFSET))(this);
		}

		::System::Single GetIKRotationWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_GETIKROTATIONWEIGHT_OFFSET))(this);
		}

		::Il2CppArray<::RootMotion::FinalIK::IKSolver_Point*>* GetPoints()
		{
			return ((::Il2CppArray<::RootMotion::FinalIK::IKSolver_Point*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_GETPOINTS_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKSolver_Point* GetPoint(::UnityEngine::Transform* transform)
		{
			return ((::RootMotion::FinalIK::IKSolver_Point*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_GETPOINT_OFFSET))(this, transform);
		}

		::System::Void StoreDefaultLocalState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_STOREDEFAULTLOCALSTATE_OFFSET))(this);
		}

		::System::Void FixTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_FIXTRANSFORMS_OFFSET))(this);
		}

		::System::Boolean IsValid(::System::String*& message)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_ISVALID_OFFSET))(this, message);
		}

		::System::Boolean SetChain(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::UnityEngine::Transform* bone3, ::UnityEngine::Transform* root)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_SETCHAIN_OFFSET))(this, bone1, bone2, bone3, root);
		}

		static ::System::Void Solve(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::UnityEngine::Transform* bone3, ::UnityEngine::Vector3 targetPosition, ::UnityEngine::Vector3 bendNormal, ::System::Single weight)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_SOLVE_OFFSET))(bone1, bone2, bone3, targetPosition, bendNormal, weight);
		}

		static ::UnityEngine::Vector3 GetDirectionToBendPoint(::UnityEngine::Vector3 direction, ::System::Single directionMag, ::UnityEngine::Vector3 bendDirection, ::System::Single sqrMag1, ::System::Single sqrMag2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_GETDIRECTIONTOBENDPOINT_OFFSET))(direction, directionMag, bendDirection, sqrMag1, sqrMag2);
		}

		::System::Void OnInitiate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_ONINITIATE_OFFSET))(this);
		}

		::System::Boolean IsDirectHierarchy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_ISDIRECTHIERARCHY_OFFSET))(this);
		}

		::System::Void InitiateBones()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_INITIATEBONES_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnInitiateVirtual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_ONINITIATEVIRTUAL_OFFSET))(this);
		}

		::System::Void OnUpdateVirtual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_ONUPDATEVIRTUAL_OFFSET))(this);
		}

		::System::Void OnPostSolveVirtual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_ONPOSTSOLVEVIRTUAL_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetBendDirection(::UnityEngine::Vector3 IKPosition, ::UnityEngine::Vector3 bendNormal)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_GETBENDDIRECTION_OFFSET))(this, IKPosition, bendNormal);
		}
	};
}
