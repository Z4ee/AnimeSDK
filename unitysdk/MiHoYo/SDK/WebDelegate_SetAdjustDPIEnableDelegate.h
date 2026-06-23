#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEBDELEGATE_SETADJUSTDPIENABLEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BBD4370)
#define MIHOYO_SDK_WEBDELEGATE_SETADJUSTDPIENABLEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BBD43F0)
#define MIHOYO_SDK_WEBDELEGATE_SETADJUSTDPIENABLEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BBD3D80)
#define MIHOYO_SDK_WEBDELEGATE_SETADJUSTDPIENABLEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBD3D60)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_SetAdjustDPIEnableDelegate_TypeDefinitionIndex = 19615;

	class WebDelegate_SetAdjustDPIEnableDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETADJUSTDPIENABLEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* webView, ::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETADJUSTDPIENABLEDELEGATE_INVOKE_OFFSET))(this, webView, enabled);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* webView, ::System::Boolean enabled, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETADJUSTDPIENABLEDELEGATE_BEGININVOKE_OFFSET))(this, webView, enabled, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETADJUSTDPIENABLEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
