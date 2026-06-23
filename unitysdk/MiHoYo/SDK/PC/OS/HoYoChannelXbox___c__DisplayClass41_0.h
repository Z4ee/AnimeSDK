#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelCheckoutResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelXbox; }
namespace MiHoYo::SDK::PC::OS { class XboxPayInfo; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS41_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C96BD50)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS41_0__OPENXBOXCHECKOUT_B__0_OFFSET UNITYSDK_OFFSET(0x1C96BD60)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelXbox___c__DisplayClass41_0_TypeDefinitionIndex = 20397;

	class HoYoChannelXbox___c__DisplayClass41_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::XboxPayInfo* payInfo; // 0x10
		::MiHoYo::SDK::PC::OS::HoYoChannelXbox* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS41_0__CTOR_OFFSET))(this);
		}

		::System::Void _OpenXboxCheckout_b__0(::MiHoYo::SDK::PC::OS::HoYoChannelCheckoutResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelCheckoutResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS41_0__OPENXBOXCHECKOUT_B__0_OFFSET))(this, result);
		}
	};
}
