#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebView; }
namespace MiHoYo::SDK { class Web; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONPOPUPBROWSERCREATEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA1C43A0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONPOPUPBROWSERCREATEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA1C43E0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONPOPUPBROWSERCREATEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0xA1C3B40)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONPOPUPBROWSERCREATEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0xA1C42B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebView_OnPopupBrowserCreateDelegate_TypeDefinitionIndex = 43963;

	class MiHoYoSDKWebView_OnPopupBrowserCreateDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONPOPUPBROWSERCREATEDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::MiHoYoSDKWebView* a1, ::MiHoYo::SDK::Web* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONPOPUPBROWSERCREATEDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::MiHoYoSDKWebView* a1, ::MiHoYo::SDK::Web* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::MiHoYo::SDK::Web*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONPOPUPBROWSERCREATEDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONPOPUPBROWSERCREATEDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
