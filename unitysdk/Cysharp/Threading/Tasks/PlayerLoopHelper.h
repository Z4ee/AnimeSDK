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
namespace System { template <typename T> class Action_1; }
namespace System::Threading { class SynchronizationContext; }

#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_ADDACTION_OFFSET UNITYSDK_OFFSET(0x1C380510)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_ADDCONTINUATION_OFFSET UNITYSDK_OFFSET(0x1C3806C0)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_DUMPCURRENTPLAYERLOOP_OFFSET UNITYSDK_OFFSET(0x1C3807F0)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_FINDLOOPSYSTEMINDEX_OFFSET UNITYSDK_OFFSET(0x1C380120)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_GET_APPLICATIONDATAPATH_OFFSET UNITYSDK_OFFSET(0x1C37EBA0)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_GET_ISEDITORAPPLICATIONQUITTING_OFFSET UNITYSDK_OFFSET(0x1C37ED10)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_GET_ISMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x1C37EC00)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_GET_MAINTHREADID_OFFSET UNITYSDK_OFFSET(0x1C37EB40)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_GET_UNITYSYNCHRONIZATIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x1C37EAE0)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C37F6A0)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_INIT_OFFSET UNITYSDK_OFFSET(0x1C37F460)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_INSERTLOOP_OFFSET UNITYSDK_OFFSET(0x1C3801F0)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_INSERTRUNNER_OFFSET UNITYSDK_OFFSET(0x1C37EDD0)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_INSERTUNITASKSYNCHRONIZATIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x1C37F0F0)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_ISINJECTEDUNITASKPLAYERLOOP_OFFSET UNITYSDK_OFFSET(0x1C380C80)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_REMOVERUNNER_OFFSET UNITYSDK_OFFSET(0x1C37F040)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_SET_ISEDITORAPPLICATIONQUITTING_OFFSET UNITYSDK_OFFSET(0x1C37ED70)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_THROWINVALIDLOOPTIMING_OFFSET UNITYSDK_OFFSET(0x1C380640)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C380DB0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int PlayerLoopHelper_TypeDefinitionIndex = 28570;

	class PlayerLoopHelper : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_applicationDataPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PlayerLoopHelper_TypeDefinitionIndex)->GetStaticField(0x21CD0);
		}
		static ::Il2CppArray<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>** StaticGet_runners()
		{
			return (::Il2CppArray<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerLoopHelper_TypeDefinitionIndex)->GetStaticField(0x21CD8);
		}
		static ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner** StaticGet_ThrowMarkerPlayerLoopRunner()
		{
			return (::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner**)Il2CppClass::FromTypeDefinitionIndex(PlayerLoopHelper_TypeDefinitionIndex)->GetStaticField(0x21CE0);
		}
		static ::System::Threading::SynchronizationContext** StaticGet_unitySynchronizationContext()
		{
			return (::System::Threading::SynchronizationContext**)Il2CppClass::FromTypeDefinitionIndex(PlayerLoopHelper_TypeDefinitionIndex)->GetStaticField(0x21CE8);
		}
		static ::Cysharp::Threading::Tasks::Internal::ContinuationQueue** StaticGet_ThrowMarkerContinuationQueue()
		{
			return (::Cysharp::Threading::Tasks::Internal::ContinuationQueue**)Il2CppClass::FromTypeDefinitionIndex(PlayerLoopHelper_TypeDefinitionIndex)->GetStaticField(0x21CF0);
		}
		static ::Il2CppArray<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>** StaticGet_yielders()
		{
			return (::Il2CppArray<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerLoopHelper_TypeDefinitionIndex)->GetStaticField(0x21CF8);
		}
		static ::System::Int32* StaticGet_mainThreadId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PlayerLoopHelper_TypeDefinitionIndex)->GetStaticField(0x4B30);
		}
		static ::System::Boolean* StaticGet__IsEditorApplicationQuitting_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PlayerLoopHelper_TypeDefinitionIndex)->GetStaticField(0x4B34);
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

		static ::System::Void set_IsEditorApplicationQuitting(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_SET_ISEDITORAPPLICATIONQUITTING_OFFSET))(value);
		}

		static ::Il2CppArray<::UnityEngine::LowLevel::PlayerLoopSystem>* InsertRunner(::UnityEngine::LowLevel::PlayerLoopSystem loopSystem, ::System::Boolean injectOnFirst, ::System::Type* loopRunnerYieldType, ::Cysharp::Threading::Tasks::Internal::ContinuationQueue* cq, ::System::Type* loopRunnerType, ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner* runner)
		{
			return ((::Il2CppArray<::UnityEngine::LowLevel::PlayerLoopSystem>*(*)(::UnityEngine::LowLevel::PlayerLoopSystem, ::System::Boolean, ::System::Type*, ::Cysharp::Threading::Tasks::Internal::ContinuationQueue*, ::System::Type*, ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_INSERTRUNNER_OFFSET))(loopSystem, injectOnFirst, loopRunnerYieldType, cq, loopRunnerType, runner);
		}

		static ::Il2CppArray<::UnityEngine::LowLevel::PlayerLoopSystem>* RemoveRunner(::UnityEngine::LowLevel::PlayerLoopSystem loopSystem, ::System::Type* loopRunnerYieldType, ::System::Type* loopRunnerType)
		{
			return ((::Il2CppArray<::UnityEngine::LowLevel::PlayerLoopSystem>*(*)(::UnityEngine::LowLevel::PlayerLoopSystem, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_REMOVERUNNER_OFFSET))(loopSystem, loopRunnerYieldType, loopRunnerType);
		}

		static ::Il2CppArray<::UnityEngine::LowLevel::PlayerLoopSystem>* InsertUniTaskSynchronizationContext(::UnityEngine::LowLevel::PlayerLoopSystem loopSystem)
		{
			return ((::Il2CppArray<::UnityEngine::LowLevel::PlayerLoopSystem>*(*)(::UnityEngine::LowLevel::PlayerLoopSystem))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_INSERTUNITASKSYNCHRONIZATIONCONTEXT_OFFSET))(loopSystem);
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_INIT_OFFSET))();
		}

		static ::System::Int32 FindLoopSystemIndex(::Il2CppArray<::UnityEngine::LowLevel::PlayerLoopSystem>* playerLoopList, ::System::Type* systemType)
		{
			return ((::System::Int32(*)(::Il2CppArray<::UnityEngine::LowLevel::PlayerLoopSystem>*, ::System::Type*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_FINDLOOPSYSTEMINDEX_OFFSET))(playerLoopList, systemType);
		}

		static ::System::Void InsertLoop(::Il2CppArray<::UnityEngine::LowLevel::PlayerLoopSystem>* copyList, ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings injectTimings, ::System::Type* loopType, ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings targetTimings, ::System::Int32 index, ::System::Boolean injectOnFirst, ::System::Type* loopRunnerYieldType, ::System::Type* loopRunnerType, ::Cysharp::Threading::Tasks::PlayerLoopTiming playerLoopTiming)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::LowLevel::PlayerLoopSystem>*, ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings, ::System::Type*, ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings, ::System::Int32, ::System::Boolean, ::System::Type*, ::System::Type*, ::Cysharp::Threading::Tasks::PlayerLoopTiming))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_INSERTLOOP_OFFSET))(copyList, injectTimings, loopType, targetTimings, index, injectOnFirst, loopRunnerYieldType, loopRunnerType, playerLoopTiming);
		}

		static ::System::Void Initialize(::UnityEngine::LowLevel::PlayerLoopSystem& playerLoop, ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings injectTimings)
		{
			return ((::System::Void(*)(::UnityEngine::LowLevel::PlayerLoopSystem&, ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_INITIALIZE_OFFSET))(playerLoop, injectTimings);
		}

		static ::System::Void AddAction(::Cysharp::Threading::Tasks::PlayerLoopTiming timing, ::Cysharp::Threading::Tasks::IPlayerLoopItem* action)
		{
			return ((::System::Void(*)(::Cysharp::Threading::Tasks::PlayerLoopTiming, ::Cysharp::Threading::Tasks::IPlayerLoopItem*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_ADDACTION_OFFSET))(timing, action);
		}

		static ::System::Void ThrowInvalidLoopTiming(::Cysharp::Threading::Tasks::PlayerLoopTiming playerLoopTiming)
		{
			return ((::System::Void(*)(::Cysharp::Threading::Tasks::PlayerLoopTiming))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_THROWINVALIDLOOPTIMING_OFFSET))(playerLoopTiming);
		}

		static ::System::Void AddContinuation(::Cysharp::Threading::Tasks::PlayerLoopTiming timing, ::System::Action* continuation)
		{
			return ((::System::Void(*)(::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER_ADDCONTINUATION_OFFSET))(timing, continuation);
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
