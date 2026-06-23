#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::PC::OS { class GooglePlayBillingPayInfo; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelGooglePlay; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9A4120)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS17_0__PROCESSENTITLEMENT_B__0_OFFSET UNITYSDK_OFFSET(0x1A9A4130)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelGooglePlay___c__DisplayClass17_0_TypeDefinitionIndex = 20330;

	class HoYoChannelGooglePlay___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::HoYoChannelGooglePlay* __4__this; // 0x10
		::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo* payInfo; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void _ProcessEntitlement_b__0(::MiHoYo::SDK::NetworkResponseModelEx* firstPaymentResponse)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS17_0__PROCESSENTITLEMENT_B__0_OFFSET))(this, firstPaymentResponse);
		}
	};
}
