#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_10F56A639581CEB1_17;
class Class_1_10F56A639581CEB1_18;
class Class_1_21C7581DFE99F091_93;
namespace RPG::Client::PixAir { class PixAirEquipShopData; }
namespace RPG::Client::PixAir { class PixAirEquipShopInfo; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER_GET_REFRESHCOST_OFFSET UNITYSDK_OFFSET(0x1C843940)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER_GET_REFRESHTIMES_OFFSET UNITYSDK_OFFSET(0x1C843960)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER_GET_SHOPID_OFFSET UNITYSDK_OFFSET(0x1C843920)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER_GET_TOTALREFRESHCOUNT_OFFSET UNITYSDK_OFFSET(0x1C843980)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1C8430D0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER_SET_REFRESHCOST_OFFSET UNITYSDK_OFFSET(0x1C843950)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER_SET_REFRESHTIMES_OFFSET UNITYSDK_OFFSET(0x1C843970)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER_SET_SHOPID_OFFSET UNITYSDK_OFFSET(0x1C843930)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0x1C843110)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER_SYNC_OFFSET UNITYSDK_OFFSET(0x1C843830)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C843A00)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER__REFRESHGOODSLIST_OFFSET UNITYSDK_OFFSET(0x1C843200)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipShopManager_TypeDefinitionIndex = 78892;

	class PixAirEquipShopManager : public ::System::Object
	{
	public:
		::RPG::Client::PixAir::PixAirEquipShopInfo* ShopInfo; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipShopData*>* CurrentGoodsList; // 0x18
		::System::UInt32 _RefreshTimes_k__BackingField; // 0x20
		::System::UInt32 _ShopID_k__BackingField; // 0x24
		::System::UInt32 _RefreshCost_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER_INIT_OFFSET))(this);
		}

		::System::Void SyncUpdate(::Class_1_10F56A639581CEB1_18* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_10F56A639581CEB1_18*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER_SYNCUPDATE_OFFSET))(this, a1);
		}

		::System::Void Sync(::Class_1_10F56A639581CEB1_17* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_10F56A639581CEB1_17*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER_SYNC_OFFSET))(this, a1);
		}

		::System::Void _RefreshGoodsList(::System::Collections::Generic::IList_1<::Class_1_21C7581DFE99F091_93*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_21C7581DFE99F091_93*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER__REFRESHGOODSLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_ShopID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER_GET_SHOPID_OFFSET))(this);
		}

		::System::Void set_ShopID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER_SET_SHOPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_RefreshCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER_GET_REFRESHCOST_OFFSET))(this);
		}

		::System::Void set_RefreshCost(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER_SET_REFRESHCOST_OFFSET))(this, a1);
		}

		::System::UInt32 get_RefreshTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER_GET_REFRESHTIMES_OFFSET))(this);
		}

		::System::Void set_RefreshTimes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER_SET_REFRESHTIMES_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalRefreshCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPSHOPMANAGER_GET_TOTALREFRESHCOUNT_OFFSET))(this);
		}
	};
}
