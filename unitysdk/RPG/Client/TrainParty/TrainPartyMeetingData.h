#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_9.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_104;
class Class_1_98F510457EDFDB86;
class Class_1_9B5B752C46C05C26;
class Class_1_C9DFE5EE7107C629_24;
class Class_1_D17272E82AE804C2_1170;
class Class_1_D17272E82AE804C2_1171;
namespace RPG::Client::TrainParty { class TrainPartyBuildManager; }
namespace RPG::Client::TrainParty { class TrainPartyGameInstance; }
namespace RPG::Client::TrainParty { class TrainPartyMeetingCategoryInfo; }
namespace RPG::Client::TrainParty { class TrainPartyMeetingLeftCardInfo; }
namespace RPG::Client::TrainParty { class TrainPartyMeetingPassengerCardInfo; }
namespace RPG::Client::TrainParty { class TrainPartyMeetingPreviewInfo; }
namespace RPG::Client::TrainParty { class TrainPartyMeetingRankInfo; }
namespace RPG::Client::TrainParty { class TrainPartyMeetingResultInfo; }
namespace RPG::Client::TrainParty { class TrainPartyMeetingRollInfo; }
namespace RPG::Client::TrainParty { class TrainPartyPassengerSkillInfo; }
namespace RPG::GameCore { class ItemRow; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GETACTIVESKILLINFOLIST_OFFSET UNITYSDK_OFFSET(0x1BDF9220)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GETALLCATEGORYINFOS_OFFSET UNITYSDK_OFFSET(0x1BDF84A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GETCATEGORYINFOBYTYPE_OFFSET UNITYSDK_OFFSET(0x1BDF8380)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GETLEFTCARDINFOLIST_OFFSET UNITYSDK_OFFSET(0x1BDF8EE0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GETPASSENGERCARDINFOLIST_OFFSET UNITYSDK_OFFSET(0x1BDF8F20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GETPREVIEWINFO_OFFSET UNITYSDK_OFFSET(0x1BDF8F60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GET_BUILDMGR_OFFSET UNITYSDK_OFFSET(0x1BDF95A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GET_FUNDSITEMROW_OFFSET UNITYSDK_OFFSET(0x1BDF9540)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x1BDF9500)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GET_LEFTREFRESHCNT_OFFSET UNITYSDK_OFFSET(0x1BDF94A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GET_LEFTUSECARDCNT_OFFSET UNITYSDK_OFFSET(0x1BDF94C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GET_RANKINFO_OFFSET UNITYSDK_OFFSET(0x1BDF9520)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GET_RATIOBASE_OFFSET UNITYSDK_OFFSET(0x1BDF9600)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0x1BDF94E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_ISREACHPOINT_OFFSET UNITYSDK_OFFSET(0x1BDF8320)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_ONCONFIRM_OFFSET UNITYSDK_OFFSET(0x1BDF8960)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_ONREROLL_OFFSET UNITYSDK_OFFSET(0x1BDEF550)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_ONUSECARDFINISH_OFFSET UNITYSDK_OFFSET(0x1BDF00C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_REROLL_OFFSET UNITYSDK_OFFSET(0x1BDF84E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x1BDF9510)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_SET_LEFTREFRESHCNT_OFFSET UNITYSDK_OFFSET(0x1BDF94B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_SET_LEFTUSECARDCNT_OFFSET UNITYSDK_OFFSET(0x1BDF94D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_SET_RANKINFO_OFFSET UNITYSDK_OFFSET(0x1BDF9530)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_SET_RATIOBASE_OFFSET UNITYSDK_OFFSET(0x1BDF9610)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_SET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0x1BDF94F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x1BDF25F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDF25A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA__PASSENGERCARDINFOCOMPARE_OFFSET UNITYSDK_OFFSET(0x1BDF93F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA__SYNCCATEGORYINFOS_OFFSET UNITYSDK_OFFSET(0x1BDF6330)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA__SYNCCURCARDS_OFFSET UNITYSDK_OFFSET(0x1BDF6F60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA__SYNCLEFTCARDS_OFFSET UNITYSDK_OFFSET(0x1BDF67C0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyMeetingData_TypeDefinitionIndex = 74232;

	class TrainPartyMeetingData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingCategoryInfo*>* _CategoryInfoList; // 0x10
		::RPG::Client::TrainParty::TrainPartyMeetingResultInfo* _ResultInfo; // 0x18
		::RPG::Client::TrainParty::TrainPartyMeetingRollInfo* _RollInfo; // 0x20
		::RPG::Client::TrainParty::TrainPartyMeetingPreviewInfo* _PreviewInfo; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*>* _CurPassengerCardList; // 0x30
		::RPG::Client::TrainParty::TrainPartyMeetingRankInfo* _RankInfo_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingLeftCardInfo*>* _LeftCardInfoList; // 0x40
		::RPG::Client::TrainParty::TrainPartyGameInstance* _Owner; // 0x48
		::System::UInt32 _ActionID; // 0x50
		::System::UInt32 _TotalScore_k__BackingField; // 0x54
		::System::UInt32 _LeftUseCardCnt_k__BackingField; // 0x58
		::System::UInt32 _LeftRefreshCnt_k__BackingField; // 0x5C
		::System::UInt32 _RatioBase_k__BackingField; // 0x60
		::System::UInt32 _ReachPoint; // 0x64
		::System::Boolean _IsFinish_k__BackingField; // 0x68

		::System::Void _ctor(::RPG::Client::TrainParty::TrainPartyGameInstance* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyGameInstance*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Sync(::Class_1_9B5B752C46C05C26* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9B5B752C46C05C26*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void OnReroll(::Class_1_98F510457EDFDB86* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_98F510457EDFDB86*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_ONREROLL_OFFSET))(this, a1);
		}

		::System::Void OnUseCardFinish(::Class_1_C9DFE5EE7107C629_24* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_24*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_ONUSECARDFINISH_OFFSET))(this, a1);
		}

		::System::Boolean IsReachPoint(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_ISREACHPOINT_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyMeetingCategoryInfo* GetCategoryInfoByType(::Enum_3_A35B38E5F9115A76_9 a1)
		{
			return ((::RPG::Client::TrainParty::TrainPartyMeetingCategoryInfo*(*)(::PVOID, ::Enum_3_A35B38E5F9115A76_9))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GETCATEGORYINFOBYTYPE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingCategoryInfo*>* GetAllCategoryInfos()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingCategoryInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GETALLCATEGORYINFOS_OFFSET))(this);
		}

		::System::Void Reroll(::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_REROLL_OFFSET))(this, a1);
		}

		::System::Void OnConfirm(::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_ONCONFIRM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingLeftCardInfo*>* GetLeftCardInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingLeftCardInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GETLEFTCARDINFOLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*>* GetPassengerCardInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GETPASSENGERCARDINFOLIST_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartyMeetingPreviewInfo* GetPreviewInfo(::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*>* a1)
		{
			return ((::RPG::Client::TrainParty::TrainPartyMeetingPreviewInfo*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GETPREVIEWINFO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerSkillInfo*>* GetActiveSkillInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerSkillInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GETACTIVESKILLINFOLIST_OFFSET))(this);
		}

		::System::Void _SyncCategoryInfos(::System::Collections::Generic::IList_1<::Class_1_1CBA230307F9C289_104*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_1CBA230307F9C289_104*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA__SYNCCATEGORYINFOS_OFFSET))(this, a1);
		}

		::System::Void _SyncCurCards(::System::Collections::Generic::IList_1<::Class_1_D17272E82AE804C2_1170*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_D17272E82AE804C2_1170*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA__SYNCCURCARDS_OFFSET))(this, a1);
		}

		::System::Void _SyncLeftCards(::System::Collections::Generic::IList_1<::Class_1_D17272E82AE804C2_1171*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_D17272E82AE804C2_1171*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA__SYNCLEFTCARDS_OFFSET))(this, a1);
		}

		::System::Int32 _PassengerCardInfoCompare(::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo* a1, ::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*, ::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA__PASSENGERCARDINFOCOMPARE_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_LeftRefreshCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GET_LEFTREFRESHCNT_OFFSET))(this);
		}

		::System::Void set_LeftRefreshCnt(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_SET_LEFTREFRESHCNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_LeftUseCardCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GET_LEFTUSECARDCNT_OFFSET))(this);
		}

		::System::Void set_LeftUseCardCnt(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_SET_LEFTUSECARDCNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GET_TOTALSCORE_OFFSET))(this);
		}

		::System::Void set_TotalScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_SET_TOTALSCORE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GET_ISFINISH_OFFSET))(this);
		}

		::System::Void set_IsFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_SET_ISFINISH_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyMeetingRankInfo* get_RankInfo()
		{
			return ((::RPG::Client::TrainParty::TrainPartyMeetingRankInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GET_RANKINFO_OFFSET))(this);
		}

		::System::Void set_RankInfo(::RPG::Client::TrainParty::TrainPartyMeetingRankInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyMeetingRankInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_SET_RANKINFO_OFFSET))(this, a1);
		}

		::RPG::GameCore::ItemRow* get_FundsItemRow()
		{
			return ((::RPG::GameCore::ItemRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GET_FUNDSITEMROW_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartyBuildManager* get_BuildMgr()
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GET_BUILDMGR_OFFSET))(this);
		}

		::System::UInt32 get_RatioBase()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GET_RATIOBASE_OFFSET))(this);
		}

		::System::Void set_RatioBase(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_SET_RATIOBASE_OFFSET))(this, a1);
		}
	};
}
