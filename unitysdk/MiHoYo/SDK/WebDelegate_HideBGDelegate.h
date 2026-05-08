#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEBDELEGATE_HIDEBGDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19951D80)
#define MIHOYO_SDK_WEBDELEGATE_HIDEBGDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19951E00)
#define MIHOYO_SDK_WEBDELEGATE_HIDEBGDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19951790)
#define MIHOYO_SDK_WEBDELEGATE_HIDEBGDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19951780)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_HideBGDelegate_TypeDefinitionIndex = 18711;

	class WebDelegate_HideBGDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_HIDEBGDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* webView, ::System::Boolean flag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_HIDEBGDELEGATE_INVOKE_OFFSET))(this, webView, flag);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* webView, ::System::Boolean flag, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_HIDEBGDELEGATE_BEGININVOKE_OFFSET))(this, webView, flag, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_HIDEBGDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
