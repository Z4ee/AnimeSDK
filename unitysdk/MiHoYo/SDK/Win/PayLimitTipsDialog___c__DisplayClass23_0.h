#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class PayLimitTipsDialog; }

#define MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x182A4530)
#define MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG___C__DISPLAYCLASS23_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x182A52B0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int PayLimitTipsDialog___c__DisplayClass23_0_TypeDefinitionIndex = 9210;

	class PayLimitTipsDialog___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::Int32 noticeAmount; // 0x10
		::System::Boolean bShowNotTips; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::Win::PayLimitTipsDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::PayLimitTipsDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG___C__DISPLAYCLASS23_0__SHOW_B__0_OFFSET))(this, a1);
		}
	};
}
