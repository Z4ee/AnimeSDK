#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/InjectPlayerLoopTimings.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LowLevel/PlayerLoopSystem.h"

namespace Cysharp::Threading::Tasks { class IPlayerLoopItem; }
namespace Cysharp::Threading::Tasks::Internal { class ContinuationQueue; }
namespace Cysharp::Threading::Tasks::Internal { class PlayerLoopRunner; }
namespace System { class Action; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Threading { class SynchronizationContext; }

#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_ADDACTION_OFFSET UNITYSDK_OFFSET(0x1F118160)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_ADDCONTINUATION_OFFSET UNITYSDK_OFFSET(0x1F116A60)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_DUMPCURRENTPLAYERLOOP_OFFSET UNITYSDK_OFFSET(0x1F122800)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_FINDLOOPSYSTEMINDEX_OFFSET UNITYSDK_OFFSET(0x1F122400)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_GET_APPLICATIONDATAPATH_OFFSET UNITYSDK_OFFSET(0x1F121000)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_GET_ISEDITORAPPLICATIONQUITTING_OFFSET UNITYSDK_OFFSET(0x1F121030)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_GET_ISMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x1F117380)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_GET_MAINTHREADID_OFFSET UNITYSDK_OFFSET(0x1F120FD0)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_GET_UNITYSYNCHRONIZATIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x1F120FA0)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1F1219C0)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_INIT_OFFSET UNITYSDK_OFFSET(0x1F1217F0)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_INSERTLOOP_OFFSET UNITYSDK_OFFSET(0x1F122490)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_INSERTRUNNER_OFFSET UNITYSDK_OFFSET(0x1F1210A0)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_INSERTUNITASKSYNCHRONIZATIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x1F1213D0)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_ISINJECTEDUNITASKPLAYERLOOP_OFFSET UNITYSDK_OFFSET(0x1F123030)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_REMOVERUNNER_OFFSET UNITYSDK_OFFSET(0x1F121330)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_SET_ISEDITORAPPLICATIONQUITTING_OFFSET UNITYSDK_OFFSET(0x1F121070)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_THROWINVALIDLOOPTIMING_OFFSET UNITYSDK_OFFSET(0x1F122760)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F123130)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int PlayerLoopHelper_TypeDefinitionIndex = 38207;

	class PlayerLoopHelper : public ::System::Object
	{
	public:
		static ::Il2CppArray<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>** StaticGet_yielders()
		{
			return (::Il2CppArray<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerLoopHelper_TypeDefinitionIndex)->GetStaticField(0x3FD20);
		}
		static ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner** StaticGet_ThrowMarkerPlayerLoopRunner()
		{
			return (::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner**)Il2CppClass::FromTypeDefinitionIndex(PlayerLoopHelper_TypeDefinitionIndex)->GetStaticField(0x3FD28);
		}
		static ::System::String** StaticGet_applicationDataPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PlayerLoopHelper_TypeDefinitionIndex)->GetStaticField(0x3FD30);
		}
		static ::Cysharp::Threading::Tasks::Internal::ContinuationQueue** StaticGet_ThrowMarkerContinuationQueue()
		{
			return (::Cysharp::Threading::Tasks::Internal::ContinuationQueue**)Il2CppClass::FromTypeDefinitionIndex(PlayerLoopHelper_TypeDefinitionIndex)->GetStaticField(0x3FD38);
		}
		static ::System::Threading::SynchronizationContext** StaticGet_unitySynchronizationContext()
		{
			return (::System::Threading::SynchronizationContext**)Il2CppClass::FromTypeDefinitionIndex(PlayerLoopHelper_TypeDefinitionIndex)->GetStaticField(0x3FD40);
		}
		static ::Il2CppArray<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>** StaticGet_runners()
		{
			return (::Il2CppArray<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerLoopHelper_TypeDefinitionIndex)->GetStaticField(0x3FD48);
		}
		static ::System::Boolean* StaticGet__IsEditorApplicationQuitting_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PlayerLoopHelper_TypeDefinitionIndex)->GetStaticField(0xDA10);
		}
		static ::System::Int32* StaticGet_mainThreadId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PlayerLoopHelper_TypeDefinitionIndex)->GetStaticField(0xDA14);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER__CCTOR_OFFSET))();
		}

		static ::System::Threading::SynchronizationContext* get_UnitySynchronizationContext()
		{
			return ((::System::Threading::SynchronizationContext*(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_GET_UNITYSYNCHRONIZATIONCONTEXT_OFFSET))();
		}

		static ::System::Int32 get_MainThreadId()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_GET_MAINTHREADID_OFFSET))();
		}

		static ::System::String* get_ApplicationDataPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_GET_APPLICATIONDATAPATH_OFFSET))();
		}

		static ::System::Boolean get_IsMainThread()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_GET_ISMAINTHREAD_OFFSET))();
		}

		static ::System::Boolean get_IsEditorApplicationQuitting()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_GET_ISEDITORAPPLICATIONQUITTING_OFFSET))();
		}

		static ::System::Void set_IsEditorApplicationQuitting(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_SET_ISEDITORAPPLICATIONQUITTING_OFFSET))(a1);
		}

		static ::Il2CppArray<::UnityEngine::LowLevel::PlayerLoopSystem>* InsertRunner(::UnityEngine::LowLevel::PlayerLoopSystem a1, ::System::Boolean a2, ::System::Type* a3, ::Cysharp::Threading::Tasks::Internal::ContinuationQueue* a4, ::System::Type* a5, ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner* a6)
		{
			return ((::Il2CppArray<::UnityEngine::LowLevel::PlayerLoopSystem>*(*)(::UnityEngine::LowLevel::PlayerLoopSystem, ::System::Boolean, ::System::Type*, ::Cysharp::Threading::Tasks::Internal::ContinuationQueue*, ::System::Type*, ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_INSERTRUNNER_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::Il2CppArray<::UnityEngine::LowLevel::PlayerLoopSystem>* RemoveRunner(::UnityEngine::LowLevel::PlayerLoopSystem a1, ::System::Type* a2, ::System::Type* a3)
		{
			return ((::Il2CppArray<::UnityEngine::LowLevel::PlayerLoopSystem>*(*)(::UnityEngine::LowLevel::PlayerLoopSystem, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_REMOVERUNNER_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::UnityEngine::LowLevel::PlayerLoopSystem>* InsertUniTaskSynchronizationContext(::UnityEngine::LowLevel::PlayerLoopSystem a1)
		{
			return ((::Il2CppArray<::UnityEngine::LowLevel::PlayerLoopSystem>*(*)(::UnityEngine::LowLevel::PlayerLoopSystem))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_INSERTUNITASKSYNCHRONIZATIONCONTEXT_OFFSET))(a1);
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_INIT_OFFSET))();
		}

		static ::System::Int32 FindLoopSystemIndex(::Il2CppArray<::UnityEngine::LowLevel::PlayerLoopSystem>* a1, ::System::Type* a2)
		{
			return ((::System::Int32(*)(::Il2CppArray<::UnityEngine::LowLevel::PlayerLoopSystem>*, ::System::Type*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_FINDLOOPSYSTEMINDEX_OFFSET))(a1, a2);
		}

		static ::System::Void InsertLoop(::Il2CppArray<::UnityEngine::LowLevel::PlayerLoopSystem>* a1, ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings a2, ::System::Type* a3, ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings a4, ::System::Int32 a5, ::System::Boolean a6, ::System::Type* a7, ::System::Type* a8, ::Cysharp::Threading::Tasks::PlayerLoopTiming a9)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::LowLevel::PlayerLoopSystem>*, ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings, ::System::Type*, ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings, ::System::Int32, ::System::Boolean, ::System::Type*, ::System::Type*, ::Cysharp::Threading::Tasks::PlayerLoopTiming))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_INSERTLOOP_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Void Initialize(::UnityEngine::LowLevel::PlayerLoopSystem& a1, ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings a2)
		{
			return ((::System::Void(*)(::UnityEngine::LowLevel::PlayerLoopSystem&, ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_INITIALIZE_OFFSET))(a1, a2);
		}

		static ::System::Void AddAction(::Cysharp::Threading::Tasks::PlayerLoopTiming a1, ::Cysharp::Threading::Tasks::IPlayerLoopItem* a2)
		{
			return ((::System::Void(*)(::Cysharp::Threading::Tasks::PlayerLoopTiming, ::Cysharp::Threading::Tasks::IPlayerLoopItem*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_ADDACTION_OFFSET))(a1, a2);
		}

		static ::System::Void ThrowInvalidLoopTiming(::Cysharp::Threading::Tasks::PlayerLoopTiming a1)
		{
			return ((::System::Void(*)(::Cysharp::Threading::Tasks::PlayerLoopTiming))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_THROWINVALIDLOOPTIMING_OFFSET))(a1);
		}

		static ::System::Void AddContinuation(::Cysharp::Threading::Tasks::PlayerLoopTiming a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_ADDCONTINUATION_OFFSET))(a1, a2);
		}

		static ::System::Void DumpCurrentPlayerLoop()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_DUMPCURRENTPLAYERLOOP_OFFSET))();
		}

		static ::System::Boolean IsInjectedUniTaskPlayerLoop()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_ISINJECTEDUNITASKPLAYERLOOP_OFFSET))();
		}
	};
}
