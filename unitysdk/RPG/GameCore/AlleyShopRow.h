#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ShopGoodsMap; }

#define RPG_GAMECORE_ALLEYSHOPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AE80090)
#define RPG_GAMECORE_ALLEYSHOPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A04F300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyShopRow_TypeDefinitionIndex = 12118;

	class AlleyShopRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ShopGoodsMap*>* ShopGoods; // 0x10
		::Il2CppArray<::System::UInt32>* EnergyColor; // 0x18
		::System::UInt32 ShopID; // 0x20
		::System::UInt32 ShopEnergy; // 0x24
		::System::UInt32 ShopBox; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSHOPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AlleyShopRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlleyShopRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSHOPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
