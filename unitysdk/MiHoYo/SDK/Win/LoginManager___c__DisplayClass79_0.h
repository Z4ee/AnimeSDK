#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::Win { class LoginManager; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS79_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C966500)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS79_0__REQUESTLOGINBYFACEBOOK_B__1_OFFSET UNITYSDK_OFFSET(0x1C96E470)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass79_0_TypeDefinitionIndex = 21550;

	class LoginManager___c__DisplayClass79_0 : public ::System::Object
	{
	public:
		::System::String* token; // 0x10
		::MiHoYo::SDK::Win::LoginManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS79_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestLoginByFacebook_b__1(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS79_0__REQUESTLOGINBYFACEBOOK_B__1_OFFSET))(this, response);
		}
	};
}
