#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_TELEMETRYDELEGATE_SETCONFIGDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A521880)
#define MIHOYO_SDK_TELEMETRYDELEGATE_SETCONFIGDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A521940)
#define MIHOYO_SDK_TELEMETRYDELEGATE_SETCONFIGDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A521490)
#define MIHOYO_SDK_TELEMETRYDELEGATE_SETCONFIGDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A521480)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int TelemetryDelegate_SetConfigDelegate_TypeDefinitionIndex = 18562;

	class TelemetryDelegate_SetConfigDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYDELEGATE_SETCONFIGDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Boolean isOverSea, ::System::String* launchTraceId, ::System::Int32 memoryCacheSize, ::System::Int32 diskCacheSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYDELEGATE_SETCONFIGDELEGATE_INVOKE_OFFSET))(this, isOverSea, launchTraceId, memoryCacheSize, diskCacheSize);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean isOverSea, ::System::String* launchTraceId, ::System::Int32 memoryCacheSize, ::System::Int32 diskCacheSize, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYDELEGATE_SETCONFIGDELEGATE_BEGININVOKE_OFFSET))(this, isOverSea, launchTraceId, memoryCacheSize, diskCacheSize, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYDELEGATE_SETCONFIGDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
