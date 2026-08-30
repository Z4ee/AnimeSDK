#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOPGIFTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D51EAA0)
#define RPG_GAMECORE_SHOPGIFTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D51EBE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShopGiftConfigRow_TypeDefinitionIndex = 14940;

	class ShopGiftConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 GiftSortID; // 0x10
		::System::UInt32 GiftID; // 0x14
		::System::UInt32 ShopID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGIFTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShopGiftConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShopGiftConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGIFTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
