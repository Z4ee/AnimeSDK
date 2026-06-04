#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebView; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWPAGECLOSE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA1C4A20)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWPAGECLOSE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA1C4A50)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWPAGECLOSE_INVOKE_OFFSET UNITYSDK_OFFSET(0xA1C3870)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWPAGECLOSE__CTOR_OFFSET UNITYSDK_OFFSET(0xA1C4930)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebView_OnWebViewPageClose_TypeDefinitionIndex = 43958;

	class MiHoYoSDKWebView_OnWebViewPageClose : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWPAGECLOSE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::MiHoYoSDKWebView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWPAGECLOSE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::MiHoYoSDKWebView* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWPAGECLOSE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWPAGECLOSE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
