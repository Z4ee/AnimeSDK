#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::Win { class LoginManager; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS76_0__CTOR_OFFSET UNITYSDK_OFFSET(0x160D06F0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS76_0__ONREGISTERCOMPLETE_B__0_OFFSET UNITYSDK_OFFSET(0x160E1CF0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS76_0__ONREGISTERCOMPLETE_G__FAILCALLBACK_2_OFFSET UNITYSDK_OFFSET(0x160E2EB0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS76_0__ONREGISTERCOMPLETE_G__SUCCESSCALLBACK_1_OFFSET UNITYSDK_OFFSET(0x160E3080)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass76_0_TypeDefinitionIndex = 8054;

	class LoginManager___c__DisplayClass76_0 : public ::System::Object
	{
	public:
		::System::String* authTicket; // 0x10
		::MiHoYo::SDK::Win::LoginManager* __4__this; // 0x18
		::System::String* username; // 0x20
		::System::Action_2<::System::String*, ::System::Boolean>* customCallback; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS76_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnRegisterComplete_b__0(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS76_0__ONREGISTERCOMPLETE_B__0_OFFSET))(this, response);
		}

		::System::Void _OnRegisterComplete_g__successCallback_1(::System::String* ticket)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS76_0__ONREGISTERCOMPLETE_G__SUCCESSCALLBACK_1_OFFSET))(this, ticket);
		}

		::System::Void _OnRegisterComplete_g__failCallback_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS76_0__ONREGISTERCOMPLETE_G__FAILCALLBACK_2_OFFSET))(this);
		}
	};
}
