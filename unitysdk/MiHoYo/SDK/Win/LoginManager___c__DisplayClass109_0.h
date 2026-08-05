#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class LoginManager; }
namespace System { class Action; }

#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS109_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1F0020)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS109_0__SETAGEGATEFAILCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x1D1F0030)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass109_0_TypeDefinitionIndex = 21561;

	class LoginManager___c__DisplayClass109_0 : public ::System::Object
	{
	public:
		::System::Action* customCallback; // 0x10
		::MiHoYo::SDK::Win::LoginManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS109_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetAgeGateFailCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS109_0__SETAGEGATEFAILCALLBACK_B__0_OFFSET))(this);
		}
	};
}
