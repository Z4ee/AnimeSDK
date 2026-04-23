#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_26;
namespace Proto { class ItemList; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client::DiceCombat { class DiceCombatBattleResultPlayerInfo; }
namespace RPG::GameCore { class ActivityDiceCombatStageRow; }
namespace RPG::GameCore { class DiceCombatCampaignConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_CREATEPVERESULT_OFFSET UNITYSDK_OFFSET(0xA11D8B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_CREATEPVPRESULT_OFFSET UNITYSDK_OFFSET(0xA11E2B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GETPVEENEMYWORD_OFFSET UNITYSDK_OFFSET(0xA1227C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_CANRESTART_OFFSET UNITYSDK_OFFSET(0xA122CE0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_ISFRIENDPVP_OFFSET UNITYSDK_OFFSET(0xA122E30)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_ISPVE_OFFSET UNITYSDK_OFFSET(0xA122B40)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_ISREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xA122BD0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0xA122B60)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_NEWPVPRANKSCORE_OFFSET UNITYSDK_OFFSET(0xA122DF0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_OPPONENTPLAYER_OFFSET UNITYSDK_OFFSET(0xA122E70)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_OPPONENTPVPRANKSCORE_OFFSET UNITYSDK_OFFSET(0xA122E10)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_PREPVPRANKSCORE_OFFSET UNITYSDK_OFFSET(0xA122DD0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_REWARDLIST_OFFSET UNITYSDK_OFFSET(0xA122CC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_SELFPLAYER_OFFSET UNITYSDK_OFFSET(0xA122E50)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_SHOULDRETURNMAZE_OFFSET UNITYSDK_OFFSET(0xA122D50)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_SHOWPVPRANKUI_OFFSET UNITYSDK_OFFSET(0xA122DB0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0xA122B80)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_SETPRESETSTAGERESULTINFO_OFFSET UNITYSDK_OFFSET(0xA122850)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_SET_ISFRIENDPVP_OFFSET UNITYSDK_OFFSET(0xA122E40)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_SET_ISPVE_OFFSET UNITYSDK_OFFSET(0xA122B50)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0xA122B70)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_SET_NEWPVPRANKSCORE_OFFSET UNITYSDK_OFFSET(0xA122E00)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_SET_OPPONENTPLAYER_OFFSET UNITYSDK_OFFSET(0xA122E80)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_SET_OPPONENTPVPRANKSCORE_OFFSET UNITYSDK_OFFSET(0xA122E20)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_SET_PREPVPRANKSCORE_OFFSET UNITYSDK_OFFSET(0xA122DE0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_SET_REWARDLIST_OFFSET UNITYSDK_OFFSET(0xA122CD0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_SET_SELFPLAYER_OFFSET UNITYSDK_OFFSET(0xA122E60)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_SET_SHOWPVPRANKUI_OFFSET UNITYSDK_OFFSET(0xA122DC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA1227B0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatBattleResultInfo_TypeDefinitionIndex = 69808;

	class DiceCombatBattleResultInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityDiceCombatStageRow* _PVEStageRow; // 0x10
		::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo* _SelfPlayer_k__BackingField; // 0x18
		::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo* _OpponentPlayer_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _RewardList_k__BackingField; // 0x28
		::RPG::GameCore::DiceCombatCampaignConfigRow* _CampaignRow; // 0x30
		::System::UInt32 _OpponentPvpRankScore_k__BackingField; // 0x38
		::System::UInt32 _NewPVPRankScore_k__BackingField; // 0x3C
		::System::UInt32 _PrePVPRankScore_k__BackingField; // 0x40
		::System::Boolean _IsWin_k__BackingField; // 0x44
		::System::Boolean _IsFriendPVP_k__BackingField; // 0x45
		::System::Boolean _IsPVE_k__BackingField; // 0x46
		::System::Boolean _ShowPVPRankUI_k__BackingField; // 0x47

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatBattleResultInfo* CreatePVEResult(::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo* selfPlayer, ::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo* opponentPlayer, ::System::Boolean isWin, ::System::UInt32 stageID, ::Proto::ItemList* itemList)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatBattleResultInfo*(*)(::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo*, ::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo*, ::System::Boolean, ::System::UInt32, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_CREATEPVERESULT_OFFSET))(selfPlayer, opponentPlayer, isWin, stageID, itemList);
		}

		static ::RPG::Client::DiceCombat::DiceCombatBattleResultInfo* CreatePVPResult(::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo* selfPlayer, ::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo* opponentPlayer, ::Class_1_21C7581DFE99F091_26* notify)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatBattleResultInfo*(*)(::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo*, ::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo*, ::Class_1_21C7581DFE99F091_26*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_CREATEPVPRESULT_OFFSET))(selfPlayer, opponentPlayer, notify);
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

		::System::Void set_IsPVE(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_SET_ISPVE_OFFSET))(this, value);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_ISWIN_OFFSET))(this);
		}

		::System::Void set_IsWin(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_SET_ISWIN_OFFSET))(this, value);
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

		::System::Void set_RewardList(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_SET_REWARDLIST_OFFSET))(this, value);
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

		::System::Void set_ShowPVPRankUI(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_SET_SHOWPVPRANKUI_OFFSET))(this, value);
		}

		::System::UInt32 get_PrePVPRankScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_PREPVPRANKSCORE_OFFSET))(this);
		}

		::System::Void set_PrePVPRankScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_SET_PREPVPRANKSCORE_OFFSET))(this, value);
		}

		::System::UInt32 get_NewPVPRankScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_NEWPVPRANKSCORE_OFFSET))(this);
		}

		::System::Void set_NewPVPRankScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_SET_NEWPVPRANKSCORE_OFFSET))(this, value);
		}

		::System::UInt32 get_OpponentPvpRankScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_OPPONENTPVPRANKSCORE_OFFSET))(this);
		}

		::System::Void set_OpponentPvpRankScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_SET_OPPONENTPVPRANKSCORE_OFFSET))(this, value);
		}

		::System::Boolean get_IsFriendPVP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_ISFRIENDPVP_OFFSET))(this);
		}

		::System::Void set_IsFriendPVP(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_SET_ISFRIENDPVP_OFFSET))(this, value);
		}

		::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo* get_SelfPlayer()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_SELFPLAYER_OFFSET))(this);
		}

		::System::Void set_SelfPlayer(::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_SET_SELFPLAYER_OFFSET))(this, value);
		}

		::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo* get_OpponentPlayer()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_GET_OPPONENTPLAYER_OFFSET))(this);
		}

		::System::Void set_OpponentPlayer(::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatBattleResultPlayerInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLERESULTINFO_SET_OPPONENTPLAYER_OFFSET))(this, value);
		}
	};
}
