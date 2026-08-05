#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::HoYoPass { class AgeGateManager___c__DisplayClass32_0; }

#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER___C__DISPLAYCLASS32_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7C0B60)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER___C__DISPLAYCLASS32_1__SHOWAGEGATEBIRTHDAYDIALOG_B__2_OFFSET UNITYSDK_OFFSET(0x1C7C0D60)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int AgeGateManager___c__DisplayClass32_1_TypeDefinitionIndex = 20378;

	class AgeGateManager___c__DisplayClass32_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::HoYoPass::AgeGateManager___c__DisplayClass32_0* CS___8__locals1; // 0x10
		::System::Int64 birthdayTimestamp; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER___C__DISPLAYCLASS32_1__CTOR_OFFSET))(this);
		}

		::System::Void _ShowAgeGateBirthdayDialog_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER___C__DISPLAYCLASS32_1__SHOWAGEGATEBIRTHDAYDIALOG_B__2_OFFSET))(this);
		}
	};
}
