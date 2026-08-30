#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D40936EF3BF54118_87;
namespace RPG::Client { class RogueMiracleShopItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMIRACLESHOPDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B9E5BC0)
#define RPG_CLIENT_ROGUEMIRACLESHOPDATA_GET_INSHOPITEMS_OFFSET UNITYSDK_OFFSET(0x1B9E6030)
#define RPG_CLIENT_ROGUEMIRACLESHOPDATA_SENDBUYROGUESHOPMIRACLECSREQ_OFFSET UNITYSDK_OFFSET(0x1B9E5A30)
#define RPG_CLIENT_ROGUEMIRACLESHOPDATA_SENDGETROGUESHOPMIRACLEINFOCSREQ_OFFSET UNITYSDK_OFFSET(0x1B9E58B0)
#define RPG_CLIENT_ROGUEMIRACLESHOPDATA_SET_INSHOPITEMS_OFFSET UNITYSDK_OFFSET(0x1B9E6040)
#define RPG_CLIENT_ROGUEMIRACLESHOPDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x1B9E5340)
#define RPG_CLIENT_ROGUEMIRACLESHOPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9E6050)
#define RPG_CLIENT_ROGUEMIRACLESHOPDATA__SYNCITEMS_OFFSET UNITYSDK_OFFSET(0x1B9E53A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMiracleShopData_TypeDefinitionIndex = 67331;

	class RogueMiracleShopData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleShopItemData*>* _InShopItems_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_D40936EF3BF54118_87* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_87*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void SendGetRogueShopMiracleInfoCsReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPDATA_SENDGETROGUESHOPMIRACLEINFOCSREQ_OFFSET))(this);
		}

		::System::Void SendBuyRogueShopMiracleCsReq(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPDATA_SENDBUYROGUESHOPMIRACLECSREQ_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPDATA_CLEAR_OFFSET))(this);
		}

		::System::Void _SyncItems(::Class_1_D40936EF3BF54118_87* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_87*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPDATA__SYNCITEMS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleShopItemData*>* get_InShopItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleShopItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPDATA_GET_INSHOPITEMS_OFFSET))(this);
		}

		::System::Void set_InShopItems(::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleShopItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleShopItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPDATA_SET_INSHOPITEMS_OFFSET))(this, a1);
		}
	};
}
