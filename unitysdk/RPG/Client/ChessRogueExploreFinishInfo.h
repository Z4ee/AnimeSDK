#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"

class Class_1_3A6496F2113C50F7_2;
class Class_1_6CF32442E7A80121_1;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class RogueBuffData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9FE21B0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x9FE2440)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x9FE2580)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_FIRSTREWARDS_OFFSET UNITYSDK_OFFSET(0x9FE25A0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_ISFINISHBYTALKDIALOG_OFFSET UNITYSDK_OFFSET(0x9FE2400)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_ISFROMINGAME_OFFSET UNITYSDK_OFFSET(0x9FE29C0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0x9FE2460)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_LAYERID_OFFSET UNITYSDK_OFFSET(0x9FE24E0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_LAYERINDEX_OFFSET UNITYSDK_OFFSET(0x9FE2500)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_PASSROOMCOUNT_OFFSET UNITYSDK_OFFSET(0x9FE2480)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_REACHROOMCOUNT_OFFSET UNITYSDK_OFFSET(0x9FE24A0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_RECORDAVATARS_OFFSET UNITYSDK_OFFSET(0x9FE2600)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_RECORDBUFFDATAS_OFFSET UNITYSDK_OFFSET(0x9FE25C0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_RECORDMIRACLEIDS_OFFSET UNITYSDK_OFFSET(0x9FE25E0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_ROGUESCOREADDNUM_OFFSET UNITYSDK_OFFSET(0x9FE2520)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_SUBMODE_OFFSET UNITYSDK_OFFSET(0x9FE2420)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_TALENTCOINADDNUMHIGHLIGHTED_OFFSET UNITYSDK_OFFSET(0x9FE2560)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_TALENTCOINADDNUM_OFFSET UNITYSDK_OFFSET(0x9FE2540)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_TOTALROOMCOUNT_OFFSET UNITYSDK_OFFSET(0x9FE24C0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SETISFROMINGAME_OFFSET UNITYSDK_OFFSET(0x9FE23B0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_AREAID_OFFSET UNITYSDK_OFFSET(0x9FE2450)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x9FE2590)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_FIRSTREWARDS_OFFSET UNITYSDK_OFFSET(0x9FE25B0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_ISFINISHBYTALKDIALOG_OFFSET UNITYSDK_OFFSET(0x9FE2410)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_ISFROMINGAME_OFFSET UNITYSDK_OFFSET(0x9FE29D0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0x9FE2470)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_LAYERID_OFFSET UNITYSDK_OFFSET(0x9FE24F0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_LAYERINDEX_OFFSET UNITYSDK_OFFSET(0x9FE2510)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_PASSROOMCOUNT_OFFSET UNITYSDK_OFFSET(0x9FE2490)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_REACHROOMCOUNT_OFFSET UNITYSDK_OFFSET(0x9FE24B0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_RECORDBUFFDATAS_OFFSET UNITYSDK_OFFSET(0x9FE25D0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_RECORDMIRACLEIDS_OFFSET UNITYSDK_OFFSET(0x9FE25F0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_ROGUESCOREADDNUM_OFFSET UNITYSDK_OFFSET(0x9FE2530)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_SUBMODE_OFFSET UNITYSDK_OFFSET(0x9FE2430)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_TALENTCOINADDNUMHIGHLIGHTED_OFFSET UNITYSDK_OFFSET(0x9FE2570)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_TALENTCOINADDNUM_OFFSET UNITYSDK_OFFSET(0x9FE2550)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_TOTALROOMCOUNT_OFFSET UNITYSDK_OFFSET(0x9FE24D0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SHOW_OFFSET UNITYSDK_OFFSET(0x9FE22B0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9FE17B0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITAREAPROGRESSINFO_OFFSET UNITYSDK_OFFSET(0x9FE19F0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITBUFFINFO_OFFSET UNITYSDK_OFFSET(0x9FE1A80)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITFIRSTREWARD_OFFSET UNITYSDK_OFFSET(0x9FE2020)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITMIRACLEINFO_OFFSET UNITYSDK_OFFSET(0x9FE1CE0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITSCOREANDTALENTCOIN_OFFSET UNITYSDK_OFFSET(0x9FE2140)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITSKIPINFO_OFFSET UNITYSDK_OFFSET(0x9FE20B0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITTEAMAVATARINFO_OFFSET UNITYSDK_OFFSET(0x9FE1BB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueExploreFinishInfo_TypeDefinitionIndex = 61667;

	class ChessRogueExploreFinishInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_3A6496F2113C50F7_2*>* _RecordAvatars; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* _RecordBuffDatas_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _RecordMiracleIDs_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _FirstRewards_k__BackingField; // 0x28
		::System::UInt32 _TotalRoomCount_k__BackingField; // 0x30
		::System::UInt32 _PassRoomCount_k__BackingField; // 0x34
		::System::UInt32 _LayerIndex_k__BackingField; // 0x38
		::System::UInt32 _Difficulty_k__BackingField; // 0x3C
		::System::UInt32 _TalentCoinAddNum_k__BackingField; // 0x40
		::System::UInt32 _RogueScoreAddNum_k__BackingField; // 0x44
		::System::Boolean ShouldSkipToChessRoguePage; // 0x48
		::System::Boolean _IsWin_k__BackingField; // 0x49
		::System::Boolean _IsFinishByTalkDialog_k__BackingField; // 0x4A
		::System::Boolean _IsFromInGame_k__BackingField; // 0x4B
		::System::UInt32 _ReachRoomCount_k__BackingField; // 0x4C
		::System::UInt32 _AreaID_k__BackingField; // 0x50
		::RPG::GameCore::RogueSubMode _SubMode_k__BackingField; // 0x54
		::System::UInt32 _LayerID_k__BackingField; // 0x58
		::System::UInt32 _TalentCoinAddNumHighlighted_k__BackingField; // 0x5C

		::System::Void _ctor(::Class_1_6CF32442E7A80121_1* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6CF32442E7A80121_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__CTOR_OFFSET))(this, info);
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

		::System::Void _InitAreaProgressInfo(::Class_1_6CF32442E7A80121_1* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6CF32442E7A80121_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITAREAPROGRESSINFO_OFFSET))(this, info);
		}

		::System::Void _InitTeamAvatarInfo(::Class_1_6CF32442E7A80121_1* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6CF32442E7A80121_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITTEAMAVATARINFO_OFFSET))(this, info);
		}

		::System::Void _InitBuffInfo(::Class_1_6CF32442E7A80121_1* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6CF32442E7A80121_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITBUFFINFO_OFFSET))(this, info);
		}

		::System::Void _InitMiracleInfo(::Class_1_6CF32442E7A80121_1* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6CF32442E7A80121_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITMIRACLEINFO_OFFSET))(this, info);
		}

		::System::Void _InitFirstReward(::Class_1_6CF32442E7A80121_1* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6CF32442E7A80121_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITFIRSTREWARD_OFFSET))(this, info);
		}

		::System::Void _InitSkipInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITSKIPINFO_OFFSET))(this);
		}

		::System::Void _InitScoreAndTalentCoin(::Class_1_6CF32442E7A80121_1* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6CF32442E7A80121_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITSCOREANDTALENTCOIN_OFFSET))(this, info);
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
