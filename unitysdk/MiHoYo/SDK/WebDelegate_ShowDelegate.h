#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEBDELEGATE_SHOWDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19B61CE0)
#define MIHOYO_SDK_WEBDELEGATE_SHOWDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19B61D10)
#define MIHOYO_SDK_WEBDELEGATE_SHOWDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19B617E0)
#define MIHOYO_SDK_WEBDELEGATE_SHOWDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B617D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_ShowDelegate_TypeDefinitionIndex = 18691;

	class WebDelegate_ShowDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SHOWDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* webView)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SHOWDELEGATE_INVOKE_OFFSET))(this, webView);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* webView, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SHOWDELEGATE_BEGININVOKE_OFFSET))(this, webView, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SHOWDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
