#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace MiHoYo::SDK::Win { class LoginManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x160C5DF0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS23_0__LOGOUT_B__0_OFFSET UNITYSDK_OFFSET(0x160DCA80)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass23_0_TypeDefinitionIndex = 8043;

	class LoginManager___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>* callback; // 0x10
		::MiHoYo::SDK::Win::LoginManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _Logout_b__0(::System::String* response)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS23_0__LOGOUT_B__0_OFFSET))(this, response);
		}
	};
}
