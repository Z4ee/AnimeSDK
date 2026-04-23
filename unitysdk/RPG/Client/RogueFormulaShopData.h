#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C74059A83466814F;
class Class_1_D40936EF3BF54118_80;
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class RogueFormulaShopItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEFORMULASHOPDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xB03A130)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA_GET_INSHOPITEMS_OFFSET UNITYSDK_OFFSET(0xB03AAF0)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA_GET_REFRESHCOST_OFFSET UNITYSDK_OFFSET(0xB03AB50)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA_GET_REMAINREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0xB03AB10)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA_GET_TOTALREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0xB03AB30)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA_SENDBUYROGUESHOPFORMULACSREQ_OFFSET UNITYSDK_OFFSET(0xB03A2A0)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA_SENDGETROGUESHOPFORMULAINFOCSREQ_OFFSET UNITYSDK_OFFSET(0xB03A1A0)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA_SENDREFRESHROGUESHOPFORMULACSREQ_OFFSET UNITYSDK_OFFSET(0xB03A9F0)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA_SET_INSHOPITEMS_OFFSET UNITYSDK_OFFSET(0xB03AB00)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA_SET_REFRESHCOST_OFFSET UNITYSDK_OFFSET(0xB03AB60)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA_SET_REMAINREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0xB03AB20)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA_SET_TOTALREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0xB03AB40)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA_SYNCCONFIG_OFFSET UNITYSDK_OFFSET(0xB039FF0)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA_SYNCITEM_OFFSET UNITYSDK_OFFSET(0xB039A40)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB03AB70)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA__REPORTBUYFORMULA_OFFSET UNITYSDK_OFFSET(0xB03A3D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueFormulaShopData_TypeDefinitionIndex = 62033;

	class RogueFormulaShopData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaShopItemData*>* _InShopItems_k__BackingField; // 0x10
		::RPG::Client::ItemData* _RefreshCost_k__BackingField; // 0x18
		::System::Int32 _RemainRefreshTimes_k__BackingField; // 0x20
		::System::Int32 _TotalRefreshTimes_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPDATA__CTOR_OFFSET))(this);
		}

		::System::Void SyncItem(::Class_1_D40936EF3BF54118_80* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_80*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPDATA_SYNCITEM_OFFSET))(this, info);
		}

		::System::Void SyncConfig(::System::Int32 remainRefreshTimes, ::System::Int32 totalRefreshTimes, ::Class_1_C74059A83466814F* cost)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Class_1_C74059A83466814F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPDATA_SYNCCONFIG_OFFSET))(this, remainRefreshTimes, totalRefreshTimes, cost);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPDATA_CLEAR_OFFSET))(this);
		}

		::System::Void SendGetRogueShopFormulaInfoCsReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPDATA_SENDGETROGUESHOPFORMULAINFOCSREQ_OFFSET))(this);
		}

		::System::Void SendBuyRogueShopFormulaCsReq(::System::Collections::Generic::List_1<::System::UInt32>* formulaIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPDATA_SENDBUYROGUESHOPFORMULACSREQ_OFFSET))(this, formulaIDList);
		}

		::System::Void SendRefreshRogueShopFormulaCsReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPDATA_SENDREFRESHROGUESHOPFORMULACSREQ_OFFSET))(this);
		}

		::System::Void _ReportBuyFormula(::System::Collections::Generic::List_1<::System::UInt32>* selectedFormulaIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPDATA__REPORTBUYFORMULA_OFFSET))(this, selectedFormulaIDs);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaShopItemData*>* get_InShopItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaShopItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPDATA_GET_INSHOPITEMS_OFFSET))(this);
		}

		::System::Void set_InShopItems(::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaShopItemData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaShopItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPDATA_SET_INSHOPITEMS_OFFSET))(this, value);
		}

		::System::Int32 get_RemainRefreshTimes()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPDATA_GET_REMAINREFRESHTIMES_OFFSET))(this);
		}

		::System::Void set_RemainRefreshTimes(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPDATA_SET_REMAINREFRESHTIMES_OFFSET))(this, value);
		}

		::System::Int32 get_TotalRefreshTimes()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPDATA_GET_TOTALREFRESHTIMES_OFFSET))(this);
		}

		::System::Void set_TotalRefreshTimes(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPDATA_SET_TOTALREFRESHTIMES_OFFSET))(this, value);
		}

		::RPG::Client::ItemData* get_RefreshCost()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPDATA_GET_REFRESHCOST_OFFSET))(this);
		}

		::System::Void set_RefreshCost(::RPG::Client::ItemData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPDATA_SET_REFRESHCOST_OFFSET))(this, value);
		}
	};
}
