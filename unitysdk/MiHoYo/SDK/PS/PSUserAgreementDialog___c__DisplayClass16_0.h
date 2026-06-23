#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PS/PSUserAgreementDialog_DisplayMode.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PS { class PSUserAgreementDialog; }

#define MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3967C0)
#define MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG___C__DISPLAYCLASS16_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1C3967D0)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PSUserAgreementDialog___c__DisplayClass16_0_TypeDefinitionIndex = 20694;

	class PSUserAgreementDialog___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PS::PSUserAgreementDialog_DisplayMode mode; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::PS::PSUserAgreementDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PS::PSUserAgreementDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG___C__DISPLAYCLASS16_0__SHOW_B__0_OFFSET))(this, dialog);
		}
	};
}
