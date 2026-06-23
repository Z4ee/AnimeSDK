#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Win { class SteamManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_STEAMMANAGER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B547D50)
#define MIHOYO_SDK_WIN_STEAMMANAGER___C__DISPLAYCLASS15_0__LOGIN_B__0_OFFSET UNITYSDK_OFFSET(0x1B547D60)
#define MIHOYO_SDK_WIN_STEAMMANAGER___C__DISPLAYCLASS15_0__LOGIN_B__1_OFFSET UNITYSDK_OFFSET(0x1B547DE0)
#define MIHOYO_SDK_WIN_STEAMMANAGER___C__DISPLAYCLASS15_0__LOGIN_B__2_OFFSET UNITYSDK_OFFSET(0x1B548930)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int SteamManager___c__DisplayClass15_0_TypeDefinitionIndex = 21114;

	class SteamManager___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::SteamManager* __4__this; // 0x10
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* OnLogin; // 0x18
		::System::Action_1<::System::String*>* callback; // 0x20
		::System::Action_1<::System::String*>* __9__2; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _Login_b__0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER___C__DISPLAYCLASS15_0__LOGIN_B__0_OFFSET))(this, response);
		}

		::System::Void _Login_b__1(::System::String* ticket)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER___C__DISPLAYCLASS15_0__LOGIN_B__1_OFFSET))(this, ticket);
		}

		::System::Void _Login_b__2(::System::String* response)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER___C__DISPLAYCLASS15_0__LOGIN_B__2_OFFSET))(this, response);
		}
	};
}
