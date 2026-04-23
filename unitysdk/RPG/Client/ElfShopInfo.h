#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_D17272E82AE804C2_254;
class Class_1_D1E0AD3915BCCF29_24;
class Class_1_FE6CD7C4A65B646F_1;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class ElfRestaurantDayData; }
namespace RPG::Client { class ElfShopItemData; }
namespace RPG::Client { class ElfTradeOrderData; }
namespace RPG::GameCore { class RestaurantTradeOrderRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFSHOPINFO_DELETEGOODS_OFFSET UNITYSDK_OFFSET(0xA26AD70)
#define RPG_CLIENT_ELFSHOPINFO_DELETEORDER_OFFSET UNITYSDK_OFFSET(0xA26AE90)
#define RPG_CLIENT_ELFSHOPINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA26D280)
#define RPG_CLIENT_ELFSHOPINFO_GETDAYOFNEXTORDERREFRESH_OFFSET UNITYSDK_OFFSET(0xA27CE40)
#define RPG_CLIENT_ELFSHOPINFO_GETSHOPITEM_OFFSET UNITYSDK_OFFSET(0xA27BC50)
#define RPG_CLIENT_ELFSHOPINFO_GET_AVAILABLEGOODS_OFFSET UNITYSDK_OFFSET(0xA27CC70)
#define RPG_CLIENT_ELFSHOPINFO_GET_AVAILABLEORDERS_OFFSET UNITYSDK_OFFSET(0xA27CC90)
#define RPG_CLIENT_ELFSHOPINFO_GET_DAYSTOGOODSREFRESH_OFFSET UNITYSDK_OFFSET(0xA27CCB0)
#define RPG_CLIENT_ELFSHOPINFO_HASEXPIREDGOODSNEXTDAY_OFFSET UNITYSDK_OFFSET(0xA27C550)
#define RPG_CLIENT_ELFSHOPINFO_HASEXPIREDORDERNEXTDAY_OFFSET UNITYSDK_OFFSET(0xA27C8A0)
#define RPG_CLIENT_ELFSHOPINFO_INIT_OFFSET UNITYSDK_OFFSET(0xA26CCE0)
#define RPG_CLIENT_ELFSHOPINFO_SET_AVAILABLEGOODS_OFFSET UNITYSDK_OFFSET(0xA27CC80)
#define RPG_CLIENT_ELFSHOPINFO_SET_AVAILABLEORDERS_OFFSET UNITYSDK_OFFSET(0xA27CCA0)
#define RPG_CLIENT_ELFSHOPINFO_SYNCGOODS_OFFSET UNITYSDK_OFFSET(0xA26A880)
#define RPG_CLIENT_ELFSHOPINFO_SYNCORDER_OFFSET UNITYSDK_OFFSET(0xA26AB00)
#define RPG_CLIENT_ELFSHOPINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xA269920)
#define RPG_CLIENT_ELFSHOPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA26CCD0)
#define RPG_CLIENT_ELFSHOPINFO__EXTRACTUNLOCKPROGRESSDAY_OFFSET UNITYSDK_OFFSET(0xA27D130)
#define RPG_CLIENT_ELFSHOPINFO__SYNCORDERS_OFFSET UNITYSDK_OFFSET(0xA27B6D0)
#define RPG_CLIENT_ELFSHOPINFO__SYNCSHOP_OFFSET UNITYSDK_OFFSET(0xA27B990)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfShopInfo_TypeDefinitionIndex = 58752;

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

		::System::Void Sync(::Class_1_FE6CD7C4A65B646F_1* serverShopData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FE6CD7C4A65B646F_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPINFO_SYNC_OFFSET))(this, serverShopData);
		}

		::RPG::Client::ElfShopItemData* GetShopItem(::System::UInt32 shopItemID)
		{
			return ((::RPG::Client::ElfShopItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPINFO_GETSHOPITEM_OFFSET))(this, shopItemID);
		}

		::System::Void SyncOrder(::Class_1_D17272E82AE804C2_254* order)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_254*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPINFO_SYNCORDER_OFFSET))(this, order);
		}

		::System::Void SyncGoods(::Class_1_D1E0AD3915BCCF29_24* goods)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_24*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPINFO_SYNCGOODS_OFFSET))(this, goods);
		}

		::System::Void DeleteOrder(::System::UInt32 orderID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPINFO_DELETEORDER_OFFSET))(this, orderID);
		}

		::System::Void DeleteGoods(::System::UInt32 goodID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPINFO_DELETEGOODS_OFFSET))(this, goodID);
		}

		::System::Boolean HasExpiredGoodsNextDay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPINFO_HASEXPIREDGOODSNEXTDAY_OFFSET))(this);
		}

		::System::Boolean HasExpiredOrderNextDay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPINFO_HASEXPIREDORDERNEXTDAY_OFFSET))(this);
		}

		::System::Void _SyncShop(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_24*>* serverGoods)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_24*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPINFO__SYNCSHOP_OFFSET))(this, serverGoods);
		}

		::System::Void _SyncOrders(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_254*>* serverOrders)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_254*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPINFO__SYNCORDERS_OFFSET))(this, serverOrders);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfShopItemData*>* get_AvailableGoods()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfShopItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPINFO_GET_AVAILABLEGOODS_OFFSET))(this);
		}

		::System::Void set_AvailableGoods(::System::Collections::Generic::List_1<::RPG::Client::ElfShopItemData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ElfShopItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPINFO_SET_AVAILABLEGOODS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfTradeOrderData*>* get_AvailableOrders()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfTradeOrderData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPINFO_GET_AVAILABLEORDERS_OFFSET))(this);
		}

		::System::Void set_AvailableOrders(::System::Collections::Generic::List_1<::RPG::Client::ElfTradeOrderData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ElfTradeOrderData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPINFO_SET_AVAILABLEORDERS_OFFSET))(this, value);
		}

		::System::UInt32 get_DaysToGoodsRefresh()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPINFO_GET_DAYSTOGOODSREFRESH_OFFSET))(this);
		}

		::RPG::Client::ElfRestaurantDayData* GetDayOfNextOrderRefresh()
		{
			return ((::RPG::Client::ElfRestaurantDayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPINFO_GETDAYOFNEXTORDERREFRESH_OFFSET))(this);
		}

		static ::System::Nullable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>> _ExtractUnlockProgressDay(::RPG::GameCore::RestaurantTradeOrderRow* tradeOrderRow)
		{
			return ((::System::Nullable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>(*)(::RPG::GameCore::RestaurantTradeOrderRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPINFO__EXTRACTUNLOCKPROGRESSDAY_OFFSET))(tradeOrderRow);
		}
	};
}
