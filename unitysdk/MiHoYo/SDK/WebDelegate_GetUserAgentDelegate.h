#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_WEBDELEGATE_GETUSERAGENTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CD7EB70)
#define MIHOYO_SDK_WEBDELEGATE_GETUSERAGENTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CD7EBA0)
#define MIHOYO_SDK_WEBDELEGATE_GETUSERAGENTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CD7CBE0)
#define MIHOYO_SDK_WEBDELEGATE_GETUSERAGENTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD7EB00)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_GetUserAgentDelegate_TypeDefinitionIndex = 7790;

	class WebDelegate_GetUserAgentDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_GETUSERAGENTDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* Invoke()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_GETUSERAGENTDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_GETUSERAGENTDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::String* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_GETUSERAGENTDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
