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

#define ROOTMOTION_FINALIK_GROUNDERIK_COLLECTTHREADDATA_OFFSET UNITYSDK_OFFSET(0xB2FBEF0)
#define ROOTMOTION_FINALIK_GROUNDERIK_COPYRUNTIMEDATATO_OFFSET UNITYSDK_OFFSET(0xB2FD440)
#define ROOTMOTION_FINALIK_GROUNDERIK_FLUSHTHREADDATA_OFFSET UNITYSDK_OFFSET(0xB2FCEF0)
#define ROOTMOTION_FINALIK_GROUNDERIK_GETREFERENCETRANSFORMS_OFFSET UNITYSDK_OFFSET(0xB2FB8E0)
#define ROOTMOTION_FINALIK_GROUNDERIK_GET_ISIKUPDATEENABLED_OFFSET UNITYSDK_OFFSET(0xB2FB150)
#define ROOTMOTION_FINALIK_GROUNDERIK_GET_PELVISSOLVEDOFFSET_OFFSET UNITYSDK_OFFSET(0xB2FB0F0)
#define ROOTMOTION_FINALIK_GROUNDERIK_INITIATE_OFFSET UNITYSDK_OFFSET(0xB2FEA10)
#define ROOTMOTION_FINALIK_GROUNDERIK_ISREADYTOINITIATE_OFFSET UNITYSDK_OFFSET(0xB2FD830)
#define ROOTMOTION_FINALIK_GROUNDERIK_MANUALUPDATE_OFFSET UNITYSDK_OFFSET(0xB2FF3A0)
#define ROOTMOTION_FINALIK_GROUNDERIK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB3002F0)
#define ROOTMOTION_FINALIK_GROUNDERIK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB2FDC80)
#define ROOTMOTION_FINALIK_GROUNDERIK_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB2FD960)
#define ROOTMOTION_FINALIK_GROUNDERIK_ONPOSTSOLVERUPDATE_OFFSET UNITYSDK_OFFSET(0xB300080)
#define ROOTMOTION_FINALIK_GROUNDERIK_ONSOLVERUPDATE_OFFSET UNITYSDK_OFFSET(0xB2FF3B0)
#define ROOTMOTION_FINALIK_GROUNDERIK_ONSTARTIK_OFFSET UNITYSDK_OFFSET(0xB300470)
#define ROOTMOTION_FINALIK_GROUNDERIK_ONSTOPIK_OFFSET UNITYSDK_OFFSET(0xB3004B0)
#define ROOTMOTION_FINALIK_GROUNDERIK_OPENSCRIPTREFERENCE_OFFSET UNITYSDK_OFFSET(0xB2FB0A0)
#define ROOTMOTION_FINALIK_GROUNDERIK_OPENUSERMANUAL_OFFSET UNITYSDK_OFFSET(0xB2FB050)
#define ROOTMOTION_FINALIK_GROUNDERIK_REFRESH_OFFSET UNITYSDK_OFFSET(0xB2FB170)
#define ROOTMOTION_FINALIK_GROUNDERIK_RESETPOSITIONIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xB2FB700)
#define ROOTMOTION_FINALIK_GROUNDERIK_RESETPOSITION_OFFSET UNITYSDK_OFFSET(0xB2FB240)
#define ROOTMOTION_FINALIK_GROUNDERIK_RESETSOLVERPOSITION_OFFSET UNITYSDK_OFFSET(0xB2FB560)
#define ROOTMOTION_FINALIK_GROUNDERIK_SAFEINIT_OFFSET UNITYSDK_OFFSET(0xB2FD900)
#define ROOTMOTION_FINALIK_GROUNDERIK_SETLEGIK_OFFSET UNITYSDK_OFFSET(0xB2FFF10)
#define ROOTMOTION_FINALIK_GROUNDERIK_START_OFFSET UNITYSDK_OFFSET(0xB2FD890)
#define ROOTMOTION_FINALIK_GROUNDERIK_UPDATEINTERNAL_OFFSET UNITYSDK_OFFSET(0xB2FDD70)
#define ROOTMOTION_FINALIK_GROUNDERIK_UPDATE_OFFSET UNITYSDK_OFFSET(0xB2FDD40)
#define ROOTMOTION_FINALIK_GROUNDERIK__CTOR_OFFSET UNITYSDK_OFFSET(0xB3004F0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int GrounderIK_TypeDefinitionIndex = 44855;

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

		::System::Void ResetPositionImmediately(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_RESETPOSITIONIMMEDIATELY_OFFSET))(this, a1);
		}

		::System::Void GetReferenceTransforms(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_GETREFERENCETRANSFORMS_OFFSET))(this, a1);
		}

		::System::Void CollectThreadData(::RootMotion::IKJob::IKThreadProxyContext* a1, ::RootMotion::FinalIK::GrounderIKThreadSolver& a2)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKThreadProxyContext*, ::RootMotion::FinalIK::GrounderIKThreadSolver&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_COLLECTTHREADDATA_OFFSET))(this, a1, a2);
		}

		::System::Void FlushThreadData(::RootMotion::IKJob::IKThreadProxyContext* a1, ::RootMotion::FinalIK::GrounderIKThreadSolver& a2)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKThreadProxyContext*, ::RootMotion::FinalIK::GrounderIKThreadSolver&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_FLUSHTHREADDATA_OFFSET))(this, a1, a2);
		}

		::System::Void CopyRuntimeDataTo(::RootMotion::FinalIK::GrounderIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::GrounderIK*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_COPYRUNTIMEDATATO_OFFSET))(this, a1);
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

		::System::Void UpdateInternal(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_UPDATEINTERNAL_OFFSET))(this, a1);
		}

		::System::Void Initiate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_INITIATE_OFFSET))(this);
		}

		::System::Void SafeInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_SAFEINIT_OFFSET))(this);
		}

		::System::Void ManualUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_MANUALUPDATE_OFFSET))(this, a1);
		}

		::System::Void OnSolverUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_ONSOLVERUPDATE_OFFSET))(this);
		}

		::System::Void SetLegIK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_SETLEGIK_OFFSET))(this, a1);
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
