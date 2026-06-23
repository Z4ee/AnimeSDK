#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_TELEMETRYDELEGATE_REPORTTOKIBANADELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BC9E4C0)
#define MIHOYO_SDK_TELEMETRYDELEGATE_REPORTTOKIBANADELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BC9E550)
#define MIHOYO_SDK_TELEMETRYDELEGATE_REPORTTOKIBANADELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BC9DF20)
#define MIHOYO_SDK_TELEMETRYDELEGATE_REPORTTOKIBANADELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC9DF00)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int TelemetryDelegate_ReportToKibanaDelegate_TypeDefinitionIndex = 19463;

	class TelemetryDelegate_ReportToKibanaDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYDELEGATE_REPORTTOKIBANADELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* custom_data, ::System::Int32 priority, ::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYDELEGATE_REPORTTOKIBANADELEGATE_INVOKE_OFFSET))(this, custom_data, priority, url);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* custom_data, ::System::Int32 priority, ::System::String* url, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYDELEGATE_REPORTTOKIBANADELEGATE_BEGININVOKE_OFFSET))(this, custom_data, priority, url, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYDELEGATE_REPORTTOKIBANADELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
