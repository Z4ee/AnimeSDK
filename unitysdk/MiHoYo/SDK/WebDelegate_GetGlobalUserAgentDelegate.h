#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_WEBDELEGATE_GETGLOBALUSERAGENTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BE6D110)
#define MIHOYO_SDK_WEBDELEGATE_GETGLOBALUSERAGENTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BE6D140)
#define MIHOYO_SDK_WEBDELEGATE_GETGLOBALUSERAGENTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BE6CE70)
#define MIHOYO_SDK_WEBDELEGATE_GETGLOBALUSERAGENTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE6CE50)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_GetGlobalUserAgentDelegate_TypeDefinitionIndex = 19599;

	class WebDelegate_GetGlobalUserAgentDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_GETGLOBALUSERAGENTDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::String* Invoke()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_GETGLOBALUSERAGENTDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_GETGLOBALUSERAGENTDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::String* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::String*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_GETGLOBALUSERAGENTDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
