#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelEntitlementsResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelGooglePlay; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS16_0__CHECKENTITLEMENTS_B__0_OFFSET UNITYSDK_OFFSET(0x175AD140)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x175AAFE0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelGooglePlay___c__DisplayClass16_0_TypeDefinitionIndex = 7538;

	class HoYoChannelGooglePlay___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::HoYoChannelGooglePlay* __4__this; // 0x10
		::MiHoYo::SDK::AccountModel* account; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _CheckEntitlements_b__0(::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelEntitlementsResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS16_0__CHECKENTITLEMENTS_B__0_OFFSET))(this, result);
		}
	};
}
