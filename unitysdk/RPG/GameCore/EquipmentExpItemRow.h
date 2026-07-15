#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_EQUIPMENTEXPITEMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C05A240)
#define RPG_GAMECORE_EQUIPMENTEXPITEMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C05A830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EquipmentExpItemRow_TypeDefinitionIndex = 12747;

	class EquipmentExpItemRow : public ::System::Object
	{
	public:
		::System::UInt32 ExpProvide; // 0x10
		::System::UInt32 CoinCost; // 0x14
		::System::UInt32 ItemID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPITEMROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EquipmentExpItemRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EquipmentExpItemRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPITEMROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
