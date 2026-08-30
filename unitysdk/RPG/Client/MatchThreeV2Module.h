#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/MultiPlayerGameMode.h"

class Class_1_2EC3A5163E0CD5F4;
namespace RPG::Client { class IMatchThreePropData; }
namespace RPG::Client { class MatchPlayRecord; }
namespace RPG::Client { class MatchThreeGame; }
namespace RPG::Client { class MatchThreeRoyaleDataManager; }
namespace RPG::Client { class MatchThreeV2ActivityInfo; }
namespace RPG::Client { class MatchThreeV2ArenaPvpManager; }
namespace RPG::Client { class MatchThreeV2BirdInfos; }
namespace RPG::Client { class MatchThreeV2ChallengerInfos; }
namespace RPG::Client { class MatchThreeV2InviteToastService; }
namespace RPG::Client { class MatchThreeV2LevelInfos; }
namespace RPG::Client { class MatchThreeV2PlayerData; }
namespace RPG::Client { class MatchThreeV2PropInfos; }
namespace RPG::Client { class MatchThreeV2PvpScoreInfos; }
namespace RPG::Client { class MatchThreeV2RankInfos; }
namespace RPG::Client { class MatchThreeV2ReputationInfos; }
namespace RPG::Client { class MatchThreeV2RewardInfo; }
namespace RPG::Client { class MatchThreeV2SoloPvpManager; }
namespace RPG::Client { class MatchThreeV2UICounter; }
namespace RPG::Client { class OfferingRewardData; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATCHTHREEV2MODULE_CREATEARENAPVPGAME_OFFSET UNITYSDK_OFFSET(0xD65B910)
#define RPG_CLIENT_MATCHTHREEV2MODULE_CREATEROYALEPVPGAME_OFFSET UNITYSDK_OFFSET(0xD654E00)
#define RPG_CLIENT_MATCHTHREEV2MODULE_CREATESOLOPVPGAME_OFFSET UNITYSDK_OFFSET(0xD667730)
#define RPG_CLIENT_MATCHTHREEV2MODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD666ED0)
#define RPG_CLIENT_MATCHTHREEV2MODULE_DOENDGAME_OFFSET UNITYSDK_OFFSET(0xD647C70)
#define RPG_CLIENT_MATCHTHREEV2MODULE_ENDGAME_OFFSET UNITYSDK_OFFSET(0xD667060)
#define RPG_CLIENT_MATCHTHREEV2MODULE_GETOFFERDATA_OFFSET UNITYSDK_OFFSET(0xD667B30)
#define RPG_CLIENT_MATCHTHREEV2MODULE_GETSCORELIMIT_OFFSET UNITYSDK_OFFSET(0xD667CA0)
#define RPG_CLIENT_MATCHTHREEV2MODULE_GET_ACTIVITYINFO_OFFSET UNITYSDK_OFFSET(0xD665850)
#define RPG_CLIENT_MATCHTHREEV2MODULE_GET_ARENAPVPMANAGER_OFFSET UNITYSDK_OFFSET(0xD6659D0)
#define RPG_CLIENT_MATCHTHREEV2MODULE_GET_BIRDINFOS_OFFSET UNITYSDK_OFFSET(0xD6658B0)
#define RPG_CLIENT_MATCHTHREEV2MODULE_GET_CHALLENGERINFOS_OFFSET UNITYSDK_OFFSET(0xD665930)
#define RPG_CLIENT_MATCHTHREEV2MODULE_GET_CURRENTGAME_OFFSET UNITYSDK_OFFSET(0xD665A50)
#define RPG_CLIENT_MATCHTHREEV2MODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xD647BF0)
#define RPG_CLIENT_MATCHTHREEV2MODULE_GET_INVITETOASTSERVICE_OFFSET UNITYSDK_OFFSET(0xD665A10)
#define RPG_CLIENT_MATCHTHREEV2MODULE_GET_ISGAMERUNNING_OFFSET UNITYSDK_OFFSET(0xD665A70)
#define RPG_CLIENT_MATCHTHREEV2MODULE_GET_LEVELINFOS_OFFSET UNITYSDK_OFFSET(0xD6658D0)
#define RPG_CLIENT_MATCHTHREEV2MODULE_GET_PLAYERDATA_OFFSET UNITYSDK_OFFSET(0xD665890)
#define RPG_CLIENT_MATCHTHREEV2MODULE_GET_PROPINFOS_OFFSET UNITYSDK_OFFSET(0xD6658F0)
#define RPG_CLIENT_MATCHTHREEV2MODULE_GET_PVPSCOREINFOS_OFFSET UNITYSDK_OFFSET(0xD665990)
#define RPG_CLIENT_MATCHTHREEV2MODULE_GET_RANKINFOS_OFFSET UNITYSDK_OFFSET(0xD665970)
#define RPG_CLIENT_MATCHTHREEV2MODULE_GET_REPUTATIONINFOS_OFFSET UNITYSDK_OFFSET(0xD665950)
#define RPG_CLIENT_MATCHTHREEV2MODULE_GET_REWARDINFO_OFFSET UNITYSDK_OFFSET(0xD665870)
#define RPG_CLIENT_MATCHTHREEV2MODULE_GET_ROYALEDATAMANAGER_OFFSET UNITYSDK_OFFSET(0xD6659F0)
#define RPG_CLIENT_MATCHTHREEV2MODULE_GET_SOLOPVPMANAGER_OFFSET UNITYSDK_OFFSET(0xD6659B0)
#define RPG_CLIENT_MATCHTHREEV2MODULE_GET_STARTARGETINFOS_OFFSET UNITYSDK_OFFSET(0xD665910)
#define RPG_CLIENT_MATCHTHREEV2MODULE_GET_UICOUNTER_OFFSET UNITYSDK_OFFSET(0xD665A30)
#define RPG_CLIENT_MATCHTHREEV2MODULE_INIT_OFFSET UNITYSDK_OFFSET(0xD665AC0)
#define RPG_CLIENT_MATCHTHREEV2MODULE_ISSCOREREACHLIMIT_OFFSET UNITYSDK_OFFSET(0xD667E10)
#define RPG_CLIENT_MATCHTHREEV2MODULE_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0xD6665E0)
#define RPG_CLIENT_MATCHTHREEV2MODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xD666BD0)
#define RPG_CLIENT_MATCHTHREEV2MODULE_QUITGAME_OFFSET UNITYSDK_OFFSET(0xD658F50)
#define RPG_CLIENT_MATCHTHREEV2MODULE_RESTARTPVEONEONONEGAME_OFFSET UNITYSDK_OFFSET(0xD667450)
#define RPG_CLIENT_MATCHTHREEV2MODULE_SENDLEVELRESULTTOSERVER_OFFSET UNITYSDK_OFFSET(0xD663D80)
#define RPG_CLIENT_MATCHTHREEV2MODULE_SET_ACTIVITYINFO_OFFSET UNITYSDK_OFFSET(0xD665860)
#define RPG_CLIENT_MATCHTHREEV2MODULE_SET_ARENAPVPMANAGER_OFFSET UNITYSDK_OFFSET(0xD6659E0)
#define RPG_CLIENT_MATCHTHREEV2MODULE_SET_BIRDINFOS_OFFSET UNITYSDK_OFFSET(0xD6658C0)
#define RPG_CLIENT_MATCHTHREEV2MODULE_SET_CHALLENGERINFOS_OFFSET UNITYSDK_OFFSET(0xD665940)
#define RPG_CLIENT_MATCHTHREEV2MODULE_SET_CURRENTGAME_OFFSET UNITYSDK_OFFSET(0xD665A60)
#define RPG_CLIENT_MATCHTHREEV2MODULE_SET_INVITETOASTSERVICE_OFFSET UNITYSDK_OFFSET(0xD665A20)
#define RPG_CLIENT_MATCHTHREEV2MODULE_SET_LEVELINFOS_OFFSET UNITYSDK_OFFSET(0xD6658E0)
#define RPG_CLIENT_MATCHTHREEV2MODULE_SET_PLAYERDATA_OFFSET UNITYSDK_OFFSET(0xD6658A0)
#define RPG_CLIENT_MATCHTHREEV2MODULE_SET_PROPINFOS_OFFSET UNITYSDK_OFFSET(0xD665900)
#define RPG_CLIENT_MATCHTHREEV2MODULE_SET_PVPSCOREINFOS_OFFSET UNITYSDK_OFFSET(0xD6659A0)
#define RPG_CLIENT_MATCHTHREEV2MODULE_SET_RANKINFOS_OFFSET UNITYSDK_OFFSET(0xD665980)
#define RPG_CLIENT_MATCHTHREEV2MODULE_SET_REPUTATIONINFOS_OFFSET UNITYSDK_OFFSET(0xD665960)
#define RPG_CLIENT_MATCHTHREEV2MODULE_SET_REWARDINFO_OFFSET UNITYSDK_OFFSET(0xD665880)
#define RPG_CLIENT_MATCHTHREEV2MODULE_SET_ROYALEDATAMANAGER_OFFSET UNITYSDK_OFFSET(0xD665A00)
#define RPG_CLIENT_MATCHTHREEV2MODULE_SET_SOLOPVPMANAGER_OFFSET UNITYSDK_OFFSET(0xD6659C0)
#define RPG_CLIENT_MATCHTHREEV2MODULE_SET_STARTARGETINFOS_OFFSET UNITYSDK_OFFSET(0xD665920)
#define RPG_CLIENT_MATCHTHREEV2MODULE_SET_UICOUNTER_OFFSET UNITYSDK_OFFSET(0xD665A40)
#define RPG_CLIENT_MATCHTHREEV2MODULE_STARTPVEONEONONEGAME_OFFSET UNITYSDK_OFFSET(0xD667120)
#define RPG_CLIENT_MATCHTHREEV2MODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xD666D00)
#define RPG_CLIENT_MATCHTHREEV2MODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xD663590)
#define RPG_CLIENT_MATCHTHREEV2MODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xD667E90)
#define RPG_CLIENT_MATCHTHREEV2MODULE__DISPOSECURRENTGAME_OFFSET UNITYSDK_OFFSET(0xD667AD0)
#define RPG_CLIENT_MATCHTHREEV2MODULE__INITREQ_OFFSET UNITYSDK_OFFSET(0xD6667B0)
#define RPG_CLIENT_MATCHTHREEV2MODULE__ONFINISHSUBMISSION_OFFSET UNITYSDK_OFFSET(0xD666DA0)
#define RPG_CLIENT_MATCHTHREEV2MODULE__ONGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0xD663970)
#define RPG_CLIENT_MATCHTHREEV2MODULE__ONLOGINFINISH_B__86_0_OFFSET UNITYSDK_OFFSET(0xD667EB0)
#define RPG_CLIENT_MATCHTHREEV2MODULE__ONMATCHPLAYDATAUPDATED_OFFSET UNITYSDK_OFFSET(0xD663C70)
#define RPG_CLIENT_MATCHTHREEV2MODULE__ONMATCHTHREEV2BATTLEITEMLEVELUPSCRSP_OFFSET UNITYSDK_OFFSET(0xD6654F0)
#define RPG_CLIENT_MATCHTHREEV2MODULE__ONMATCHTHREEV2LEVELENDSCRSP_OFFSET UNITYSDK_OFFSET(0xD664340)
#define RPG_CLIENT_MATCHTHREEV2MODULE__ONMATCHTHREEV2PVPFINISHSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xD663BF0)
#define RPG_CLIENT_MATCHTHREEV2MODULE__ONMATCHTHREEV2SCNOTIFY_OFFSET UNITYSDK_OFFSET(0xD663B70)
#define RPG_CLIENT_MATCHTHREEV2MODULE__ONMATCHTHREEV2SETBIRDPOSSCRSP_OFFSET UNITYSDK_OFFSET(0xD665590)
#define RPG_CLIENT_MATCHTHREEV2MODULE__RECORDNEWREPUTATIONTOPREF_OFFSET UNITYSDK_OFFSET(0xD664F30)
#define RPG_CLIENT_MATCHTHREEV2MODULE__RECORDNEWUNLOCKPROPTOPREF_OFFSET UNITYSDK_OFFSET(0xD664D90)
#define RPG_CLIENT_MATCHTHREEV2MODULE___INITREQ_B__87_0_OFFSET UNITYSDK_OFFSET(0xD667EC0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2Module_TypeDefinitionIndex = 66079;

	class MatchThreeV2Module : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::MatchThreeV2ChallengerInfos* _ChallengerInfos_k__BackingField; // 0x10
		::RPG::Client::MatchThreeRoyaleDataManager* _RoyaleDataManager_k__BackingField; // 0x18
		::RPG::Client::MatchThreeV2PlayerData* _PlayerData_k__BackingField; // 0x20
		::RPG::Client::MatchThreeV2LevelInfos* _LevelInfos_k__BackingField; // 0x28
		::RPG::Client::MatchThreeV2SoloPvpManager* _SoloPvpManager_k__BackingField; // 0x30
		::RPG::Client::MatchThreeV2ArenaPvpManager* _ArenaPvpManager_k__BackingField; // 0x38
		::RPG::Client::ScheduleTask* _WaitForScheduleOpenTask; // 0x40
		::RPG::Client::MatchThreeV2UICounter* _UICounter_k__BackingField; // 0x48
		::RPG::Client::MatchThreeGame* _CurrentGame_k__BackingField; // 0x50
		::RPG::Client::MatchThreeV2ReputationInfos* _ReputationInfos_k__BackingField; // 0x58
		::RPG::Client::MatchThreeV2BirdInfos* _BirdInfos_k__BackingField; // 0x60
		::RPG::Client::MatchThreeV2PvpScoreInfos* _PvpScoreInfos_k__BackingField; // 0x68
		::RPG::Client::MatchThreeV2PropInfos* _PropInfos_k__BackingField; // 0x70
		::RPG::Client::MatchThreeV2InviteToastService* _InviteToastService_k__BackingField; // 0x78
		::RPG::Client::MatchThreeV2RankInfos* _RankInfos_k__BackingField; // 0x80
		::RPG::Client::MatchThreeV2ActivityInfo* _ActivityInfo_k__BackingField; // 0x88
		::RPG::Client::MatchThreeV2RewardInfo* _RewardInfo_k__BackingField; // 0x90
		::Class_1_2EC3A5163E0CD5F4* _StarTargetInfos_k__BackingField; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE__CTOR_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE__ONGETDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnMatchThreeV2ScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE__ONMATCHTHREEV2SCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnMatchThreeV2PvpFinishScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE__ONMATCHTHREEV2PVPFINISHSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnMatchPlayDataUpdated(::RPG::Client::MatchPlayRecord* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchPlayRecord*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE__ONMATCHPLAYDATAUPDATED_OFFSET))(this, a1);
		}

		::System::Void SendLevelResultToServer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_SENDLEVELRESULTTOSERVER_OFFSET))(this);
		}

		::System::Void _OnMatchThreeV2LevelEndScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE__ONMATCHTHREEV2LEVELENDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _RecordNewUnlockPropToPref(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE__RECORDNEWUNLOCKPROPTOPREF_OFFSET))(this, a1);
		}

		::System::Void _RecordNewReputationToPref(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE__RECORDNEWREPUTATIONTOPREF_OFFSET))(this, a1, a2);
		}

		::System::Void _OnMatchThreeV2BattleItemLevelUpScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE__ONMATCHTHREEV2BATTLEITEMLEVELUPSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnMatchThreeV2SetBirdPosScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE__ONMATCHTHREEV2SETBIRDPOSSCRSP_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::MatchThreeV2Module* get_Instance()
		{
			return ((::RPG::Client::MatchThreeV2Module*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_GET_INSTANCE_OFFSET))();
		}

		::RPG::Client::MatchThreeV2ActivityInfo* get_ActivityInfo()
		{
			return ((::RPG::Client::MatchThreeV2ActivityInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_GET_ACTIVITYINFO_OFFSET))(this);
		}

		::System::Void set_ActivityInfo(::RPG::Client::MatchThreeV2ActivityInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2ActivityInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_SET_ACTIVITYINFO_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeV2RewardInfo* get_RewardInfo()
		{
			return ((::RPG::Client::MatchThreeV2RewardInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_GET_REWARDINFO_OFFSET))(this);
		}

		::System::Void set_RewardInfo(::RPG::Client::MatchThreeV2RewardInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2RewardInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_SET_REWARDINFO_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeV2PlayerData* get_PlayerData()
		{
			return ((::RPG::Client::MatchThreeV2PlayerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_GET_PLAYERDATA_OFFSET))(this);
		}

		::System::Void set_PlayerData(::RPG::Client::MatchThreeV2PlayerData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2PlayerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_SET_PLAYERDATA_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeV2BirdInfos* get_BirdInfos()
		{
			return ((::RPG::Client::MatchThreeV2BirdInfos*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_GET_BIRDINFOS_OFFSET))(this);
		}

		::System::Void set_BirdInfos(::RPG::Client::MatchThreeV2BirdInfos* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2BirdInfos*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_SET_BIRDINFOS_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeV2LevelInfos* get_LevelInfos()
		{
			return ((::RPG::Client::MatchThreeV2LevelInfos*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_GET_LEVELINFOS_OFFSET))(this);
		}

		::System::Void set_LevelInfos(::RPG::Client::MatchThreeV2LevelInfos* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2LevelInfos*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_SET_LEVELINFOS_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeV2PropInfos* get_PropInfos()
		{
			return ((::RPG::Client::MatchThreeV2PropInfos*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_GET_PROPINFOS_OFFSET))(this);
		}

		::System::Void set_PropInfos(::RPG::Client::MatchThreeV2PropInfos* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2PropInfos*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_SET_PROPINFOS_OFFSET))(this, a1);
		}

		::Class_1_2EC3A5163E0CD5F4* get_StarTargetInfos()
		{
			return ((::Class_1_2EC3A5163E0CD5F4*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_GET_STARTARGETINFOS_OFFSET))(this);
		}

		::System::Void set_StarTargetInfos(::Class_1_2EC3A5163E0CD5F4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2EC3A5163E0CD5F4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_SET_STARTARGETINFOS_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeV2ChallengerInfos* get_ChallengerInfos()
		{
			return ((::RPG::Client::MatchThreeV2ChallengerInfos*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_GET_CHALLENGERINFOS_OFFSET))(this);
		}

		::System::Void set_ChallengerInfos(::RPG::Client::MatchThreeV2ChallengerInfos* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2ChallengerInfos*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_SET_CHALLENGERINFOS_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeV2ReputationInfos* get_ReputationInfos()
		{
			return ((::RPG::Client::MatchThreeV2ReputationInfos*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_GET_REPUTATIONINFOS_OFFSET))(this);
		}

		::System::Void set_ReputationInfos(::RPG::Client::MatchThreeV2ReputationInfos* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2ReputationInfos*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_SET_REPUTATIONINFOS_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeV2RankInfos* get_RankInfos()
		{
			return ((::RPG::Client::MatchThreeV2RankInfos*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_GET_RANKINFOS_OFFSET))(this);
		}

		::System::Void set_RankInfos(::RPG::Client::MatchThreeV2RankInfos* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2RankInfos*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_SET_RANKINFOS_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeV2PvpScoreInfos* get_PvpScoreInfos()
		{
			return ((::RPG::Client::MatchThreeV2PvpScoreInfos*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_GET_PVPSCOREINFOS_OFFSET))(this);
		}

		::System::Void set_PvpScoreInfos(::RPG::Client::MatchThreeV2PvpScoreInfos* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2PvpScoreInfos*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_SET_PVPSCOREINFOS_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeV2SoloPvpManager* get_SoloPvpManager()
		{
			return ((::RPG::Client::MatchThreeV2SoloPvpManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_GET_SOLOPVPMANAGER_OFFSET))(this);
		}

		::System::Void set_SoloPvpManager(::RPG::Client::MatchThreeV2SoloPvpManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2SoloPvpManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_SET_SOLOPVPMANAGER_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeV2ArenaPvpManager* get_ArenaPvpManager()
		{
			return ((::RPG::Client::MatchThreeV2ArenaPvpManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_GET_ARENAPVPMANAGER_OFFSET))(this);
		}

		::System::Void set_ArenaPvpManager(::RPG::Client::MatchThreeV2ArenaPvpManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2ArenaPvpManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_SET_ARENAPVPMANAGER_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeRoyaleDataManager* get_RoyaleDataManager()
		{
			return ((::RPG::Client::MatchThreeRoyaleDataManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_GET_ROYALEDATAMANAGER_OFFSET))(this);
		}

		::System::Void set_RoyaleDataManager(::RPG::Client::MatchThreeRoyaleDataManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeRoyaleDataManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_SET_ROYALEDATAMANAGER_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeV2InviteToastService* get_InviteToastService()
		{
			return ((::RPG::Client::MatchThreeV2InviteToastService*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_GET_INVITETOASTSERVICE_OFFSET))(this);
		}

		::System::Void set_InviteToastService(::RPG::Client::MatchThreeV2InviteToastService* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2InviteToastService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_SET_INVITETOASTSERVICE_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeV2UICounter* get_UICounter()
		{
			return ((::RPG::Client::MatchThreeV2UICounter*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_GET_UICOUNTER_OFFSET))(this);
		}

		::System::Void set_UICounter(::RPG::Client::MatchThreeV2UICounter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2UICounter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_SET_UICOUNTER_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeGame* get_CurrentGame()
		{
			return ((::RPG::Client::MatchThreeGame*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_GET_CURRENTGAME_OFFSET))(this);
		}

		::System::Void set_CurrentGame(::RPG::Client::MatchThreeGame* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeGame*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_SET_CURRENTGAME_OFFSET))(this, a1);
		}

		::System::Boolean get_IsGameRunning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_GET_ISGAMERUNNING_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_INIT_OFFSET))(this);
		}

		::System::Void OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_ONLOGINFINISH_OFFSET))(this);
		}

		::System::Void _InitReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE__INITREQ_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnFinishSubMission(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE__ONFINISHSUBMISSION_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void StartPVEOneOnOneGame(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_STARTPVEONEONONEGAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RestartPVEOneOnOneGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_RESTARTPVEONEONONEGAME_OFFSET))(this);
		}

		::System::Void CreateSoloPvpGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_CREATESOLOPVPGAME_OFFSET))(this);
		}

		::System::Void CreateArenaPvpGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_CREATEARENAPVPGAME_OFFSET))(this);
		}

		::System::Void CreateRoyalePvpGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_CREATEROYALEPVPGAME_OFFSET))(this);
		}

		::System::Void QuitGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_QUITGAME_OFFSET))(this);
		}

		::System::Void EndGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_ENDGAME_OFFSET))(this);
		}

		::System::Void DoEndGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_DOENDGAME_OFFSET))(this);
		}

		::System::Void _DisposeCurrentGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE__DISPOSECURRENTGAME_OFFSET))(this);
		}

		::RPG::Client::OfferingRewardData* GetOfferData()
		{
			return ((::RPG::Client::OfferingRewardData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_GETOFFERDATA_OFFSET))(this);
		}

		::System::UInt32 GetScoreLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_GETSCORELIMIT_OFFSET))(this);
		}

		::System::Boolean IsScoreReachLimit(::RPG::GameCore::MultiPlayerGameMode a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MultiPlayerGameMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE_ISSCOREREACHLIMIT_OFFSET))(this, a1);
		}

		::System::Void _OnLoginFinish_b__86_0(::RPG::Client::MatchPlayRecord* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchPlayRecord*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE__ONLOGINFINISH_B__86_0_OFFSET))(this, a1);
		}

		::System::Void __InitReq_b__87_0(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2MODULE___INITREQ_B__87_0_OFFSET))(this, a1);
		}
	};
}
