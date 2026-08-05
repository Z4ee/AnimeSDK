#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/WebFeature.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEBDELEGATE_SETWEBFEATUREDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CD1C7A0)
#define MIHOYO_SDK_WEBDELEGATE_SETWEBFEATUREDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CD1C820)
#define MIHOYO_SDK_WEBDELEGATE_SETWEBFEATUREDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CD1BC60)
#define MIHOYO_SDK_WEBDELEGATE_SETWEBFEATUREDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD1C780)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_SetWebFeatureDelegate_TypeDefinitionIndex = 19965;

	class WebDelegate_SetWebFeatureDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETWEBFEATUREDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* webView, ::MiHoYo::SDK::WebFeature feature)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::MiHoYo::SDK::WebFeature))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETWEBFEATUREDELEGATE_INVOKE_OFFSET))(this, webView, feature);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* webView, ::MiHoYo::SDK::WebFeature feature, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::MiHoYo::SDK::WebFeature, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETWEBFEATUREDELEGATE_BEGININVOKE_OFFSET))(this, webView, feature, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETWEBFEATUREDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
