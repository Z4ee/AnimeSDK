#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelGooglePlay___c__DisplayClass12_0; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS12_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18392410)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS12_1__VERIFYORDER_B__2_OFFSET UNITYSDK_OFFSET(0x18392510)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelGooglePlay___c__DisplayClass12_1_TypeDefinitionIndex = 8439;

	class HoYoChannelGooglePlay___c__DisplayClass12_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::NetworkResponseModelEx* verifyResponse; // 0x10
		::MiHoYo::SDK::PC::OS::HoYoChannelGooglePlay___c__DisplayClass12_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS12_1__CTOR_OFFSET))(this);
		}

		::System::Void _VerifyOrder_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS12_1__VERIFYORDER_B__2_OFFSET))(this);
		}
	};
}
