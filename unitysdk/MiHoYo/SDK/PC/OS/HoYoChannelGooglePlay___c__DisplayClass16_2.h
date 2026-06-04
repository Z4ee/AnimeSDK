#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class GooglePlayBillingPayInfo; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelGooglePlay___c__DisplayClass16_1; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelProductsResult; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS16_2__CHECKENTITLEMENTS_B__1_OFFSET UNITYSDK_OFFSET(0x18392A10)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS16_2__CTOR_OFFSET UNITYSDK_OFFSET(0x18392A00)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelGooglePlay___c__DisplayClass16_2_TypeDefinitionIndex = 8443;

	class HoYoChannelGooglePlay___c__DisplayClass16_2 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::HoYoChannelGooglePlay___c__DisplayClass16_1* CS___8__locals2; // 0x10
		::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo* payInfo; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS16_2__CTOR_OFFSET))(this);
		}

		::System::Void _CheckEntitlements_b__1(::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS16_2__CHECKENTITLEMENTS_B__1_OFFSET))(this, a1);
		}
	};
}
