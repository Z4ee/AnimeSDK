#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PS/PSUserAgreementDialog_DisplayMode.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PS { class PSUserAgreementDialog; }

#define MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA61A30)
#define MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG___C__DISPLAYCLASS16_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1BA63130)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PSUserAgreementDialog___c__DisplayClass16_0_TypeDefinitionIndex = 8888;

	class PSUserAgreementDialog___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PS::PSUserAgreementDialog_DisplayMode mode; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::PS::PSUserAgreementDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PS::PSUserAgreementDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSUSERAGREEMENTDIALOG___C__DISPLAYCLASS16_0__SHOW_B__0_OFFSET))(this, a1);
		}
	};
}
