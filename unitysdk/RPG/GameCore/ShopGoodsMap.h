#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOPGOODSMAP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5201E0)
#define RPG_GAMECORE_SHOPGOODSMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5202D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShopGoodsMap_TypeDefinitionIndex = 12506;

	class ShopGoodsMap : public ::System::Object
	{
	public:
		::System::UInt32 GoodsID; // 0x10
		::System::UInt32 Num; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGOODSMAP__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShopGoodsMap*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShopGoodsMap*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGOODSMAP_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
