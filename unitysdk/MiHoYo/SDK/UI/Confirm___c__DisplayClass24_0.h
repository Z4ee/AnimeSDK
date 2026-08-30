#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI { class Confirm; }
namespace MiHoYo::SDK::UI { class Confirm_OnConfirmDelegate; }
namespace System { class String; }

#define MIHOYO_SDK_UI_CONFIRM___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9CCF90)
#define MIHOYO_SDK_UI_CONFIRM___C__DISPLAYCLASS24_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1B9CD770)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int Confirm___c__DisplayClass24_0_TypeDefinitionIndex = 8362;

	class Confirm___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::System::String* okButton; // 0x10
		::System::String* cancelButton; // 0x18
		::MiHoYo::SDK::UI::Confirm_OnConfirmDelegate* callback; // 0x20
		::System::String* content; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CONFIRM___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::UI::Confirm* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::Confirm*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CONFIRM___C__DISPLAYCLASS24_0__SHOW_B__0_OFFSET))(this, a1);
		}
	};
}
