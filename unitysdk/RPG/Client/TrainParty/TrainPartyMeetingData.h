#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_10.h"
#include "unitysdk/System/Object.h"

class Class_1_120319518E6F6581_121;
class Class_1_2E57B88467AF63C8_6;
class Class_1_352A8B3482C80E7D_61;
class Class_1_8064EBA28E797250_2;
class Class_1_C9DFE5EE7107C629_15;
class Class_1_FA4F4A67B1C04320_936;
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

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GETACTIVESKILLINFOLIST_OFFSET UNITYSDK_OFFSET(0xA601990)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GETALLCATEGORYINFOS_OFFSET UNITYSDK_OFFSET(0xA6012E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GETCATEGORYINFOBYTYPE_OFFSET UNITYSDK_OFFSET(0xA601190)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GETLEFTCARDINFOLIST_OFFSET UNITYSDK_OFFSET(0xA601780)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GETPASSENGERCARDINFOLIST_OFFSET UNITYSDK_OFFSET(0xA6017C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GETPREVIEWINFO_OFFSET UNITYSDK_OFFSET(0xA601800)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GET_BUILDMGR_OFFSET UNITYSDK_OFFSET(0xA601C00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GET_FUNDSITEMROW_OFFSET UNITYSDK_OFFSET(0xA601B60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xA601B20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GET_LEFTREFRESHCNT_OFFSET UNITYSDK_OFFSET(0xA601AC0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GET_LEFTUSECARDCNT_OFFSET UNITYSDK_OFFSET(0xA601AE0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GET_RANKINFO_OFFSET UNITYSDK_OFFSET(0xA601B40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GET_RATIOBASE_OFFSET UNITYSDK_OFFSET(0xA601C20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0xA601B00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_ISREACHPOINT_OFFSET UNITYSDK_OFFSET(0xA601130)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_ONCONFIRM_OFFSET UNITYSDK_OFFSET(0xA601500)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_ONREROLL_OFFSET UNITYSDK_OFFSET(0xA5F9CE0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_ONUSECARDFINISH_OFFSET UNITYSDK_OFFSET(0xA5FA680)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_REROLL_OFFSET UNITYSDK_OFFSET(0xA601320)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xA601B30)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_SET_LEFTREFRESHCNT_OFFSET UNITYSDK_OFFSET(0xA601AD0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_SET_LEFTUSECARDCNT_OFFSET UNITYSDK_OFFSET(0xA601AF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_SET_RANKINFO_OFFSET UNITYSDK_OFFSET(0xA601B50)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_SET_RATIOBASE_OFFSET UNITYSDK_OFFSET(0xA601C30)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_SET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0xA601B10)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xA5FC8A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA5FC850)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA__PASSENGERCARDINFOCOMPARE_OFFSET UNITYSDK_OFFSET(0xA601A10)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA__SYNCCATEGORYINFOS_OFFSET UNITYSDK_OFFSET(0xA600180)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA__SYNCCURCARDS_OFFSET UNITYSDK_OFFSET(0xA600A60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA__SYNCLEFTCARDS_OFFSET UNITYSDK_OFFSET(0xA600480)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyMeetingData_TypeDefinitionIndex = 61113;

	class TrainPartyMeetingData : public ::System::Object
	{
	public:
		::RPG::Client::TrainParty::TrainPartyMeetingPreviewInfo* _PreviewInfo; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingCategoryInfo*>* _CategoryInfoList; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingLeftCardInfo*>* _LeftCardInfoList; // 0x20
		::RPG::Client::TrainParty::TrainPartyMeetingRankInfo* _RankInfo_k__BackingField; // 0x28
		::RPG::Client::TrainParty::TrainPartyMeetingRollInfo* _RollInfo; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*>* _CurPassengerCardList; // 0x38
		::RPG::Client::TrainParty::TrainPartyGameInstance* _Owner; // 0x40
		::RPG::Client::TrainParty::TrainPartyMeetingResultInfo* _ResultInfo; // 0x48
		::System::UInt32 _LeftUseCardCnt_k__BackingField; // 0x50
		::System::UInt32 _ReachPoint; // 0x54
		::System::UInt32 _RatioBase_k__BackingField; // 0x58
		::System::UInt32 _ActionID; // 0x5C
		::System::UInt32 _LeftRefreshCnt_k__BackingField; // 0x60
		::System::Boolean _IsFinish_k__BackingField; // 0x64
		::System::UInt32 _TotalScore_k__BackingField; // 0x68

		::System::Void _ctor(::RPG::Client::TrainParty::TrainPartyGameInstance* owner, ::System::UInt32 actionID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyGameInstance*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA__CTOR_OFFSET))(this, owner, actionID);
		}

		::System::Void Sync(::Class_1_2E57B88467AF63C8_6* serverInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2E57B88467AF63C8_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_SYNC_OFFSET))(this, serverInfo);
		}

		::System::Void OnReroll(::Class_1_8064EBA28E797250_2* resultInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8064EBA28E797250_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_ONREROLL_OFFSET))(this, resultInfo);
		}

		::System::Void OnUseCardFinish(::Class_1_C9DFE5EE7107C629_15* resultInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_15*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_ONUSECARDFINISH_OFFSET))(this, resultInfo);
		}

		::System::Boolean IsReachPoint(::System::UInt32 score)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_ISREACHPOINT_OFFSET))(this, score);
		}

		::RPG::Client::TrainParty::TrainPartyMeetingCategoryInfo* GetCategoryInfoByType(::Enum_3_A35B38E5F9115A76_10 type)
		{
			return ((::RPG::Client::TrainParty::TrainPartyMeetingCategoryInfo*(*)(::PVOID, ::Enum_3_A35B38E5F9115A76_10))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA_GETCATEGORYINFOBYTYPE_OFFSET))(this, type);
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

		::System::Void _SyncCategoryInfos(::System::Collections::Generic::IList_1<::Class_1_352A8B3482C80E7D_61*>* infos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_352A8B3482C80E7D_61*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA__SYNCCATEGORYINFOS_OFFSET))(this, infos);
		}

		::System::Void _SyncCurCards(::System::Collections::Generic::IList_1<::Class_1_120319518E6F6581_121*>* serverInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_120319518E6F6581_121*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA__SYNCCURCARDS_OFFSET))(this, serverInfos);
		}

		::System::Void _SyncLeftCards(::System::Collections::Generic::IList_1<::Class_1_FA4F4A67B1C04320_936*>* serverInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_FA4F4A67B1C04320_936*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGDATA__SYNCLEFTCARDS_OFFSET))(this, serverInfos);
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
