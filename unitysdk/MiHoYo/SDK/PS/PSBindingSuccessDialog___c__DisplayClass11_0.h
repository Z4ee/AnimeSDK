#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PS { class PSBindingSuccessDialog; }
namespace System { class String; }

#define MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x175E5F10)
#define MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG___C__DISPLAYCLASS11_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x175E6870)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PSBindingSuccessDialog___c__DisplayClass11_0_TypeDefinitionIndex = 7698;

	class PSBindingSuccessDialog___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::String* hoyoAccount; // 0x10
		::System::String* psnAccount; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::PS::PSBindingSuccessDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PS::PSBindingSuccessDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSBINDINGSUCCESSDIALOG___C__DISPLAYCLASS11_0__SHOW_B__0_OFFSET))(this, dialog);
		}
	};
}
