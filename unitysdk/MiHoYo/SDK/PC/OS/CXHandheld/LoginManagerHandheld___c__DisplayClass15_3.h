#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS::CXHandheld { class HandheldUserAgreementDialog; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD___C__DISPLAYCLASS15_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDD6900)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD___C__DISPLAYCLASS15_3__SHOWUSERAGREEMENTDIALOG_B__7_OFFSET UNITYSDK_OFFSET(0x1BDD6A10)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int LoginManagerHandheld___c__DisplayClass15_3_TypeDefinitionIndex = 20847;

	class LoginManagerHandheld___c__DisplayClass15_3 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::CXHandheld::HandheldUserAgreementDialog* dialog; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD___C__DISPLAYCLASS15_3__CTOR_OFFSET))(this);
		}

		::System::Void _ShowUserAgreementDialog_b__7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD___C__DISPLAYCLASS15_3__SHOWUSERAGREEMENTDIALOG_B__7_OFFSET))(this);
		}
	};
}
