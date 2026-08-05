#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/SpinLock.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_INTERNAL_CONTINUATIONQUEUE_ENQUEUEWITHUSERDATA_OFFSET UNITYSDK_OFFSET(0x1FBE7CA0)
#define CYSHARP_THREADING_TASKS_INTERNAL_CONTINUATIONQUEUE_ENQUEUE_OFFSET UNITYSDK_OFFSET(0x1FBE79D0)
#define CYSHARP_THREADING_TASKS_INTERNAL_CONTINUATIONQUEUE_RUNCORE_OFFSET UNITYSDK_OFFSET(0x1FBE81E0)
#define CYSHARP_THREADING_TASKS_INTERNAL_CONTINUATIONQUEUE_RUN_OFFSET UNITYSDK_OFFSET(0x1FBE81D0)
#define CYSHARP_THREADING_TASKS_INTERNAL_CONTINUATIONQUEUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBE7910)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int ContinuationQueue_TypeDefinitionIndex = 32093;

	class ContinuationQueue : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Action_1<::System::Object*>*>* userdataWaitingList; // 0x10
		::Il2CppArray<::System::Action*>* waitingList; // 0x18
		::Il2CppArray<::System::Action_1<::System::Object*>*>* userdataActionList; // 0x20
		::Il2CppArray<::System::Object*>* userdata; // 0x28
		::Il2CppArray<::System::Object*>* userdataWaiting; // 0x30
		::Il2CppArray<::System::Action*>* actionList; // 0x38
		::System::Int32 userdataWaitingListCount; // 0x40
		::System::Threading::SpinLock gate; // 0x44
		::System::Int32 waitingListCount; // 0x48
		::System::Boolean dequing; // 0x4C
		::System::Int32 actionListCount; // 0x50
		::Cysharp::Threading::Tasks::PlayerLoopTiming timing; // 0x54
		::System::Int32 userdataActionListCount; // 0x58

		::System::Void _ctor(::Cysharp::Threading::Tasks::PlayerLoopTiming timing)
		{
			return ((::System::Void(*)(::PVOID, ::Cysharp::Threading::Tasks::PlayerLoopTiming))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_CONTINUATIONQUEUE__CTOR_OFFSET))(this, timing);
		}

		::System::Void Enqueue(::System::Action* continuation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_CONTINUATIONQUEUE_ENQUEUE_OFFSET))(this, continuation);
		}

		::System::Void EnqueueWithUserData(::System::Action_1<::System::Object*>* continuation, ::System::Object* userData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_CONTINUATIONQUEUE_ENQUEUEWITHUSERDATA_OFFSET))(this, continuation, userData);
		}

		::System::Void Run()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_CONTINUATIONQUEUE_RUN_OFFSET))(this);
		}

		::System::Void RunCore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_CONTINUATIONQUEUE_RUNCORE_OFFSET))(this);
		}
	};
}
