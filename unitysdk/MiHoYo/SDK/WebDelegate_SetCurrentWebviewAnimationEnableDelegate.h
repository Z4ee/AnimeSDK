#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEBDELEGATE_SETCURRENTWEBVIEWANIMATIONENABLEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CAEEF10)
#define MIHOYO_SDK_WEBDELEGATE_SETCURRENTWEBVIEWANIMATIONENABLEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CAEEF90)
#define MIHOYO_SDK_WEBDELEGATE_SETCURRENTWEBVIEWANIMATIONENABLEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CAEE900)
#define MIHOYO_SDK_WEBDELEGATE_SETCURRENTWEBVIEWANIMATIONENABLEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAEE8E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_SetCurrentWebviewAnimationEnableDelegate_TypeDefinitionIndex = 19943;

	class WebDelegate_SetCurrentWebviewAnimationEnableDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETCURRENTWEBVIEWANIMATIONENABLEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* webView, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETCURRENTWEBVIEWANIMATIONENABLEDELEGATE_INVOKE_OFFSET))(this, webView, enable);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* webView, ::System::Boolean enable, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETCURRENTWEBVIEWANIMATIONENABLEDELEGATE_BEGININVOKE_OFFSET))(this, webView, enable, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETCURRENTWEBVIEWANIMATIONENABLEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
