#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_SDKDELEGATE_WEBVIEWANIMATIONENABLE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x171208B0)
#define MIHOYO_SDK_SDKDELEGATE_WEBVIEWANIMATIONENABLE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17120900)
#define MIHOYO_SDK_SDKDELEGATE_WEBVIEWANIMATIONENABLE_INVOKE_OFFSET UNITYSDK_OFFSET(0x171208A0)
#define MIHOYO_SDK_SDKDELEGATE_WEBVIEWANIMATIONENABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x17120830)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_WebViewAnimationEnable_TypeDefinitionIndex = 7758;

	class SDKDelegate_WebViewAnimationEnable : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_WEBVIEWANIMATIONENABLE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_WEBVIEWANIMATIONENABLE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_WEBVIEWANIMATIONENABLE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_WEBVIEWANIMATIONENABLE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
