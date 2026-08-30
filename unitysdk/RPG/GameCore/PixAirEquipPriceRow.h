#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PixAirSlotType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PIXAIREQUIPPRICEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7926B0)
#define RPG_GAMECORE_PIXAIREQUIPPRICEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D792860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirEquipPriceRow_TypeDefinitionIndex = 12082;

	class PixAirEquipPriceRow : public ::System::Object
	{
	public:
		::System::UInt32 SellPrice; // 0x10
		::System::UInt32 Level; // 0x14
		::System::UInt32 BuyPrice; // 0x18
		::RPG::GameCore::PixAirSlotType SlotType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREQUIPPRICEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PixAirEquipPriceRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PixAirEquipPriceRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREQUIPPRICEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
