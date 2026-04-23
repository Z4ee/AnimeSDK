#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKNOTIFICATION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8CE1F00)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKNOTIFICATION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8CE1F30)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKNOTIFICATION_INVOKE_OFFSET UNITYSDK_OFFSET(0x8CE19B0)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKNOTIFICATION__CTOR_OFFSET UNITYSDK_OFFSET(0x8CDE100)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AccountPlatNative_HoYoSDKNotification_TypeDefinitionIndex = 42694;

	class AccountPlatNative_HoYoSDKNotification : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKNOTIFICATION__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* strArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKNOTIFICATION_INVOKE_OFFSET))(this, strArgs);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* strArgs, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKNOTIFICATION_BEGININVOKE_OFFSET))(this, strArgs, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKNOTIFICATION_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
