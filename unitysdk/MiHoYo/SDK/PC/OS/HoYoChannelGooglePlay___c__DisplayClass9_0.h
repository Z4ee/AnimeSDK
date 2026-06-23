#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class GooglePlayBillingPayInfo; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelGooglePlay; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelProductsResult; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0DF0C0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS9_0__PAY_B__0_OFFSET UNITYSDK_OFFSET(0x1C0DF0D0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelGooglePlay___c__DisplayClass9_0_TypeDefinitionIndex = 20320;

	class HoYoChannelGooglePlay___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::HoYoChannelGooglePlay* __4__this; // 0x10
		::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo* gamePayInfo; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _Pay_b__0(::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS9_0__PAY_B__0_OFFSET))(this, response);
		}
	};
}
