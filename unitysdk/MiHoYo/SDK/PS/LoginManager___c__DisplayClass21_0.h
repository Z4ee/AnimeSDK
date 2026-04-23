#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PS { class LoginManager; }
namespace System { class Action; }

#define MIHOYO_SDK_PS_LOGINMANAGER___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x175C99F0)
#define MIHOYO_SDK_PS_LOGINMANAGER___C__DISPLAYCLASS21_0__SHOWUSERAGREEMENTDIALOG_B__0_OFFSET UNITYSDK_OFFSET(0x175CD1A0)
#define MIHOYO_SDK_PS_LOGINMANAGER___C__DISPLAYCLASS21_0__SHOWUSERAGREEMENTDIALOG_B__1_OFFSET UNITYSDK_OFFSET(0x175CD750)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass21_0_TypeDefinitionIndex = 7666;

	class LoginManager___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::System::Action* agreedCallback; // 0x10
		::MiHoYo::SDK::PS::LoginManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowUserAgreementDialog_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER___C__DISPLAYCLASS21_0__SHOWUSERAGREEMENTDIALOG_B__0_OFFSET))(this);
		}

		::System::Void _ShowUserAgreementDialog_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER___C__DISPLAYCLASS21_0__SHOWUSERAGREEMENTDIALOG_B__1_OFFSET))(this);
		}
	};
}
