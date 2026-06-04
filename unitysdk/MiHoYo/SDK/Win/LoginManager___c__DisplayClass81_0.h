#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::Win { class LoginManager; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS81_0__CTOR_OFFSET UNITYSDK_OFFSET(0x184F30A0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS81_0__REQUESTLOGINBYAPPLE_B__1_OFFSET UNITYSDK_OFFSET(0x18507480)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass81_0_TypeDefinitionIndex = 9107;

	class LoginManager___c__DisplayClass81_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::LoginManager* __4__this; // 0x10
		::System::String* idToken; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS81_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestLoginByApple_b__1(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS81_0__REQUESTLOGINBYAPPLE_B__1_OFFSET))(this, a1);
		}
	};
}
