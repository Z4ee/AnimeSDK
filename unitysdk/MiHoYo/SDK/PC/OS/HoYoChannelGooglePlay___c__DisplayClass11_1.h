#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class Alert_OnAlertDelegate; }
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelCheckoutResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelGooglePlay___c__DisplayClass11_0; }
namespace UnityEngine { class Coroutine; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS11_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABCC440)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS11_1__PAY_B__2_OFFSET UNITYSDK_OFFSET(0x1ABCC7A0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS11_1__PAY_B__3_OFFSET UNITYSDK_OFFSET(0x1ABCC890)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS11_1__PAY_B__5_OFFSET UNITYSDK_OFFSET(0x1ABCC760)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelGooglePlay___c__DisplayClass11_1_TypeDefinitionIndex = 8516;

	class HoYoChannelGooglePlay___c__DisplayClass11_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::HoYoChannelGooglePlay___c__DisplayClass11_0* CS___8__locals1; // 0x10
		::MiHoYo::SDK::NetworkResponseModelEx* createOrderResponse; // 0x18
		::MiHoYo::SDK::Alert_OnAlertDelegate* callback; // 0x20
		::UnityEngine::Coroutine* openingUI; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS11_1__CTOR_OFFSET))(this);
		}

		::System::Void _Pay_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS11_1__PAY_B__5_OFFSET))(this);
		}

		::System::Void _Pay_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS11_1__PAY_B__2_OFFSET))(this);
		}

		::System::Void _Pay_b__3(::MiHoYo::SDK::PC::OS::HoYoChannelCheckoutResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelCheckoutResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS11_1__PAY_B__3_OFFSET))(this, a1);
		}
	};
}
