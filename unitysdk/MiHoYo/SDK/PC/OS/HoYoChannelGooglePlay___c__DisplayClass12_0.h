#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::PC::OS { class GooglePlayBillingPayInfo; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelGooglePlay; }
namespace System { class Action; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABCA570)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS12_0__VERIFYORDER_B__0_OFFSET UNITYSDK_OFFSET(0x1ABCD0D0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS12_0__VERIFYORDER_B__1_OFFSET UNITYSDK_OFFSET(0x1ABCD870)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelGooglePlay___c__DisplayClass12_0_TypeDefinitionIndex = 8518;

	class HoYoChannelGooglePlay___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::GooglePlayBillingPayInfo* payInfo; // 0x10
		::System::Action* __9__1; // 0x18
		::MiHoYo::SDK::PC::OS::HoYoChannelGooglePlay* __4__this; // 0x20
		::System::Boolean isSlient; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _VerifyOrder_b__0(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS12_0__VERIFYORDER_B__0_OFFSET))(this, a1);
		}

		::System::Void _VerifyOrder_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS12_0__VERIFYORDER_B__1_OFFSET))(this);
		}
	};
}
