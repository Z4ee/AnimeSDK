#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PayPlat.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK::Win { class PayDialog; }

#define MIHOYO_SDK_WIN_PAYDIALOG___C__DISPLAYCLASS49_0__CTOR_OFFSET UNITYSDK_OFFSET(0x174A2750)
#define MIHOYO_SDK_WIN_PAYDIALOG___C__DISPLAYCLASS49_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x174A4CD0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int PayDialog___c__DisplayClass49_0_TypeDefinitionIndex = 8305;

	class PayDialog___c__DisplayClass49_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::JSONNode* goods; // 0x10
		::MiHoYo::SDK::PayPlat plat; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYDIALOG___C__DISPLAYCLASS49_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::Win::PayDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::PayDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYDIALOG___C__DISPLAYCLASS49_0__SHOW_B__0_OFFSET))(this, dialog);
		}
	};
}
