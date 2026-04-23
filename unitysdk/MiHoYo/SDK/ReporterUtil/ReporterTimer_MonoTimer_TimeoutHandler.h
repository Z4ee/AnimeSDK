#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Timers { class ElapsedEventArgs; }

#define MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_TIMEOUTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8DAEA10)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_TIMEOUTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8DAEA50)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_TIMEOUTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x8DAE490)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_TIMEOUTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8DAD9C0)

namespace MiHoYo::SDK::ReporterUtil
{
	inline static constexpr unsigned int ReporterTimer_MonoTimer_TimeoutHandler_TypeDefinitionIndex = 43216;

	class ReporterTimer_MonoTimer_TimeoutHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_TIMEOUTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::Timers::ElapsedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Timers::ElapsedEventArgs*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_TIMEOUTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::Timers::ElapsedEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Timers::ElapsedEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_TIMEOUTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_TIMEOUTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
