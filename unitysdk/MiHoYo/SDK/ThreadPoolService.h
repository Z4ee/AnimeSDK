#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ThreadPoolQueue; }
namespace System { class String; }

#define MIHOYO_SDK_THREADPOOLSERVICE_GETCONCURRENTQUEUE_OFFSET UNITYSDK_OFFSET(0x8DCAFD0)
#define MIHOYO_SDK_THREADPOOLSERVICE_GETQUEUE_OFFSET UNITYSDK_OFFSET(0x8DCF4C0)
#define MIHOYO_SDK_THREADPOOLSERVICE_GETREPORTDATAQUEUE_OFFSET UNITYSDK_OFFSET(0x8DCF260)
#define MIHOYO_SDK_THREADPOOLSERVICE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x8DCAF50)
#define MIHOYO_SDK_THREADPOOLSERVICE_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x8DCF220)
#define MIHOYO_SDK_THREADPOOLSERVICE_STOPREPORTDATAQUEUE_OFFSET UNITYSDK_OFFSET(0x8DCF380)
#define MIHOYO_SDK_THREADPOOLSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x8DCF200)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ThreadPoolService_TypeDefinitionIndex = 43099;

	class ThreadPoolService : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::ThreadPoolService** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::ThreadPoolService**)Il2CppClass::FromTypeDefinitionIndex(ThreadPoolService_TypeDefinitionIndex)->GetStaticField(0x544C0);
		}
		::MiHoYo::SDK::ThreadPoolQueue* m_reportDataQueue; // 0x10
		::System::Object* m_lock; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLSERVICE__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::ThreadPoolService* get_Instance()
		{
			return ((::MiHoYo::SDK::ThreadPoolService*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLSERVICE_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::MiHoYo::SDK::ThreadPoolService* value)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::ThreadPoolService*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLSERVICE_SET_INSTANCE_OFFSET))(value);
		}

		::MiHoYo::SDK::ThreadPoolQueue* GetReportDataQueue()
		{
			return ((::MiHoYo::SDK::ThreadPoolQueue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLSERVICE_GETREPORTDATAQUEUE_OFFSET))(this);
		}

		::System::Void StopReportDataQueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLSERVICE_STOPREPORTDATAQUEUE_OFFSET))(this);
		}

		::MiHoYo::SDK::ThreadPoolQueue* GetQueue(::System::Boolean bIsTimingWakeup, ::System::Int32 nWakeupMillisec, ::System::String* strQueueName)
		{
			return ((::MiHoYo::SDK::ThreadPoolQueue*(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLSERVICE_GETQUEUE_OFFSET))(this, bIsTimingWakeup, nWakeupMillisec, strQueueName);
		}

		::MiHoYo::SDK::ThreadPoolQueue* GetConcurrentQueue(::System::Boolean bIsTimingWakeup, ::System::Int32 nWakeupMillisec, ::System::Int32 nCount, ::System::String* strQueueName, ::System::Boolean bIsAutoGrow)
		{
			return ((::MiHoYo::SDK::ThreadPoolQueue*(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLSERVICE_GETCONCURRENTQUEUE_OFFSET))(this, bIsTimingWakeup, nWakeupMillisec, nCount, strQueueName, bIsAutoGrow);
		}
	};
}
