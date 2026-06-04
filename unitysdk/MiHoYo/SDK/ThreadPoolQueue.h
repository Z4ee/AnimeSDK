#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ThreadPoolTask; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Threading { class Thread; }

#define MIHOYO_SDK_THREADPOOLQUEUE_CHECKANDAUTOGROW_OFFSET UNITYSDK_OFFSET(0xA2197B0)
#define MIHOYO_SDK_THREADPOOLQUEUE_COMMITTASK_OFFSET UNITYSDK_OFFSET(0xA2167C0)
#define MIHOYO_SDK_THREADPOOLQUEUE_DECREASEIDELRUNNER_OFFSET UNITYSDK_OFFSET(0xA219C60)
#define MIHOYO_SDK_THREADPOOLQUEUE_ENTERIDELSTATUS_OFFSET UNITYSDK_OFFSET(0xA219A80)
#define MIHOYO_SDK_THREADPOOLQUEUE_INCREASEIDELRUNNER_OFFSET UNITYSDK_OFFSET(0xA219BB0)
#define MIHOYO_SDK_THREADPOOLQUEUE_RUNCONCURRENTQUEUE_OFFSET UNITYSDK_OFFSET(0xA219D10)
#define MIHOYO_SDK_THREADPOOLQUEUE_RUNSERIALQUEUE_OFFSET UNITYSDK_OFFSET(0xA219E40)
#define MIHOYO_SDK_THREADPOOLQUEUE_SETCURTHREADNAME_OFFSET UNITYSDK_OFFSET(0xA219D50)
#define MIHOYO_SDK_THREADPOOLQUEUE_SETTHREADNAME_OFFSET UNITYSDK_OFFSET(0xA219B70)
#define MIHOYO_SDK_THREADPOOLQUEUE_SLEEP_OFFSET UNITYSDK_OFFSET(0xA2199F0)
#define MIHOYO_SDK_THREADPOOLQUEUE_STARTUPONECONCURRENTRUNNER_OFFSET UNITYSDK_OFFSET(0xA219D60)
#define MIHOYO_SDK_THREADPOOLQUEUE_STARTUP_OFFSET UNITYSDK_OFFSET(0xA219760)
#define MIHOYO_SDK_THREADPOOLQUEUE_STOP_OFFSET UNITYSDK_OFFSET(0xA216C70)
#define MIHOYO_SDK_THREADPOOLQUEUE_WAIT_OFFSET UNITYSDK_OFFSET(0xA2199A0)
#define MIHOYO_SDK_THREADPOOLQUEUE_WAKEUP_OFFSET UNITYSDK_OFFSET(0xA219920)
#define MIHOYO_SDK_THREADPOOLQUEUE__CTOR_OFFSET UNITYSDK_OFFSET(0xA219600)
#define MIHOYO_SDK_THREADPOOLQUEUE__RUNSERIALQUEUE_B__14_0_OFFSET UNITYSDK_OFFSET(0xA21A3E0)
#define MIHOYO_SDK_THREADPOOLQUEUE__STARTUPONECONCURRENTRUNNER_B__12_0_OFFSET UNITYSDK_OFFSET(0xA219F20)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ThreadPoolQueue_TypeDefinitionIndex = 43901;

	class ThreadPoolQueue : public ::System::Object
	{
	public:
		// static const ::System::Int32 MIN_WAKEUP_TIME = 0x14; // 0x0
		// static const ::System::Int32 MAX_QUEUE_LEN = 0x3E8; // 0x0
		// static const ::System::Int32 MAX_SINGLE_SLEEP_MILLISEC = 0x1388; // 0x0
		// static const ::System::Int32 MAX_RUNNER_COUNT = 0x10; // 0x0
		// static const ::System::String* THREAD_DEFAULT_NAME; // 0x0
		::System::Object* m_lock; // 0x10
		::System::Collections::Generic::Queue_1<::MiHoYo::SDK::ThreadPoolTask*>* m_queueTask; // 0x18
		::System::String* m_strQueueName; // 0x20
		::System::Int32 m_nWakeupMillisec; // 0x28
		::System::Int32 m_nIdelCount; // 0x2C
		::System::Int32 m_nRunnerCount; // 0x30
		::System::Boolean m_bIsTimingWakeup; // 0x34
		::System::Boolean m_bIsRun; // 0x35
		::System::Boolean m_bIsAutoGrow; // 0x36

		::System::Void _ctor(::System::Boolean a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLQUEUE__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void CommitTask(::MiHoYo::SDK::ThreadPoolTask* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ThreadPoolTask*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLQUEUE_COMMITTASK_OFFSET))(this, a1);
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

		::System::Void SetThreadName(::System::Threading::Thread* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Thread*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLQUEUE_SETTHREADNAME_OFFSET))(this, a1);
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

		::System::Void SetCurThreadName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLQUEUE_SETCURTHREADNAME_OFFSET))(this, a1);
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
