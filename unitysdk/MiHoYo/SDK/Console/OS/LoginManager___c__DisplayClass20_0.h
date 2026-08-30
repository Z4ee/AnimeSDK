#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7BFC90)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER___C__DISPLAYCLASS20_0__OPENUSERCENTER_G__ACTIONRESPONSE_1_OFFSET UNITYSDK_OFFSET(0x1B7C0D30)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER___C__DISPLAYCLASS20_0__OPENUSERCENTER_G__OPENWEB_0_OFFSET UNITYSDK_OFFSET(0x1B7BFCA0)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass20_0_TypeDefinitionIndex = 9018;

	class LoginManager___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::System::String* url; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _OpenUserCenter_g__openWeb_0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER___C__DISPLAYCLASS20_0__OPENUSERCENTER_G__OPENWEB_0_OFFSET))(this, a1);
		}

		::System::Void _OpenUserCenter_g__actionResponse_1(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER___C__DISPLAYCLASS20_0__OPENUSERCENTER_G__ACTIONRESPONSE_1_OFFSET))(this, a1);
		}
	};
}
