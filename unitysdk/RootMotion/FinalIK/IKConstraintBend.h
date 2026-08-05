#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion { class Warning_Logger; }
namespace RootMotion::FinalIK { class IKSolverFullBody; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_IKCONSTRAINTBEND_GETDIR_OFFSET UNITYSDK_OFFSET(0x1F425C70)
#define ROOTMOTION_FINALIK_IKCONSTRAINTBEND_GET_INITIATED_OFFSET UNITYSDK_OFFSET(0x1F424A00)
#define ROOTMOTION_FINALIK_IKCONSTRAINTBEND_INITIATE_OFFSET UNITYSDK_OFFSET(0x1F424A80)
#define ROOTMOTION_FINALIK_IKCONSTRAINTBEND_ISVALID_OFFSET UNITYSDK_OFFSET(0x1F4245C0)
#define ROOTMOTION_FINALIK_IKCONSTRAINTBEND_LIMITBEND_OFFSET UNITYSDK_OFFSET(0x1F425520)
#define ROOTMOTION_FINALIK_IKCONSTRAINTBEND_ORTHOTOBONE1_OFFSET UNITYSDK_OFFSET(0x1F425220)
#define ROOTMOTION_FINALIK_IKCONSTRAINTBEND_ORTHOTOLIMB_OFFSET UNITYSDK_OFFSET(0x1F425160)
#define ROOTMOTION_FINALIK_IKCONSTRAINTBEND_SETBONES_OFFSET UNITYSDK_OFFSET(0x1F424A70)
#define ROOTMOTION_FINALIK_IKCONSTRAINTBEND_SETLIMBORIENTATION_OFFSET UNITYSDK_OFFSET(0x1F4252E0)
#define ROOTMOTION_FINALIK_IKCONSTRAINTBEND_SET_INITIATED_OFFSET UNITYSDK_OFFSET(0x1F424A10)
#define ROOTMOTION_FINALIK_IKCONSTRAINTBEND__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F424A40)
#define ROOTMOTION_FINALIK_IKCONSTRAINTBEND__CTOR_OFFSET UNITYSDK_OFFSET(0x1F424A20)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKConstraintBend_TypeDefinitionIndex = 39005;

	class IKConstraintBend : public ::System::Object
	{
	public:
		::UnityEngine::Transform* bone1; // 0x10
		::UnityEngine::Transform* bone2; // 0x18
		::UnityEngine::Transform* bone3; // 0x20
		::UnityEngine::Transform* bendGoal; // 0x28
		::UnityEngine::Vector3 direction; // 0x30
		::UnityEngine::Quaternion rotationOffset; // 0x3C
		::System::Single weight; // 0x4C
		::UnityEngine::Vector3 defaultLocalDirection; // 0x50
		::UnityEngine::Vector3 defaultChildDirection; // 0x5C
		::System::Single clampF; // 0x68
		::System::Int32 chainIndex1; // 0x6C
		::System::Int32 nodeIndex1; // 0x70
		::System::Int32 chainIndex2; // 0x74
		::System::Int32 nodeIndex2; // 0x78
		::System::Int32 chainIndex3; // 0x7C
		::System::Int32 nodeIndex3; // 0x80
		::System::Boolean _initiated_k__BackingField; // 0x84
		::System::Boolean limbOrientationsSet; // 0x85

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKCONSTRAINTBEND__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::UnityEngine::Transform* bone3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKCONSTRAINTBEND__CTOR_1_OFFSET))(this, bone1, bone2, bone3);
		}

		::System::Boolean IsValid(::RootMotion::FinalIK::IKSolverFullBody* solver, ::RootMotion::Warning_Logger* logger)
		{
			return ((::System::Boolean(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBody*, ::RootMotion::Warning_Logger*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKCONSTRAINTBEND_ISVALID_OFFSET))(this, solver, logger);
		}

		::System::Boolean get_initiated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKCONSTRAINTBEND_GET_INITIATED_OFFSET))(this);
		}

		::System::Void set_initiated(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKCONSTRAINTBEND_SET_INITIATED_OFFSET))(this, value);
		}

		::System::Void SetBones(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::UnityEngine::Transform* bone3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKCONSTRAINTBEND_SETBONES_OFFSET))(this, bone1, bone2, bone3);
		}

		::System::Void Initiate(::RootMotion::FinalIK::IKSolverFullBody* solver)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBody*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKCONSTRAINTBEND_INITIATE_OFFSET))(this, solver);
		}

		::System::Void SetLimbOrientation(::UnityEngine::Vector3 upper, ::UnityEngine::Vector3 lower, ::UnityEngine::Vector3 last)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKCONSTRAINTBEND_SETLIMBORIENTATION_OFFSET))(this, upper, lower, last);
		}

		::System::Void LimitBend(::System::Single solverWeight, ::System::Single positionWeight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKCONSTRAINTBEND_LIMITBEND_OFFSET))(this, solverWeight, positionWeight);
		}

		::UnityEngine::Vector3 GetDir(::RootMotion::FinalIK::IKSolverFullBody* solver)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBody*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKCONSTRAINTBEND_GETDIR_OFFSET))(this, solver);
		}

		::UnityEngine::Vector3 OrthoToLimb(::RootMotion::FinalIK::IKSolverFullBody* solver, ::UnityEngine::Vector3 tangent)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBody*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKCONSTRAINTBEND_ORTHOTOLIMB_OFFSET))(this, solver, tangent);
		}

		::UnityEngine::Vector3 OrthoToBone1(::RootMotion::FinalIK::IKSolverFullBody* solver, ::UnityEngine::Vector3 tangent)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBody*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKCONSTRAINTBEND_ORTHOTOBONE1_OFFSET))(this, solver, tangent);
		}
	};
}
