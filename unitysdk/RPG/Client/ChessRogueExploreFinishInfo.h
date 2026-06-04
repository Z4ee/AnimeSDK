#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"

class Class_1_3A6496F2113C50F7_2;
class Class_1_6CF32442E7A80121;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class RogueBuffData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6587E0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xB658AD0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xB658C10)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_FIRSTREWARDS_OFFSET UNITYSDK_OFFSET(0xB658C30)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_ISFINISHBYTALKDIALOG_OFFSET UNITYSDK_OFFSET(0xB658A90)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_ISFROMINGAME_OFFSET UNITYSDK_OFFSET(0xB659000)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0xB658AF0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_LAYERID_OFFSET UNITYSDK_OFFSET(0xB658B70)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_LAYERINDEX_OFFSET UNITYSDK_OFFSET(0xB658B90)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_PASSROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xB658B10)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_REACHROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xB658B30)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_RECORDAVATARS_OFFSET UNITYSDK_OFFSET(0xB658C90)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_RECORDBUFFDATAS_OFFSET UNITYSDK_OFFSET(0xB658C50)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_RECORDMIRACLEIDS_OFFSET UNITYSDK_OFFSET(0xB658C70)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_ROGUESCOREADDNUM_OFFSET UNITYSDK_OFFSET(0xB658BB0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_SUBMODE_OFFSET UNITYSDK_OFFSET(0xB658AB0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_TALENTCOINADDNUMHIGHLIGHTED_OFFSET UNITYSDK_OFFSET(0xB658BF0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_TALENTCOINADDNUM_OFFSET UNITYSDK_OFFSET(0xB658BD0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_TOTALROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xB658B50)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SETISFROMINGAME_OFFSET UNITYSDK_OFFSET(0xB6589F0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_AREAID_OFFSET UNITYSDK_OFFSET(0xB658AE0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xB658C20)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_FIRSTREWARDS_OFFSET UNITYSDK_OFFSET(0xB658C40)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_ISFINISHBYTALKDIALOG_OFFSET UNITYSDK_OFFSET(0xB658AA0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_ISFROMINGAME_OFFSET UNITYSDK_OFFSET(0xB659010)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0xB658B00)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_LAYERID_OFFSET UNITYSDK_OFFSET(0xB658B80)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_LAYERINDEX_OFFSET UNITYSDK_OFFSET(0xB658BA0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_PASSROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xB658B20)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_REACHROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xB658B40)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_RECORDBUFFDATAS_OFFSET UNITYSDK_OFFSET(0xB658C60)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_RECORDMIRACLEIDS_OFFSET UNITYSDK_OFFSET(0xB658C80)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_ROGUESCOREADDNUM_OFFSET UNITYSDK_OFFSET(0xB658BC0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_SUBMODE_OFFSET UNITYSDK_OFFSET(0xB658AC0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_TALENTCOINADDNUMHIGHLIGHTED_OFFSET UNITYSDK_OFFSET(0xB658C00)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_TALENTCOINADDNUM_OFFSET UNITYSDK_OFFSET(0xB658BE0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_TOTALROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xB658B60)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SHOW_OFFSET UNITYSDK_OFFSET(0xB658900)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB657E50)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITAREAPROGRESSINFO_OFFSET UNITYSDK_OFFSET(0xB657F70)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITBUFFINFO_OFFSET UNITYSDK_OFFSET(0xB658000)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITFIRSTREWARD_OFFSET UNITYSDK_OFFSET(0xB658650)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITMIRACLEINFO_OFFSET UNITYSDK_OFFSET(0xB6582E0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITSCOREANDTALENTCOIN_OFFSET UNITYSDK_OFFSET(0xB658770)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITSKIPINFO_OFFSET UNITYSDK_OFFSET(0xB6586E0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITTEAMAVATARINFO_OFFSET UNITYSDK_OFFSET(0xB6581B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueExploreFinishInfo_TypeDefinitionIndex = 62600;

	class ChessRogueExploreFinishInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _FirstRewards_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _RecordMiracleIDs_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::Class_1_3A6496F2113C50F7_2*>* _RecordAvatars; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* _RecordBuffDatas_k__BackingField; // 0x28
		::System::Boolean ShouldSkipToChessRoguePage; // 0x30
		::System::Boolean _IsWin_k__BackingField; // 0x31
		::System::Boolean _IsFinishByTalkDialog_k__BackingField; // 0x32
		::System::Boolean _IsFromInGame_k__BackingField; // 0x33
		::System::UInt32 _TalentCoinAddNum_k__BackingField; // 0x34
		::System::UInt32 _TalentCoinAddNumHighlighted_k__BackingField; // 0x38
		::System::UInt32 _Difficulty_k__BackingField; // 0x3C
		::RPG::GameCore::RogueSubMode _SubMode_k__BackingField; // 0x40
		::System::UInt32 _LayerIndex_k__BackingField; // 0x44
		::System::UInt32 _ReachRoomCount_k__BackingField; // 0x48
		::System::UInt32 _TotalRoomCount_k__BackingField; // 0x4C
		::System::UInt32 _LayerID_k__BackingField; // 0x50
		::System::UInt32 _RogueScoreAddNum_k__BackingField; // 0x54
		::System::UInt32 _AreaID_k__BackingField; // 0x58
		::System::UInt32 _PassRoomCount_k__BackingField; // 0x5C

		::System::Void _ctor(::Class_1_6CF32442E7A80121* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6CF32442E7A80121*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SHOW_OFFSET))(this);
		}

		::System::Void SetIsFromInGame(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SETISFROMINGAME_OFFSET))(this, a1);
		}

		::System::Void _InitAreaProgressInfo(::Class_1_6CF32442E7A80121* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6CF32442E7A80121*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITAREAPROGRESSINFO_OFFSET))(this, a1);
		}

		::System::Void _InitTeamAvatarInfo(::Class_1_6CF32442E7A80121* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6CF32442E7A80121*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITTEAMAVATARINFO_OFFSET))(this, a1);
		}

		::System::Void _InitBuffInfo(::Class_1_6CF32442E7A80121* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6CF32442E7A80121*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITBUFFINFO_OFFSET))(this, a1);
		}

		::System::Void _InitMiracleInfo(::Class_1_6CF32442E7A80121* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6CF32442E7A80121*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITMIRACLEINFO_OFFSET))(this, a1);
		}

		::System::Void _InitFirstReward(::Class_1_6CF32442E7A80121* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6CF32442E7A80121*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITFIRSTREWARD_OFFSET))(this, a1);
		}

		::System::Void _InitSkipInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITSKIPINFO_OFFSET))(this);
		}

		::System::Void _InitScoreAndTalentCoin(::Class_1_6CF32442E7A80121* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6CF32442E7A80121*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO__INITSCOREANDTALENTCOIN_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFinishByTalkDialog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_ISFINISHBYTALKDIALOG_OFFSET))(this);
		}

		::System::Void set_IsFinishByTalkDialog(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_ISFINISHBYTALKDIALOG_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueSubMode get_SubMode()
		{
			return ((::RPG::GameCore::RogueSubMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_SUBMODE_OFFSET))(this);
		}

		::System::Void set_SubMode(::RPG::GameCore::RogueSubMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_SUBMODE_OFFSET))(this, a1);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_AREAID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_ISWIN_OFFSET))(this);
		}

		::System::Void set_IsWin(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_ISWIN_OFFSET))(this, a1);
		}

		::System::UInt32 get_PassRoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_PASSROOMCOUNT_OFFSET))(this);
		}

		::System::Void set_PassRoomCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_PASSROOMCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_ReachRoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_REACHROOMCOUNT_OFFSET))(this);
		}

		::System::Void set_ReachRoomCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_REACHROOMCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalRoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_TOTALROOMCOUNT_OFFSET))(this);
		}

		::System::Void set_TotalRoomCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_TOTALROOMCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_LayerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_LAYERID_OFFSET))(this);
		}

		::System::Void set_LayerID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_LAYERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_LayerIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_LAYERINDEX_OFFSET))(this);
		}

		::System::Void set_LayerIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_LAYERINDEX_OFFSET))(this, a1);
		}

		::System::UInt32 get_RogueScoreAddNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_ROGUESCOREADDNUM_OFFSET))(this);
		}

		::System::Void set_RogueScoreAddNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_ROGUESCOREADDNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_TalentCoinAddNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_TALENTCOINADDNUM_OFFSET))(this);
		}

		::System::Void set_TalentCoinAddNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_TALENTCOINADDNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_TalentCoinAddNumHighlighted()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_TALENTCOINADDNUMHIGHLIGHTED_OFFSET))(this);
		}

		::System::Void set_TalentCoinAddNumHighlighted(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_TALENTCOINADDNUMHIGHLIGHTED_OFFSET))(this, a1);
		}

		::System::UInt32 get_Difficulty()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_DIFFICULTY_OFFSET))(this);
		}

		::System::Void set_Difficulty(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_DIFFICULTY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_FirstRewards()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_FIRSTREWARDS_OFFSET))(this);
		}

		::System::Void set_FirstRewards(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_FIRSTREWARDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* get_RecordBuffDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_RECORDBUFFDATAS_OFFSET))(this);
		}

		::System::Void set_RecordBuffDatas(::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_RECORDBUFFDATAS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RecordMiracleIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_RECORDMIRACLEIDS_OFFSET))(this);
		}

		::System::Void set_RecordMiracleIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_RECORDMIRACLEIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* get_RecordAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_RECORDAVATARS_OFFSET))(this);
		}

		::System::Boolean get_IsFromInGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_GET_ISFROMINGAME_OFFSET))(this);
		}

		::System::Void set_IsFromInGame(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO_SET_ISFROMINGAME_OFFSET))(this, a1);
		}
	};
}
