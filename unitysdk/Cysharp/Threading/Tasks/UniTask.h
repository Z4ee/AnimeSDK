#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/DelayType.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/ValueType.h"

namespace Cysharp::Threading::Tasks { class AsyncLazy; }
namespace Cysharp::Threading::Tasks { class IUniTaskSource; }
namespace Cysharp::Threading::Tasks { template <typename T> class AsyncLazy_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class Func_6; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Threading { class SynchronizationContext; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { template <typename T1, typename T2, typename T3, typename T4> class UnityAction_4; }
namespace UnityEngine::Events { template <typename T1, typename T2, typename T3> class UnityAction_3; }
namespace UnityEngine::Events { template <typename T1, typename T2> class UnityAction_2; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define CYSHARP_THREADING_TASKS_UNITASK_ACTION_1_OFFSET UNITYSDK_OFFSET(0x1EA7AEF0)
#define CYSHARP_THREADING_TASKS_UNITASK_ACTION_OFFSET UNITYSDK_OFFSET(0x1EA7AE50)
#define CYSHARP_THREADING_TASKS_UNITASK_ASASYNCUNITUNITASK_OFFSET UNITYSDK_OFFSET(0x3BA9AC0)
#define CYSHARP_THREADING_TASKS_UNITASK_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1EA7AD10)
#define CYSHARP_THREADING_TASKS_UNITASK_CREATE_OFFSET UNITYSDK_OFFSET(0x1EA7ACD0)
#define CYSHARP_THREADING_TASKS_UNITASK_DEFER_OFFSET UNITYSDK_OFFSET(0x1EA7B0F0)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAME_OFFSET UNITYSDK_OFFSET(0x1EA79730)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAY_1_OFFSET UNITYSDK_OFFSET(0x1EA79BD0)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAY_2_OFFSET UNITYSDK_OFFSET(0x1EA79E00)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAY_3_OFFSET UNITYSDK_OFFSET(0x1EA79C70)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAY_OFFSET UNITYSDK_OFFSET(0x1EA795A0)
#define CYSHARP_THREADING_TASKS_UNITASK_FROMCANCELED_OFFSET UNITYSDK_OFFSET(0x1EA7AB50)
#define CYSHARP_THREADING_TASKS_UNITASK_FROMEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1EA7AA10)
#define CYSHARP_THREADING_TASKS_UNITASK_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x2DFB9E0)
#define CYSHARP_THREADING_TASKS_UNITASK_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x3BA9A00)
#define CYSHARP_THREADING_TASKS_UNITASK_LAZY_OFFSET UNITYSDK_OFFSET(0x1EA7AD50)
#define CYSHARP_THREADING_TASKS_UNITASK_NEVER_OFFSET UNITYSDK_OFFSET(0x1EA7B150)
#define CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAME_1_OFFSET UNITYSDK_OFFSET(0x1EA78B60)
#define CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAME_2_OFFSET UNITYSDK_OFFSET(0x1EA78C10)
#define CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAME_3_OFFSET UNITYSDK_OFFSET(0x1EA78CB0)
#define CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAME_OFFSET UNITYSDK_OFFSET(0x1EA78710)
#define CYSHARP_THREADING_TASKS_UNITASK_POST_OFFSET UNITYSDK_OFFSET(0x1EA7B790)
#define CYSHARP_THREADING_TASKS_UNITASK_PRESERVE_OFFSET UNITYSDK_OFFSET(0x3BA9A40)
#define CYSHARP_THREADING_TASKS_UNITASK_RETURNTOCURRENTSYNCHRONIZATIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x1EA7B870)
#define CYSHARP_THREADING_TASKS_UNITASK_RETURNTOMAINTHREAD_1_OFFSET UNITYSDK_OFFSET(0x1EA7B770)
#define CYSHARP_THREADING_TASKS_UNITASK_RETURNTOMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x1EA7B750)
#define CYSHARP_THREADING_TASKS_UNITASK_RETURNTOSYNCHRONIZATIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x1EA7B850)
#define CYSHARP_THREADING_TASKS_UNITASK_RUNONTHREADPOOL_1_OFFSET UNITYSDK_OFFSET(0x1EA7B3D0)
#define CYSHARP_THREADING_TASKS_UNITASK_RUNONTHREADPOOL_2_OFFSET UNITYSDK_OFFSET(0x1EA7B530)
#define CYSHARP_THREADING_TASKS_UNITASK_RUNONTHREADPOOL_3_OFFSET UNITYSDK_OFFSET(0x1EA7B690)
#define CYSHARP_THREADING_TASKS_UNITASK_RUNONTHREADPOOL_OFFSET UNITYSDK_OFFSET(0x1EA7B290)
#define CYSHARP_THREADING_TASKS_UNITASK_RUN_1_OFFSET UNITYSDK_OFFSET(0x1EA7B2F0)
#define CYSHARP_THREADING_TASKS_UNITASK_RUN_2_OFFSET UNITYSDK_OFFSET(0x1EA7B450)
#define CYSHARP_THREADING_TASKS_UNITASK_RUN_3_OFFSET UNITYSDK_OFFSET(0x1EA7B5A0)
#define CYSHARP_THREADING_TASKS_UNITASK_RUN_OFFSET UNITYSDK_OFFSET(0x1EA7B1D0)
#define CYSHARP_THREADING_TASKS_UNITASK_SUPPRESSCANCELLATIONTHROW_OFFSET UNITYSDK_OFFSET(0x3BA9A10)
#define CYSHARP_THREADING_TASKS_UNITASK_SWITCHTOMAINTHREAD_1_OFFSET UNITYSDK_OFFSET(0x1EA7B730)
#define CYSHARP_THREADING_TASKS_UNITASK_SWITCHTOMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x1EA7B710)
#define CYSHARP_THREADING_TASKS_UNITASK_SWITCHTOSYNCHRONIZATIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x1EA7B7F0)
#define CYSHARP_THREADING_TASKS_UNITASK_SWITCHTOTASKPOOL_OFFSET UNITYSDK_OFFSET(0x1EA7B7E0)
#define CYSHARP_THREADING_TASKS_UNITASK_SWITCHTOTHREADPOOL_OFFSET UNITYSDK_OFFSET(0x1EA7B7D0)
#define CYSHARP_THREADING_TASKS_UNITASK_TOCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1EA781B0)
#define CYSHARP_THREADING_TASKS_UNITASK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3BA9A30)
#define CYSHARP_THREADING_TASKS_UNITASK_UNITYACTION_1_OFFSET UNITYSDK_OFFSET(0x1EA7B040)
#define CYSHARP_THREADING_TASKS_UNITASK_UNITYACTION_OFFSET UNITYSDK_OFFSET(0x1EA7AFA0)
#define CYSHARP_THREADING_TASKS_UNITASK_VOID_1_OFFSET UNITYSDK_OFFSET(0x1EA7AE20)
#define CYSHARP_THREADING_TASKS_UNITASK_VOID_OFFSET UNITYSDK_OFFSET(0x1EA7ADE0)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAME_1_OFFSET UNITYSDK_OFFSET(0x1EA78DB0)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAME_2_OFFSET UNITYSDK_OFFSET(0x1EA78E90)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAME_3_OFFSET UNITYSDK_OFFSET(0x1EA79280)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAME_OFFSET UNITYSDK_OFFSET(0x1EA78D50)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITFORFIXEDUPDATE_1_OFFSET UNITYSDK_OFFSET(0x1EA79380)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITFORFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1EA79320)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITFORSECONDS_1_OFFSET UNITYSDK_OFFSET(0x1EA79690)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITFORSECONDS_OFFSET UNITYSDK_OFFSET(0x1EA79460)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILCANCELED_OFFSET UNITYSDK_OFFSET(0x1EA7C070)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITUNTIL_OFFSET UNITYSDK_OFFSET(0x1EA7B8B0)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITWHILE_OFFSET UNITYSDK_OFFSET(0x1EA7BC90)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENALL_1_OFFSET UNITYSDK_OFFSET(0x1EA7C850)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENALL_OFFSET UNITYSDK_OFFSET(0x1EA7C440)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENANY_1_OFFSET UNITYSDK_OFFSET(0x1EA7CE90)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENANY_OFFSET UNITYSDK_OFFSET(0x1EA7CA20)
#define CYSHARP_THREADING_TASKS_UNITASK_YIELD__1_OFFSET UNITYSDK_OFFSET(0x1EA78290)
#define CYSHARP_THREADING_TASKS_UNITASK_YIELD__2_OFFSET UNITYSDK_OFFSET(0x1EA782A0)
#define CYSHARP_THREADING_TASKS_UNITASK_YIELD__3_OFFSET UNITYSDK_OFFSET(0x1EA78670)
#define CYSHARP_THREADING_TASKS_UNITASK_YIELD__OFFSET UNITYSDK_OFFSET(0x1EA78280)
#define CYSHARP_THREADING_TASKS_UNITASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA7D820)
#define CYSHARP_THREADING_TASKS_UNITASK__CTOR_OFFSET UNITYSDK_OFFSET(0x2E28A90)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_TypeDefinitionIndex = 42642;

	struct alignas(8) UniTask
	{
		static ::Cysharp::Threading::Tasks::UniTask* StaticGet_CanceledUniTask()
		{
			return (::Cysharp::Threading::Tasks::UniTask*)Il2CppClass::FromTypeDefinitionIndex(UniTask_TypeDefinitionIndex)->GetStaticField(0x6F30);
		}
		static ::Cysharp::Threading::Tasks::UniTask* StaticGet_CompletedTask()
		{
			return (::Cysharp::Threading::Tasks::UniTask*)Il2CppClass::FromTypeDefinitionIndex(UniTask_TypeDefinitionIndex)->GetStaticField(0x6F40);
		}
		::Cysharp::Threading::Tasks::IUniTaskSource* source; // 0x10
		::System::Int16 token; // 0x18

		::System::Void _ctor(::Cysharp::Threading::Tasks::IUniTaskSource* a1, ::System::Int16 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Cysharp::Threading::Tasks::IUniTaskSource*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK__CCTOR_OFFSET))();
		}

		static ::System::Collections::IEnumerator* ToCoroutine(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>* a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_TOCOROUTINE_OFFSET))(a1);
		}

		/*
		static ::Cysharp::Threading::Tasks::YieldAwaitable Yield_()
		{
			return ((::Cysharp::Threading::Tasks::YieldAwaitable(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_YIELD__OFFSET))();
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::YieldAwaitable Yield__1(::Cysharp::Threading::Tasks::PlayerLoopTiming a1)
		{
			return ((::Cysharp::Threading::Tasks::YieldAwaitable(*)(::Cysharp::Threading::Tasks::PlayerLoopTiming))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_YIELD__1_OFFSET))(a1);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask Yield__2(::System::Threading::CancellationToken a1, ::System::Boolean a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_YIELD__2_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask Yield__3(::Cysharp::Threading::Tasks::PlayerLoopTiming a1, ::System::Threading::CancellationToken a2, ::System::Boolean a3)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_YIELD__3_OFFSET))(a1, a2, a3);
		}
		*/

		static ::Cysharp::Threading::Tasks::UniTask NextFrame()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAME_OFFSET))();
		}

		static ::Cysharp::Threading::Tasks::UniTask NextFrame_1(::Cysharp::Threading::Tasks::PlayerLoopTiming a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::PlayerLoopTiming))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAME_1_OFFSET))(a1);
		}

		/*
		static ::Cysharp::Threading::Tasks::UniTask NextFrame_2(::System::Threading::CancellationToken a1, ::System::Boolean a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAME_2_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask NextFrame_3(::Cysharp::Threading::Tasks::PlayerLoopTiming a1, ::System::Threading::CancellationToken a2, ::System::Boolean a3)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAME_3_OFFSET))(a1, a2, a3);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::YieldAwaitable WaitForEndOfFrame()
		{
			return ((::Cysharp::Threading::Tasks::YieldAwaitable(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAME_OFFSET))();
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask WaitForEndOfFrame_1(::System::Threading::CancellationToken a1, ::System::Boolean a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAME_1_OFFSET))(a1, a2);
		}
		*/

		static ::Cysharp::Threading::Tasks::UniTask WaitForEndOfFrame_2(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAME_2_OFFSET))(a1);
		}

		/*
		static ::Cysharp::Threading::Tasks::UniTask WaitForEndOfFrame_3(::UnityEngine::MonoBehaviour* a1, ::System::Threading::CancellationToken a2, ::System::Boolean a3)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::UnityEngine::MonoBehaviour*, ::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAME_3_OFFSET))(a1, a2, a3);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::YieldAwaitable WaitForFixedUpdate()
		{
			return ((::Cysharp::Threading::Tasks::YieldAwaitable(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITFORFIXEDUPDATE_OFFSET))();
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask WaitForFixedUpdate_1(::System::Threading::CancellationToken a1, ::System::Boolean a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITFORFIXEDUPDATE_1_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask WaitForSeconds(::System::Single a1, ::System::Boolean a2, ::Cysharp::Threading::Tasks::PlayerLoopTiming a3, ::System::Threading::CancellationToken a4, ::System::Boolean a5)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Single, ::System::Boolean, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITFORSECONDS_OFFSET))(a1, a2, a3, a4, a5);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask WaitForSeconds_1(::System::Int32 a1, ::System::Boolean a2, ::Cysharp::Threading::Tasks::PlayerLoopTiming a3, ::System::Threading::CancellationToken a4, ::System::Boolean a5)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Int32, ::System::Boolean, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITFORSECONDS_1_OFFSET))(a1, a2, a3, a4, a5);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask DelayFrame(::System::Int32 a1, ::Cysharp::Threading::Tasks::PlayerLoopTiming a2, ::System::Threading::CancellationToken a3, ::System::Boolean a4)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Int32, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAME_OFFSET))(a1, a2, a3, a4);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask Delay(::System::Int32 a1, ::System::Boolean a2, ::Cysharp::Threading::Tasks::PlayerLoopTiming a3, ::System::Threading::CancellationToken a4, ::System::Boolean a5)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Int32, ::System::Boolean, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAY_OFFSET))(a1, a2, a3, a4, a5);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask Delay_1(::System::TimeSpan a1, ::System::Boolean a2, ::Cysharp::Threading::Tasks::PlayerLoopTiming a3, ::System::Threading::CancellationToken a4, ::System::Boolean a5)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::TimeSpan, ::System::Boolean, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAY_1_OFFSET))(a1, a2, a3, a4, a5);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask Delay_2(::System::Int32 a1, ::Cysharp::Threading::Tasks::DelayType a2, ::Cysharp::Threading::Tasks::PlayerLoopTiming a3, ::System::Threading::CancellationToken a4, ::System::Boolean a5)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Int32, ::Cysharp::Threading::Tasks::DelayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAY_2_OFFSET))(a1, a2, a3, a4, a5);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask Delay_3(::System::TimeSpan a1, ::Cysharp::Threading::Tasks::DelayType a2, ::Cysharp::Threading::Tasks::PlayerLoopTiming a3, ::System::Threading::CancellationToken a4, ::System::Boolean a5)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::TimeSpan, ::Cysharp::Threading::Tasks::DelayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAY_3_OFFSET))(a1, a2, a3, a4, a5);
		}
		*/

		static ::Cysharp::Threading::Tasks::UniTask FromException(::System::Exception* a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Exception*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_FROMEXCEPTION_OFFSET))(a1);
		}

		/*
		static ::Cysharp::Threading::Tasks::UniTask FromCanceled(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_FROMCANCELED_OFFSET))(a1);
		}
		*/

		static ::Cysharp::Threading::Tasks::UniTask Create(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>* a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_CREATE_OFFSET))(a1);
		}

		/*
		static ::Cysharp::Threading::Tasks::UniTask Create_1(::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_CREATE_1_OFFSET))(a1, a2);
		}
		*/

		static ::Cysharp::Threading::Tasks::AsyncLazy* Lazy(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>* a1)
		{
			return ((::Cysharp::Threading::Tasks::AsyncLazy*(*)(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_LAZY_OFFSET))(a1);
		}

		/*
		static ::System::Void Void(::System::Func_1<::Cysharp::Threading::Tasks::UniTaskVoid>* a1)
		{
			return ((::System::Void(*)(::System::Func_1<::Cysharp::Threading::Tasks::UniTaskVoid>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_VOID_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void Void_1(::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTaskVoid>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::System::Void(*)(::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTaskVoid>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_VOID_1_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Action* Action(::System::Func_1<::Cysharp::Threading::Tasks::UniTaskVoid>* a1)
		{
			return ((::System::Action*(*)(::System::Func_1<::Cysharp::Threading::Tasks::UniTaskVoid>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_ACTION_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Action* Action_1(::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTaskVoid>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::System::Action*(*)(::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTaskVoid>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_ACTION_1_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::UnityEngine::Events::UnityAction* UnityAction(::System::Func_1<::Cysharp::Threading::Tasks::UniTaskVoid>* a1)
		{
			return ((::UnityEngine::Events::UnityAction*(*)(::System::Func_1<::Cysharp::Threading::Tasks::UniTaskVoid>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_UNITYACTION_OFFSET))(a1);
		}
		*/

		/*
		static ::UnityEngine::Events::UnityAction* UnityAction_1(::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTaskVoid>* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::UnityEngine::Events::UnityAction*(*)(::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTaskVoid>*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_UNITYACTION_1_OFFSET))(a1, a2);
		}
		*/

		static ::Cysharp::Threading::Tasks::UniTask Defer(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>* a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DEFER_OFFSET))(a1);
		}

		/*
		static ::Cysharp::Threading::Tasks::UniTask Never(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_NEVER_OFFSET))(a1);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask Run(::System::Action* a1, ::System::Boolean a2, ::System::Threading::CancellationToken a3)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Action*, ::System::Boolean, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_RUN_OFFSET))(a1, a2, a3);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask Run_1(::System::Action_1<::System::Object*>* a1, ::System::Object* a2, ::System::Boolean a3, ::System::Threading::CancellationToken a4)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Boolean, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_RUN_1_OFFSET))(a1, a2, a3, a4);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask Run_2(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>* a1, ::System::Boolean a2, ::System::Threading::CancellationToken a3)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*, ::System::Boolean, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_RUN_2_OFFSET))(a1, a2, a3);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask Run_3(::System::Func_2<::System::Object*, ::Cysharp::Threading::Tasks::UniTask>* a1, ::System::Object* a2, ::System::Boolean a3, ::System::Threading::CancellationToken a4)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Func_2<::System::Object*, ::Cysharp::Threading::Tasks::UniTask>*, ::System::Object*, ::System::Boolean, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_RUN_3_OFFSET))(a1, a2, a3, a4);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask RunOnThreadPool(::System::Action* a1, ::System::Boolean a2, ::System::Threading::CancellationToken a3)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Action*, ::System::Boolean, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_RUNONTHREADPOOL_OFFSET))(a1, a2, a3);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask RunOnThreadPool_1(::System::Action_1<::System::Object*>* a1, ::System::Object* a2, ::System::Boolean a3, ::System::Threading::CancellationToken a4)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Boolean, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_RUNONTHREADPOOL_1_OFFSET))(a1, a2, a3, a4);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask RunOnThreadPool_2(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>* a1, ::System::Boolean a2, ::System::Threading::CancellationToken a3)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*, ::System::Boolean, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_RUNONTHREADPOOL_2_OFFSET))(a1, a2, a3);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask RunOnThreadPool_3(::System::Func_2<::System::Object*, ::Cysharp::Threading::Tasks::UniTask>* a1, ::System::Object* a2, ::System::Boolean a3, ::System::Threading::CancellationToken a4)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Func_2<::System::Object*, ::Cysharp::Threading::Tasks::UniTask>*, ::System::Object*, ::System::Boolean, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_RUNONTHREADPOOL_3_OFFSET))(a1, a2, a3, a4);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable SwitchToMainThread(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable(*)(::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_SWITCHTOMAINTHREAD_OFFSET))(a1);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable SwitchToMainThread_1(::Cysharp::Threading::Tasks::PlayerLoopTiming a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable(*)(::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_SWITCHTOMAINTHREAD_1_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::ReturnToMainThread ReturnToMainThread(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::ReturnToMainThread(*)(::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_RETURNTOMAINTHREAD_OFFSET))(a1);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::ReturnToMainThread ReturnToMainThread_1(::Cysharp::Threading::Tasks::PlayerLoopTiming a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::ReturnToMainThread(*)(::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_RETURNTOMAINTHREAD_1_OFFSET))(a1, a2);
		}
		*/

		static ::System::Void Post(::System::Action* a1, ::Cysharp::Threading::Tasks::PlayerLoopTiming a2)
		{
			return ((::System::Void(*)(::System::Action*, ::Cysharp::Threading::Tasks::PlayerLoopTiming))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_POST_OFFSET))(a1, a2);
		}

		/*
		static ::Cysharp::Threading::Tasks::SwitchToThreadPoolAwaitable SwitchToThreadPool()
		{
			return ((::Cysharp::Threading::Tasks::SwitchToThreadPoolAwaitable(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_SWITCHTOTHREADPOOL_OFFSET))();
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable SwitchToTaskPool()
		{
			return ((::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_SWITCHTOTASKPOOL_OFFSET))();
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable SwitchToSynchronizationContext(::System::Threading::SynchronizationContext* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable(*)(::System::Threading::SynchronizationContext*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_SWITCHTOSYNCHRONIZATIONCONTEXT_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::ReturnToSynchronizationContext ReturnToSynchronizationContext(::System::Threading::SynchronizationContext* a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::ReturnToSynchronizationContext(*)(::System::Threading::SynchronizationContext*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_RETURNTOSYNCHRONIZATIONCONTEXT_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::ReturnToSynchronizationContext ReturnToCurrentSynchronizationContext(::System::Boolean a1, ::System::Threading::CancellationToken a2)
		{
			return ((::Cysharp::Threading::Tasks::ReturnToSynchronizationContext(*)(::System::Boolean, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_RETURNTOCURRENTSYNCHRONIZATIONCONTEXT_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask WaitUntil(::System::Func_1<::System::Boolean>* a1, ::Cysharp::Threading::Tasks::PlayerLoopTiming a2, ::System::Threading::CancellationToken a3, ::System::Boolean a4)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Func_1<::System::Boolean>*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITUNTIL_OFFSET))(a1, a2, a3, a4);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask WaitWhile(::System::Func_1<::System::Boolean>* a1, ::Cysharp::Threading::Tasks::PlayerLoopTiming a2, ::System::Threading::CancellationToken a3, ::System::Boolean a4)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Func_1<::System::Boolean>*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITWHILE_OFFSET))(a1, a2, a3, a4);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask WaitUntilCanceled(::System::Threading::CancellationToken a1, ::Cysharp::Threading::Tasks::PlayerLoopTiming a2, ::System::Boolean a3)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILCANCELED_OFFSET))(a1, a2, a3);
		}
		*/

		static ::Cysharp::Threading::Tasks::UniTask WhenAll(::Il2CppArray<::Cysharp::Threading::Tasks::UniTask>* a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Il2CppArray<::Cysharp::Threading::Tasks::UniTask>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENALL_OFFSET))(a1);
		}

		static ::Cysharp::Threading::Tasks::UniTask WhenAll_1(::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask>* a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENALL_1_OFFSET))(a1);
		}

		/*
		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Int32> WhenAny(::Il2CppArray<::Cysharp::Threading::Tasks::UniTask>* a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>(*)(::Il2CppArray<::Cysharp::Threading::Tasks::UniTask>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENANY_OFFSET))(a1);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Int32> WhenAny_1(::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask>* a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>(*)(::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENANY_1_OFFSET))(a1);
		}
		*/

		::Cysharp::Threading::Tasks::UniTaskStatus get_Status()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_GET_STATUS_OFFSET))(this);
		}

		/*
		::Cysharp::Threading::Tasks::UniTask_Awaiter GetAwaiter()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_Awaiter(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_GETAWAITER_OFFSET))(this);
		}
		*/

		/*
		::Cysharp::Threading::Tasks::UniTask SuppressCancellationThrow(::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>& a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>&))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_SUPPRESSCANCELLATIONTHROW_OFFSET))(this, a1);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_TOSTRING_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask Preserve()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_PRESERVE_OFFSET))(this);
		}

		/*
		::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::AsyncUnit> AsAsyncUnitUniTask()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::AsyncUnit>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_ASASYNCUNITUNITASK_OFFSET))(this);
		}
		*/
	};
}
