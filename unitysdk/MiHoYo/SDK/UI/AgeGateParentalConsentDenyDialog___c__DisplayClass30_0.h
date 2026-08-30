#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI { class AgeGateParentalConsentDenyDialog; }
namespace System { class String; }

#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAE08B0)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG___C__DISPLAYCLASS30_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1BAE09D0)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int AgeGateParentalConsentDenyDialog___c__DisplayClass30_0_TypeDefinitionIndex = 8342;

	class AgeGateParentalConsentDenyDialog___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::System::String* email; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::UI::AgeGateParentalConsentDenyDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::AgeGateParentalConsentDenyDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG___C__DISPLAYCLASS30_0__SHOW_B__0_OFFSET))(this, a1);
		}
	};
}
