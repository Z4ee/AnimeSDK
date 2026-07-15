#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Alert_AlertResult.h"
#include "unitysdk/MiHoYo/SDK/ReportType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace MiHoYo::SDK::PC::OS { class LoginManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_LOGINMANAGER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1994E970)
#define MIHOYO_SDK_PC_OS_LOGINMANAGER___C__DISPLAYCLASS7_0__SHOWLOGINSTATEINVALID_B__0_OFFSET UNITYSDK_OFFSET(0x1994EEE0)
#define MIHOYO_SDK_PC_OS_LOGINMANAGER___C__DISPLAYCLASS7_0__SHOWLOGINSTATEINVALID_B__1_OFFSET UNITYSDK_OFFSET(0x1994EFC0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass7_0_TypeDefinitionIndex = 8491;

	class LoginManager___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::LoginManager* __4__this; // 0x10
		::System::Action* callback; // 0x18
		::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>* OnLogout; // 0x20
		::MiHoYo::SDK::ReportType type; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_LOGINMANAGER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowLoginStateInvalid_b__0(::MiHoYo::SDK::CallbackModel_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_LOGINMANAGER___C__DISPLAYCLASS7_0__SHOWLOGINSTATEINVALID_B__0_OFFSET))(this, a1);
		}

		::System::Void _ShowLoginStateInvalid_b__1(::MiHoYo::SDK::Alert_AlertResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Alert_AlertResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_LOGINMANAGER___C__DISPLAYCLASS7_0__SHOWLOGINSTATEINVALID_B__1_OFFSET))(this, a1);
		}
	};
}
