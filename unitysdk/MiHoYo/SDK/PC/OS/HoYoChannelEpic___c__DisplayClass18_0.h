#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class EpicPayInfo; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelEpic; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEFCBA0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C__DISPLAYCLASS18_0__PAY_B__0_OFFSET UNITYSDK_OFFSET(0x1BEFDB90)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelEpic___c__DisplayClass18_0_TypeDefinitionIndex = 8521;

	class HoYoChannelEpic___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::EpicPayInfo* payInfo; // 0x10
		::MiHoYo::SDK::PC::OS::HoYoChannelEpic* __4__this; // 0x18
		::System::String* productId; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _Pay_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C__DISPLAYCLASS18_0__PAY_B__0_OFFSET))(this, a1);
		}
	};
}
