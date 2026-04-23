#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animation; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_SOLVERMANAGER_DISABLE_OFFSET UNITYSDK_OFFSET(0x8E50590)
#define ROOTMOTION_SOLVERMANAGER_FINDANIMATORRECURSIVE_OFFSET UNITYSDK_OFFSET(0x8E506F0)
#define ROOTMOTION_SOLVERMANAGER_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x8E50A00)
#define ROOTMOTION_SOLVERMANAGER_FIXTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x8E505C0)
#define ROOTMOTION_SOLVERMANAGER_GET_ANIMATEPHYSICS_OFFSET UNITYSDK_OFFSET(0x8E506A0)
#define ROOTMOTION_SOLVERMANAGER_GET_ISANIMATED_OFFSET UNITYSDK_OFFSET(0x8E509D0)
#define ROOTMOTION_SOLVERMANAGER_IKUPDATE_OFFSET UNITYSDK_OFFSET(0x8E50B00)
#define ROOTMOTION_SOLVERMANAGER_INITIATESOLVER_OFFSET UNITYSDK_OFFSET(0x8E505A0)
#define ROOTMOTION_SOLVERMANAGER_INITIATE_OFFSET UNITYSDK_OFFSET(0x8E50620)
#define ROOTMOTION_SOLVERMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x8E50A80)
#define ROOTMOTION_SOLVERMANAGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x8E505D0)
#define ROOTMOTION_SOLVERMANAGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x8E50950)
#define ROOTMOTION_SOLVERMANAGER_START_OFFSET UNITYSDK_OFFSET(0x8E50660)
#define ROOTMOTION_SOLVERMANAGER_UPDATESOLVEREXTERNAL_OFFSET UNITYSDK_OFFSET(0x8E50B80)
#define ROOTMOTION_SOLVERMANAGER_UPDATESOLVER_OFFSET UNITYSDK_OFFSET(0x8E505B0)
#define ROOTMOTION_SOLVERMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x8E50960)
#define ROOTMOTION_SOLVERMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x8E50BC0)

namespace RootMotion
{
	inline static constexpr unsigned int SolverManager_TypeDefinitionIndex = 40994;

	class SolverManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean manualUpdate; // 0x18
		::System::Boolean fixTransforms; // 0x19
		::UnityEngine::Animator* animator; // 0x20
		::UnityEngine::Animation* legacy; // 0x28
		::System::Boolean updateFrame; // 0x30
		::System::Boolean componentInitiated; // 0x31
		::System::Boolean skipSolverUpdate; // 0x32
		::System::Boolean enableSolverUpdate; // 0x33

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_SOLVERMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Disable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_SOLVERMANAGER_DISABLE_OFFSET))(this);
		}

		::System::Void InitiateSolver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_SOLVERMANAGER_INITIATESOLVER_OFFSET))(this);
		}

		::System::Void UpdateSolver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_SOLVERMANAGER_UPDATESOLVER_OFFSET))(this);
		}

		::System::Void FixTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_SOLVERMANAGER_FIXTRANSFORMS_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_SOLVERMANAGER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_SOLVERMANAGER_START_OFFSET))(this);
		}

		::System::Boolean get_animatePhysics()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_SOLVERMANAGER_GET_ANIMATEPHYSICS_OFFSET))(this);
		}

		::System::Void Initiate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_SOLVERMANAGER_INITIATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_SOLVERMANAGER_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_SOLVERMANAGER_UPDATE_OFFSET))(this);
		}

		::System::Void FindAnimatorRecursive(::UnityEngine::Transform* t, ::System::Boolean findInChildren)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_SOLVERMANAGER_FINDANIMATORRECURSIVE_OFFSET))(this, t, findInChildren);
		}

		::System::Boolean get_isAnimated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_SOLVERMANAGER_GET_ISANIMATED_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_SOLVERMANAGER_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_SOLVERMANAGER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void IKUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_SOLVERMANAGER_IKUPDATE_OFFSET))(this);
		}

		::System::Void UpdateSolverExternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_SOLVERMANAGER_UPDATESOLVEREXTERNAL_OFFSET))(this);
		}
	};
}
