#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_WEBDELEGATE_CALLJSFUNCTIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19B5F8C0)
#define MIHOYO_SDK_WEBDELEGATE_CALLJSFUNCTIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19B5F970)
#define MIHOYO_SDK_WEBDELEGATE_CALLJSFUNCTIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19B5F220)
#define MIHOYO_SDK_WEBDELEGATE_CALLJSFUNCTIONDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B5F210)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_CallJSFunctionDelegate_TypeDefinitionIndex = 18712;

	class WebDelegate_CallJSFunctionDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_CALLJSFUNCTIONDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* webView, ::System::String* method, ::System::String* jsonString, ::System::Boolean isDirectly)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_CALLJSFUNCTIONDELEGATE_INVOKE_OFFSET))(this, webView, method, jsonString, isDirectly);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* webView, ::System::String* method, ::System::String* jsonString, ::System::Boolean isDirectly, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::String*, ::System::String*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_CALLJSFUNCTIONDELEGATE_BEGININVOKE_OFFSET))(this, webView, method, jsonString, isDirectly, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_CALLJSFUNCTIONDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
