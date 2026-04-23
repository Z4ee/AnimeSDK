#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class GameRoleModel; }
namespace MiHoYo::SDK::Console::OS { class PayManagerPS; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS___C__DISPLAYCLASS8_0__CHECKCONSOLEPAY_B__0_OFFSET UNITYSDK_OFFSET(0x17472600)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1746F1E0)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int PayManagerPS___c__DisplayClass8_0_TypeDefinitionIndex = 7848;

	class PayManagerPS___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Console::OS::PayManagerPS* __4__this; // 0x10
		::MiHoYo::SDK::AccountModel* accountModel; // 0x18
		::MiHoYo::SDK::GameRoleModel* gameRoleModel; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _CheckConsolePay_b__0(::System::Int32 code, ::System::String* authCode, ::System::Int32 issuerId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS___C__DISPLAYCLASS8_0__CHECKCONSOLEPAY_B__0_OFFSET))(this, code, authCode, issuerId);
		}
	};
}
