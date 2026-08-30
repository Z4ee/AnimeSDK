#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IKSolver.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class IKSolverTrigonometric_TrigonometricBone; }
namespace RootMotion::FinalIK { class IKSolver_Point; }
namespace RootMotion::FinalIK { class IKSolver_TipPoint; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_FIXTRANSFORMS_OFFSET UNITYSDK_OFFSET(0xB30F470)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_GETBENDDIRECTION_OFFSET UNITYSDK_OFFSET(0xB316FA0)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_GETDIRECTIONTOBENDPOINT_OFFSET UNITYSDK_OFFSET(0xB316A50)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_GETPOINTS_OFFSET UNITYSDK_OFFSET(0xB2FEE00)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_GETPOINT_OFFSET UNITYSDK_OFFSET(0xB316100)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_GETTIPPOINT_OFFSET UNITYSDK_OFFSET(0xB3160F0)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_INITIATEBONES_OFFSET UNITYSDK_OFFSET(0xB316D50)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_ISDIRECTHIERARCHY_OFFSET UNITYSDK_OFFSET(0xB316EC0)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_ISVALID_OFFSET UNITYSDK_OFFSET(0xB30F590)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_ONINITIATEVIRTUAL_OFFSET UNITYSDK_OFFSET(0xB317460)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_ONINITIATE_OFFSET UNITYSDK_OFFSET(0xB30FA60)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_ONPOSTSOLVEVIRTUAL_OFFSET UNITYSDK_OFFSET(0xB317480)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_ONUPDATEVIRTUAL_OFFSET UNITYSDK_OFFSET(0xB317470)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xB30FDC0)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_SETBENDGOALPOSITION_OFFSET UNITYSDK_OFFSET(0xB315CB0)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_SETBENDPLANETOCURRENT_OFFSET UNITYSDK_OFFSET(0xB315EC0)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_SETCHAIN_OFFSET UNITYSDK_OFFSET(0xB3162B0)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_SOLVE_OFFSET UNITYSDK_OFFSET(0xB316390)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_STOREDEFAULTLOCALSTATE_OFFSET UNITYSDK_OFFSET(0xB30FC00)
#define ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC__CTOR_OFFSET UNITYSDK_OFFSET(0xB3158E0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverTrigonometric_TypeDefinitionIndex = 44884;

	class IKSolverTrigonometric : public ::RootMotion::FinalIK::IKSolver
	{
	public:
		::UnityEngine::Transform* target; // 0x68
		::UnityEngine::Vector3 bendNormal; // 0x70
		::RootMotion::FinalIK::IKSolverTrigonometric_TrigonometricBone* bone1; // 0x80
		::RootMotion::FinalIK::IKSolverTrigonometric_TrigonometricBone* bone2; // 0x88
		::RootMotion::FinalIK::IKSolverTrigonometric_TrigonometricBone* bone3; // 0x90
		::RootMotion::FinalIK::IKSolver_TipPoint* tipPoint; // 0x98
		::UnityEngine::Vector3 weightIKPosition; // 0xA0
		::System::Boolean directHierarchy; // 0xAC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC__CTOR_OFFSET))(this);
		}

		::System::Void SetBendGoalPosition(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_SETBENDGOALPOSITION_OFFSET))(this, a1, a2);
		}

		::System::Void SetBendPlaneToCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_SETBENDPLANETOCURRENT_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKSolver_TipPoint* GetTipPoint()
		{
			return ((::RootMotion::FinalIK::IKSolver_TipPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_GETTIPPOINT_OFFSET))(this);
		}

		::Il2CppArray<::RootMotion::FinalIK::IKSolver_Point*>* GetPoints()
		{
			return ((::Il2CppArray<::RootMotion::FinalIK::IKSolver_Point*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_GETPOINTS_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKSolver_Point* GetPoint(::UnityEngine::Transform* a1)
		{
			return ((::RootMotion::FinalIK::IKSolver_Point*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_GETPOINT_OFFSET))(this, a1);
		}

		::System::Void StoreDefaultLocalState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_STOREDEFAULTLOCALSTATE_OFFSET))(this);
		}

		::System::Void FixTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_FIXTRANSFORMS_OFFSET))(this);
		}

		::System::Boolean IsValid(::System::String*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_ISVALID_OFFSET))(this, a1);
		}

		::System::Boolean SetChain(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3, ::UnityEngine::Transform* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_SETCHAIN_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void Solve(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_SOLVE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::UnityEngine::Vector3 GetDirectionToBendPoint(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_GETDIRECTIONTOBENDPOINT_OFFSET))(a1, a2, a3, a4, a5);
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

		::UnityEngine::Vector3 GetBendDirection(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERTRIGONOMETRIC_GETBENDDIRECTION_OFFSET))(this, a1, a2);
		}
	};
}
