#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_35;
namespace Proto { class ItemList; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client::DiceCombat { class DiceCombatBattleResultPlayerInfo; }
namespace RPG::GameCore { class ActivityDiceCombatStageRow; }
namespace RPG::GameCore { class DiceCombatCampaignConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_CREATEPVERESULT_OFFSET UNITYSDK_OFFSET(0xCC15E20)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_CREATEPVPRESULT_OFFSET UNITYSDK_OFFSET(0xCC16220)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GETPVEENEMYWORD_OFFSET UNITYSDK_OFFSET(0xCC162F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_CANRESTART_OFFSET UNITYSDK_OFFSET(0xCC16ED0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_ISFRIENDPVP_OFFSET UNITYSDK_OFFSET(0xCC17020)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_ISPVE_OFFSET UNITYSDK_OFFSET(0xCC16D30)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_ISREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xCC16DC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0xCC16D50)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_NEWPVPRANKSCORE_OFFSET UNITYSDK_OFFSET(0xCC16FE0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_OPPONENTPLAYER_OFFSET UNITYSDK_OFFSET(0xCC17060)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_OPPONENTPVPRANKSCORE_OFFSET UNITYSDK_OFFSET(0xCC17000)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_PREPVPRANKSCORE_OFFSET UNITYSDK_OFFSET(0xCC16FC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_REWARDLIST_OFFSET UNITYSDK_OFFSET(0xCC16EB0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_SELFPLAYER_OFFSET UNITYSDK_OFFSET(0xCC17040)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_SHOULDRETURNMAZE_OFFSET UNITYSDK_OFFSET(0xCC16F40)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_SHOWPVPRANKUI_OFFSET UNITYSDK_OFFSET(0xCC16FA0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0xCC16D70)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_SETPRESETSTAGERESULTINFO_OFFSET UNITYSDK_OFFSET(0xCC16390)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_SET_ISFRIENDPVP_OFFSET UNITYSDK_OFFSET(0xCC17030)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_SET_ISPVE_OFFSET UNITYSDK_OFFSET(0xCC16D40)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0xCC16D60)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_SET_NEWPVPRANKSCORE_OFFSET UNITYSDK_OFFSET(0xCC16FF0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_SET_OPPONENTPLAYER_OFFSET UNITYSDK_OFFSET(0xCC17070)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_SET_OPPONENTPVPRANKSCORE_OFFSET UNITYSDK_OFFSET(0xCC17010)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_SET_PREPVPRANKSCORE_OFFSET UNITYSDK_OFFSET(0xCC16FD0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_SET_REWARDLIST_OFFSET UNITYSDK_OFFSET(0xCC16EC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_SET_SELFPLAYER_OFFSET UNITYSDK_OFFSET(0xCC17050)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_SET_SHOWPVPRANKUI_OFFSET UNITYSDK_OFFSET(0xCC16FB0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xCC15E10)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatBattleResultInfo_TypeDefinitionIndex = 76046;

	class DiceCombatBattleResultInfo : public ::System::Object
	{
	public:
		::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo* _OpponentPlayer_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _RewardList_k__BackingField; // 0x18
		::RPG::GameCore::DiceCombatCampaignConfigRow* _CampaignRow; // 0x20
		::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo* _SelfPlayer_k__BackingField; // 0x28
		::RPG::GameCore::ActivityDiceCombatStageRow* _PVEStageRow; // 0x30
		::System::Boolean _IsPVE_k__BackingField; // 0x38
		::System::Boolean _IsFriendPVP_k__BackingField; // 0x39
		::System::Boolean _IsWin_k__BackingField; // 0x3A
		::System::Boolean _ShowPVPRankUI_k__BackingField; // 0x3B
		::System::UInt32 _PrePVPRankScore_k__BackingField; // 0x3C
		::System::UInt32 _NewPVPRankScore_k__BackingField; // 0x40
		::System::UInt32 _OpponentPvpRankScore_k__BackingField; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatBattleResultInfo* CreatePVEResult(::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo* a1, ::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo* a2, ::System::Boolean a3, ::System::UInt32 a4, ::Proto::ItemList* a5)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatBattleResultInfo*(*)(::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo*, ::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo*, ::System::Boolean, ::System::UInt32, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_CREATEPVERESULT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::Client::DiceCombat::DiceCombatBattleResultInfo* CreatePVPResult(::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo* a1, ::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo* a2, ::Class_1_21C7581DFE99F091_35* a3)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatBattleResultInfo*(*)(::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo*, ::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo*, ::Class_1_21C7581DFE99F091_35*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_CREATEPVPRESULT_OFFSET))(a1, a2, a3);
		}

		::RPG::Client::TextID GetPVEEnemyWord()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GETPVEENEMYWORD_OFFSET))(this);
		}

		::System::Void SetPresetStageResultInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_SETPRESETSTAGERESULTINFO_OFFSET))(this);
		}

		::System::Boolean get_IsPVE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_ISPVE_OFFSET))(this);
		}

		::System::Void set_IsPVE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_SET_ISPVE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_ISWIN_OFFSET))(this);
		}

		::System::Void set_IsWin(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_SET_ISWIN_OFFSET))(this, a1);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_STAGEID_OFFSET))(this);
		}

		::System::Boolean get_IsRewardTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_ISREWARDTAKEN_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_RewardList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_REWARDLIST_OFFSET))(this);
		}

		::System::Void set_RewardList(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_SET_REWARDLIST_OFFSET))(this, a1);
		}

		::System::Boolean get_CanRestart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_CANRESTART_OFFSET))(this);
		}

		::System::Boolean get_ShouldReturnMaze()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_SHOULDRETURNMAZE_OFFSET))(this);
		}

		::System::Boolean get_ShowPVPRankUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_SHOWPVPRANKUI_OFFSET))(this);
		}

		::System::Void set_ShowPVPRankUI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_SET_SHOWPVPRANKUI_OFFSET))(this, a1);
		}

		::System::UInt32 get_PrePVPRankScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_PREPVPRANKSCORE_OFFSET))(this);
		}

		::System::Void set_PrePVPRankScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_SET_PREPVPRANKSCORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_NewPVPRankScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_NEWPVPRANKSCORE_OFFSET))(this);
		}

		::System::Void set_NewPVPRankScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_SET_NEWPVPRANKSCORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_OpponentPvpRankScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_OPPONENTPVPRANKSCORE_OFFSET))(this);
		}

		::System::Void set_OpponentPvpRankScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_SET_OPPONENTPVPRANKSCORE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFriendPVP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_ISFRIENDPVP_OFFSET))(this);
		}

		::System::Void set_IsFriendPVP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_SET_ISFRIENDPVP_OFFSET))(this, a1);
		}

		::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo* get_SelfPlayer()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_SELFPLAYER_OFFSET))(this);
		}

		::System::Void set_SelfPlayer(::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_SET_SELFPLAYER_OFFSET))(this, a1);
		}

		::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo* get_OpponentPlayer()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_OPPONENTPLAYER_OFFSET))(this);
		}

		::System::Void set_OpponentPlayer(::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_SET_OPPONENTPLAYER_OFFSET))(this, a1);
		}
	};
}
