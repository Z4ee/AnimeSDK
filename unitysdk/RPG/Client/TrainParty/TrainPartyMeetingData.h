#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_11.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_65;
class Class_1_2E57B88467AF63C8_12;
class Class_1_AFFD5657038E04AA;
class Class_1_C9DFE5EE7107C629_17;
class Class_1_D17272E82AE804C2_980;
class Class_1_D1E0AD3915BCCF29_128;
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

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GETACTIVESKILLINFOLIST_OFFSET UNITYSDK_OFFSET(0xB357C40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GETALLCATEGORYINFOS_OFFSET UNITYSDK_OFFSET(0xB356FA0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GETCATEGORYINFOBYTYPE_OFFSET UNITYSDK_OFFSET(0xB356E50)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GETLEFTCARDINFOLIST_OFFSET UNITYSDK_OFFSET(0xB357920)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GETPASSENGERCARDINFOLIST_OFFSET UNITYSDK_OFFSET(0xB357960)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GETPREVIEWINFO_OFFSET UNITYSDK_OFFSET(0xB3579A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GET_BUILDMGR_OFFSET UNITYSDK_OFFSET(0xB358000)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GET_FUNDSITEMROW_OFFSET UNITYSDK_OFFSET(0xB357F60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xB357F20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GET_LEFTREFRESHCNT_OFFSET UNITYSDK_OFFSET(0xB357EC0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GET_LEFTUSECARDCNT_OFFSET UNITYSDK_OFFSET(0xB357EE0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GET_RANKINFO_OFFSET UNITYSDK_OFFSET(0xB357F40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GET_RATIOBASE_OFFSET UNITYSDK_OFFSET(0xB358020)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0xB357F00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_ISREACHPOINT_OFFSET UNITYSDK_OFFSET(0xB356DF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_ONCONFIRM_OFFSET UNITYSDK_OFFSET(0xB357430)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_ONREROLL_OFFSET UNITYSDK_OFFSET(0xB34E0D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_ONUSECARDFINISH_OFFSET UNITYSDK_OFFSET(0xB34EA70)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_REROLL_OFFSET UNITYSDK_OFFSET(0xB356FE0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xB357F30)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_SET_LEFTREFRESHCNT_OFFSET UNITYSDK_OFFSET(0xB357ED0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_SET_LEFTUSECARDCNT_OFFSET UNITYSDK_OFFSET(0xB357EF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_SET_RANKINFO_OFFSET UNITYSDK_OFFSET(0xB357F50)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_SET_RATIOBASE_OFFSET UNITYSDK_OFFSET(0xB358030)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_SET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0xB357F10)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xB351430)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB3513E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA__PASSENGERCARDINFOCOMPARE_OFFSET UNITYSDK_OFFSET(0xB357E10)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA__SYNCCATEGORYINFOS_OFFSET UNITYSDK_OFFSET(0xB3552B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA__SYNCCURCARDS_OFFSET UNITYSDK_OFFSET(0xB355B90)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA__SYNCLEFTCARDS_OFFSET UNITYSDK_OFFSET(0xB3555B0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyMeetingData_TypeDefinitionIndex = 68600;

	class TrainPartyMeetingData : public ::System::Object
	{
	public:
		::RPG::Client::TrainParty::TrainPartyMeetingResultInfo* _ResultInfo; // 0x10
		::RPG::Client::TrainParty::TrainPartyMeetingPreviewInfo* _PreviewInfo; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingCategoryInfo*>* _CategoryInfoList; // 0x20
		::RPG::Client::TrainParty::TrainPartyMeetingRollInfo* _RollInfo; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingLeftCardInfo*>* _LeftCardInfoList; // 0x30
		::RPG::Client::TrainParty::TrainPartyMeetingRankInfo* _RankInfo_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*>* _CurPassengerCardList; // 0x40
		::RPG::Client::TrainParty::TrainPartyGameInstance* _Owner; // 0x48
		::System::UInt32 _RatioBase_k__BackingField; // 0x50
		::System::Boolean _IsFinish_k__BackingField; // 0x54
		::System::UInt32 _LeftRefreshCnt_k__BackingField; // 0x58
		::System::UInt32 _ActionID; // 0x5C
		::System::UInt32 _ReachPoint; // 0x60
		::System::UInt32 _TotalScore_k__BackingField; // 0x64
		::System::UInt32 _LeftUseCardCnt_k__BackingField; // 0x68

		::System::Void _ctor(::RPG::Client::TrainParty::TrainPartyGameInstance* owner, ::System::UInt32 actionID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyGameInstance*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA__CTOR_OFFSET))(this, owner, actionID);
		}

		::System::Void Sync(::Class_1_2E57B88467AF63C8_12* serverInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2E57B88467AF63C8_12*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_SYNC_OFFSET))(this, serverInfo);
		}

		::System::Void OnReroll(::Class_1_AFFD5657038E04AA* resultInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_AFFD5657038E04AA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_ONREROLL_OFFSET))(this, resultInfo);
		}

		::System::Void OnUseCardFinish(::Class_1_C9DFE5EE7107C629_17* resultInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_17*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_ONUSECARDFINISH_OFFSET))(this, resultInfo);
		}

		::System::Boolean IsReachPoint(::System::UInt32 score)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_ISREACHPOINT_OFFSET))(this, score);
		}

		::RPG::Client::TrainParty::TrainPartyMeetingCategoryInfo* GetCategoryInfoByType(::Enum_3_A35B38E5F9115A76_11 type)
		{
			return ((::RPG::Client::TrainParty::TrainPartyMeetingCategoryInfo*(*)(::PVOID, ::Enum_3_A35B38E5F9115A76_11))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GETCATEGORYINFOBYTYPE_OFFSET))(this, type);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingCategoryInfo*>* GetAllCategoryInfos()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingCategoryInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GETALLCATEGORYINFOS_OFFSET))(this);
		}

		::System::Void Reroll(::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*>* selectedCardInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_REROLL_OFFSET))(this, selectedCardInfos);
		}

		::System::Void OnConfirm(::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*>* selectedCardInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_ONCONFIRM_OFFSET))(this, selectedCardInfos);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingLeftCardInfo*>* GetLeftCardInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingLeftCardInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GETLEFTCARDINFOLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*>* GetPassengerCardInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GETPASSENGERCARDINFOLIST_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartyMeetingPreviewInfo* GetPreviewInfo(::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*>* selectedCardInfos)
		{
			return ((::RPG::Client::TrainParty::TrainPartyMeetingPreviewInfo*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GETPREVIEWINFO_OFFSET))(this, selectedCardInfos);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerSkillInfo*>* GetActiveSkillInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerSkillInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GETACTIVESKILLINFOLIST_OFFSET))(this);
		}

		::System::Void _SyncCategoryInfos(::System::Collections::Generic::IList_1<::Class_1_1CBA230307F9C289_65*>* infos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_1CBA230307F9C289_65*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA__SYNCCATEGORYINFOS_OFFSET))(this, infos);
		}

		::System::Void _SyncCurCards(::System::Collections::Generic::IList_1<::Class_1_D1E0AD3915BCCF29_128*>* serverInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_D1E0AD3915BCCF29_128*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA__SYNCCURCARDS_OFFSET))(this, serverInfos);
		}

		::System::Void _SyncLeftCards(::System::Collections::Generic::IList_1<::Class_1_D17272E82AE804C2_980*>* serverInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_D17272E82AE804C2_980*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA__SYNCLEFTCARDS_OFFSET))(this, serverInfos);
		}

		::System::Int32 _PassengerCardInfoCompare(::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo* a, ::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*, ::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA__PASSENGERCARDINFOCOMPARE_OFFSET))(this, a, b);
		}

		::System::UInt32 get_LeftRefreshCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GET_LEFTREFRESHCNT_OFFSET))(this);
		}

		::System::Void set_LeftRefreshCnt(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_SET_LEFTREFRESHCNT_OFFSET))(this, value);
		}

		::System::UInt32 get_LeftUseCardCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GET_LEFTUSECARDCNT_OFFSET))(this);
		}

		::System::Void set_LeftUseCardCnt(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_SET_LEFTUSECARDCNT_OFFSET))(this, value);
		}

		::System::UInt32 get_TotalScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GET_TOTALSCORE_OFFSET))(this);
		}

		::System::Void set_TotalScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_SET_TOTALSCORE_OFFSET))(this, value);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GET_ISFINISH_OFFSET))(this);
		}

		::System::Void set_IsFinish(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_SET_ISFINISH_OFFSET))(this, value);
		}

		::RPG::Client::TrainParty::TrainPartyMeetingRankInfo* get_RankInfo()
		{
			return ((::RPG::Client::TrainParty::TrainPartyMeetingRankInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GET_RANKINFO_OFFSET))(this);
		}

		::System::Void set_RankInfo(::RPG::Client::TrainParty::TrainPartyMeetingRankInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyMeetingRankInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_SET_RANKINFO_OFFSET))(this, value);
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

		::System::Void set_RatioBase(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_SET_RATIOBASE_OFFSET))(this, value);
		}
	};
}
