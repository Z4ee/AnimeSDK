#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class PayLimitTipsDialog; }

#define MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE1A640)
#define MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG___C__DISPLAYCLASS23_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1BE1A650)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int PayLimitTipsDialog___c__DisplayClass23_0_TypeDefinitionIndex = 21655;

	class PayLimitTipsDialog___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::Boolean bShowNotTips; // 0x10
		::System::Int32 noticeAmount; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::Win::PayLimitTipsDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::PayLimitTipsDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG___C__DISPLAYCLASS23_0__SHOW_B__0_OFFSET))(this, dialog);
		}
	};
}
