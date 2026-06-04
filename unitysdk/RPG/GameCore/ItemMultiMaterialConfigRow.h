#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ItemSubType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ITEMMULTIMATERIALCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x198617B0)
#define RPG_GAMECORE_ITEMMULTIMATERIALCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19861980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemMultiMaterialConfigRow_TypeDefinitionIndex = 13244;

	class ItemMultiMaterialConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ExchangeRare4; // 0x10
		::RPG::GameCore::ItemSubType ItemSubType; // 0x14
		::System::UInt32 ExchangeRare2; // 0x18
		::System::UInt32 ExchangeRare3; // 0x1C
		::System::UInt32 ItemID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMMULTIMATERIALCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ItemMultiMaterialConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ItemMultiMaterialConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMMULTIMATERIALCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
