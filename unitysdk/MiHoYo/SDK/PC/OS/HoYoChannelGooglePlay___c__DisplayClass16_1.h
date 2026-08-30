#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelGooglePlay___c__DisplayClass16_0; }
namespace MiHoYo::SDK::PC::OS { class PurchaseData; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS16_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA25A70)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelGooglePlay___c__DisplayClass16_1_TypeDefinitionIndex = 8522;

	class HoYoChannelGooglePlay___c__DisplayClass16_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::HoYoChannelGooglePlay___c__DisplayClass16_0* CS___8__locals1; // 0x10
		::MiHoYo::SDK::PC::OS::PurchaseData* purchase; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS16_1__CTOR_OFFSET))(this);
		}
	};
}
