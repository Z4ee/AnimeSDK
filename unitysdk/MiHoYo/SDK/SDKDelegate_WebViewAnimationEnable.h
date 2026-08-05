#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_SDKDELEGATE_WEBVIEWANIMATIONENABLE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CFDE690)
#define MIHOYO_SDK_SDKDELEGATE_WEBVIEWANIMATIONENABLE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CFDE700)
#define MIHOYO_SDK_SDKDELEGATE_WEBVIEWANIMATIONENABLE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CFDE310)
#define MIHOYO_SDK_SDKDELEGATE_WEBVIEWANIMATIONENABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFDE2F0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_WebViewAnimationEnable_TypeDefinitionIndex = 19913;

	class SDKDelegate_WebViewAnimationEnable : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_WEBVIEWANIMATIONENABLE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_WEBVIEWANIMATIONENABLE_INVOKE_OFFSET))(this, enable);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean enable, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_WEBVIEWANIMATIONENABLE_BEGININVOKE_OFFSET))(this, enable, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_WEBVIEWANIMATIONENABLE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
