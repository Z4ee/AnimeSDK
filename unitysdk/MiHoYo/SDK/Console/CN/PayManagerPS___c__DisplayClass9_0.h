#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class GameRoleModel; }
namespace MiHoYo::SDK::Console::CN { class PayManagerPS; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS___C__DISPLAYCLASS9_0__CHECKCONSOLEPAY_B__0_OFFSET UNITYSDK_OFFSET(0x17325D00)
#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17321850)

namespace MiHoYo::SDK::Console::CN
{
	inline static constexpr unsigned int PayManagerPS___c__DisplayClass9_0_TypeDefinitionIndex = 9060;

	class PayManagerPS___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::GameRoleModel* gameRoleModel; // 0x10
		::MiHoYo::SDK::AccountModel* accountModel; // 0x18
		::MiHoYo::SDK::Console::CN::PayManagerPS* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _CheckConsolePay_b__0(::System::Int32 a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERPS___C__DISPLAYCLASS9_0__CHECKCONSOLEPAY_B__0_OFFSET))(this, a1, a2, a3);
		}
	};
}
