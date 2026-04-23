#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D40936EF3BF54118_78;
namespace RPG::Client { class RogueMiracleShopItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMIRACLESHOPDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xB073C00)
#define RPG_CLIENT_ROGUEMIRACLESHOPDATA_GET_INSHOPITEMS_OFFSET UNITYSDK_OFFSET(0xB073F10)
#define RPG_CLIENT_ROGUEMIRACLESHOPDATA_SENDBUYROGUESHOPMIRACLECSREQ_OFFSET UNITYSDK_OFFSET(0xB073AE0)
#define RPG_CLIENT_ROGUEMIRACLESHOPDATA_SENDGETROGUESHOPMIRACLEINFOCSREQ_OFFSET UNITYSDK_OFFSET(0xB0739E0)
#define RPG_CLIENT_ROGUEMIRACLESHOPDATA_SET_INSHOPITEMS_OFFSET UNITYSDK_OFFSET(0xB073F20)
#define RPG_CLIENT_ROGUEMIRACLESHOPDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xB0735E0)
#define RPG_CLIENT_ROGUEMIRACLESHOPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB073F30)
#define RPG_CLIENT_ROGUEMIRACLESHOPDATA__SYNCITEMS_OFFSET UNITYSDK_OFFSET(0xB073640)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMiracleShopData_TypeDefinitionIndex = 62036;

	class RogueMiracleShopData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleShopItemData*>* _InShopItems_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_D40936EF3BF54118_78* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_78*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPDATA_SYNC_OFFSET))(this, info);
		}

		::System::Void SendGetRogueShopMiracleInfoCsReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPDATA_SENDGETROGUESHOPMIRACLEINFOCSREQ_OFFSET))(this);
		}

		::System::Void SendBuyRogueShopMiracleCsReq(::System::UInt32 miracleID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPDATA_SENDBUYROGUESHOPMIRACLECSREQ_OFFSET))(this, miracleID);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPDATA_CLEAR_OFFSET))(this);
		}

		::System::Void _SyncItems(::Class_1_D40936EF3BF54118_78* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_78*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPDATA__SYNCITEMS_OFFSET))(this, info);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleShopItemData*>* get_InShopItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleShopItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPDATA_GET_INSHOPITEMS_OFFSET))(this);
		}

		::System::Void set_InShopItems(::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleShopItemData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleShopItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPDATA_SET_INSHOPITEMS_OFFSET))(this, value);
		}
	};
}
