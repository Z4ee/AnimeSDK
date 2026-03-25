#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"

class Class_1_6CF32442E7A80121;
class Class_1_BA489CC837CB7557_2;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class RogueBuffData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9374430)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x93746C0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x9374800)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_FIRSTREWARDS_OFFSET UNITYSDK_OFFSET(0x9374820)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_ISFINISHBYTALKDIALOG_OFFSET UNITYSDK_OFFSET(0x9374680)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_ISFROMINGAME_OFFSET UNITYSDK_OFFSET(0x9374C40)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0x93746E0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_LAYERID_OFFSET UNITYSDK_OFFSET(0x9374760)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_LAYERINDEX_OFFSET UNITYSDK_OFFSET(0x9374780)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_PASSROOMCOUNT_OFFSET UNITYSDK_OFFSET(0x9374700)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_REACHROOMCOUNT_OFFSET UNITYSDK_OFFSET(0x9374720)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_RECORDAVATARS_OFFSET UNITYSDK_OFFSET(0x9374880)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_RECORDBUFFDATAS_OFFSET UNITYSDK_OFFSET(0x9374840)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_RECORDMIRACLEIDS_OFFSET UNITYSDK_OFFSET(0x9374860)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_ROGUESCOREADDNUM_OFFSET UNITYSDK_OFFSET(0x93747A0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_SUBMODE_OFFSET UNITYSDK_OFFSET(0x93746A0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_TALENTCOINADDNUMHIGHLIGHTED_OFFSET UNITYSDK_OFFSET(0x93747E0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_TALENTCOINADDNUM_OFFSET UNITYSDK_OFFSET(0x93747C0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_TOTALROOMCOUNT_OFFSET UNITYSDK_OFFSET(0x9374740)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SETISFROMINGAME_OFFSET UNITYSDK_OFFSET(0x9374630)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_AREAID_OFFSET UNITYSDK_OFFSET(0x93746D0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x9374810)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_FIRSTREWARDS_OFFSET UNITYSDK_OFFSET(0x9374830)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_ISFINISHBYTALKDIALOG_OFFSET UNITYSDK_OFFSET(0x9374690)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_ISFROMINGAME_OFFSET UNITYSDK_OFFSET(0x9374C50)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0x93746F0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_LAYERID_OFFSET UNITYSDK_OFFSET(0x9374770)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_LAYERINDEX_OFFSET UNITYSDK_OFFSET(0x9374790)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_PASSROOMCOUNT_OFFSET UNITYSDK_OFFSET(0x9374710)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_REACHROOMCOUNT_OFFSET UNITYSDK_OFFSET(0x9374730)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_RECORDBUFFDATAS_OFFSET UNITYSDK_OFFSET(0x9374850)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_RECORDMIRACLEIDS_OFFSET UNITYSDK_OFFSET(0x9374870)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_ROGUESCOREADDNUM_OFFSET UNITYSDK_OFFSET(0x93747B0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_SUBMODE_OFFSET UNITYSDK_OFFSET(0x93746B0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_TALENTCOINADDNUMHIGHLIGHTED_OFFSET UNITYSDK_OFFSET(0x93747F0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_TALENTCOINADDNUM_OFFSET UNITYSDK_OFFSET(0x93747D0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_TOTALROOMCOUNT_OFFSET UNITYSDK_OFFSET(0x9374750)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SHOW_OFFSET UNITYSDK_OFFSET(0x9374530)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9373A30)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITAREAPROGRESSINFO_OFFSET UNITYSDK_OFFSET(0x9373C70)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITBUFFINFO_OFFSET UNITYSDK_OFFSET(0x9373D00)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITFIRSTREWARD_OFFSET UNITYSDK_OFFSET(0x93742A0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITMIRACLEINFO_OFFSET UNITYSDK_OFFSET(0x9373F60)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITSCOREANDTALENTCOIN_OFFSET UNITYSDK_OFFSET(0x93743C0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITSKIPINFO_OFFSET UNITYSDK_OFFSET(0x9374330)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITTEAMAVATARINFO_OFFSET UNITYSDK_OFFSET(0x9373E30)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueExploreFinishInfo_TypeDefinitionIndex = 54479;

	class ChessRogueExploreFinishInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* _RecordBuffDatas_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _RecordMiracleIDs_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::Class_1_BA489CC837CB7557_2*>* _RecordAvatars; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _FirstRewards_k__BackingField; // 0x28
		::System::UInt32 _TalentCoinAddNum_k__BackingField; // 0x30
		::System::UInt32 _LayerIndex_k__BackingField; // 0x34
		::System::Boolean _IsFinishByTalkDialog_k__BackingField; // 0x38
		::System::Boolean _IsFromInGame_k__BackingField; // 0x39
		::System::Boolean ShouldSkipToChessRoguePage; // 0x3A
		::System::Boolean _IsWin_k__BackingField; // 0x3B
		::System::UInt32 _RogueScoreAddNum_k__BackingField; // 0x3C
		::System::UInt32 _Difficulty_k__BackingField; // 0x40
		::System::UInt32 _TotalRoomCount_k__BackingField; // 0x44
		::System::UInt32 _LayerID_k__BackingField; // 0x48
		::System::UInt32 _PassRoomCount_k__BackingField; // 0x4C
		::RPG::GameCore::RogueSubMode _SubMode_k__BackingField; // 0x50
		::System::UInt32 _AreaID_k__BackingField; // 0x54
		::System::UInt32 _TalentCoinAddNumHighlighted_k__BackingField; // 0x58
		::System::UInt32 _ReachRoomCount_k__BackingField; // 0x5C

		::System::Void _ctor(::Class_1_6CF32442E7A80121* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6CF32442E7A80121*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__CTOR_OFFSET))(this, info);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SHOW_OFFSET))(this);
		}

		::System::Void SetIsFromInGame(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SETISFROMINGAME_OFFSET))(this, value);
		}

		::System::Void _InitAreaProgressInfo(::Class_1_6CF32442E7A80121* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6CF32442E7A80121*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITAREAPROGRESSINFO_OFFSET))(this, info);
		}

		::System::Void _InitTeamAvatarInfo(::Class_1_6CF32442E7A80121* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6CF32442E7A80121*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITTEAMAVATARINFO_OFFSET))(this, info);
		}

		::System::Void _InitBuffInfo(::Class_1_6CF32442E7A80121* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6CF32442E7A80121*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITBUFFINFO_OFFSET))(this, info);
		}

		::System::Void _InitMiracleInfo(::Class_1_6CF32442E7A80121* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6CF32442E7A80121*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITMIRACLEINFO_OFFSET))(this, info);
		}

		::System::Void _InitFirstReward(::Class_1_6CF32442E7A80121* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6CF32442E7A80121*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITFIRSTREWARD_OFFSET))(this, info);
		}

		::System::Void _InitSkipInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITSKIPINFO_OFFSET))(this);
		}

		::System::Void _InitScoreAndTalentCoin(::Class_1_6CF32442E7A80121* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6CF32442E7A80121*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITSCOREANDTALENTCOIN_OFFSET))(this, info);
		}

		::System::Boolean get_IsFinishByTalkDialog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_ISFINISHBYTALKDIALOG_OFFSET))(this);
		}

		::System::Void set_IsFinishByTalkDialog(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_ISFINISHBYTALKDIALOG_OFFSET))(this, value);
		}

		::RPG::GameCore::RogueSubMode get_SubMode()
		{
			return ((::RPG::GameCore::RogueSubMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_SUBMODE_OFFSET))(this);
		}

		::System::Void set_SubMode(::RPG::GameCore::RogueSubMode value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_SUBMODE_OFFSET))(this, value);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_AREAID_OFFSET))(this, value);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_ISWIN_OFFSET))(this);
		}

		::System::Void set_IsWin(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_ISWIN_OFFSET))(this, value);
		}

		::System::UInt32 get_PassRoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_PASSROOMCOUNT_OFFSET))(this);
		}

		::System::Void set_PassRoomCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_PASSROOMCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_ReachRoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_REACHROOMCOUNT_OFFSET))(this);
		}

		::System::Void set_ReachRoomCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_REACHROOMCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_TotalRoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_TOTALROOMCOUNT_OFFSET))(this);
		}

		::System::Void set_TotalRoomCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_TOTALROOMCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_LayerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_LAYERID_OFFSET))(this);
		}

		::System::Void set_LayerID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_LAYERID_OFFSET))(this, value);
		}

		::System::UInt32 get_LayerIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_LAYERINDEX_OFFSET))(this);
		}

		::System::Void set_LayerIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_LAYERINDEX_OFFSET))(this, value);
		}

		::System::UInt32 get_RogueScoreAddNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_ROGUESCOREADDNUM_OFFSET))(this);
		}

		::System::Void set_RogueScoreAddNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_ROGUESCOREADDNUM_OFFSET))(this, value);
		}

		::System::UInt32 get_TalentCoinAddNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_TALENTCOINADDNUM_OFFSET))(this);
		}

		::System::Void set_TalentCoinAddNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_TALENTCOINADDNUM_OFFSET))(this, value);
		}

		::System::UInt32 get_TalentCoinAddNumHighlighted()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_TALENTCOINADDNUMHIGHLIGHTED_OFFSET))(this);
		}

		::System::Void set_TalentCoinAddNumHighlighted(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_TALENTCOINADDNUMHIGHLIGHTED_OFFSET))(this, value);
		}

		::System::UInt32 get_Difficulty()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_DIFFICULTY_OFFSET))(this);
		}

		::System::Void set_Difficulty(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_DIFFICULTY_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_FirstRewards()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_FIRSTREWARDS_OFFSET))(this);
		}

		::System::Void set_FirstRewards(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_FIRSTREWARDS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* get_RecordBuffDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_RECORDBUFFDATAS_OFFSET))(this);
		}

		::System::Void set_RecordBuffDatas(::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_RECORDBUFFDATAS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RecordMiracleIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_RECORDMIRACLEIDS_OFFSET))(this);
		}

		::System::Void set_RecordMiracleIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_RECORDMIRACLEIDS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* get_RecordAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_RECORDAVATARS_OFFSET))(this);
		}

		::System::Boolean get_IsFromInGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_ISFROMINGAME_OFFSET))(this);
		}

		::System::Void set_IsFromInGame(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_ISFROMINGAME_OFFSET))(this, value);
		}
	};
}
