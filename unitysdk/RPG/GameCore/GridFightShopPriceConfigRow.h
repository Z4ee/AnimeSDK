#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTSHOPPRICECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D076FF0)
#define RPG_GAMECORE_GRIDFIGHTSHOPPRICECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0772D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightShopPriceConfigRow_TypeDefinitionIndex = 13096;

	class GridFightShopPriceConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 SellGoldStar1; // 0x10
		::System::UInt32 SellGoldStar3; // 0x14
		::System::UInt32 SellGoldStar2; // 0x18
		::System::UInt32 BuyGoldStar4; // 0x1C
		::System::UInt32 BuyGoldStar3; // 0x20
		::System::UInt32 BuyGoldStar1; // 0x24
		::System::UInt32 SellGoldStar4; // 0x28
		::System::UInt32 Rarity; // 0x2C
		::System::UInt32 BuyGoldStar2; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOPPRICECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightShopPriceConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightShopPriceConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOPPRICECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
