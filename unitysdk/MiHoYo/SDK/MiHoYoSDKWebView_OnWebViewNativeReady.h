#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebView; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWNATIVEREADY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x194B8F40)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWNATIVEREADY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x194B8F70)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWNATIVEREADY_INVOKE_OFFSET UNITYSDK_OFFSET(0x194B8260)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWNATIVEREADY__CTOR_OFFSET UNITYSDK_OFFSET(0x194B8E50)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebView_OnWebViewNativeReady_TypeDefinitionIndex = 47058;

	class MiHoYoSDKWebView_OnWebViewNativeReady : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWNATIVEREADY__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::MiHoYoSDKWebView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWNATIVEREADY_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::MiHoYoSDKWebView* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWNATIVEREADY_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWNATIVEREADY_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
