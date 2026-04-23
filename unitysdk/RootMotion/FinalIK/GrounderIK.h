#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/Grounder.h"
#include "unitysdk/RootMotion/FinalIK/GrounderIKThreadSolver.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class IK; }
namespace RootMotion::IKJob { class IKThreadProxyContext; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_GROUNDERIK_COLLECTTHREADDATA_OFFSET UNITYSDK_OFFSET(0x8E0BD50)
#define ROOTMOTION_FINALIK_GROUNDERIK_COPYRUNTIMEDATATO_OFFSET UNITYSDK_OFFSET(0x8E0D3E0)
#define ROOTMOTION_FINALIK_GROUNDERIK_FLUSHTHREADDATA_OFFSET UNITYSDK_OFFSET(0x8E0CF00)
#define ROOTMOTION_FINALIK_GROUNDERIK_GETREFERENCETRANSFORMS_OFFSET UNITYSDK_OFFSET(0x8E0BA30)
#define ROOTMOTION_FINALIK_GROUNDERIK_GET_ISIKUPDATEENABLED_OFFSET UNITYSDK_OFFSET(0x8E0B280)
#define ROOTMOTION_FINALIK_GROUNDERIK_GET_PELVISSOLVEDOFFSET_OFFSET UNITYSDK_OFFSET(0x8E0B220)
#define ROOTMOTION_FINALIK_GROUNDERIK_INITIATE_OFFSET UNITYSDK_OFFSET(0x8E0EB20)
#define ROOTMOTION_FINALIK_GROUNDERIK_ISREADYTOINITIATE_OFFSET UNITYSDK_OFFSET(0x8E0D8B0)
#define ROOTMOTION_FINALIK_GROUNDERIK_MANUALUPDATE_OFFSET UNITYSDK_OFFSET(0x8E0F470)
#define ROOTMOTION_FINALIK_GROUNDERIK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x8E10490)
#define ROOTMOTION_FINALIK_GROUNDERIK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x8E0DD30)
#define ROOTMOTION_FINALIK_GROUNDERIK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x8E0D9E0)
#define ROOTMOTION_FINALIK_GROUNDERIK_ONPOSTSOLVERUPDATE_OFFSET UNITYSDK_OFFSET(0x8E101F0)
#define ROOTMOTION_FINALIK_GROUNDERIK_ONSOLVERUPDATE_OFFSET UNITYSDK_OFFSET(0x8E0F480)
#define ROOTMOTION_FINALIK_GROUNDERIK_ONSTARTIK_OFFSET UNITYSDK_OFFSET(0x8E105F0)
#define ROOTMOTION_FINALIK_GROUNDERIK_ONSTOPIK_OFFSET UNITYSDK_OFFSET(0x8E10630)
#define ROOTMOTION_FINALIK_GROUNDERIK_OPENSCRIPTREFERENCE_OFFSET UNITYSDK_OFFSET(0x8E0B1D0)
#define ROOTMOTION_FINALIK_GROUNDERIK_OPENUSERMANUAL_OFFSET UNITYSDK_OFFSET(0x8E0B180)
#define ROOTMOTION_FINALIK_GROUNDERIK_REFRESH_OFFSET UNITYSDK_OFFSET(0x8E0B2A0)
#define ROOTMOTION_FINALIK_GROUNDERIK_RESETPOSITIONIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x8E0B850)
#define ROOTMOTION_FINALIK_GROUNDERIK_RESETPOSITION_OFFSET UNITYSDK_OFFSET(0x8E0B390)
#define ROOTMOTION_FINALIK_GROUNDERIK_RESETSOLVERPOSITION_OFFSET UNITYSDK_OFFSET(0x8E0B6B0)
#define ROOTMOTION_FINALIK_GROUNDERIK_SAFEINIT_OFFSET UNITYSDK_OFFSET(0x8E0D980)
#define ROOTMOTION_FINALIK_GROUNDERIK_SETLEGIK_OFFSET UNITYSDK_OFFSET(0x8E10020)
#define ROOTMOTION_FINALIK_GROUNDERIK_START_OFFSET UNITYSDK_OFFSET(0x8E0D910)
#define ROOTMOTION_FINALIK_GROUNDERIK_UPDATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x8E0DE70)
#define ROOTMOTION_FINALIK_GROUNDERIK_UPDATE_OFFSET UNITYSDK_OFFSET(0x8E0DE40)
#define ROOTMOTION_FINALIK_GROUNDERIK__CTOR_OFFSET UNITYSDK_OFFSET(0x8E10670)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int GrounderIK_TypeDefinitionIndex = 41009;

	class GrounderIK : public ::RootMotion::FinalIK::Grounder
	{
	public:
		::System::Boolean drawDebugGizmos; // 0x38
		::Il2CppArray<::RootMotion::FinalIK::IK*>* legs; // 0x40
		::UnityEngine::Transform* pelvis; // 0x48
		::UnityEngine::Transform* characterRoot; // 0x50
		::System::Single rootRotationWeight; // 0x58
		::System::Single rootRotationSpeed; // 0x5C
		::System::Single maxRootRotationAngle; // 0x60
		::System::Single BlendInTime; // 0x64
		::System::Single BlendOutTime; // 0x68
		::System::Single AdditiveWeight; // 0x6C
		::Il2CppArray<::UnityEngine::Transform*>* feet; // 0x70
		::Il2CppArray<::UnityEngine::Quaternion>* footRotations; // 0x78
		::UnityEngine::Vector3 animatedPelvisLocalPosition; // 0x80
		::UnityEngine::Vector3 solvedPelvisLocalPosition; // 0x8C
		::System::Int32 solvedFeet; // 0x98
		::System::Boolean solved; // 0x9C
		::System::Boolean lastIKUpdateEnabled; // 0x9D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK__CTOR_OFFSET))(this);
		}

		::System::Void OpenUserManual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_OPENUSERMANUAL_OFFSET))(this);
		}

		::System::Void OpenScriptReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_OPENSCRIPTREFERENCE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_PelvisSolvedOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_GET_PELVISSOLVEDOFFSET_OFFSET))(this);
		}

		::System::Boolean get_IsIKUpdateEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_GET_ISIKUPDATEENABLED_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_REFRESH_OFFSET))(this);
		}

		::System::Void ResetPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_RESETPOSITION_OFFSET))(this);
		}

		::System::Void ResetSolverPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_RESETSOLVERPOSITION_OFFSET))(this);
		}

		::System::Void ResetPositionImmediately(::UnityEngine::Vector3 deltaMove)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_RESETPOSITIONIMMEDIATELY_OFFSET))(this, deltaMove);
		}

		::System::Void GetReferenceTransforms(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* transforms)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_GETREFERENCETRANSFORMS_OFFSET))(this, transforms);
		}

		::System::Void CollectThreadData(::RootMotion::IKJob::IKThreadProxyContext* context, ::RootMotion::FinalIK::GrounderIKThreadSolver& data)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKThreadProxyContext*, ::RootMotion::FinalIK::GrounderIKThreadSolver&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_COLLECTTHREADDATA_OFFSET))(this, context, data);
		}

		::System::Void FlushThreadData(::RootMotion::IKJob::IKThreadProxyContext* context, ::RootMotion::FinalIK::GrounderIKThreadSolver& data)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKThreadProxyContext*, ::RootMotion::FinalIK::GrounderIKThreadSolver&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_FLUSHTHREADDATA_OFFSET))(this, context, data);
		}

		::System::Void CopyRuntimeDataTo(::RootMotion::FinalIK::GrounderIK* other)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::GrounderIK*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_COPYRUNTIMEDATATO_OFFSET))(this, other);
		}

		::System::Boolean IsReadyToInitiate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_ISREADYTOINITIATE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateInternal(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_UPDATEINTERNAL_OFFSET))(this, deltaTime);
		}

		::System::Void Initiate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_INITIATE_OFFSET))(this);
		}

		::System::Void SafeInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_SAFEINIT_OFFSET))(this);
		}

		::System::Void ManualUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_MANUALUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnSolverUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_ONSOLVERUPDATE_OFFSET))(this);
		}

		::System::Void SetLegIK(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_SETLEGIK_OFFSET))(this, index);
		}

		::System::Void OnPostSolverUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_ONPOSTSOLVERUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_ONDESTROY_OFFSET))(this);
		}

		::System::Collections::IEnumerator* OnStartIK()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_ONSTARTIK_OFFSET))(this);
		}

		::System::Collections::IEnumerator* OnStopIK()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_ONSTOPIK_OFFSET))(this);
		}
	};
}
