#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D40936EF3BF54118_85;
namespace RPG::Client { class RogueMiracleShopItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMIRACLESHOPDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xC7C4090)
#define RPG_CLIENT_ROGUEMIRACLESHOPDATA_GET_INSHOPITEMS_OFFSET UNITYSDK_OFFSET(0xC7C4500)
#define RPG_CLIENT_ROGUEMIRACLESHOPDATA_SENDBUYROGUESHOPMIRACLECSREQ_OFFSET UNITYSDK_OFFSET(0xC7C3F70)
#define RPG_CLIENT_ROGUEMIRACLESHOPDATA_SENDGETROGUESHOPMIRACLEINFOCSREQ_OFFSET UNITYSDK_OFFSET(0xC7C3E70)
#define RPG_CLIENT_ROGUEMIRACLESHOPDATA_SET_INSHOPITEMS_OFFSET UNITYSDK_OFFSET(0xC7C4510)
#define RPG_CLIENT_ROGUEMIRACLESHOPDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xC7C3A20)
#define RPG_CLIENT_ROGUEMIRACLESHOPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC7C4520)
#define RPG_CLIENT_ROGUEMIRACLESHOPDATA__SYNCITEMS_OFFSET UNITYSDK_OFFSET(0xC7C3A80)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMiracleShopData_TypeDefinitionIndex = 62969;

	class RogueMiracleShopData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueMiracleShopItemData*>* _InShopItems_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_D40936EF3BF54118_85* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_85*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPDATA_SYNC_OFFSET))(this, a1);
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

		::System::Void _SyncItems(::Class_1_D40936EF3BF54118_85* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_85*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESHOPDATA__SYNCITEMS_OFFSET))(this, a1);
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
