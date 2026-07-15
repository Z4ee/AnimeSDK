#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/DialogType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class LoginByQRCode; }

#define MIHOYO_SDK_WIN_LOGINBYQRCODE___C__DISPLAYCLASS47_0__CTOR_OFFSET UNITYSDK_OFFSET(0x156AE120)
#define MIHOYO_SDK_WIN_LOGINBYQRCODE___C__DISPLAYCLASS47_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x156AE770)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginByQRCode___c__DisplayClass47_0_TypeDefinitionIndex = 9199;

	class LoginByQRCode___c__DisplayClass47_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::DialogType type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYQRCODE___C__DISPLAYCLASS47_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::Win::LoginByQRCode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::LoginByQRCode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYQRCODE___C__DISPLAYCLASS47_0__SHOW_B__0_OFFSET))(this, a1);
		}
	};
}
