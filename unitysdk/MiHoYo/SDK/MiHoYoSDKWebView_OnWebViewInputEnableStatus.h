#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebView; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWINPUTENABLESTATUS_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA1C4660)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWINPUTENABLESTATUS_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA1C46C0)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWINPUTENABLESTATUS_INVOKE_OFFSET UNITYSDK_OFFSET(0xA1C3B10)
#define MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWINPUTENABLESTATUS__CTOR_OFFSET UNITYSDK_OFFSET(0xA1C4570)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKWebView_OnWebViewInputEnableStatus_TypeDefinitionIndex = 43961;

	class MiHoYoSDKWebView_OnWebViewInputEnableStatus : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWINPUTENABLESTATUS__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::MiHoYoSDKWebView* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWINPUTENABLESTATUS_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::MiHoYoSDKWebView* a1, ::System::Boolean a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWINPUTENABLESTATUS_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKWEBVIEW_ONWEBVIEWINPUTENABLESTATUS_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
