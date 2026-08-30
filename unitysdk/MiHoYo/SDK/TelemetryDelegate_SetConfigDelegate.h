#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_TELEMETRYDELEGATE_SETCONFIGDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BAD7C20)
#define MIHOYO_SDK_TELEMETRYDELEGATE_SETCONFIGDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BAD7CC0)
#define MIHOYO_SDK_TELEMETRYDELEGATE_SETCONFIGDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BAD7BF0)
#define MIHOYO_SDK_TELEMETRYDELEGATE_SETCONFIGDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAD7B80)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int TelemetryDelegate_SetConfigDelegate_TypeDefinitionIndex = 7649;

	class TelemetryDelegate_SetConfigDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYDELEGATE_SETCONFIGDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Boolean a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYDELEGATE_SETCONFIGDELEGATE_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYDELEGATE_SETCONFIGDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYDELEGATE_SETCONFIGDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
