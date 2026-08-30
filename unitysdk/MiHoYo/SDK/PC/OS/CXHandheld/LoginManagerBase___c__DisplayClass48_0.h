#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS::CXHandheld { class LoginManagerBase; }
namespace System { class Action; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE___C__DISPLAYCLASS48_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9FA000)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE___C__DISPLAYCLASS48_0__SHOWUSERAGREEMENTDIALOG_B__0_OFFSET UNITYSDK_OFFSET(0x1B9FC1B0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE___C__DISPLAYCLASS48_0__SHOWUSERAGREEMENTDIALOG_B__1_OFFSET UNITYSDK_OFFSET(0x1B9FC780)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE___C__DISPLAYCLASS48_0__SHOWUSERAGREEMENTDIALOG_B__2_OFFSET UNITYSDK_OFFSET(0x1B9FCA40)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE___C__DISPLAYCLASS48_0__SHOWUSERAGREEMENTDIALOG_B__3_OFFSET UNITYSDK_OFFSET(0x1B9FCB30)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE___C__DISPLAYCLASS48_0__SHOWUSERAGREEMENTDIALOG_B__4_OFFSET UNITYSDK_OFFSET(0x1B9FCC20)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int LoginManagerBase___c__DisplayClass48_0_TypeDefinitionIndex = 8686;

	class LoginManagerBase___c__DisplayClass48_0 : public ::System::Object
	{
	public:
		::System::Action* agreedCallback; // 0x10
		::MiHoYo::SDK::PC::OS::CXHandheld::LoginManagerBase* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE___C__DISPLAYCLASS48_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowUserAgreementDialog_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE___C__DISPLAYCLASS48_0__SHOWUSERAGREEMENTDIALOG_B__0_OFFSET))(this);
		}

		::System::Void _ShowUserAgreementDialog_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE___C__DISPLAYCLASS48_0__SHOWUSERAGREEMENTDIALOG_B__1_OFFSET))(this);
		}

		::System::Void _ShowUserAgreementDialog_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE___C__DISPLAYCLASS48_0__SHOWUSERAGREEMENTDIALOG_B__2_OFFSET))(this);
		}

		::System::Void _ShowUserAgreementDialog_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE___C__DISPLAYCLASS48_0__SHOWUSERAGREEMENTDIALOG_B__3_OFFSET))(this);
		}

		::System::Void _ShowUserAgreementDialog_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE___C__DISPLAYCLASS48_0__SHOWUSERAGREEMENTDIALOG_B__4_OFFSET))(this);
		}
	};
}
