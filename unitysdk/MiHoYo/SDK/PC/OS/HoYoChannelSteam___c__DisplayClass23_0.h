#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelSteam; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A34F620)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM___C__DISPLAYCLASS23_0__ONCREATEORDER_B__0_OFFSET UNITYSDK_OFFSET(0x1A34F630)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM___C__DISPLAYCLASS23_0__ONCREATEORDER_B__1_OFFSET UNITYSDK_OFFSET(0x1A34F690)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelSteam___c__DisplayClass23_0_TypeDefinitionIndex = 19392;

	class HoYoChannelSteam___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::NetworkResponseModelEx* response; // 0x10
		::MiHoYo::SDK::PC::OS::HoYoChannelSteam* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnCreateOrder_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM___C__DISPLAYCLASS23_0__ONCREATEORDER_B__0_OFFSET))(this);
		}

		::System::Void _OnCreateOrder_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM___C__DISPLAYCLASS23_0__ONCREATEORDER_B__1_OFFSET))(this);
		}
	};
}
