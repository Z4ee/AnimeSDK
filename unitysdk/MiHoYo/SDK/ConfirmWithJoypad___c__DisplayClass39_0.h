#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ConfirmWithJoypad; }
namespace MiHoYo::SDK { class ConfirmWithJoypad_OnConfirmDelegate; }
namespace System { class String; }

#define MIHOYO_SDK_CONFIRMWITHJOYPAD___C__DISPLAYCLASS39_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1820DC20)
#define MIHOYO_SDK_CONFIRMWITHJOYPAD___C__DISPLAYCLASS39_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1820EAC0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConfirmWithJoypad___c__DisplayClass39_0_TypeDefinitionIndex = 7945;

	class ConfirmWithJoypad___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::System::String* strCancelButtonText; // 0x10
		::System::String* strContent; // 0x18
		::System::String* strAcceptBtnText; // 0x20
		::MiHoYo::SDK::ConfirmWithJoypad_OnConfirmDelegate* callback; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRMWITHJOYPAD___C__DISPLAYCLASS39_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::ConfirmWithJoypad* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ConfirmWithJoypad*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRMWITHJOYPAD___C__DISPLAYCLASS39_0__SHOW_B__0_OFFSET))(this, a1);
		}
	};
}
