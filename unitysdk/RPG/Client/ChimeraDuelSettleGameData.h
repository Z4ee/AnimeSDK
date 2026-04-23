#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChimeraDuelGameModeType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_72E159718E9AB7C7;
namespace RPG::Client { class ChimeraDuelGameSession; }
namespace RPG::Client { class ChimeraDuelPlayerRankData; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }

#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_CHIMERAS_OFFSET UNITYSDK_OFFSET(0xA022910)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_EXTRAREWARD_OFFSET UNITYSDK_OFFSET(0xA022830)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_GAMEID_OFFSET UNITYSDK_OFFSET(0xA022810)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_GAMEMODETYPE_OFFSET UNITYSDK_OFFSET(0xA0227B0)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_ISINLONGTAIL_OFFSET UNITYSDK_OFFSET(0xA0227D0)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_ISSHOWREWARD_OFFSET UNITYSDK_OFFSET(0xA0228F0)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0xA022640)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_LIFECOUNT_OFFSET UNITYSDK_OFFSET(0xA022770)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_MASTERID_OFFSET UNITYSDK_OFFSET(0xA0225A0)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_MAXLIFECOUNT_OFFSET UNITYSDK_OFFSET(0xA022790)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_MAXWINCOUNT_OFFSET UNITYSDK_OFFSET(0xA022620)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_OLDRANKDATA_OFFSET UNITYSDK_OFFSET(0xA0225E0)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_RANKNAME_OFFSET UNITYSDK_OFFSET(0xA022680)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_RANK_OFFSET UNITYSDK_OFFSET(0xA022710)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_REWARDITEMID_OFFSET UNITYSDK_OFFSET(0xA0228E0)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_ROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0xA022660)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_SCORE_OFFSET UNITYSDK_OFFSET(0xA022730)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_SHOULDEXITPUZZLE_OFFSET UNITYSDK_OFFSET(0xA0227F0)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_TONEXTRANKSCORE_OFFSET UNITYSDK_OFFSET(0xA022750)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_WINCOUNTGOAL_OFFSET UNITYSDK_OFFSET(0xA022600)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_WINCOUNT_OFFSET UNITYSDK_OFFSET(0xA0225C0)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_CHIMERAS_OFFSET UNITYSDK_OFFSET(0xA022920)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_GAMEID_OFFSET UNITYSDK_OFFSET(0xA022820)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_GAMEMODETYPE_OFFSET UNITYSDK_OFFSET(0xA0227C0)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_ISINLONGTAIL_OFFSET UNITYSDK_OFFSET(0xA0227E0)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_ISSHOWREWARD_OFFSET UNITYSDK_OFFSET(0xA022900)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0xA022650)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_LIFECOUNT_OFFSET UNITYSDK_OFFSET(0xA022780)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_MASTERID_OFFSET UNITYSDK_OFFSET(0xA0225B0)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_MAXLIFECOUNT_OFFSET UNITYSDK_OFFSET(0xA0227A0)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_MAXWINCOUNT_OFFSET UNITYSDK_OFFSET(0xA022630)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_OLDRANKDATA_OFFSET UNITYSDK_OFFSET(0xA0225F0)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_RANK_OFFSET UNITYSDK_OFFSET(0xA022720)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_ROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0xA022670)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_SCORE_OFFSET UNITYSDK_OFFSET(0xA022740)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_SHOULDEXITPUZZLE_OFFSET UNITYSDK_OFFSET(0xA022800)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_TONEXTRANKSCORE_OFFSET UNITYSDK_OFFSET(0xA022760)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_WINCOUNTGOAL_OFFSET UNITYSDK_OFFSET(0xA022610)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_WINCOUNT_OFFSET UNITYSDK_OFFSET(0xA0225D0)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA0223C0)
#define RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA01D200)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelSettleGameData_TypeDefinitionIndex = 58336;

	class ChimeraDuelSettleGameData : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraDuelPlayerRankData* _OldRankData_k__BackingField; // 0x10
		::Il2CppArray<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* _Chimeras_k__BackingField; // 0x18
		::System::Boolean _ShouldExitPuzzle_k__BackingField; // 0x20
		::System::Boolean _IsShowReward_k__BackingField; // 0x21
		::System::Boolean _IsInLongTail_k__BackingField; // 0x22
		::System::Boolean _IsWin_k__BackingField; // 0x23
		::System::UInt32 _MaxLifeCount_k__BackingField; // 0x24
		::System::UInt32 _LifeCount_k__BackingField; // 0x28
		::System::UInt32 _MaxWinCount_k__BackingField; // 0x2C
		::System::UInt32 _Rank_k__BackingField; // 0x30
		::System::UInt32 _Score_k__BackingField; // 0x34
		::System::UInt32 _MasterID_k__BackingField; // 0x38
		::RPG::Client::ChimeraDuelGameModeType _GameModeType_k__BackingField; // 0x3C
		::System::UInt32 _GameID_k__BackingField; // 0x40
		::System::UInt32 _WinCount_k__BackingField; // 0x44
		::System::UInt32 _RoundCount_k__BackingField; // 0x48
		::System::UInt32 _ToNextRankScore_k__BackingField; // 0x4C
		::System::UInt32 _WinCountGoal_k__BackingField; // 0x50

		::System::Void _ctor(::Class_1_72E159718E9AB7C7* settleGameInfo, ::RPG::Client::ChimeraDuelGameSession* clientGameInfo, ::RPG::Client::ChimeraDuelPlayerRankData* oldRankData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_72E159718E9AB7C7*, ::RPG::Client::ChimeraDuelGameSession*, ::RPG::Client::ChimeraDuelPlayerRankData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA__CTOR_OFFSET))(this, settleGameInfo, clientGameInfo, oldRankData);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA__CTOR_1_OFFSET))(this);
		}

		::System::UInt32 get_MasterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_MASTERID_OFFSET))(this);
		}

		::System::Void set_MasterID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_MASTERID_OFFSET))(this, value);
		}

		::System::UInt32 get_WinCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_WINCOUNT_OFFSET))(this);
		}

		::System::Void set_WinCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_WINCOUNT_OFFSET))(this, value);
		}

		::RPG::Client::ChimeraDuelPlayerRankData* get_OldRankData()
		{
			return ((::RPG::Client::ChimeraDuelPlayerRankData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_OLDRANKDATA_OFFSET))(this);
		}

		::System::Void set_OldRankData(::RPG::Client::ChimeraDuelPlayerRankData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelPlayerRankData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_OLDRANKDATA_OFFSET))(this, value);
		}

		::System::UInt32 get_WinCountGoal()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_WINCOUNTGOAL_OFFSET))(this);
		}

		::System::Void set_WinCountGoal(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_WINCOUNTGOAL_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxWinCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_MAXWINCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxWinCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_MAXWINCOUNT_OFFSET))(this, value);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_ISWIN_OFFSET))(this);
		}

		::System::Void set_IsWin(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_ISWIN_OFFSET))(this, value);
		}

		::System::UInt32 get_RoundCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_ROUNDCOUNT_OFFSET))(this);
		}

		::System::Void set_RoundCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_ROUNDCOUNT_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_RankName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_RANKNAME_OFFSET))(this);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_RANK_OFFSET))(this);
		}

		::System::Void set_Rank(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_RANK_OFFSET))(this, value);
		}

		::System::UInt32 get_Score()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_SCORE_OFFSET))(this);
		}

		::System::Void set_Score(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_SCORE_OFFSET))(this, value);
		}

		::System::UInt32 get_ToNextRankScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_TONEXTRANKSCORE_OFFSET))(this);
		}

		::System::Void set_ToNextRankScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_TONEXTRANKSCORE_OFFSET))(this, value);
		}

		::System::UInt32 get_LifeCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_LIFECOUNT_OFFSET))(this);
		}

		::System::Void set_LifeCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_LIFECOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxLifeCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_MAXLIFECOUNT_OFFSET))(this);
		}

		::System::Void set_MaxLifeCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_MAXLIFECOUNT_OFFSET))(this, value);
		}

		::RPG::Client::ChimeraDuelGameModeType get_GameModeType()
		{
			return ((::RPG::Client::ChimeraDuelGameModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_GAMEMODETYPE_OFFSET))(this);
		}

		::System::Void set_GameModeType(::RPG::Client::ChimeraDuelGameModeType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_GAMEMODETYPE_OFFSET))(this, value);
		}

		::System::Boolean get_IsInLongTail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_ISINLONGTAIL_OFFSET))(this);
		}

		::System::Void set_IsInLongTail(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_ISINLONGTAIL_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldExitPuzzle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_SHOULDEXITPUZZLE_OFFSET))(this);
		}

		::System::Void set_ShouldExitPuzzle(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_SHOULDEXITPUZZLE_OFFSET))(this, value);
		}

		::System::UInt32 get_GameID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_GAMEID_OFFSET))(this);
		}

		::System::Void set_GameID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_GAMEID_OFFSET))(this, value);
		}

		::RPG::Client::ItemDisplayData* get_ExtraReward()
		{
			return ((::RPG::Client::ItemDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_EXTRAREWARD_OFFSET))(this);
		}

		::System::Boolean get_IsShowReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_ISSHOWREWARD_OFFSET))(this);
		}

		::System::Void set_IsShowReward(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_ISSHOWREWARD_OFFSET))(this, value);
		}

		::System::UInt32 get_RewardItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_REWARDITEMID_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* get_Chimeras()
		{
			return ((::Il2CppArray<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_GET_CHIMERAS_OFFSET))(this);
		}

		::System::Void set_Chimeras(::Il2CppArray<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELSETTLEGAMEDATA_SET_CHIMERAS_OFFSET))(this, value);
		}
	};
}
