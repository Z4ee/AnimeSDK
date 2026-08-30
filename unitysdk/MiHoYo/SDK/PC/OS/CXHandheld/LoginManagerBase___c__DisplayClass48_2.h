#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS::CXHandheld { class HandheldUserAgreementDialog; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE___C__DISPLAYCLASS48_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1A252650)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE___C__DISPLAYCLASS48_2__SHOWUSERAGREEMENTDIALOG_B__6_OFFSET UNITYSDK_OFFSET(0x1A2527B0)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int LoginManagerBase___c__DisplayClass48_2_TypeDefinitionIndex = 8688;

	class LoginManagerBase___c__DisplayClass48_2 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::CXHandheld::HandheldUserAgreementDialog* dialog; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE___C__DISPLAYCLASS48_2__CTOR_OFFSET))(this);
		}

		::System::Void _ShowUserAgreementDialog_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE___C__DISPLAYCLASS48_2__SHOWUSERAGREEMENTDIALOG_B__6_OFFSET))(this);
		}
	};
}
