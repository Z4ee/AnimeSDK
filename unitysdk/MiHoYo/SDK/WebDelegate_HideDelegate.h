#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEBDELEGATE_HIDEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D7750B0)
#define MIHOYO_SDK_WEBDELEGATE_HIDEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D7750E0)
#define MIHOYO_SDK_WEBDELEGATE_HIDEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D774B90)
#define MIHOYO_SDK_WEBDELEGATE_HIDEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D774B70)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_HideDelegate_TypeDefinitionIndex = 19935;

	class WebDelegate_HideDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_HIDEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* webView)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_HIDEDELEGATE_INVOKE_OFFSET))(this, webView);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* webView, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_HIDEDELEGATE_BEGININVOKE_OFFSET))(this, webView, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_HIDEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
