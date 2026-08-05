#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_WEBDELEGATE_SETUSERAGENTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CAF01D0)
#define MIHOYO_SDK_WEBDELEGATE_SETUSERAGENTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CAF0200)
#define MIHOYO_SDK_WEBDELEGATE_SETUSERAGENTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CAEFCB0)
#define MIHOYO_SDK_WEBDELEGATE_SETUSERAGENTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAEFC90)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_SetUserAgentDelegate_TypeDefinitionIndex = 19946;

	class WebDelegate_SetUserAgentDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETUSERAGENTDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* content)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETUSERAGENTDELEGATE_INVOKE_OFFSET))(this, content);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* content, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETUSERAGENTDELEGATE_BEGININVOKE_OFFSET))(this, content, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETUSERAGENTDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
