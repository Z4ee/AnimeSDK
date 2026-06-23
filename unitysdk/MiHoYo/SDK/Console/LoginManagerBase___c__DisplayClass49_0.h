#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console { class LoginManagerBase; }
namespace System { class Action; }

#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE___C__DISPLAYCLASS49_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBA6DF0)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE___C__DISPLAYCLASS49_0__SHOWUSERAGREEMENTDIALOG_B__0_OFFSET UNITYSDK_OFFSET(0x1BBA6E00)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE___C__DISPLAYCLASS49_0__SHOWUSERAGREEMENTDIALOG_B__1_OFFSET UNITYSDK_OFFSET(0x1BBA7050)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int LoginManagerBase___c__DisplayClass49_0_TypeDefinitionIndex = 20724;

	class LoginManagerBase___c__DisplayClass49_0 : public ::System::Object
	{
	public:
		::System::Action* agreedCallback; // 0x10
		::MiHoYo::SDK::Console::LoginManagerBase* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE___C__DISPLAYCLASS49_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowUserAgreementDialog_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE___C__DISPLAYCLASS49_0__SHOWUSERAGREEMENTDIALOG_B__0_OFFSET))(this);
		}

		::System::Void _ShowUserAgreementDialog_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE___C__DISPLAYCLASS49_0__SHOWUSERAGREEMENTDIALOG_B__1_OFFSET))(this);
		}
	};
}
