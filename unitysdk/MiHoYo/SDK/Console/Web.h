#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_CONSOLE_WEB_OPENURLPS_OFFSET UNITYSDK_OFFSET(0x15EC5C40)
#define MIHOYO_SDK_CONSOLE_WEB_OPENURLXBOX_OFFSET UNITYSDK_OFFSET(0x15EC5BD0)
#define MIHOYO_SDK_CONSOLE_WEB_OPENURL_OFFSET UNITYSDK_OFFSET(0x15EB7C90)
#define MIHOYO_SDK_CONSOLE_WEB__CTOR_OFFSET UNITYSDK_OFFSET(0x15EC6E40)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int Web_TypeDefinitionIndex = 7582;

	class Web : public ::System::Object
	{
	public:
		// static const ::System::String* WEB_KEY_URL; // 0x0
		// static const ::System::String* WEB_KEY_COOKIE; // 0x0
		// static const ::System::String* WEB_KEY_COOKIES; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_WEB__CTOR_OFFSET))(this);
		}

		static ::System::Void OpenURL(::System::String* url, ::System::Action* closeCallback, ::System::Collections::Generic::List_1<::System::String*>* cookies)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_WEB_OPENURL_OFFSET))(url, closeCallback, cookies);
		}

		static ::System::Void OpenUrlXbox(::System::String* url, ::System::Action* closeCallback, ::System::Collections::Generic::List_1<::System::String*>* cookises)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_WEB_OPENURLXBOX_OFFSET))(url, closeCallback, cookises);
		}

		static ::System::Void OpenUrlPS(::System::String* url, ::System::Action* closeCallback, ::System::Collections::Generic::List_1<::System::String*>* cookies)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_WEB_OPENURLPS_OFFSET))(url, closeCallback, cookies);
		}
	};
}
