#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS::CXHandheld { class HandheldUserAgreementDialog; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD___C__DISPLAYCLASS15_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1A99FE70)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD___C__DISPLAYCLASS15_2__SHOWUSERAGREEMENTDIALOG_B__6_OFFSET UNITYSDK_OFFSET(0x1A9A00C0)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int LoginManagerHandheld___c__DisplayClass15_2_TypeDefinitionIndex = 20499;

	class LoginManagerHandheld___c__DisplayClass15_2 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::CXHandheld::HandheldUserAgreementDialog* dialog; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD___C__DISPLAYCLASS15_2__CTOR_OFFSET))(this);
		}

		::System::Void _ShowUserAgreementDialog_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD___C__DISPLAYCLASS15_2__SHOWUSERAGREEMENTDIALOG_B__6_OFFSET))(this);
		}
	};
}
