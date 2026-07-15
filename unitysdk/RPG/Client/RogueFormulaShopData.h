#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C3162D2F7EA647B9;
class Class_1_D40936EF3BF54118_86;
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class RogueFormulaShopItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEFORMULASHOPDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A4596C0)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA_GET_INSHOPITEMS_OFFSET UNITYSDK_OFFSET(0x1A45A040)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA_GET_REFRESHCOST_OFFSET UNITYSDK_OFFSET(0x1A45A0A0)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA_GET_REMAINREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0x1A45A060)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA_GET_TOTALREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0x1A45A080)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA_SENDBUYROGUESHOPFORMULACSREQ_OFFSET UNITYSDK_OFFSET(0x1A459860)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA_SENDGETROGUESHOPFORMULAINFOCSREQ_OFFSET UNITYSDK_OFFSET(0x1A459760)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA_SENDREFRESHROGUESHOPFORMULACSREQ_OFFSET UNITYSDK_OFFSET(0x1A459F40)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA_SET_INSHOPITEMS_OFFSET UNITYSDK_OFFSET(0x1A45A050)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA_SET_REFRESHCOST_OFFSET UNITYSDK_OFFSET(0x1A45A0B0)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA_SET_REMAINREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0x1A45A070)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA_SET_TOTALREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0x1A45A090)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA_SYNCCONFIG_OFFSET UNITYSDK_OFFSET(0x1A459520)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA_SYNCITEM_OFFSET UNITYSDK_OFFSET(0x1A458CE0)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A45A0C0)
#define RPG_CLIENT_ROGUEFORMULASHOPDATA__REPORTBUYFORMULA_OFFSET UNITYSDK_OFFSET(0x1A459990)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueFormulaShopData_TypeDefinitionIndex = 64333;

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

		::System::Void SyncItem(::Class_1_D40936EF3BF54118_86* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_86*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPDATA_SYNCITEM_OFFSET))(this, a1);
		}

		::System::Void SyncConfig(::System::Int32 a1, ::System::Int32 a2, ::Class_1_C3162D2F7EA647B9* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Class_1_C3162D2F7EA647B9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPDATA_SYNCCONFIG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPDATA_CLEAR_OFFSET))(this);
		}

		::System::Void SendGetRogueShopFormulaInfoCsReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPDATA_SENDGETROGUESHOPFORMULAINFOCSREQ_OFFSET))(this);
		}

		::System::Void SendBuyRogueShopFormulaCsReq(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPDATA_SENDBUYROGUESHOPFORMULACSREQ_OFFSET))(this, a1);
		}

		::System::Void SendRefreshRogueShopFormulaCsReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPDATA_SENDREFRESHROGUESHOPFORMULACSREQ_OFFSET))(this);
		}

		::System::Void _ReportBuyFormula(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPDATA__REPORTBUYFORMULA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaShopItemData*>* get_InShopItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaShopItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPDATA_GET_INSHOPITEMS_OFFSET))(this);
		}

		::System::Void set_InShopItems(::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaShopItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaShopItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPDATA_SET_INSHOPITEMS_OFFSET))(this, a1);
		}

		::System::Int32 get_RemainRefreshTimes()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPDATA_GET_REMAINREFRESHTIMES_OFFSET))(this);
		}

		::System::Void set_RemainRefreshTimes(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPDATA_SET_REMAINREFRESHTIMES_OFFSET))(this, a1);
		}

		::System::Int32 get_TotalRefreshTimes()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPDATA_GET_TOTALREFRESHTIMES_OFFSET))(this);
		}

		::System::Void set_TotalRefreshTimes(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPDATA_SET_TOTALREFRESHTIMES_OFFSET))(this, a1);
		}

		::RPG::Client::ItemData* get_RefreshCost()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPDATA_GET_REFRESHCOST_OFFSET))(this);
		}

		::System::Void set_RefreshCost(::RPG::Client::ItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULASHOPDATA_SET_REFRESHCOST_OFFSET))(this, a1);
		}
	};
}
