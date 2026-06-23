#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/CXHandheld/HandheldUserAgreementDialog_DisplayMode.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS::CXHandheld { class HandheldUserAgreementDialog; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0DD140)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG___C__DISPLAYCLASS30_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1C0DD150)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int HandheldUserAgreementDialog___c__DisplayClass30_0_TypeDefinitionIndex = 20566;

	class HandheldUserAgreementDialog___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::CXHandheld::HandheldUserAgreementDialog_DisplayMode mode; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::PC::OS::CXHandheld::HandheldUserAgreementDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldUserAgreementDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDUSERAGREEMENTDIALOG___C__DISPLAYCLASS30_0__SHOW_B__0_OFFSET))(this, dialog);
		}
	};
}
