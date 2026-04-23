#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEBDELEGATE_SETWEBANIMATIONENABLEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x176A7110)
#define MIHOYO_SDK_WEBDELEGATE_SETWEBANIMATIONENABLEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x176A7170)
#define MIHOYO_SDK_WEBDELEGATE_SETWEBANIMATIONENABLEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x176A2760)
#define MIHOYO_SDK_WEBDELEGATE_SETWEBANIMATIONENABLEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x176A70F0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_SetWebAnimationEnableDelegate_TypeDefinitionIndex = 6901;

	class WebDelegate_SetWebAnimationEnableDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETWEBANIMATIONENABLEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* webView, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETWEBANIMATIONENABLEDELEGATE_INVOKE_OFFSET))(this, webView, enable);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* webView, ::System::Boolean enable, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETWEBANIMATIONENABLEDELEGATE_BEGININVOKE_OFFSET))(this, webView, enable, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETWEBANIMATIONENABLEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
