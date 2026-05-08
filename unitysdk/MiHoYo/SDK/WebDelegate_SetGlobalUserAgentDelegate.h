#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_WEBDELEGATE_SETGLOBALUSERAGENTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19FEFCE0)
#define MIHOYO_SDK_WEBDELEGATE_SETGLOBALUSERAGENTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19FEFD10)
#define MIHOYO_SDK_WEBDELEGATE_SETGLOBALUSERAGENTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19FEF7E0)
#define MIHOYO_SDK_WEBDELEGATE_SETGLOBALUSERAGENTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19FEF7D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_SetGlobalUserAgentDelegate_TypeDefinitionIndex = 18705;

	class WebDelegate_SetGlobalUserAgentDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETGLOBALUSERAGENTDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* content)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETGLOBALUSERAGENTDELEGATE_INVOKE_OFFSET))(this, content);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* content, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETGLOBALUSERAGENTDELEGATE_BEGININVOKE_OFFSET))(this, content, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETGLOBALUSERAGENTDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
