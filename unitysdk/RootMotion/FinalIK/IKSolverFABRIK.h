#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IKSolverHeuristic.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class IKSolver_IterationDelegate; }

#define ROOTMOTION_FINALIK_IKSOLVERFABRIK_BACKWARDREACHLIMITED_OFFSET UNITYSDK_OFFSET(0x1BE1C1E0)
#define ROOTMOTION_FINALIK_IKSOLVERFABRIK_BACKWARDREACHUNLIMITED_OFFSET UNITYSDK_OFFSET(0x1BE1CCF0)
#define ROOTMOTION_FINALIK_IKSOLVERFABRIK_BACKWARDREACH_OFFSET UNITYSDK_OFFSET(0x1BE18640)
#define ROOTMOTION_FINALIK_IKSOLVERFABRIK_FORWARDREACH_OFFSET UNITYSDK_OFFSET(0x1BE18220)
#define ROOTMOTION_FINALIK_IKSOLVERFABRIK_GETIKPOSITION_OFFSET UNITYSDK_OFFSET(0x1BE186E0)
#define ROOTMOTION_FINALIK_IKSOLVERFABRIK_GETLIMITEDROTATION_OFFSET UNITYSDK_OFFSET(0x1BE1BF90)
#define ROOTMOTION_FINALIK_IKSOLVERFABRIK_GETPARENTSOLVERPOSITION_OFFSET UNITYSDK_OFFSET(0x1BE19B60)
#define ROOTMOTION_FINALIK_IKSOLVERFABRIK_GETPARENTSOLVERROTATION_OFFSET UNITYSDK_OFFSET(0x1BE19910)
#define ROOTMOTION_FINALIK_IKSOLVERFABRIK_GET_BONELENGTHCANBEZERO_OFFSET UNITYSDK_OFFSET(0x1BE1AB10)
#define ROOTMOTION_FINALIK_IKSOLVERFABRIK_LIMITFORWARD_OFFSET UNITYSDK_OFFSET(0x1BE1AF20)
#define ROOTMOTION_FINALIK_IKSOLVERFABRIK_MAPTOSOLVERPOSITIONSLIMITED_OFFSET UNITYSDK_OFFSET(0x1BE1AE00)
#define ROOTMOTION_FINALIK_IKSOLVERFABRIK_MAPTOSOLVERPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1BE1AC20)
#define ROOTMOTION_FINALIK_IKSOLVERFABRIK_ONINITIATE_OFFSET UNITYSDK_OFFSET(0x1BE18870)
#define ROOTMOTION_FINALIK_IKSOLVERFABRIK_ONPOSTSOLVE_OFFSET UNITYSDK_OFFSET(0x1BE18690)
#define ROOTMOTION_FINALIK_IKSOLVERFABRIK_ONPRESOLVE_OFFSET UNITYSDK_OFFSET(0x1BE17990)
#define ROOTMOTION_FINALIK_IKSOLVERFABRIK_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1BE19DF0)
#define ROOTMOTION_FINALIK_IKSOLVERFABRIK_SOLVEBACKWARD_OFFSET UNITYSDK_OFFSET(0x1BE18510)
#define ROOTMOTION_FINALIK_IKSOLVERFABRIK_SOLVEFORWARD_OFFSET UNITYSDK_OFFSET(0x1BE178C0)
#define ROOTMOTION_FINALIK_IKSOLVERFABRIK_SOLVEJOINT_OFFSET UNITYSDK_OFFSET(0x1BE1AB20)
#define ROOTMOTION_FINALIK_IKSOLVERFABRIK_SOLVERMOVECHILDRENAROUNDPOINT_OFFSET UNITYSDK_OFFSET(0x1BE1BD60)
#define ROOTMOTION_FINALIK_IKSOLVERFABRIK_SOLVERMOVE_OFFSET UNITYSDK_OFFSET(0x1BE1B9D0)
#define ROOTMOTION_FINALIK_IKSOLVERFABRIK_SOLVERROTATECHILDREN_OFFSET UNITYSDK_OFFSET(0x1BE1BC30)
#define ROOTMOTION_FINALIK_IKSOLVERFABRIK_SOLVERROTATE_OFFSET UNITYSDK_OFFSET(0x1BE1BA50)
#define ROOTMOTION_FINALIK_IKSOLVERFABRIK_SOLVE_OFFSET UNITYSDK_OFFSET(0x1BE1AA10)
#define ROOTMOTION_FINALIK_IKSOLVERFABRIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE1CEF0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverFABRIK_TypeDefinitionIndex = 36616;

	class IKSolverFABRIK : public ::RootMotion::FinalIK::IKSolverHeuristic
	{
	public:
		::RootMotion::FinalIK::IKSolver_IterationDelegate* OnPreIteration; // 0x90
		::Il2CppArray<::System::Boolean>* limitedBones; // 0x98
		::Il2CppArray<::UnityEngine::Vector3>* solverLocalPositions; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFABRIK__CTOR_OFFSET))(this);
		}

		::System::Void SolveForward(::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFABRIK_SOLVEFORWARD_OFFSET))(this, position);
		}

		::System::Void SolveBackward(::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFABRIK_SOLVEBACKWARD_OFFSET))(this, position);
		}

		::UnityEngine::Vector3 GetIKPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFABRIK_GETIKPOSITION_OFFSET))(this);
		}

		::System::Void OnInitiate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFABRIK_ONINITIATE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFABRIK_ONUPDATE_OFFSET))(this);
		}

		::System::Boolean get_boneLengthCanBeZero()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFABRIK_GET_BONELENGTHCANBEZERO_OFFSET))(this);
		}

		::UnityEngine::Vector3 SolveJoint(::UnityEngine::Vector3 pos1, ::UnityEngine::Vector3 pos2, ::System::Single length)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFABRIK_SOLVEJOINT_OFFSET))(this, pos1, pos2, length);
		}

		::System::Void OnPreSolve()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFABRIK_ONPRESOLVE_OFFSET))(this);
		}

		::System::Void OnPostSolve()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFABRIK_ONPOSTSOLVE_OFFSET))(this);
		}

		::System::Void Solve(::UnityEngine::Vector3 targetPosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFABRIK_SOLVE_OFFSET))(this, targetPosition);
		}

		::System::Void ForwardReach(::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFABRIK_FORWARDREACH_OFFSET))(this, position);
		}

		::System::Void SolverMove(::System::Int32 index, ::UnityEngine::Vector3 offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFABRIK_SOLVERMOVE_OFFSET))(this, index, offset);
		}

		::System::Void SolverRotate(::System::Int32 index, ::UnityEngine::Quaternion rotation, ::System::Boolean recursive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFABRIK_SOLVERROTATE_OFFSET))(this, index, rotation, recursive);
		}

		::System::Void SolverRotateChildren(::System::Int32 index, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFABRIK_SOLVERROTATECHILDREN_OFFSET))(this, index, rotation);
		}

		::System::Void SolverMoveChildrenAroundPoint(::System::Int32 index, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFABRIK_SOLVERMOVECHILDRENAROUNDPOINT_OFFSET))(this, index, rotation);
		}

		::UnityEngine::Quaternion GetParentSolverRotation(::System::Int32 index)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFABRIK_GETPARENTSOLVERROTATION_OFFSET))(this, index);
		}

		::UnityEngine::Vector3 GetParentSolverPosition(::System::Int32 index)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFABRIK_GETPARENTSOLVERPOSITION_OFFSET))(this, index);
		}

		::UnityEngine::Quaternion GetLimitedRotation(::System::Int32 index, ::UnityEngine::Quaternion q, ::System::Boolean& changed)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Int32, ::UnityEngine::Quaternion, ::System::Boolean&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFABRIK_GETLIMITEDROTATION_OFFSET))(this, index, q, changed);
		}

		::System::Void LimitForward(::System::Int32 rotateBone, ::System::Int32 limitBone)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFABRIK_LIMITFORWARD_OFFSET))(this, rotateBone, limitBone);
		}

		::System::Void BackwardReach(::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFABRIK_BACKWARDREACH_OFFSET))(this, position);
		}

		::System::Void BackwardReachUnlimited(::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFABRIK_BACKWARDREACHUNLIMITED_OFFSET))(this, position);
		}

		::System::Void BackwardReachLimited(::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFABRIK_BACKWARDREACHLIMITED_OFFSET))(this, position);
		}

		::System::Void MapToSolverPositions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFABRIK_MAPTOSOLVERPOSITIONS_OFFSET))(this);
		}

		::System::Void MapToSolverPositionsLimited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERFABRIK_MAPTOSOLVERPOSITIONSLIMITED_OFFSET))(this);
		}
	};
}
