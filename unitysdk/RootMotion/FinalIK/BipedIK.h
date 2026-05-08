#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/SolverManager.h"
#include "unitysdk/UnityEngine/AvatarIKGoal.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion { class BipedReferences; }
namespace RootMotion::FinalIK { class BipedIKSolvers; }
namespace RootMotion::FinalIK { class IKSolverLimb; }
namespace System { class String; }

#define ROOTMOTION_FINALIK_BIPEDIK_ASTHREAD_OFFSET UNITYSDK_OFFSET(0x1BB2A6A0)
#define ROOTMOTION_FINALIK_BIPEDIK_FIXTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1BB2B6E0)
#define ROOTMOTION_FINALIK_BIPEDIK_GETGOALIK_OFFSET UNITYSDK_OFFSET(0x1BB2A790)
#define ROOTMOTION_FINALIK_BIPEDIK_GETIKPOSITIONWEIGHT_OFFSET UNITYSDK_OFFSET(0x1BB2A6F0)
#define ROOTMOTION_FINALIK_BIPEDIK_GETIKPOSITION_OFFSET UNITYSDK_OFFSET(0x1BB2AB70)
#define ROOTMOTION_FINALIK_BIPEDIK_GETIKROTATIONWEIGHT_OFFSET UNITYSDK_OFFSET(0x1BB2A830)
#define ROOTMOTION_FINALIK_BIPEDIK_GETIKROTATION_OFFSET UNITYSDK_OFFSET(0x1BB2AC10)
#define ROOTMOTION_FINALIK_BIPEDIK_INITIATEBIPEDIK_OFFSET UNITYSDK_OFFSET(0x1BB2AEC0)
#define ROOTMOTION_FINALIK_BIPEDIK_INITIATESOLVER_OFFSET UNITYSDK_OFFSET(0x1BB2AED0)
#define ROOTMOTION_FINALIK_BIPEDIK_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x1BB2B7F0)
#define ROOTMOTION_FINALIK_BIPEDIK_OPENSCRIPTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1BB2A600)
#define ROOTMOTION_FINALIK_BIPEDIK_OPENUSERMANUAL_OFFSET UNITYSDK_OFFSET(0x1BB2A5B0)
#define ROOTMOTION_FINALIK_BIPEDIK_SETIKPOSITIONWEIGHT_OFFSET UNITYSDK_OFFSET(0x1BB2A8D0)
#define ROOTMOTION_FINALIK_BIPEDIK_SETIKPOSITION_OFFSET UNITYSDK_OFFSET(0x1BB2AA30)
#define ROOTMOTION_FINALIK_BIPEDIK_SETIKROTATIONWEIGHT_OFFSET UNITYSDK_OFFSET(0x1BB2A980)
#define ROOTMOTION_FINALIK_BIPEDIK_SETIKROTATION_OFFSET UNITYSDK_OFFSET(0x1BB2AAD0)
#define ROOTMOTION_FINALIK_BIPEDIK_SETLOOKATPOSITION_OFFSET UNITYSDK_OFFSET(0x1BB2ADF0)
#define ROOTMOTION_FINALIK_BIPEDIK_SETLOOKATWEIGHT_OFFSET UNITYSDK_OFFSET(0x1BB2ACB0)
#define ROOTMOTION_FINALIK_BIPEDIK_SETSPINEPOSITION_OFFSET UNITYSDK_OFFSET(0x1BB2AE30)
#define ROOTMOTION_FINALIK_BIPEDIK_SETSPINEWEIGHT_OFFSET UNITYSDK_OFFSET(0x1BB2AE70)
#define ROOTMOTION_FINALIK_BIPEDIK_SETTODEFAULTS_OFFSET UNITYSDK_OFFSET(0x1BB2B590)
#define ROOTMOTION_FINALIK_BIPEDIK_SUPPORTGROUP_OFFSET UNITYSDK_OFFSET(0x1BB2A650)
#define ROOTMOTION_FINALIK_BIPEDIK_UPDATEBIPEDIK_OFFSET UNITYSDK_OFFSET(0x1BB2B160)
#define ROOTMOTION_FINALIK_BIPEDIK_UPDATESOLVER_OFFSET UNITYSDK_OFFSET(0x1BB2B170)
#define ROOTMOTION_FINALIK_BIPEDIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB2B870)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int BipedIK_TypeDefinitionIndex = 36550;

	class BipedIK : public ::RootMotion::SolverManager
	{
	public:
		::RootMotion::BipedReferences* references; // 0x48
		::RootMotion::FinalIK::BipedIKSolvers* solvers; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_BIPEDIK__CTOR_OFFSET))(this);
		}

		::System::Void OpenUserManual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_BIPEDIK_OPENUSERMANUAL_OFFSET))(this);
		}

		::System::Void OpenScriptReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_BIPEDIK_OPENSCRIPTREFERENCE_OFFSET))(this);
		}

		::System::Void SupportGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_BIPEDIK_SUPPORTGROUP_OFFSET))(this);
		}

		::System::Void ASThread()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_BIPEDIK_ASTHREAD_OFFSET))(this);
		}

		::System::Single GetIKPositionWeight(::UnityEngine::AvatarIKGoal goal)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AvatarIKGoal))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_BIPEDIK_GETIKPOSITIONWEIGHT_OFFSET))(this, goal);
		}

		::System::Single GetIKRotationWeight(::UnityEngine::AvatarIKGoal goal)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AvatarIKGoal))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_BIPEDIK_GETIKROTATIONWEIGHT_OFFSET))(this, goal);
		}

		::System::Void SetIKPositionWeight(::UnityEngine::AvatarIKGoal goal, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarIKGoal, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_BIPEDIK_SETIKPOSITIONWEIGHT_OFFSET))(this, goal, weight);
		}

		::System::Void SetIKRotationWeight(::UnityEngine::AvatarIKGoal goal, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarIKGoal, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_BIPEDIK_SETIKROTATIONWEIGHT_OFFSET))(this, goal, weight);
		}

		::System::Void SetIKPosition(::UnityEngine::AvatarIKGoal goal, ::UnityEngine::Vector3 IKPosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarIKGoal, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_BIPEDIK_SETIKPOSITION_OFFSET))(this, goal, IKPosition);
		}

		::System::Void SetIKRotation(::UnityEngine::AvatarIKGoal goal, ::UnityEngine::Quaternion IKRotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarIKGoal, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_BIPEDIK_SETIKROTATION_OFFSET))(this, goal, IKRotation);
		}

		::UnityEngine::Vector3 GetIKPosition(::UnityEngine::AvatarIKGoal goal)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::AvatarIKGoal))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_BIPEDIK_GETIKPOSITION_OFFSET))(this, goal);
		}

		::UnityEngine::Quaternion GetIKRotation(::UnityEngine::AvatarIKGoal goal)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::AvatarIKGoal))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_BIPEDIK_GETIKROTATION_OFFSET))(this, goal);
		}

		::System::Void SetLookAtWeight(::System::Single weight, ::System::Single bodyWeight, ::System::Single headWeight, ::System::Single eyesWeight, ::System::Single clampWeight, ::System::Single clampWeightHead, ::System::Single clampWeightEyes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_BIPEDIK_SETLOOKATWEIGHT_OFFSET))(this, weight, bodyWeight, headWeight, eyesWeight, clampWeight, clampWeightHead, clampWeightEyes);
		}

		::System::Void SetLookAtPosition(::UnityEngine::Vector3 lookAtPosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_BIPEDIK_SETLOOKATPOSITION_OFFSET))(this, lookAtPosition);
		}

		::System::Void SetSpinePosition(::UnityEngine::Vector3 spinePosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_BIPEDIK_SETSPINEPOSITION_OFFSET))(this, spinePosition);
		}

		::System::Void SetSpineWeight(::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_BIPEDIK_SETSPINEWEIGHT_OFFSET))(this, weight);
		}

		::RootMotion::FinalIK::IKSolverLimb* GetGoalIK(::UnityEngine::AvatarIKGoal goal)
		{
			return ((::RootMotion::FinalIK::IKSolverLimb*(*)(::PVOID, ::UnityEngine::AvatarIKGoal))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_BIPEDIK_GETGOALIK_OFFSET))(this, goal);
		}

		::System::Void InitiateBipedIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_BIPEDIK_INITIATEBIPEDIK_OFFSET))(this);
		}

		::System::Void UpdateBipedIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_BIPEDIK_UPDATEBIPEDIK_OFFSET))(this);
		}

		::System::Void SetToDefaults()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_BIPEDIK_SETTODEFAULTS_OFFSET))(this);
		}

		::System::Void FixTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_BIPEDIK_FIXTRANSFORMS_OFFSET))(this);
		}

		::System::Void InitiateSolver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_BIPEDIK_INITIATESOLVER_OFFSET))(this);
		}

		::System::Void UpdateSolver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_BIPEDIK_UPDATESOLVER_OFFSET))(this);
		}

		::System::Void LogWarning(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_BIPEDIK_LOGWARNING_OFFSET))(this, message);
		}
	};
}
