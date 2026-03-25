#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4D5D53619B020DDD;
class Class_1_E7C4009BCC22497A_74;
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class RogueFormulaShopItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEFORMULASHOPDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xA303420)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA_GET_INSHOPITEMS_OFFSET UNITYSDK_OFFSET(0xA303DE0)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA_GET_REFRESHCOST_OFFSET UNITYSDK_OFFSET(0xA303E40)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA_GET_REMAINREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0xA303E00)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA_GET_TOTALREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0xA303E20)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA_SENDBUYROGUESHOPFORMULACSREQ_OFFSET UNITYSDK_OFFSET(0xA303590)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA_SENDGETROGUESHOPFORMULAINFOCSREQ_OFFSET UNITYSDK_OFFSET(0xA303490)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA_SENDREFRESHROGUESHOPFORMULACSREQ_OFFSET UNITYSDK_OFFSET(0xA303CE0)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA_SET_INSHOPITEMS_OFFSET UNITYSDK_OFFSET(0xA303DF0)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA_SET_REFRESHCOST_OFFSET UNITYSDK_OFFSET(0xA303E50)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA_SET_REMAINREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0xA303E10)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA_SET_TOTALREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0xA303E30)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA_SYNCCONFIG_OFFSET UNITYSDK_OFFSET(0xA3032E0)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA_SYNCITEM_OFFSET UNITYSDK_OFFSET(0xA302D30)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA303E60)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA__REPORTBUYFORMULA_OFFSET UNITYSDK_OFFSET(0xA3036C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueFormulaShopData_TypeDefinitionIndex = 54845;

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

		::System::Void SyncItem(::Class_1_E7C4009BCC22497A_74* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_74*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPDATA_SYNCITEM_OFFSET))(this, info);
		}

		::System::Void SyncConfig(::System::Int32 remainRefreshTimes, ::System::Int32 totalRefreshTimes, ::Class_1_4D5D53619B020DDD* cost)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Class_1_4D5D53619B020DDD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPDATA_SYNCCONFIG_OFFSET))(this, remainRefreshTimes, totalRefreshTimes, cost);
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
