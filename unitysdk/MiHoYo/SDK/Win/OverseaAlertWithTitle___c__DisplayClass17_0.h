#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class OverseaAlertWithTitle; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_OVERSEAALERTWITHTITLE___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18B1EDD0)
#define MIHOYO_SDK_WIN_OVERSEAALERTWITHTITLE___C__DISPLAYCLASS17_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x18B1EEA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaAlertWithTitle___c__DisplayClass17_0_TypeDefinitionIndex = 9247;

	class OverseaAlertWithTitle___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::System::String* title; // 0x10
		::System::String* content; // 0x18
		::System::String* confirmButtonText; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAALERTWITHTITLE___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::Win::OverseaAlertWithTitle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::OverseaAlertWithTitle*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAALERTWITHTITLE___C__DISPLAYCLASS17_0__SHOW_B__0_OFFSET))(this, a1);
		}
	};
}
