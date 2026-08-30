#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PixAir { class PixAirEquipInstance; }

#define RPG_CLIENT_PIXAIR_PIXAIRMODULE___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDB12070)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE___C__DISPLAYCLASS8_0___ISBUYBLOCKEDBYSLOTSFULL_B__0_OFFSET UNITYSDK_OFFSET(0xDB18C30)
#define RPG_CLIENT_PIXAIR_PIXAIRMODULE___C__DISPLAYCLASS8_0___ISBUYBLOCKEDBYSLOTSFULL_B__1_OFFSET UNITYSDK_OFFSET(0xDB18C50)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirModule___c__DisplayClass8_0_TypeDefinitionIndex = 78885;

	class PixAirModule___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::UInt32 equipId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __IsBuyBlockedBySlotsFull_b__0(::RPG::Client::PixAir::PixAirEquipInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE___C__DISPLAYCLASS8_0___ISBUYBLOCKEDBYSLOTSFULL_B__0_OFFSET))(this, a1);
		}

		::System::Boolean __IsBuyBlockedBySlotsFull_b__1(::RPG::Client::PixAir::PixAirEquipInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRMODULE___C__DISPLAYCLASS8_0___ISBUYBLOCKEDBYSLOTSFULL_B__1_OFFSET))(this, a1);
		}
	};
}
