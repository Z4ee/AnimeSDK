#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_TELEMETRYDELEGATE_REPORTTOKIBANADELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B9B9FF0)
#define MIHOYO_SDK_TELEMETRYDELEGATE_REPORTTOKIBANADELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B9BA060)
#define MIHOYO_SDK_TELEMETRYDELEGATE_REPORTTOKIBANADELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B9B9FD0)
#define MIHOYO_SDK_TELEMETRYDELEGATE_REPORTTOKIBANADELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9B9F50)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int TelemetryDelegate_ReportToKibanaDelegate_TypeDefinitionIndex = 7655;

	class TelemetryDelegate_ReportToKibanaDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYDELEGATE_REPORTTOKIBANADELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::String* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYDELEGATE_REPORTTOKIBANADELEGATE_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::Int32 a2, ::System::String* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYDELEGATE_REPORTTOKIBANADELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYDELEGATE_REPORTTOKIBANADELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
