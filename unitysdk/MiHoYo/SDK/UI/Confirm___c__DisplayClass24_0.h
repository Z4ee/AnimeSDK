#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI { class Confirm; }
namespace MiHoYo::SDK::UI { class Confirm_OnConfirmDelegate; }
namespace System { class String; }

#define MIHOYO_SDK_UI_CONFIRM___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1766D7E0)
#define MIHOYO_SDK_UI_CONFIRM___C__DISPLAYCLASS24_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1766E2A0)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int Confirm___c__DisplayClass24_0_TypeDefinitionIndex = 7427;

	class Confirm___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::UI::Confirm_OnConfirmDelegate* callback; // 0x10
		::System::String* content; // 0x18
		::System::String* cancelButton; // 0x20
		::System::String* okButton; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CONFIRM___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::UI::Confirm* confirmDialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::Confirm*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CONFIRM___C__DISPLAYCLASS24_0__SHOW_B__0_OFFSET))(this, confirmDialog);
		}
	};
}
