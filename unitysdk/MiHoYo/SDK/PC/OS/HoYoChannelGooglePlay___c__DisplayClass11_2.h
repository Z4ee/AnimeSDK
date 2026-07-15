#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class Alert_OnAlertDelegate; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS11_2__CTOR_OFFSET UNITYSDK_OFFSET(0x19945510)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS11_2__PAY_B__7_OFFSET UNITYSDK_OFFSET(0x19945520)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelGooglePlay___c__DisplayClass11_2_TypeDefinitionIndex = 8449;

	class HoYoChannelGooglePlay___c__DisplayClass11_2 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Alert_OnAlertDelegate* exitCallback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS11_2__CTOR_OFFSET))(this);
		}

		::System::Void _Pay_b__7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS11_2__PAY_B__7_OFFSET))(this);
		}
	};
}
