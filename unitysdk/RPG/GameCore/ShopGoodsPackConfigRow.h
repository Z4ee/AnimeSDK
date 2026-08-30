#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOPGOODSPACKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E0A03D0)
#define RPG_GAMECORE_SHOPGOODSPACKCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0A0550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShopGoodsPackConfigRow_TypeDefinitionIndex = 14939;

	class ShopGoodsPackConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 BundleGoodsID; // 0x10
		::System::UInt32 ComboGoodsID1; // 0x14
		::System::UInt32 ComboGoodsID2; // 0x18
		::System::UInt32 ID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGOODSPACKCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShopGoodsPackConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShopGoodsPackConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGOODSPACKCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
