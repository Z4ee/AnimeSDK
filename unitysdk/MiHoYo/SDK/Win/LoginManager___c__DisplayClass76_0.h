#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::Win { class LoginManager; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS76_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18AE3F90)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS76_0__ONREGISTERCOMPLETE_B__0_OFFSET UNITYSDK_OFFSET(0x18AF4E20)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS76_0__ONREGISTERCOMPLETE_G__FAILCALLBACK_2_OFFSET UNITYSDK_OFFSET(0x18AF5F50)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS76_0__ONREGISTERCOMPLETE_G__SUCCESSCALLBACK_1_OFFSET UNITYSDK_OFFSET(0x18AF6120)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass76_0_TypeDefinitionIndex = 9394;

	class LoginManager___c__DisplayClass76_0 : public ::System::Object
	{
	public:
		::System::String* username; // 0x10
		::System::Action_2<::System::String*, ::System::Boolean>* customCallback; // 0x18
		::System::String* authTicket; // 0x20
		::MiHoYo::SDK::Win::LoginManager* __4__this; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS76_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnRegisterComplete_b__0(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS76_0__ONREGISTERCOMPLETE_B__0_OFFSET))(this, a1);
		}

		::System::Void _OnRegisterComplete_g__successCallback_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS76_0__ONREGISTERCOMPLETE_G__SUCCESSCALLBACK_1_OFFSET))(this, a1);
		}

		::System::Void _OnRegisterComplete_g__failCallback_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS76_0__ONREGISTERCOMPLETE_G__FAILCALLBACK_2_OFFSET))(this);
		}
	};
}
