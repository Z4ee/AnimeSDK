#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKPLUGINUICALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA13CFA0)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKPLUGINUICALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA13CFE0)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKPLUGINUICALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA13CF90)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKPLUGINUICALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xA13CF10)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AccountPlatNative_HoYoSDKPluginUICallback_TypeDefinitionIndex = 43496;

	class AccountPlatNative_HoYoSDKPluginUICallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKPLUGINUICALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKPLUGINUICALLBACK_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::String* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKPLUGINUICALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKPLUGINUICALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
