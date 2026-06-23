#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_TELEMETRYDELEGATE_STOPDATAUPLOADDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BBD0F80)
#define MIHOYO_SDK_TELEMETRYDELEGATE_STOPDATAUPLOADDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BBD0FB0)
#define MIHOYO_SDK_TELEMETRYDELEGATE_STOPDATAUPLOADDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BBD0A80)
#define MIHOYO_SDK_TELEMETRYDELEGATE_STOPDATAUPLOADDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBD0A60)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int TelemetryDelegate_StopDataUploadDelegate_TypeDefinitionIndex = 19459;

	class TelemetryDelegate_StopDataUploadDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYDELEGATE_STOPDATAUPLOADDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYDELEGATE_STOPDATAUPLOADDELEGATE_INVOKE_OFFSET))(this, url);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* url, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYDELEGATE_STOPDATAUPLOADDELEGATE_BEGININVOKE_OFFSET))(this, url, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYDELEGATE_STOPDATAUPLOADDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
