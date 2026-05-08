#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/DelayType.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/ValueType.h"

namespace Cysharp::Threading::Tasks { class IUniTaskSource; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class MonoBehaviour; }

#define CYSHARP_THREADING_TASKS_UNITASK_ACTION_OFFSET UNITYSDK_OFFSET(0x1C3257E0)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAME_OFFSET UNITYSDK_OFFSET(0x1C3250D0)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAY_1_OFFSET UNITYSDK_OFFSET(0x1C3252B0)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAY_2_OFFSET UNITYSDK_OFFSET(0x1C3254D0)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAY_3_OFFSET UNITYSDK_OFFSET(0x1C325350)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAY_OFFSET UNITYSDK_OFFSET(0x1C3251C0)
#define CYSHARP_THREADING_TASKS_UNITASK_FROMCANCELED_OFFSET UNITYSDK_OFFSET(0x1C325710)
#define CYSHARP_THREADING_TASKS_UNITASK_FROMEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C323700)
#define CYSHARP_THREADING_TASKS_UNITASK_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x2E1000)
#define CYSHARP_THREADING_TASKS_UNITASK_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x9D13B0)
#define CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAME_1_OFFSET UNITYSDK_OFFSET(0x1C324EA0)
#define CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAME_2_OFFSET UNITYSDK_OFFSET(0x1C324F50)
#define CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAME_OFFSET UNITYSDK_OFFSET(0x1C324DF0)
#define CYSHARP_THREADING_TASKS_UNITASK_SUPPRESSCANCELLATIONTHROW_OFFSET UNITYSDK_OFFSET(0x9D1490)
#define CYSHARP_THREADING_TASKS_UNITASK_SWITCHTOMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x1C325860)
#define CYSHARP_THREADING_TASKS_UNITASK_SWITCHTOTHREADPOOL_OFFSET UNITYSDK_OFFSET(0x1C325880)
#define CYSHARP_THREADING_TASKS_UNITASK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9D14B0)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAME_OFFSET UNITYSDK_OFFSET(0x1C324FE0)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITFORFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1C325070)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITUNTIL_OFFSET UNITYSDK_OFFSET(0x1C325890)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITWHILE_OFFSET UNITYSDK_OFFSET(0x1C325930)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENALL_1_OFFSET UNITYSDK_OFFSET(0x1C325A80)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENALL_OFFSET UNITYSDK_OFFSET(0x1C3259D0)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENANY_OFFSET UNITYSDK_OFFSET(0x1C325C50)
#define CYSHARP_THREADING_TASKS_UNITASK_YIELD__1_OFFSET UNITYSDK_OFFSET(0x1C324CC0)
#define CYSHARP_THREADING_TASKS_UNITASK_YIELD__2_OFFSET UNITYSDK_OFFSET(0x1C324CD0)
#define CYSHARP_THREADING_TASKS_UNITASK_YIELD__3_OFFSET UNITYSDK_OFFSET(0x1C324D60)
#define CYSHARP_THREADING_TASKS_UNITASK_YIELD__OFFSET UNITYSDK_OFFSET(0x1C324CB0)
#define CYSHARP_THREADING_TASKS_UNITASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C326080)
#define CYSHARP_THREADING_TASKS_UNITASK__CTOR_OFFSET UNITYSDK_OFFSET(0x366AD0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_TypeDefinitionIndex = 28579;

	struct alignas(8) UniTask
	{
		static ::Cysharp::Threading::Tasks::UniTask* StaticGet_CanceledUniTask()
		{
			return (::Cysharp::Threading::Tasks::UniTask*)Il2CppClass::FromTypeDefinitionIndex(UniTask_TypeDefinitionIndex)->GetStaticField(0x21BC0);
		}
		static ::Cysharp::Threading::Tasks::UniTask* StaticGet_CompletedTask()
		{
			return (::Cysharp::Threading::Tasks::UniTask*)Il2CppClass::FromTypeDefinitionIndex(UniTask_TypeDefinitionIndex)->GetStaticField(0x21BD0);
		}
		::Cysharp::Threading::Tasks::IUniTaskSource* source; // 0x10
		::System::Int16 token; // 0x18

		::System::Void _ctor(::Cysharp::Threading::Tasks::IUniTaskSource* source, ::System::Int16 token)
		{
			return ((::System::Void(*)(::PVOID, ::Cysharp::Threading::Tasks::IUniTaskSource*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK__CTOR_OFFSET))(this, source, token);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK__CCTOR_OFFSET))();
		}

		/*
		static ::Cysharp::Threading::Tasks::YieldAwaitable Yield_()
		{
			return ((::Cysharp::Threading::Tasks::YieldAwaitable(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_YIELD__OFFSET))();
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::YieldAwaitable Yield__1(::Cysharp::Threading::Tasks::PlayerLoopTiming timing)
		{
			return ((::Cysharp::Threading::Tasks::YieldAwaitable(*)(::Cysharp::Threading::Tasks::PlayerLoopTiming))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_YIELD__1_OFFSET))(timing);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask Yield__2(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_YIELD__2_OFFSET))(cancellationToken);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask Yield__3(::Cysharp::Threading::Tasks::PlayerLoopTiming timing, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_YIELD__3_OFFSET))(timing, cancellationToken);
		}
		*/

		static ::Cysharp::Threading::Tasks::UniTask NextFrame()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAME_OFFSET))();
		}

		static ::Cysharp::Threading::Tasks::UniTask NextFrame_1(::Cysharp::Threading::Tasks::PlayerLoopTiming timing)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Cysharp::Threading::Tasks::PlayerLoopTiming))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAME_1_OFFSET))(timing);
		}

		/*
		static ::Cysharp::Threading::Tasks::UniTask NextFrame_2(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAME_2_OFFSET))(cancellationToken);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask WaitForEndOfFrame(::UnityEngine::MonoBehaviour* coroutineRunner, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::UnityEngine::MonoBehaviour*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAME_OFFSET))(coroutineRunner, cancellationToken);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::YieldAwaitable WaitForFixedUpdate()
		{
			return ((::Cysharp::Threading::Tasks::YieldAwaitable(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITFORFIXEDUPDATE_OFFSET))();
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask DelayFrame(::System::Int32 delayFrameCount, ::Cysharp::Threading::Tasks::PlayerLoopTiming delayTiming, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Int32, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAME_OFFSET))(delayFrameCount, delayTiming, cancellationToken);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask Delay(::System::Int32 millisecondsDelay, ::System::Boolean ignoreTimeScale, ::Cysharp::Threading::Tasks::PlayerLoopTiming delayTiming, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Int32, ::System::Boolean, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAY_OFFSET))(millisecondsDelay, ignoreTimeScale, delayTiming, cancellationToken);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask Delay_1(::System::TimeSpan delayTimeSpan, ::System::Boolean ignoreTimeScale, ::Cysharp::Threading::Tasks::PlayerLoopTiming delayTiming, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::TimeSpan, ::System::Boolean, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAY_1_OFFSET))(delayTimeSpan, ignoreTimeScale, delayTiming, cancellationToken);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask Delay_2(::System::Int32 millisecondsDelay, ::Cysharp::Threading::Tasks::DelayType delayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming delayTiming, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Int32, ::Cysharp::Threading::Tasks::DelayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAY_2_OFFSET))(millisecondsDelay, delayType, delayTiming, cancellationToken);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask Delay_3(::System::TimeSpan delayTimeSpan, ::Cysharp::Threading::Tasks::DelayType delayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming delayTiming, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::TimeSpan, ::Cysharp::Threading::Tasks::DelayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAY_3_OFFSET))(delayTimeSpan, delayType, delayTiming, cancellationToken);
		}
		*/

		static ::Cysharp::Threading::Tasks::UniTask FromException(::System::Exception* ex)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Exception*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_FROMEXCEPTION_OFFSET))(ex);
		}

		/*
		static ::Cysharp::Threading::Tasks::UniTask FromCanceled(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_FROMCANCELED_OFFSET))(cancellationToken);
		}
		*/

		/*
		static ::System::Action* Action(::System::Func_1<::Cysharp::Threading::Tasks::UniTaskVoid>* asyncAction)
		{
			return ((::System::Action*(*)(::System::Func_1<::Cysharp::Threading::Tasks::UniTaskVoid>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_ACTION_OFFSET))(asyncAction);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable SwitchToMainThread(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable(*)(::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_SWITCHTOMAINTHREAD_OFFSET))(cancellationToken);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::SwitchToThreadPoolAwaitable SwitchToThreadPool()
		{
			return ((::Cysharp::Threading::Tasks::SwitchToThreadPoolAwaitable(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_SWITCHTOTHREADPOOL_OFFSET))();
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask WaitUntil(::System::Func_1<::System::Boolean>* predicate, ::Cysharp::Threading::Tasks::PlayerLoopTiming timing, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Func_1<::System::Boolean>*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITUNTIL_OFFSET))(predicate, timing, cancellationToken);
		}
		*/

		/*
		static ::Cysharp::Threading::Tasks::UniTask WaitWhile(::System::Func_1<::System::Boolean>* predicate, ::Cysharp::Threading::Tasks::PlayerLoopTiming timing, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Func_1<::System::Boolean>*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITWHILE_OFFSET))(predicate, timing, cancellationToken);
		}
		*/

		static ::Cysharp::Threading::Tasks::UniTask WhenAll(::Il2CppArray<::Cysharp::Threading::Tasks::UniTask>* tasks)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Il2CppArray<::Cysharp::Threading::Tasks::UniTask>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENALL_OFFSET))(tasks);
		}

		static ::Cysharp::Threading::Tasks::UniTask WhenAll_1(::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask>* tasks)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENALL_1_OFFSET))(tasks);
		}

		/*
		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Int32> WhenAny(::Il2CppArray<::Cysharp::Threading::Tasks::UniTask>* tasks)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>(*)(::Il2CppArray<::Cysharp::Threading::Tasks::UniTask>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENANY_OFFSET))(tasks);
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
		::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> SuppressCancellationThrow()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_SUPPRESSCANCELLATIONTHROW_OFFSET))(this);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_TOSTRING_OFFSET))(this);
		}
	};
}
