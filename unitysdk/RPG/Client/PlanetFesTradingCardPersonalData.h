#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_10.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_822;
namespace RPG::Client { class PlanetFesTradingCardApplyItem; }
namespace RPG::Client { class PlanetFesTradingCardExchangeHistoryItem; }
namespace RPG::Client { class PlanetFesTradingCardOfferItem; }
namespace RPG::Client { class PlanetFesTradingCardPersonalData_IServerAgent; }
namespace RPG::Client { class PlayerBriefDisplayData; }
namespace RPG::Client { class PlayerData; }
namespace RPG::Client { class PlayerPlatformInfo; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_CHECKISPIECEHASEXCHANGED_OFFSET UNITYSDK_OFFSET(0xC48BBA0)
#define RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC48AF10)
#define RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GETACTIVEOFFERLIST_OFFSET UNITYSDK_OFFSET(0xC48AF80)
#define RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GETEXTRALITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xC48B710)
#define RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GETEXTRALITEMLIST_OFFSET UNITYSDK_OFFSET(0xC48B550)
#define RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GETHEADICON_OFFSET UNITYSDK_OFFSET(0xC48BA70)
#define RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GETID_OFFSET UNITYSDK_OFFSET(0xC48BC80)
#define RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GETISAPPLYHANDLED_OFFSET UNITYSDK_OFFSET(0xC48D0C0)
#define RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GETITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xC48B840)
#define RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GETLACKINGITEMLIST_OFFSET UNITYSDK_OFFSET(0xC48B4F0)
#define RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GETNAME_OFFSET UNITYSDK_OFFSET(0xC48B970)
#define RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GETOFFERHISTORY_OFFSET UNITYSDK_OFFSET(0xC48C6E0)
#define RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GETPLATFORMINFO_OFFSET UNITYSDK_OFFSET(0xC48BCE0)
#define RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GETPRESENTHISTORY_OFFSET UNITYSDK_OFFSET(0xC48BF20)
#define RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GETTOTAITEMDICT_OFFSET UNITYSDK_OFFSET(0xC48A6B0)
#define RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GET_APPLYLIST_OFFSET UNITYSDK_OFFSET(0xC48D2B0)
#define RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GET_DAILYAPPLYTIMES_OFFSET UNITYSDK_OFFSET(0xC48D410)
#define RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GET_DEMANDPIECELIST_OFFSET UNITYSDK_OFFSET(0xC488460)
#define RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GET_EXTRALPIECEDICT_OFFSET UNITYSDK_OFFSET(0xC48B680)
#define RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GET_FREEAPPLYLIST_OFFSET UNITYSDK_OFFSET(0xC48D350)
#define RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GET_LACKPIECELIST_OFFSET UNITYSDK_OFFSET(0xC48B540)
#define RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GET_MAXAPPLYPIECECOUNT_OFFSET UNITYSDK_OFFSET(0xC48D520)
#define RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GET_MAXGIVECARDREWARDCOUNT_OFFSET UNITYSDK_OFFSET(0xC48D630)
#define RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GET_NORMALAPPLYLIST_OFFSET UNITYSDK_OFFSET(0xC48D300)
#define RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GET_OFFERLIST_OFFSET UNITYSDK_OFFSET(0xC48B1C0)
#define RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GET_PERMISSIONTYPE_OFFSET UNITYSDK_OFFSET(0xC485400)
#define RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GET_TODAYAPPLYCOUNT_OFFSET UNITYSDK_OFFSET(0xC48D240)
#define RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GET_TODAYPRESENTCOUNT_OFFSET UNITYSDK_OFFSET(0xC48D3A0)
#define RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GET_TOTALPIECEDICT_OFFSET UNITYSDK_OFFSET(0xC48B460)
#define RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GET__PERSONALBASEDATA_OFFSET UNITYSDK_OFFSET(0xC48B9D0)
#define RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_REFRESHPLAYERDATAINHISTORYWITHPROMISE_OFFSET UNITYSDK_OFFSET(0xC48C9E0)
#define RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA__CREATEEXCHANGEHISTORYLIST_OFFSET UNITYSDK_OFFSET(0xC48C220)
#define RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC48AF70)
#define RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA__GETLACKCARDPIECELIST_OFFSET UNITYSDK_OFFSET(0xC48B210)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesTradingCardPersonalData_TypeDefinitionIndex = 62266;

	class PlanetFesTradingCardPersonalData : public ::System::Object
	{
	public:
		::RPG::Client::PlanetFesTradingCardPersonalData_IServerAgent* _Agent; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesTradingCardPersonalData* Create(::RPG::Client::PlanetFesTradingCardPersonalData_IServerAgent* a1)
		{
			return ((::RPG::Client::PlanetFesTradingCardPersonalData*(*)(::RPG::Client::PlanetFesTradingCardPersonalData_IServerAgent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_CREATE_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardOfferItem*>* GetActiveOfferList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardOfferItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GETACTIVEOFFERLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetLackCardPieceList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA__GETLACKCARDPIECELIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetLackingItemList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GETLACKINGITEMLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetExtralItemList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GETEXTRALITEMLIST_OFFSET))(this);
		}

		::System::UInt32 GetExtralItemCount(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GETEXTRALITEMCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 GetItemCount(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GETITEMCOUNT_OFFSET))(this, a1);
		}

		::System::String* GetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GETNAME_OFFSET))(this);
		}

		::System::String* GetHeadIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GETHEADICON_OFFSET))(this);
		}

		::System::Boolean CheckIsPieceHasExchanged(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_CHECKISPIECEHASEXCHANGED_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GETID_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* GetTotaItemDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GETTOTAITEMDICT_OFFSET))(this);
		}

		::RPG::Client::PlayerPlatformInfo* GetPlatformInfo()
		{
			return ((::RPG::Client::PlayerPlatformInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GETPLATFORMINFO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardExchangeHistoryItem*>* GetPresentHistory()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardExchangeHistoryItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GETPRESENTHISTORY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardExchangeHistoryItem*>* GetOfferHistory()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardExchangeHistoryItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GETOFFERHISTORY_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::PlayerBriefDisplayData*>* RefreshPlayerDataInHistoryWithPromise()
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::PlayerBriefDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_REFRESHPLAYERDATAINHISTORYWITHPROMISE_OFFSET))(this);
		}

		::System::Boolean GetIsApplyHandled(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GETISAPPLYHANDLED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardExchangeHistoryItem*>* _CreateExchangeHistoryList(::Class_0_16E4307DCC419505_822* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardExchangeHistoryItem*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_822*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA__CREATEEXCHANGEHISTORYLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_TotalPieceDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GET_TOTALPIECEDICT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_ExtralPieceDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GET_EXTRALPIECEDICT_OFFSET))(this);
		}

		::System::UInt32 get_TodayApplyCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GET_TODAYAPPLYCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_LackPieceList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GET_LACKPIECELIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_DemandPieceList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GET_DEMANDPIECELIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardOfferItem*>* get_OfferList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardOfferItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GET_OFFERLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardApplyItem*>* get_ApplyList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardApplyItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GET_APPLYLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardApplyItem*>* get_NormalApplyList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardApplyItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GET_NORMALAPPLYLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardApplyItem*>* get_FreeApplyList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardApplyItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GET_FREEAPPLYLIST_OFFSET))(this);
		}

		::Enum_3_0A3761FE34514D6C_10 get_PermissionType()
		{
			return ((::Enum_3_0A3761FE34514D6C_10(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GET_PERMISSIONTYPE_OFFSET))(this);
		}

		::System::UInt32 get_TodayPresentCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GET_TODAYPRESENTCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_DailyApplyTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GET_DAILYAPPLYTIMES_OFFSET))(this);
		}

		::System::UInt32 get_MaxApplyPieceCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GET_MAXAPPLYPIECECOUNT_OFFSET))(this);
		}

		::System::UInt32 get_MaxGiveCardRewardCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GET_MAXGIVECARDREWARDCOUNT_OFFSET))(this);
		}

		::RPG::Client::PlayerData* get__PersonalBaseData()
		{
			return ((::RPG::Client::PlayerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDPERSONALDATA_GET__PERSONALBASEDATA_OFFSET))(this);
		}
	};
}
