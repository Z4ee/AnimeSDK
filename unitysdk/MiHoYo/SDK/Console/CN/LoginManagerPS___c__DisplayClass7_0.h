#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Console::CN { class LoginManagerPS; }

#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS___C__DISPLAYCLASS7_0__CHECKAGREEMENT_B__0_OFFSET UNITYSDK_OFFSET(0x1A1695A0)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A169590)

namespace MiHoYo::SDK::Console::CN
{
	inline static constexpr unsigned int LoginManagerPS___c__DisplayClass7_0_TypeDefinitionIndex = 19700;

	class LoginManagerPS___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::NetworkResponseModel* response; // 0x10
		::MiHoYo::SDK::Console::CN::LoginManagerPS* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _CheckAgreement_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS___C__DISPLAYCLASS7_0__CHECKAGREEMENT_B__0_OFFSET))(this);
		}
	};
}
