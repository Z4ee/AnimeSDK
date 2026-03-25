#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ThreadPoolTask; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Threading { class Thread; }

#define MIHOYO_SDK_THREADPOOLQUEUE_CHECKANDAUTOGROW_OFFSET UNITYSDK_OFFSET(0x8597C00)
#define MIHOYO_SDK_THREADPOOLQUEUE_COMMITTASK_OFFSET UNITYSDK_OFFSET(0x8594BE0)
#define MIHOYO_SDK_THREADPOOLQUEUE_DECREASEIDELRUNNER_OFFSET UNITYSDK_OFFSET(0x85980B0)
#define MIHOYO_SDK_THREADPOOLQUEUE_ENTERIDELSTATUS_OFFSET UNITYSDK_OFFSET(0x8597ED0)
#define MIHOYO_SDK_THREADPOOLQUEUE_INCREASEIDELRUNNER_OFFSET UNITYSDK_OFFSET(0x8598000)
#define MIHOYO_SDK_THREADPOOLQUEUE_RUNCONCURRENTQUEUE_OFFSET UNITYSDK_OFFSET(0x8598160)
#define MIHOYO_SDK_THREADPOOLQUEUE_RUNSERIALQUEUE_OFFSET UNITYSDK_OFFSET(0x8598260)
#define MIHOYO_SDK_THREADPOOLQUEUE_SETCURTHREADNAME_OFFSET UNITYSDK_OFFSET(0x85981A0)
#define MIHOYO_SDK_THREADPOOLQUEUE_SETTHREADNAME_OFFSET UNITYSDK_OFFSET(0x8597FC0)
#define MIHOYO_SDK_THREADPOOLQUEUE_SLEEP_OFFSET UNITYSDK_OFFSET(0x8597E40)
#define MIHOYO_SDK_THREADPOOLQUEUE_STARTUPONECONCURRENTRUNNER_OFFSET UNITYSDK_OFFSET(0x85981B0)
#define MIHOYO_SDK_THREADPOOLQUEUE_STARTUP_OFFSET UNITYSDK_OFFSET(0x8597BB0)
#define MIHOYO_SDK_THREADPOOLQUEUE_STOP_OFFSET UNITYSDK_OFFSET(0x8595090)
#define MIHOYO_SDK_THREADPOOLQUEUE_WAIT_OFFSET UNITYSDK_OFFSET(0x8597DF0)
#define MIHOYO_SDK_THREADPOOLQUEUE_WAKEUP_OFFSET UNITYSDK_OFFSET(0x8597D70)
#define MIHOYO_SDK_THREADPOOLQUEUE__CTOR_OFFSET UNITYSDK_OFFSET(0x8597A50)
#define MIHOYO_SDK_THREADPOOLQUEUE__RUNSERIALQUEUE_B__14_0_OFFSET UNITYSDK_OFFSET(0x8598D00)
#define MIHOYO_SDK_THREADPOOLQUEUE__STARTUPONECONCURRENTRUNNER_B__12_0_OFFSET UNITYSDK_OFFSET(0x8598310)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ThreadPoolQueue_TypeDefinitionIndex = 37243;

	class ThreadPoolQueue : public ::System::Object
	{
	public:
		// static const ::System::Int32 MIN_WAKEUP_TIME = 0x14; // 0x0
		// static const ::System::Int32 MAX_QUEUE_LEN = 0x3E8; // 0x0
		// static const ::System::Int32 MAX_SINGLE_SLEEP_MILLISEC = 0x1388; // 0x0
		// static const ::System::Int32 MAX_RUNNER_COUNT = 0x10; // 0x0
		// static const ::System::String* THREAD_DEFAULT_NAME; // 0x0
		::System::Collections::Generic::Queue_1<::MiHoYo::SDK::ThreadPoolTask*>* m_queueTask; // 0x10
		::System::Object* m_lock; // 0x18
		::System::String* m_strQueueName; // 0x20
		::System::Int32 m_nWakeupMillisec; // 0x28
		::System::Int32 m_nRunnerCount; // 0x2C
		::System::Boolean m_bIsAutoGrow; // 0x30
		::System::Boolean m_bIsTimingWakeup; // 0x31
		::System::Boolean m_bIsRun; // 0x32
		::System::Int32 m_nIdelCount; // 0x34

		::System::Void _ctor(::System::Boolean bIsTimingWakeup, ::System::Int32 nWakeupMillisec, ::System::Int32 nQueueCount, ::System::String* strQueueName, ::System::Boolean bIsAutoGrow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLQUEUE__CTOR_OFFSET))(this, bIsTimingWakeup, nWakeupMillisec, nQueueCount, strQueueName, bIsAutoGrow);
		}

		::System::Void CommitTask(::MiHoYo::SDK::ThreadPoolTask* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ThreadPoolTask*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLQUEUE_COMMITTASK_OFFSET))(this, callback);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLQUEUE_STOP_OFFSET))(this);
		}

		::System::Void Wakeup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLQUEUE_WAKEUP_OFFSET))(this);
		}

		::System::Void Wait()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLQUEUE_WAIT_OFFSET))(this);
		}

		::System::Void Sleep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLQUEUE_SLEEP_OFFSET))(this);
		}

		::System::Void EnterIdelStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLQUEUE_ENTERIDELSTATUS_OFFSET))(this);
		}

		::System::Void SetThreadName(::System::Threading::Thread* thread)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Thread*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLQUEUE_SETTHREADNAME_OFFSET))(this, thread);
		}

		::System::Void IncreaseIdelRunner()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLQUEUE_INCREASEIDELRUNNER_OFFSET))(this);
		}

		::System::Void DecreaseIdelRunner()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLQUEUE_DECREASEIDELRUNNER_OFFSET))(this);
		}

		::System::Void CheckAndAutoGrow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLQUEUE_CHECKANDAUTOGROW_OFFSET))(this);
		}

		::System::Void SetCurThreadName(::System::String* strThreadName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLQUEUE_SETCURTHREADNAME_OFFSET))(this, strThreadName);
		}

		::System::Void StartupOneConcurrentRunner()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLQUEUE_STARTUPONECONCURRENTRUNNER_OFFSET))(this);
		}

		::System::Void RunConcurrentQueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLQUEUE_RUNCONCURRENTQUEUE_OFFSET))(this);
		}

		::System::Void RunSerialQueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLQUEUE_RUNSERIALQUEUE_OFFSET))(this);
		}

		::System::Void Startup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLQUEUE_STARTUP_OFFSET))(this);
		}

		::System::Void _StartupOneConcurrentRunner_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLQUEUE__STARTUPONECONCURRENTRUNNER_B__12_0_OFFSET))(this);
		}

		::System::Void _RunSerialQueue_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLQUEUE__RUNSERIALQUEUE_B__14_0_OFFSET))(this);
		}
	};
}
