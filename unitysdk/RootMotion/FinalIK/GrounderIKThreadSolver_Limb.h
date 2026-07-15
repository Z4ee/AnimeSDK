#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/GrounderIKThreadSolver_Limb_TrigonometricBone.h"
#include "unitysdk/RootMotion/FinalIK/IKSolverLimb_AxisDirection.h"
#include "unitysdk/RootMotion/FinalIK/IKSolverLimb_BendModifier.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/AvatarIKGoal.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ROOTMOTION_FINALIK_GROUNDERIKTHREADSOLVER_LIMB_GETBENDDIRECTION_OFFSET UNITYSDK_OFFSET(0x39D0510)
#define ROOTMOTION_FINALIK_GROUNDERIKTHREADSOLVER_LIMB_GETMODIFIEDBENDNORMAL_OFFSET UNITYSDK_OFFSET(0x39D0560)
#define ROOTMOTION_FINALIK_GROUNDERIKTHREADSOLVER_LIMB_GET_AXISDIRECTIONS_OFFSET UNITYSDK_OFFSET(0x39D0580)
#define ROOTMOTION_FINALIK_GROUNDERIKTHREADSOLVER_LIMB_MAINTAINBEND_OFFSET UNITYSDK_OFFSET(0x39D05A0)
#define ROOTMOTION_FINALIK_GROUNDERIKTHREADSOLVER_LIMB_ONPOSTUPDATEVIRTUAL_OFFSET UNITYSDK_OFFSET(0x39D0500)
#define ROOTMOTION_FINALIK_GROUNDERIKTHREADSOLVER_LIMB_ONUPDATEVIRTUAL_OFFSET UNITYSDK_OFFSET(0x39D04F0)
#define ROOTMOTION_FINALIK_GROUNDERIKTHREADSOLVER_LIMB_SOLVE_OFFSET UNITYSDK_OFFSET(0x39D04E0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int GrounderIKThreadSolver_Limb_TypeDefinitionIndex = 42676;

	struct alignas(8) GrounderIKThreadSolver_Limb
	{
		::System::Boolean enabled; // 0x10
		::System::Boolean directHierarchy; // 0x11
		::UnityEngine::AvatarIKGoal goal; // 0x14
		::RootMotion::FinalIK::IKSolverLimb_BendModifier bendModifier; // 0x18
		::System::Single maintainRotationWeight; // 0x1C
		::System::Single bendModifierWeight; // 0x20
		::RootMotion::IKJob::IKTransformRef bendGoal; // 0x28
		::System::Boolean useBendGoalForInitialBend; // 0x38
		::System::Boolean useTarget; // 0x39
		::UnityEngine::Vector3 targetPosition; // 0x3C
		::UnityEngine::Quaternion targetRotation; // 0x48
		::UnityEngine::Vector3 bendNormal; // 0x58
		::RootMotion::FinalIK::GrounderIKThreadSolver_Limb_TrigonometricBone bone1; // 0x68
		::RootMotion::FinalIK::GrounderIKThreadSolver_Limb_TrigonometricBone bone2; // 0x98
		::RootMotion::FinalIK::GrounderIKThreadSolver_Limb_TrigonometricBone bone3; // 0xC8
		::System::Boolean maintainBendFor1Frame; // 0xF8
		::System::Boolean maintainRotationFor1Frame; // 0xF9
		::UnityEngine::Quaternion defaultRootRotation; // 0xFC
		::UnityEngine::Quaternion parentDefaultRotation; // 0x10C
		::UnityEngine::Quaternion bone3RotationBeforeSolve; // 0x11C
		::UnityEngine::Quaternion maintainRotation; // 0x12C
		::UnityEngine::Quaternion bone3DefaultRotation; // 0x13C
		::UnityEngine::Vector3 saveBendNormal; // 0x14C
		::UnityEngine::Vector3 animationNormal; // 0x158
		::Il2CppArray<::RootMotion::FinalIK::IKSolverLimb_AxisDirection>* axisDirectionsLeft; // 0x168
		::Il2CppArray<::RootMotion::FinalIK::IKSolverLimb_AxisDirection>* axisDirectionsRight; // 0x170
		::UnityEngine::Vector3 IKPosition; // 0x178
		::UnityEngine::Quaternion IKRotation; // 0x184
		::System::Single IKPositionWeight; // 0x194
		::System::Single IKRotationWeight; // 0x198

		::System::Void Solve()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIKTHREADSOLVER_LIMB_SOLVE_OFFSET))(this);
		}

		::System::Void OnUpdateVirtual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIKTHREADSOLVER_LIMB_ONUPDATEVIRTUAL_OFFSET))(this);
		}

		::System::Void OnPostUpdateVirtual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIKTHREADSOLVER_LIMB_ONPOSTUPDATEVIRTUAL_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetBendDirection(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIKTHREADSOLVER_LIMB_GETBENDDIRECTION_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 GetModifiedBendNormal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIKTHREADSOLVER_LIMB_GETMODIFIEDBENDNORMAL_OFFSET))(this);
		}

		::Il2CppArray<::RootMotion::FinalIK::IKSolverLimb_AxisDirection>* get_AxisDirections()
		{
			return ((::Il2CppArray<::RootMotion::FinalIK::IKSolverLimb_AxisDirection>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIKTHREADSOLVER_LIMB_GET_AXISDIRECTIONS_OFFSET))(this);
		}

		::System::Void MaintainBend()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIKTHREADSOLVER_LIMB_MAINTAINBEND_OFFSET))(this);
		}
	};
}
