#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ThreadPoolTask; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Threading { class Thread; }

#define MIHOYO_SDK_THREADPOOLQUEUE_CHECKANDAUTOGROW_OFFSET UNITYSDK_OFFSET(0x1CC5E5B0)
#define MIHOYO_SDK_THREADPOOLQUEUE_COMMITTASK_OFFSET UNITYSDK_OFFSET(0x1CC5DEF0)
#define MIHOYO_SDK_THREADPOOLQUEUE_DECREASEIDELRUNNER_OFFSET UNITYSDK_OFFSET(0x1CC5EAF0)
#define MIHOYO_SDK_THREADPOOLQUEUE_ENTERIDELSTATUS_OFFSET UNITYSDK_OFFSET(0x1CC5E8D0)
#define MIHOYO_SDK_THREADPOOLQUEUE_INCREASEIDELRUNNER_OFFSET UNITYSDK_OFFSET(0x1CC5EA40)
#define MIHOYO_SDK_THREADPOOLQUEUE_RUNCONCURRENTQUEUE_OFFSET UNITYSDK_OFFSET(0x1CC5EBA0)
#define MIHOYO_SDK_THREADPOOLQUEUE_RUNSERIALQUEUE_OFFSET UNITYSDK_OFFSET(0x1CC5ECC0)
#define MIHOYO_SDK_THREADPOOLQUEUE_SETCURTHREADNAME_OFFSET UNITYSDK_OFFSET(0x1CC5EBE0)
#define MIHOYO_SDK_THREADPOOLQUEUE_SETTHREADNAME_OFFSET UNITYSDK_OFFSET(0x1CC5EA00)
#define MIHOYO_SDK_THREADPOOLQUEUE_SLEEP_OFFSET UNITYSDK_OFFSET(0x1CC5E7F0)
#define MIHOYO_SDK_THREADPOOLQUEUE_STARTUPONECONCURRENTRUNNER_OFFSET UNITYSDK_OFFSET(0x1CC5EBF0)
#define MIHOYO_SDK_THREADPOOLQUEUE_STARTUP_OFFSET UNITYSDK_OFFSET(0x1CC5E560)
#define MIHOYO_SDK_THREADPOOLQUEUE_STOP_OFFSET UNITYSDK_OFFSET(0x1CC5E2A0)
#define MIHOYO_SDK_THREADPOOLQUEUE_WAIT_OFFSET UNITYSDK_OFFSET(0x1CC5E7A0)
#define MIHOYO_SDK_THREADPOOLQUEUE_WAKEUP_OFFSET UNITYSDK_OFFSET(0x1CC5E720)
#define MIHOYO_SDK_THREADPOOLQUEUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC5E400)
#define MIHOYO_SDK_THREADPOOLQUEUE__RUNSERIALQUEUE_B__14_0_OFFSET UNITYSDK_OFFSET(0x1CC5F230)
#define MIHOYO_SDK_THREADPOOLQUEUE__STARTUPONECONCURRENTRUNNER_B__12_0_OFFSET UNITYSDK_OFFSET(0x1CC5ED90)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ThreadPoolQueue_TypeDefinitionIndex = 37537;

	class ThreadPoolQueue : public ::System::Object
	{
	public:
		// static const ::System::Int32 MIN_WAKEUP_TIME = 0x14; // 0x0
		// static const ::System::Int32 MAX_QUEUE_LEN = 0x3E8; // 0x0
		// static const ::System::Int32 MAX_SINGLE_SLEEP_MILLISEC = 0x1388; // 0x0
		// static const ::System::Int32 MAX_RUNNER_COUNT = 0x10; // 0x0
		// static const ::System::String* THREAD_DEFAULT_NAME; // 0x0
		::System::Object* m_lock; // 0x10
		::System::String* m_strQueueName; // 0x18
		::System::Collections::Generic::Queue_1<::MiHoYo::SDK::ThreadPoolTask*>* m_queueTask; // 0x20
		::System::Int32 m_nIdelCount; // 0x28
		::System::Int32 m_nRunnerCount; // 0x2C
		::System::Int32 m_nWakeupMillisec; // 0x30
		::System::Boolean m_bIsTimingWakeup; // 0x34
		::System::Boolean m_bIsAutoGrow; // 0x35
		::System::Boolean m_bIsRun; // 0x36

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
