#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKNATIVECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DF81A10)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKNATIVECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DF81A90)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKNATIVECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DF81700)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKNATIVECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF816E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AccountPlatNative_HoYoSDKNativeCallback_TypeDefinitionIndex = 37133;

	class AccountPlatNative_HoYoSDKNativeCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKNATIVECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 nCallbackIndex, ::System::String* strArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKNATIVECALLBACK_INVOKE_OFFSET))(this, nCallbackIndex, strArgs);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 nCallbackIndex, ::System::String* strArgs, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKNATIVECALLBACK_BEGININVOKE_OFFSET))(this, nCallbackIndex, strArgs, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKNATIVECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
