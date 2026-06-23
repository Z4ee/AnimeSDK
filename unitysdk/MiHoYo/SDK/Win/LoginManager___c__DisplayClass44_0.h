#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/DialogType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class LoginManager; }

#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS44_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C582AE0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS44_0__SHOWQRCODELOGINVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x1C582AF0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass44_0_TypeDefinitionIndex = 21195;

	class LoginManager___c__DisplayClass44_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::LoginManager* __4__this; // 0x10
		::MiHoYo::SDK::DialogType type; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS44_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowQRCodeLoginView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS44_0__SHOWQRCODELOGINVIEW_B__0_OFFSET))(this);
		}
	};
}
