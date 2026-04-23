#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoChannelSDK_LogLevel.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOCHANNELSDK_LOGHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8D13030)
#define MIHOYO_SDK_HOYOCHANNELSDK_LOGHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8D130B0)
#define MIHOYO_SDK_HOYOCHANNELSDK_LOGHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x8D12CE0)
#define MIHOYO_SDK_HOYOCHANNELSDK_LOGHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8D0A510)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelSDK_LogHandler_TypeDefinitionIndex = 43134;

	class HoYoChannelSDK_LogHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_LOGHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::HoYoChannelSDK_LogLevel logLevel, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::HoYoChannelSDK_LogLevel, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_LOGHANDLER_INVOKE_OFFSET))(this, logLevel, message);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::HoYoChannelSDK_LogLevel logLevel, ::System::String* message, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::HoYoChannelSDK_LogLevel, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_LOGHANDLER_BEGININVOKE_OFFSET))(this, logLevel, message, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_LOGHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
