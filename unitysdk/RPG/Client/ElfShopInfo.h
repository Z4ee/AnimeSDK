#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_8844A4E6AE686D5C_1;
class Class_1_D17272E82AE804C2_268;
class Class_1_D1E0AD3915BCCF29_26;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class ElfRestaurantDayData; }
namespace RPG::Client { class ElfShopItemData; }
namespace RPG::Client { class ElfTradeOrderData; }
namespace RPG::GameCore { class RestaurantTradeOrderRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFSHOPINFO_DELETEGOODS_OFFSET UNITYSDK_OFFSET(0xB902140)
#define RPG_CLIENT_ELFSHOPINFO_DELETEORDER_OFFSET UNITYSDK_OFFSET(0xB902010)
#define RPG_CLIENT_ELFSHOPINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9009E0)
#define RPG_CLIENT_ELFSHOPINFO_GETDAYOFNEXTORDERREFRESH_OFFSET UNITYSDK_OFFSET(0xB902B80)
#define RPG_CLIENT_ELFSHOPINFO_GETSHOPITEM_OFFSET UNITYSDK_OFFSET(0xB9010B0)
#define RPG_CLIENT_ELFSHOPINFO_GET_AVAILABLEGOODS_OFFSET UNITYSDK_OFFSET(0xB902970)
#define RPG_CLIENT_ELFSHOPINFO_GET_AVAILABLEORDERS_OFFSET UNITYSDK_OFFSET(0xB902990)
#define RPG_CLIENT_ELFSHOPINFO_GET_DAYSTOGOODSREFRESH_OFFSET UNITYSDK_OFFSET(0xB9029B0)
#define RPG_CLIENT_ELFSHOPINFO_HASEXPIREDGOODSNEXTDAY_OFFSET UNITYSDK_OFFSET(0xB902270)
#define RPG_CLIENT_ELFSHOPINFO_HASEXPIREDORDERNEXTDAY_OFFSET UNITYSDK_OFFSET(0xB9025B0)
#define RPG_CLIENT_ELFSHOPINFO_INIT_OFFSET UNITYSDK_OFFSET(0xB900950)
#define RPG_CLIENT_ELFSHOPINFO_SET_AVAILABLEGOODS_OFFSET UNITYSDK_OFFSET(0xB902980)
#define RPG_CLIENT_ELFSHOPINFO_SET_AVAILABLEORDERS_OFFSET UNITYSDK_OFFSET(0xB9029A0)
#define RPG_CLIENT_ELFSHOPINFO_SYNCGOODS_OFFSET UNITYSDK_OFFSET(0xB901C00)
#define RPG_CLIENT_ELFSHOPINFO_SYNCORDER_OFFSET UNITYSDK_OFFSET(0xB9011D0)
#define RPG_CLIENT_ELFSHOPINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xB900AC0)
#define RPG_CLIENT_ELFSHOPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB9030C0)
#define RPG_CLIENT_ELFSHOPINFO__EXTRACTUNLOCKPROGRESSDAY_OFFSET UNITYSDK_OFFSET(0xB902EC0)
#define RPG_CLIENT_ELFSHOPINFO__SYNCORDERS_OFFSET UNITYSDK_OFFSET(0xB900B30)
#define RPG_CLIENT_ELFSHOPINFO__SYNCSHOP_OFFSET UNITYSDK_OFFSET(0xB900DF0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfShopInfo_TypeDefinitionIndex = 59682;

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

		::System::Void SyncOrder(::Class_1_D17272E82AE804C2_268* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_268*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPINFO_SYNCORDER_OFFSET))(this, a1);
		}

		::System::Void SyncGoods(::Class_1_D1E0AD3915BCCF29_26* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_26*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPINFO_SYNCGOODS_OFFSET))(this, a1);
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

		::System::Void _SyncShop(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_26*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D1E0AD3915BCCF29_26*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPINFO__SYNCSHOP_OFFSET))(this, a1);
		}

		::System::Void _SyncOrders(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_268*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_268*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSHOPINFO__SYNCORDERS_OFFSET))(this, a1);
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
