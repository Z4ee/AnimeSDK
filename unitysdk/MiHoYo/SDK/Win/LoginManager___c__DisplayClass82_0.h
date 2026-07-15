#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::Win { class LoginManager; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS82_0__CTOR_OFFSET UNITYSDK_OFFSET(0x156BC560)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS82_0__REQUESTLOGINBYGOOGLE_B__1_OFFSET UNITYSDK_OFFSET(0x156D1830)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass82_0_TypeDefinitionIndex = 9120;

	class LoginManager___c__DisplayClass82_0 : public ::System::Object
	{
	public:
		::System::String* idToken; // 0x10
		::MiHoYo::SDK::Win::LoginManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS82_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestLoginByGoogle_b__1(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS82_0__REQUESTLOGINBYGOOGLE_B__1_OFFSET))(this, a1);
		}
	};
}
