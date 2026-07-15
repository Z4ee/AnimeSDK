#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_CONSOLE_WEB_OPENURLPS_OFFSET UNITYSDK_OFFSET(0x1AA42D10)
#define MIHOYO_SDK_CONSOLE_WEB_OPENURLXBOX_OFFSET UNITYSDK_OFFSET(0x1AA42CE0)
#define MIHOYO_SDK_CONSOLE_WEB_OPENURL_OFFSET UNITYSDK_OFFSET(0x1AA31E00)
#define MIHOYO_SDK_CONSOLE_WEB__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA433B0)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int Web_TypeDefinitionIndex = 8638;

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

		static ::System::Void OpenURL(::System::String* a1, ::System::Action* a2, ::System::Collections::Generic::List_1<::System::String*>* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_WEB_OPENURL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void OpenUrlXbox(::System::String* a1, ::System::Action* a2, ::System::Collections::Generic::List_1<::System::String*>* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_WEB_OPENURLXBOX_OFFSET))(a1, a2, a3);
		}

		static ::System::Void OpenUrlPS(::System::String* a1, ::System::Action* a2, ::System::Collections::Generic::List_1<::System::String*>* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_WEB_OPENURLPS_OFFSET))(a1, a2, a3);
		}
	};
}
