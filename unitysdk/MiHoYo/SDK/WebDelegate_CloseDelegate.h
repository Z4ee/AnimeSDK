#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEBDELEGATE_CLOSEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19B5FE90)
#define MIHOYO_SDK_WEBDELEGATE_CLOSEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19B5FEC0)
#define MIHOYO_SDK_WEBDELEGATE_CLOSEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19B5F990)
#define MIHOYO_SDK_WEBDELEGATE_CLOSEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B5F980)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_CloseDelegate_TypeDefinitionIndex = 18693;

	class WebDelegate_CloseDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_CLOSEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* webView)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_CLOSEDELEGATE_INVOKE_OFFSET))(this, webView);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* webView, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_CLOSEDELEGATE_BEGININVOKE_OFFSET))(this, webView, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_CLOSEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
