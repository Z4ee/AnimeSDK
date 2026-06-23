#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RootMotion { class SolverManager_PostLateUpdateDelegate; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_SOLVERMANAGER_DISABLE_OFFSET UNITYSDK_OFFSET(0x1E0187E0)
#define ROOTMOTION_SOLVERMANAGER_ENBALESOLVERS_OFFSET UNITYSDK_OFFSET(0x1E018880)
#define ROOTMOTION_SOLVERMANAGER_FINDANIMATORRECURSIVE_OFFSET UNITYSDK_OFFSET(0x1E018FF0)
#define ROOTMOTION_SOLVERMANAGER_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1E019CC0)
#define ROOTMOTION_SOLVERMANAGER_FIXTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1E018870)
#define ROOTMOTION_SOLVERMANAGER_GET_ANIMATEPHYSICS_OFFSET UNITYSDK_OFFSET(0x1E018D40)
#define ROOTMOTION_SOLVERMANAGER_GET_ISANIMATED_OFFSET UNITYSDK_OFFSET(0x1E019AB0)
#define ROOTMOTION_SOLVERMANAGER_GET_SHOULDSKIPANIMATORDELAYMODE_OFFSET UNITYSDK_OFFSET(0x1E018780)
#define ROOTMOTION_SOLVERMANAGER_INITIATESOLVER_OFFSET UNITYSDK_OFFSET(0x1E018850)
#define ROOTMOTION_SOLVERMANAGER_INITIATE_OFFSET UNITYSDK_OFFSET(0x1E018AE0)
#define ROOTMOTION_SOLVERMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1E019D10)
#define ROOTMOTION_SOLVERMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1E018C40)
#define ROOTMOTION_SOLVERMANAGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E018A90)
#define ROOTMOTION_SOLVERMANAGER_START_OFFSET UNITYSDK_OFFSET(0x1E018B20)
#define ROOTMOTION_SOLVERMANAGER_UPDATESOLVEREXTERNAL_OFFSET UNITYSDK_OFFSET(0x1E019E10)
#define ROOTMOTION_SOLVERMANAGER_UPDATESOLVER_OFFSET UNITYSDK_OFFSET(0x1E018860)
#define ROOTMOTION_SOLVERMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E019A60)
#define ROOTMOTION_SOLVERMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E019EA0)
#define ROOTMOTION_SOLVERMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E019E50)

namespace RootMotion
{
	inline static constexpr unsigned int SolverManager_TypeDefinitionIndex = 38145;

	class SolverManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::RootMotion::SolverManager*>** StaticGet__solvers()
		{
			return (::System::Collections::Generic::List_1<::RootMotion::SolverManager*>**)Il2CppClass::FromTypeDefinitionIndex(SolverManager_TypeDefinitionIndex)->GetStaticField(0x28E70);
		}
		::System::Boolean fixTransforms; // 0x18
		::UnityEngine::Animator* animator; // 0x20
		::UnityEngine::Animation* legacy; // 0x28
		::System::Boolean updateFrame; // 0x30
		::System::Boolean componentInitiated; // 0x31
		::System::Boolean transformFixed; // 0x32
		::RootMotion::SolverManager_PostLateUpdateDelegate* OnPostIKLateUpdate; // 0x38
		::System::Boolean skipSolverUpdate; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_SOLVERMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ROOTMOTION_SOLVERMANAGER__CCTOR_OFFSET))();
		}

		::System::Boolean get_shouldSkipAnimatorDelayMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_SOLVERMANAGER_GET_SHOULDSKIPANIMATORDELAYMODE_OFFSET))(this);
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

		static ::System::Void EnbaleSolvers(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_SOLVERMANAGER_ENBALESOLVERS_OFFSET))(enable);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_SOLVERMANAGER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_SOLVERMANAGER_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_SOLVERMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean get_animatePhysics()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_SOLVERMANAGER_GET_ANIMATEPHYSICS_OFFSET))(this);
		}

		::System::Void Initiate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_SOLVERMANAGER_INITIATE_OFFSET))(this);
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

		::System::Void UpdateSolverExternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_SOLVERMANAGER_UPDATESOLVEREXTERNAL_OFFSET))(this);
		}
	};
}
