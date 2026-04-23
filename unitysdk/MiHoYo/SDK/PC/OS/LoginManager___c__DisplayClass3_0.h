#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace MiHoYo::SDK::PC::OS { class LoginManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_LOGINMANAGER___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x175B4FB0)
#define MIHOYO_SDK_PC_OS_LOGINMANAGER___C__DISPLAYCLASS3_0__LOGOUT_B__0_OFFSET UNITYSDK_OFFSET(0x175B5C30)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass3_0_TypeDefinitionIndex = 7574;

	class LoginManager___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::LoginManager* __4__this; // 0x10
		::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_LOGINMANAGER___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _Logout_b__0(::MiHoYo::SDK::CallbackModel_1<::System::String*>* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_LOGINMANAGER___C__DISPLAYCLASS3_0__LOGOUT_B__0_OFFSET))(this, response);
		}
	};
}
