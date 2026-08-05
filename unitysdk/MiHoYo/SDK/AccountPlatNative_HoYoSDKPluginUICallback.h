#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKPLUGINUICALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E52D520)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKPLUGINUICALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E52D560)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKPLUGINUICALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E52CF90)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKPLUGINUICALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E52CF70)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AccountPlatNative_HoYoSDKPluginUICallback_TypeDefinitionIndex = 37134;

	class AccountPlatNative_HoYoSDKPluginUICallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKPLUGINUICALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* strMsgName, ::System::String* strParams)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKPLUGINUICALLBACK_INVOKE_OFFSET))(this, strMsgName, strParams);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* strMsgName, ::System::String* strParams, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKPLUGINUICALLBACK_BEGININVOKE_OFFSET))(this, strMsgName, strParams, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_HOYOSDKPLUGINUICALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
