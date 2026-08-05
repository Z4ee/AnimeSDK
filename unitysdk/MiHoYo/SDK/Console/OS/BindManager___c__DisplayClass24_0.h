#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Console::OS { class BindManager; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7627B0)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER___C__DISPLAYCLASS24_0__GETCAPTCHACODE_B__0_OFFSET UNITYSDK_OFFSET(0x1D7627C0)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int BindManager___c__DisplayClass24_0_TypeDefinitionIndex = 21158;

	class BindManager___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::System::String* input; // 0x10
		::MiHoYo::SDK::Console::OS::BindManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetCaptchaCode_b__0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER___C__DISPLAYCLASS24_0__GETCAPTCHACODE_B__0_OFFSET))(this, response);
		}
	};
}
