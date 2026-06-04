#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GoodsRefreshType.h"
#include "unitysdk/RPG/GameCore/LimitType.h"
#include "unitysdk/RPG/GameCore/ShopGoodTag.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOPGOODSCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19C70D20)
#define RPG_GAMECORE_SHOPGOODSCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19C71E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShopGoodsConfigRow_TypeDefinitionIndex = 14368;

	class ShopGoodsConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* CurrencyList; // 0x10
		::Il2CppArray<::System::UInt32>* CurrencyCostList; // 0x18
		::Il2CppArray<::System::UInt32>* LimitValue1List; // 0x20
		::Il2CppArray<::System::UInt32>* LimitValue2List; // 0x28
		::Il2CppArray<::System::UInt32>* OnShelfValue2List; // 0x30
		::Il2CppArray<::System::UInt32>* OnShelfValue1List; // 0x38
		::System::Int32 RefreshOffset; // 0x40
		::System::UInt32 CycleDays; // 0x44
		::System::UInt32 ItemCount; // 0x48
		::System::UInt32 ShopID; // 0x4C
		::System::UInt32 ActivityModuleID; // 0x50
		::RPG::GameCore::LimitType LimitType1; // 0x54
		::RPG::GameCore::LimitType LimitType2; // 0x58
		::System::UInt32 Rank; // 0x5C
		::System::Boolean IsNew; // 0x60
		::System::Boolean IsLimitedTimePurchase; // 0x61
		::System::Boolean IsOnSale; // 0x62
		::System::UInt32 GoodsSortID; // 0x64
		::System::UInt32 ScheduleDataID; // 0x68
		::System::UInt32 TagParam; // 0x6C
		::RPG::GameCore::LimitType OnShelfType2; // 0x70
		::System::UInt32 Level; // 0x74
		::RPG::GameCore::ShopGoodTag TagType; // 0x78
		::System::UInt32 ItemID; // 0x7C
		::RPG::GameCore::LimitType OnShelfType1; // 0x80
		::System::UInt32 ItemGroupID; // 0x84
		::System::UInt32 GoodsID; // 0x88
		::RPG::GameCore::GoodsRefreshType RefreshType; // 0x8C
		::System::UInt32 LimitTimes; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGOODSCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShopGoodsConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShopGoodsConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGOODSCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
