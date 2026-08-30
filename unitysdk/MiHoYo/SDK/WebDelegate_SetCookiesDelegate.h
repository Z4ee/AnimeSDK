#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_WEBDELEGATE_SETCOOKIESDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CD80890)
#define MIHOYO_SDK_WEBDELEGATE_SETCOOKIESDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CD808E0)
#define MIHOYO_SDK_WEBDELEGATE_SETCOOKIESDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CD7D630)
#define MIHOYO_SDK_WEBDELEGATE_SETCOOKIESDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD807A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_SetCookiesDelegate_TypeDefinitionIndex = 7803;

	class WebDelegate_SetCookiesDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETCOOKIESDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETCOOKIESDELEGATE_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::String*, ::System::String*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETCOOKIESDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETCOOKIESDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
