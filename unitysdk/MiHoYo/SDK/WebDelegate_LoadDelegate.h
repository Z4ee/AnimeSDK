#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_WEBDELEGATE_LOADDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x197F5FB0)
#define MIHOYO_SDK_WEBDELEGATE_LOADDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x197F5FF0)
#define MIHOYO_SDK_WEBDELEGATE_LOADDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x197F5A30)
#define MIHOYO_SDK_WEBDELEGATE_LOADDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x197F5A20)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_LoadDelegate_TypeDefinitionIndex = 18690;

	class WebDelegate_LoadDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_LOADDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* webView, ::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_LOADDELEGATE_INVOKE_OFFSET))(this, webView, url);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* webView, ::System::String* url, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_LOADDELEGATE_BEGININVOKE_OFFSET))(this, webView, url, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_LOADDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
