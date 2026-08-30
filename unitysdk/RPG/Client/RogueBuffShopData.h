#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C3162D2F7EA647B9;
class Class_1_D40936EF3BF54118_88;
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class RogueBuffShopItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEBUFFSHOPDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xDEA6420)
#define RPG_CLIENT_ROGUEBUFFSHOPDATA_GET_INSHOPITEMS_OFFSET UNITYSDK_OFFSET(0xDEA64C0)
#define RPG_CLIENT_ROGUEBUFFSHOPDATA_GET_REFRESHCOST_OFFSET UNITYSDK_OFFSET(0xDEA6520)
#define RPG_CLIENT_ROGUEBUFFSHOPDATA_GET_REMAINREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0xDEA64E0)
#define RPG_CLIENT_ROGUEBUFFSHOPDATA_GET_TOTALREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0xDEA6500)
#define RPG_CLIENT_ROGUEBUFFSHOPDATA_SENDBUYROGUESHOPBUFFCSREQ_OFFSET UNITYSDK_OFFSET(0xDEA5DD0)
#define RPG_CLIENT_ROGUEBUFFSHOPDATA_SENDGETROGUESHOPBUFFINFOCSREQ_OFFSET UNITYSDK_OFFSET(0xDEA5C50)
#define RPG_CLIENT_ROGUEBUFFSHOPDATA_SENDREFRESHROGUESHOPBUFFCSREQ_OFFSET UNITYSDK_OFFSET(0xDEA62A0)
#define RPG_CLIENT_ROGUEBUFFSHOPDATA_SET_INSHOPITEMS_OFFSET UNITYSDK_OFFSET(0xDEA64D0)
#define RPG_CLIENT_ROGUEBUFFSHOPDATA_SET_REFRESHCOST_OFFSET UNITYSDK_OFFSET(0xDEA6530)
#define RPG_CLIENT_ROGUEBUFFSHOPDATA_SET_REMAINREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0xDEA64F0)
#define RPG_CLIENT_ROGUEBUFFSHOPDATA_SET_TOTALREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0xDEA6510)
#define RPG_CLIENT_ROGUEBUFFSHOPDATA_SYNCCONFIG_OFFSET UNITYSDK_OFFSET(0xDEA5AB0)
#define RPG_CLIENT_ROGUEBUFFSHOPDATA_SYNCITEM_OFFSET UNITYSDK_OFFSET(0xDEA50C0)
#define RPG_CLIENT_ROGUEBUFFSHOPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDEA6540)
#define RPG_CLIENT_ROGUEBUFFSHOPDATA__REPORTSDKSELECTION_OFFSET UNITYSDK_OFFSET(0xDEA5F00)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueBuffShopData_TypeDefinitionIndex = 67325;

	class RogueBuffShopData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffShopItemData*>* _InShopItems_k__BackingField; // 0x10
		::RPG::Client::ItemData* _RefreshCost_k__BackingField; // 0x18
		::System::Int32 _RemainRefreshTimes_k__BackingField; // 0x20
		::System::Int32 _TotalRefreshTimes_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPDATA__CTOR_OFFSET))(this);
		}

		::System::Void SyncItem(::Class_1_D40936EF3BF54118_88* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_88*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPDATA_SYNCITEM_OFFSET))(this, a1);
		}

		::System::Void SyncConfig(::System::Int32 a1, ::System::Int32 a2, ::Class_1_C3162D2F7EA647B9* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Class_1_C3162D2F7EA647B9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPDATA_SYNCCONFIG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SendGetRogueShopBuffInfoCsReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPDATA_SENDGETROGUESHOPBUFFINFOCSREQ_OFFSET))(this);
		}

		::System::Void SendBuyRogueShopBuffCsReq(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPDATA_SENDBUYROGUESHOPBUFFCSREQ_OFFSET))(this, a1);
		}

		::System::Void SendRefreshRogueShopBuffCsReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPDATA_SENDREFRESHROGUESHOPBUFFCSREQ_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPDATA_CLEAR_OFFSET))(this);
		}

		::System::Void _ReportSDKSelection(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPDATA__REPORTSDKSELECTION_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffShopItemData*>* get_InShopItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueBuffShopItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPDATA_GET_INSHOPITEMS_OFFSET))(this);
		}

		::System::Void set_InShopItems(::System::Collections::Generic::List_1<::RPG::Client::RogueBuffShopItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueBuffShopItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPDATA_SET_INSHOPITEMS_OFFSET))(this, a1);
		}

		::System::Int32 get_RemainRefreshTimes()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPDATA_GET_REMAINREFRESHTIMES_OFFSET))(this);
		}

		::System::Void set_RemainRefreshTimes(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPDATA_SET_REMAINREFRESHTIMES_OFFSET))(this, a1);
		}

		::System::Int32 get_TotalRefreshTimes()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPDATA_GET_TOTALREFRESHTIMES_OFFSET))(this);
		}

		::System::Void set_TotalRefreshTimes(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPDATA_SET_TOTALREFRESHTIMES_OFFSET))(this, a1);
		}

		::RPG::Client::ItemData* get_RefreshCost()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPDATA_GET_REFRESHCOST_OFFSET))(this);
		}

		::System::Void set_RefreshCost(::RPG::Client::ItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPDATA_SET_REFRESHCOST_OFFSET))(this, a1);
		}
	};
}
