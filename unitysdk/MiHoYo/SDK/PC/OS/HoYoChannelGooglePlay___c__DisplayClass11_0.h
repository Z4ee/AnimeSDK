#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Alert_AlertResult.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class Alert_OnAlertDelegate; }
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::PC::OS { class GooglePlayBillingPayInfo; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelGooglePlay; }
namespace System { class Action; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x199429E0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS11_0__PAY_B__0_OFFSET UNITYSDK_OFFSET(0x199440E0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS11_0__PAY_B__1_OFFSET UNITYSDK_OFFSET(0x19944BB0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS11_0__PAY_B__4_OFFSET UNITYSDK_OFFSET(0x19944B80)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS11_0__PAY_B__6_OFFSET UNITYSDK_OFFSET(0x19944C40)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelGooglePlay___c__DisplayClass11_0_TypeDefinitionIndex = 8447;

	class HoYoChannelGooglePlay___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo* gamePayInfo; // 0x10
		::MiHoYo::SDK::AccountModel* accountModel; // 0x18
		::MiHoYo::SDK::Alert_OnAlertDelegate* __9__1; // 0x20
		::MiHoYo::SDK::Alert_OnAlertDelegate* __9__6; // 0x28
		::MiHoYo::SDK::PC::OS::HoYoChannelGooglePlay* __4__this; // 0x30
		::System::Action* __9__4; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _Pay_b__0(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS11_0__PAY_B__0_OFFSET))(this, a1);
		}

		::System::Void _Pay_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS11_0__PAY_B__4_OFFSET))(this);
		}

		::System::Void _Pay_b__1(::MiHoYo::SDK::Alert_AlertResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Alert_AlertResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS11_0__PAY_B__1_OFFSET))(this, a1);
		}

		::System::Void _Pay_b__6(::MiHoYo::SDK::Alert_AlertResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Alert_AlertResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS11_0__PAY_B__6_OFFSET))(this, a1);
		}
	};
}
