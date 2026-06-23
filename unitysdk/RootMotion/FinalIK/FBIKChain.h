#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/FBIKChain_Smoothing.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class FBIKChain_ChildConstraint; }
namespace RootMotion::FinalIK { class IKConstraintBend; }
namespace RootMotion::FinalIK { class IKSolverFullBody; }
namespace RootMotion::FinalIK { class IKSolver_Node; }
namespace RootMotion::FinalIK { class IKSolver_Point; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_FBIKCHAIN_BACKWARDREACH_OFFSET UNITYSDK_OFFSET(0x1E525910)
#define ROOTMOTION_FINALIK_FBIKCHAIN_CALCULATEBONELENGTHS_OFFSET UNITYSDK_OFFSET(0x1E523150)
#define ROOTMOTION_FINALIK_FBIKCHAIN_FORWARDREACH_OFFSET UNITYSDK_OFFSET(0x1E5253B0)
#define ROOTMOTION_FINALIK_FBIKCHAIN_GETDIRTOBENDPOINT_OFFSET UNITYSDK_OFFSET(0x1E524AA0)
#define ROOTMOTION_FINALIK_FBIKCHAIN_GETNODEINDEX_OFFSET UNITYSDK_OFFSET(0x1E522C40)
#define ROOTMOTION_FINALIK_FBIKCHAIN_INITIATE_OFFSET UNITYSDK_OFFSET(0x1E522EA0)
#define ROOTMOTION_FINALIK_FBIKCHAIN_ISVALID_OFFSET UNITYSDK_OFFSET(0x1E522D10)
#define ROOTMOTION_FINALIK_FBIKCHAIN_PUSH_OFFSET UNITYSDK_OFFSET(0x1E524350)
#define ROOTMOTION_FINALIK_FBIKCHAIN_REACH_OFFSET UNITYSDK_OFFSET(0x1E524020)
#define ROOTMOTION_FINALIK_FBIKCHAIN_READPOSE_OFFSET UNITYSDK_OFFSET(0x1E5239A0)
#define ROOTMOTION_FINALIK_FBIKCHAIN_SETNODES_OFFSET UNITYSDK_OFFSET(0x1E522AE0)
#define ROOTMOTION_FINALIK_FBIKCHAIN_SOLVECHILDCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1E525600)
#define ROOTMOTION_FINALIK_FBIKCHAIN_SOLVECONSTRAINTSYSTEMS_OFFSET UNITYSDK_OFFSET(0x1E525BF0)
#define ROOTMOTION_FINALIK_FBIKCHAIN_SOLVEFABRIKJOINT_OFFSET UNITYSDK_OFFSET(0x1E525680)
#define ROOTMOTION_FINALIK_FBIKCHAIN_SOLVELINEARCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1E525DE0)
#define ROOTMOTION_FINALIK_FBIKCHAIN_SOLVETRIGONOMETRIC_OFFSET UNITYSDK_OFFSET(0x1E524730)
#define ROOTMOTION_FINALIK_FBIKCHAIN_STAGE1_OFFSET UNITYSDK_OFFSET(0x1E524D90)
#define ROOTMOTION_FINALIK_FBIKCHAIN_STAGE2_OFFSET UNITYSDK_OFFSET(0x1E525770)
#define ROOTMOTION_FINALIK_FBIKCHAIN__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5229E0)
#define ROOTMOTION_FINALIK_FBIKCHAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E522930)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int FBIKChain_TypeDefinitionIndex = 38303;

	class FBIKChain : public ::System::Object
	{
	public:
		// static const ::System::Single maxLimbLength; // 0x0
		::System::Single pin; // 0x10
		::System::Single pull; // 0x14
		::System::Single push; // 0x18
		::System::Single pushParent; // 0x1C
		::System::Single reach; // 0x20
		::RootMotion::FinalIK::FBIKChain_Smoothing reachSmoothing; // 0x24
		::RootMotion::FinalIK::FBIKChain_Smoothing pushSmoothing; // 0x28
		::Il2CppArray<::RootMotion::FinalIK::IKSolver_Node*>* nodes; // 0x30
		::Il2CppArray<::System::Int32>* children; // 0x38
		::Il2CppArray<::RootMotion::FinalIK::FBIKChain_ChildConstraint*>* childConstraints; // 0x40
		::RootMotion::FinalIK::IKConstraintBend* bendConstraint; // 0x48
		::System::Single rootLength; // 0x50
		::System::Boolean initiated; // 0x54
		::System::Single length; // 0x58
		::System::Single distance; // 0x5C
		::RootMotion::FinalIK::IKSolver_Point* p; // 0x60
		::System::Single reachForce; // 0x68
		::System::Single pullParentSum; // 0x6C
		::Il2CppArray<::System::Single>* crossFades; // 0x70
		::System::Single sqrMag1; // 0x78
		::System::Single sqrMag2; // 0x7C
		::System::Single sqrMagDif; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBIKCHAIN__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Single pin, ::System::Single pull, ::Il2CppArray<::UnityEngine::Transform*>* nodeTransforms)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBIKCHAIN__CTOR_1_OFFSET))(this, pin, pull, nodeTransforms);
		}

		::System::Void SetNodes(::Il2CppArray<::UnityEngine::Transform*>* boneTransforms)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBIKCHAIN_SETNODES_OFFSET))(this, boneTransforms);
		}

		::System::Int32 GetNodeIndex(::UnityEngine::Transform* boneTransform)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBIKCHAIN_GETNODEINDEX_OFFSET))(this, boneTransform);
		}

		::System::Boolean IsValid(::System::String*& message)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBIKCHAIN_ISVALID_OFFSET))(this, message);
		}

		::System::Void Initiate(::RootMotion::FinalIK::IKSolverFullBody* solver)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBody*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBIKCHAIN_INITIATE_OFFSET))(this, solver);
		}

		::System::Void ReadPose(::RootMotion::FinalIK::IKSolverFullBody* solver, ::System::Boolean fullBody)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBody*, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBIKCHAIN_READPOSE_OFFSET))(this, solver, fullBody);
		}

		::System::Void CalculateBoneLengths(::RootMotion::FinalIK::IKSolverFullBody* solver)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBody*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBIKCHAIN_CALCULATEBONELENGTHS_OFFSET))(this, solver);
		}

		::System::Void Reach(::RootMotion::FinalIK::IKSolverFullBody* solver)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBody*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBIKCHAIN_REACH_OFFSET))(this, solver);
		}

		::UnityEngine::Vector3 Push(::RootMotion::FinalIK::IKSolverFullBody* solver)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBody*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBIKCHAIN_PUSH_OFFSET))(this, solver);
		}

		::System::Void SolveTrigonometric(::RootMotion::FinalIK::IKSolverFullBody* solver, ::System::Boolean calculateBendDirection)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBody*, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBIKCHAIN_SOLVETRIGONOMETRIC_OFFSET))(this, solver, calculateBendDirection);
		}

		::System::Void Stage1(::RootMotion::FinalIK::IKSolverFullBody* solver)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBody*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBIKCHAIN_STAGE1_OFFSET))(this, solver);
		}

		::System::Void Stage2(::RootMotion::FinalIK::IKSolverFullBody* solver, ::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBody*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBIKCHAIN_STAGE2_OFFSET))(this, solver, position);
		}

		::System::Void SolveConstraintSystems(::RootMotion::FinalIK::IKSolverFullBody* solver)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBody*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBIKCHAIN_SOLVECONSTRAINTSYSTEMS_OFFSET))(this, solver);
		}

		::UnityEngine::Vector3 SolveFABRIKJoint(::UnityEngine::Vector3 pos1, ::UnityEngine::Vector3 pos2, ::System::Single length)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBIKCHAIN_SOLVEFABRIKJOINT_OFFSET))(this, pos1, pos2, length);
		}

		::UnityEngine::Vector3 GetDirToBendPoint(::UnityEngine::Vector3 direction, ::UnityEngine::Vector3 bendDirection, ::System::Single directionMagnitude)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBIKCHAIN_GETDIRTOBENDPOINT_OFFSET))(this, direction, bendDirection, directionMagnitude);
		}

		::System::Void SolveChildConstraints(::RootMotion::FinalIK::IKSolverFullBody* solver)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBody*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBIKCHAIN_SOLVECHILDCONSTRAINTS_OFFSET))(this, solver);
		}

		::System::Void SolveLinearConstraint(::RootMotion::FinalIK::IKSolver_Node* node1, ::RootMotion::FinalIK::IKSolver_Node* node2, ::System::Single crossFade, ::System::Single distance)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolver_Node*, ::RootMotion::FinalIK::IKSolver_Node*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBIKCHAIN_SOLVELINEARCONSTRAINT_OFFSET))(this, node1, node2, crossFade, distance);
		}

		::System::Void ForwardReach(::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBIKCHAIN_FORWARDREACH_OFFSET))(this, position);
		}

		::System::Void BackwardReach(::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FBIKCHAIN_BACKWARDREACH_OFFSET))(this, position);
		}
	};
}
