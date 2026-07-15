#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_8844A4E6AE686D5C_1;
class Class_1_D17272E82AE804C2_288;
class Class_1_D17272E82AE804C2_289;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class ElfRestaurantDayData; }
namespace RPG::Client { class ElfShopItemData; }
namespace RPG::Client { class ElfTradeOrderData; }
namespace RPG::GameCore { class RestaurantTradeOrderRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFSHOPINFO_DELETEGOODS_OFFSET UNITYSDK_OFFSET(0x18D71CD0)
#define RPG_CLIENT_ELFSHOPINFO_DELETEORDER_OFFSET UNITYSDK_OFFSET(0x18D71E00)
#define RPG_CLIENT_ELFSHOPINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18D743D0)
#define RPG_CLIENT_ELFSHOPINFO_GETDAYOFNEXTORDERREFRESH_OFFSET UNITYSDK_OFFSET(0x18D84390)
#define RPG_CLIENT_ELFSHOPINFO_GETSHOPITEM_OFFSET UNITYSDK_OFFSET(0x18D83340)
#define RPG_CLIENT_ELFSHOPINFO_GET_AVAILABLEGOODS_OFFSET UNITYSDK_OFFSET(0x18D84180)
#define RPG_CLIENT_ELFSHOPINFO_GET_AVAILABLEORDERS_OFFSET UNITYSDK_OFFSET(0x18D841A0)
#define RPG_CLIENT_ELFSHOPINFO_GET_DAYSTOGOODSREFRESH_OFFSET UNITYSDK_OFFSET(0x18D841C0)
#define RPG_CLIENT_ELFSHOPINFO_HASEXPIREDGOODSNEXTDAY_OFFSET UNITYSDK_OFFSET(0x18D83BE0)
#define RPG_CLIENT_ELFSHOPINFO_HASEXPIREDORDERNEXTDAY_OFFSET UNITYSDK_OFFSET(0x18D83E40)
#define RPG_CLIENT_ELFSHOPINFO_INIT_OFFSET UNITYSDK_OFFSET(0x18D73F00)
#define RPG_CLIENT_ELFSHOPINFO_SET_AVAILABLEGOODS_OFFSET UNITYSDK_OFFSET(0x18D84190)
#define RPG_CLIENT_ELFSHOPINFO_SET_AVAILABLEORDERS_OFFSET UNITYSDK_OFFSET(0x18D841B0)
#define RPG_CLIENT_ELFSHOPINFO_SYNCGOODS_OFFSET UNITYSDK_OFFSET(0x18D716E0)
#define RPG_CLIENT_ELFSHOPINFO_SYNCORDER_OFFSET UNITYSDK_OFFSET(0x18D719E0)
#define RPG_CLIENT_ELFSHOPINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x18D70660)
#define RPG_CLIENT_ELFSHOPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18D73EF0)
#define RPG_CLIENT_ELFSHOPINFO__EXTRACTUNLOCKPROGRESSDAY_OFFSET UNITYSDK_OFFSET(0x18D846D0)
#define RPG_CLIENT_ELFSHOPINFO__SYNCORDERS_OFFSET UNITYSDK_OFFSET(0x18D82B40)
#define RPG_CLIENT_ELFSHOPINFO__SYNCSHOP_OFFSET UNITYSDK_OFFSET(0x18D82F40)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfShopInfo_TypeDefinitionIndex = 60967;

	class ElfShopInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ElfShopItemData*>* _AvailableGoods_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ElfTradeOrderData*>* _AvailableOrders_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_8844A4E6AE686D5C_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8844A4E6AE686D5C_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPINFO_SYNC_OFFSET))(this, a1);
		}

		::RPG::Client::ElfShopItemData* GetShopItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfShopItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPINFO_GETSHOPITEM_OFFSET))(this, a1);
		}

		::System::Void SyncOrder(::Class_1_D17272E82AE804C2_289* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_289*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPINFO_SYNCORDER_OFFSET))(this, a1);
		}

		::System::Void SyncGoods(::Class_1_D17272E82AE804C2_288* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_288*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPINFO_SYNCGOODS_OFFSET))(this, a1);
		}

		::System::Void DeleteOrder(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPINFO_DELETEORDER_OFFSET))(this, a1);
		}

		::System::Void DeleteGoods(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPINFO_DELETEGOODS_OFFSET))(this, a1);
		}

		::System::Boolean HasExpiredGoodsNextDay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPINFO_HASEXPIREDGOODSNEXTDAY_OFFSET))(this);
		}

		::System::Boolean HasExpiredOrderNextDay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPINFO_HASEXPIREDORDERNEXTDAY_OFFSET))(this);
		}

		::System::Void _SyncShop(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_288*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_288*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPINFO__SYNCSHOP_OFFSET))(this, a1);
		}

		::System::Void _SyncOrders(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_289*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_289*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPINFO__SYNCORDERS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfShopItemData*>* get_AvailableGoods()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfShopItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPINFO_GET_AVAILABLEGOODS_OFFSET))(this);
		}

		::System::Void set_AvailableGoods(::System::Collections::Generic::List_1<::RPG::Client::ElfShopItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ElfShopItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPINFO_SET_AVAILABLEGOODS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfTradeOrderData*>* get_AvailableOrders()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfTradeOrderData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPINFO_GET_AVAILABLEORDERS_OFFSET))(this);
		}

		::System::Void set_AvailableOrders(::System::Collections::Generic::List_1<::RPG::Client::ElfTradeOrderData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ElfTradeOrderData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPINFO_SET_AVAILABLEORDERS_OFFSET))(this, a1);
		}

		::System::UInt32 get_DaysToGoodsRefresh()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPINFO_GET_DAYSTOGOODSREFRESH_OFFSET))(this);
		}

		::RPG::Client::ElfRestaurantDayData* GetDayOfNextOrderRefresh()
		{
			return ((::RPG::Client::ElfRestaurantDayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPINFO_GETDAYOFNEXTORDERREFRESH_OFFSET))(this);
		}

		static ::System::Nullable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>> _ExtractUnlockProgressDay(::RPG::GameCore::RestaurantTradeOrderRow* a1)
		{
			return ((::System::Nullable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>(*)(::RPG::GameCore::RestaurantTradeOrderRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPINFO__EXTRACTUNLOCKPROGRESSDAY_OFFSET))(a1);
		}
	};
}
