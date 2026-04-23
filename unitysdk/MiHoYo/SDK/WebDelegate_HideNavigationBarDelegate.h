#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEBDELEGATE_HIDENAVIGATIONBARDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x176A5660)
#define MIHOYO_SDK_WEBDELEGATE_HIDENAVIGATIONBARDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x176A5700)
#define MIHOYO_SDK_WEBDELEGATE_HIDENAVIGATIONBARDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x17698270)
#define MIHOYO_SDK_WEBDELEGATE_HIDENAVIGATIONBARDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x176A5640)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_HideNavigationBarDelegate_TypeDefinitionIndex = 6874;

	class WebDelegate_HideNavigationBarDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_HIDENAVIGATIONBARDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* webView, ::System::Boolean enabled, ::System::Boolean affectWebsBehindCurrentWebView, ::System::Boolean setFullScreenSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_HIDENAVIGATIONBARDELEGATE_INVOKE_OFFSET))(this, webView, enabled, affectWebsBehindCurrentWebView, setFullScreenSize);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* webView, ::System::Boolean enabled, ::System::Boolean affectWebsBehindCurrentWebView, ::System::Boolean setFullScreenSize, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_HIDENAVIGATIONBARDELEGATE_BEGININVOKE_OFFSET))(this, webView, enabled, affectWebsBehindCurrentWebView, setFullScreenSize, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_HIDENAVIGATIONBARDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
