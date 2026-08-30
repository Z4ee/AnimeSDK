#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ThreadPoolQueue; }
namespace System { class String; }

#define MIHOYO_SDK_THREADPOOLSERVICE_GETCONCURRENTQUEUE_OFFSET UNITYSDK_OFFSET(0x1CD36DB0)
#define MIHOYO_SDK_THREADPOOLSERVICE_GETQUEUE_OFFSET UNITYSDK_OFFSET(0x1CD3ADD0)
#define MIHOYO_SDK_THREADPOOLSERVICE_GETREPORTDATAQUEUE_OFFSET UNITYSDK_OFFSET(0x1CD3AB70)
#define MIHOYO_SDK_THREADPOOLSERVICE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1CD36D30)
#define MIHOYO_SDK_THREADPOOLSERVICE_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1CD3AB60)
#define MIHOYO_SDK_THREADPOOLSERVICE_STOPREPORTDATAQUEUE_OFFSET UNITYSDK_OFFSET(0x1CD3AC90)
#define MIHOYO_SDK_THREADPOOLSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD3AB40)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ThreadPoolService_TypeDefinitionIndex = 46950;

	class ThreadPoolService : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::ThreadPoolService** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::ThreadPoolService**)Il2CppClass::FromTypeDefinitionIndex(ThreadPoolService_TypeDefinitionIndex)->GetStaticField(0x5DBB0);
		}
		::System::Object* m_lock; // 0x10
		::MiHoYo::SDK::ThreadPoolQueue* m_reportDataQueue; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLSERVICE__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::ThreadPoolService* get_Instance()
		{
			return ((::MiHoYo::SDK::ThreadPoolService*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLSERVICE_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::MiHoYo::SDK::ThreadPoolService* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::ThreadPoolService*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLSERVICE_SET_INSTANCE_OFFSET))(a1);
		}

		::MiHoYo::SDK::ThreadPoolQueue* GetReportDataQueue()
		{
			return ((::MiHoYo::SDK::ThreadPoolQueue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLSERVICE_GETREPORTDATAQUEUE_OFFSET))(this);
		}

		::System::Void StopReportDataQueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLSERVICE_STOPREPORTDATAQUEUE_OFFSET))(this);
		}

		::MiHoYo::SDK::ThreadPoolQueue* GetQueue(::System::Boolean a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::MiHoYo::SDK::ThreadPoolQueue*(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLSERVICE_GETQUEUE_OFFSET))(this, a1, a2, a3);
		}

		::MiHoYo::SDK::ThreadPoolQueue* GetConcurrentQueue(::System::Boolean a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::System::Boolean a5)
		{
			return ((::MiHoYo::SDK::ThreadPoolQueue*(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLSERVICE_GETCONCURRENTQUEUE_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
