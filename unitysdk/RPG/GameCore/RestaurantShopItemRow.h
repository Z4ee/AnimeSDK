#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RestaurantShopItemRefreshType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESTAURANTSHOPITEMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB9E400)
#define RPG_GAMECORE_RESTAURANTSHOPITEMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB9E800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantShopItemRow_TypeDefinitionIndex = 11338;

	class RestaurantShopItemRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x10
		::Il2CppArray<::System::UInt32>* DeleteIDList; // 0x18
		::System::UInt32 RefreshParam; // 0x20
		::System::UInt32 Count; // 0x24
		::System::UInt32 LimitCount; // 0x28
		::System::UInt32 ProductID; // 0x2C
		::System::Boolean IsDiscount; // 0x30
		::System::UInt32 ShopItemID; // 0x34
		::System::UInt32 AddLimitDay; // 0x38
		::System::UInt32 AddLimitParam; // 0x3C
		::System::UInt32 BuyPrice; // 0x40
		::RPG::GameCore::RestaurantShopItemRefreshType RefreshType; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTSHOPITEMROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RestaurantShopItemRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestaurantShopItemRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTSHOPITEMROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
