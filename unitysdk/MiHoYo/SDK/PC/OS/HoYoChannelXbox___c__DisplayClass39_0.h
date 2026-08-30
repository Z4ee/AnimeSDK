#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelProductsResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelXbox; }
namespace MiHoYo::SDK::PC::OS { class XboxPayInfo; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS39_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABD8C60)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS39_0__QUERYPRODUCTANDPAY_B__0_OFFSET UNITYSDK_OFFSET(0x1ABDC250)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelXbox___c__DisplayClass39_0_TypeDefinitionIndex = 8589;

	class HoYoChannelXbox___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::HoYoChannelXbox* __4__this; // 0x10
		::MiHoYo::SDK::PC::OS::XboxPayInfo* payInfo; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS39_0__CTOR_OFFSET))(this);
		}

		::System::Void _QueryProductAndPay_b__0(::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS39_0__QUERYPRODUCTANDPAY_B__0_OFFSET))(this, a1);
		}
	};
}
