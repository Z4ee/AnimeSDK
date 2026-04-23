#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_TELEMETRYDELEGATE_STOPKIBANADELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1765DA30)
#define MIHOYO_SDK_TELEMETRYDELEGATE_STOPKIBANADELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1765DA60)
#define MIHOYO_SDK_TELEMETRYDELEGATE_STOPKIBANADELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1765D4E0)
#define MIHOYO_SDK_TELEMETRYDELEGATE_STOPKIBANADELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1765D4C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int TelemetryDelegate_StopKibanaDelegate_TypeDefinitionIndex = 6745;

	class TelemetryDelegate_StopKibanaDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYDELEGATE_STOPKIBANADELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYDELEGATE_STOPKIBANADELEGATE_INVOKE_OFFSET))(this, url);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* url, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYDELEGATE_STOPKIBANADELEGATE_BEGININVOKE_OFFSET))(this, url, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYDELEGATE_STOPKIBANADELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
