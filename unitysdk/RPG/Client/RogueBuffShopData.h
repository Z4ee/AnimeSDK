#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C74059A83466814F;
class Class_1_D40936EF3BF54118_79;
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class RogueBuffShopItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEBUFFSHOPDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xB029820)
#define RPG_CLIENT_ROGUEBUFFSHOPDATA_GET_INSHOPITEMS_OFFSET UNITYSDK_OFFSET(0xB029890)
#define RPG_CLIENT_ROGUEBUFFSHOPDATA_GET_REFRESHCOST_OFFSET UNITYSDK_OFFSET(0xB0298F0)
#define RPG_CLIENT_ROGUEBUFFSHOPDATA_GET_REMAINREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0xB0298B0)
#define RPG_CLIENT_ROGUEBUFFSHOPDATA_GET_TOTALREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0xB0298D0)
#define RPG_CLIENT_ROGUEBUFFSHOPDATA_SENDBUYROGUESHOPBUFFCSREQ_OFFSET UNITYSDK_OFFSET(0xB0293A0)
#define RPG_CLIENT_ROGUEBUFFSHOPDATA_SENDGETROGUESHOPBUFFINFOCSREQ_OFFSET UNITYSDK_OFFSET(0xB0292A0)
#define RPG_CLIENT_ROGUEBUFFSHOPDATA_SENDREFRESHROGUESHOPBUFFCSREQ_OFFSET UNITYSDK_OFFSET(0xB029720)
#define RPG_CLIENT_ROGUEBUFFSHOPDATA_SET_INSHOPITEMS_OFFSET UNITYSDK_OFFSET(0xB0298A0)
#define RPG_CLIENT_ROGUEBUFFSHOPDATA_SET_REFRESHCOST_OFFSET UNITYSDK_OFFSET(0xB029900)
#define RPG_CLIENT_ROGUEBUFFSHOPDATA_SET_REMAINREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0xB0298C0)
#define RPG_CLIENT_ROGUEBUFFSHOPDATA_SET_TOTALREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0xB0298E0)
#define RPG_CLIENT_ROGUEBUFFSHOPDATA_SYNCCONFIG_OFFSET UNITYSDK_OFFSET(0xB029160)
#define RPG_CLIENT_ROGUEBUFFSHOPDATA_SYNCITEM_OFFSET UNITYSDK_OFFSET(0xB028A40)
#define RPG_CLIENT_ROGUEBUFFSHOPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB029910)
#define RPG_CLIENT_ROGUEBUFFSHOPDATA__REPORTSDKSELECTION_OFFSET UNITYSDK_OFFSET(0xB0294D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueBuffShopData_TypeDefinitionIndex = 62030;

	class RogueBuffShopData : public ::System::Object
	{
	public:
		::RPG::Client::ItemData* _RefreshCost_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffShopItemData*>* _InShopItems_k__BackingField; // 0x18
		::System::Int32 _TotalRefreshTimes_k__BackingField; // 0x20
		::System::Int32 _RemainRefreshTimes_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPDATA__CTOR_OFFSET))(this);
		}

		::System::Void SyncItem(::Class_1_D40936EF3BF54118_79* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_79*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPDATA_SYNCITEM_OFFSET))(this, info);
		}

		::System::Void SyncConfig(::System::Int32 remainRefreshTimes, ::System::Int32 totalRefreshTimes, ::Class_1_C74059A83466814F* cost)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Class_1_C74059A83466814F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPDATA_SYNCCONFIG_OFFSET))(this, remainRefreshTimes, totalRefreshTimes, cost);
		}

		::System::Void SendGetRogueShopBuffInfoCsReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPDATA_SENDGETROGUESHOPBUFFINFOCSREQ_OFFSET))(this);
		}

		::System::Void SendBuyRogueShopBuffCsReq(::System::Collections::Generic::List_1<::System::UInt32>* buffIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPDATA_SENDBUYROGUESHOPBUFFCSREQ_OFFSET))(this, buffIDList);
		}

		::System::Void SendRefreshRogueShopBuffCsReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPDATA_SENDREFRESHROGUESHOPBUFFCSREQ_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPDATA_CLEAR_OFFSET))(this);
		}

		::System::Void _ReportSDKSelection(::System::Collections::Generic::List_1<::System::UInt32>* buffIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPDATA__REPORTSDKSELECTION_OFFSET))(this, buffIDList);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffShopItemData*>* get_InShopItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueBuffShopItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPDATA_GET_INSHOPITEMS_OFFSET))(this);
		}

		::System::Void set_InShopItems(::System::Collections::Generic::List_1<::RPG::Client::RogueBuffShopItemData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueBuffShopItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPDATA_SET_INSHOPITEMS_OFFSET))(this, value);
		}

		::System::Int32 get_RemainRefreshTimes()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPDATA_GET_REMAINREFRESHTIMES_OFFSET))(this);
		}

		::System::Void set_RemainRefreshTimes(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPDATA_SET_REMAINREFRESHTIMES_OFFSET))(this, value);
		}

		::System::Int32 get_TotalRefreshTimes()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPDATA_GET_TOTALREFRESHTIMES_OFFSET))(this);
		}

		::System::Void set_TotalRefreshTimes(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPDATA_SET_TOTALREFRESHTIMES_OFFSET))(this, value);
		}

		::RPG::Client::ItemData* get_RefreshCost()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPDATA_GET_REFRESHCOST_OFFSET))(this);
		}

		::System::Void set_RefreshCost(::RPG::Client::ItemData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPDATA_SET_REFRESHCOST_OFFSET))(this, value);
		}
	};
}
