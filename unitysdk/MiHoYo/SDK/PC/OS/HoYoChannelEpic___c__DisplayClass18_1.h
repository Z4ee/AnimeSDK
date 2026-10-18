#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelEpic___c__DisplayClass18_0; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelProductsResult; }
namespace MiHoYo::SDK::PC::OS { class ProductData; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C__DISPLAYCLASS18_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF28D80)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C__DISPLAYCLASS18_1__PAY_B__1_OFFSET UNITYSDK_OFFSET(0x1BF28D90)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelEpic___c__DisplayClass18_1_TypeDefinitionIndex = 8522;

	class HoYoChannelEpic___c__DisplayClass18_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::HoYoChannelEpic___c__DisplayClass18_0* CS___8__locals1; // 0x10
		::MiHoYo::SDK::PC::OS::ProductData* productData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C__DISPLAYCLASS18_1__CTOR_OFFSET))(this);
		}

		::System::Void _Pay_b__1(::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C__DISPLAYCLASS18_1__PAY_B__1_OFFSET))(this, a1);
		}
	};
}
