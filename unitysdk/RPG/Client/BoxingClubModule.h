#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/BoxingClubUIStageEnum.h"
#include "unitysdk/RPG/GameCore/BoxingClubActivityType.h"

namespace RPG::Client { class BoxingClubLevelInstance; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::GameCore { class BoxingClubActivityQuestConfigRow; }
namespace RPG::GameCore { class BoxingClubPerformanceConfigRow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BOXINGCLUBMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9203280)
#define RPG_CLIENT_BOXINGCLUBMODULE_GETBOXINGCLUBLEVELINSTANCEBYTYPE_OFFSET UNITYSDK_OFFSET(0x9206A30)
#define RPG_CLIENT_BOXINGCLUBMODULE_GETFINISHEDQUESTLIST_OFFSET UNITYSDK_OFFSET(0x9205120)
#define RPG_CLIENT_BOXINGCLUBMODULE_GETPERFORMANCECONFIG_OFFSET UNITYSDK_OFFSET(0x92054E0)
#define RPG_CLIENT_BOXINGCLUBMODULE_GETREDDOTQUESTSERIESDIC_OFFSET UNITYSDK_OFFSET(0x92050C0)
#define RPG_CLIENT_BOXINGCLUBMODULE_GETREWARDQUESTSERIESLIST_OFFSET UNITYSDK_OFFSET(0x9203B60)
#define RPG_CLIENT_BOXINGCLUBMODULE_GETSTAGEBYCHALLENGEID_OFFSET UNITYSDK_OFFSET(0x9203A80)
#define RPG_CLIENT_BOXINGCLUBMODULE_GET_BOXINGCLUBLEVELDICT_OFFSET UNITYSDK_OFFSET(0x9209110)
#define RPG_CLIENT_BOXINGCLUBMODULE_GET_FINISHEDQUESTLISTDIC_OFFSET UNITYSDK_OFFSET(0x92090D0)
#define RPG_CLIENT_BOXINGCLUBMODULE_GET_REDDOTQUESTSERIESDIC_OFFSET UNITYSDK_OFFSET(0x92090F0)
#define RPG_CLIENT_BOXINGCLUBMODULE_GIVEUPMATCH_OFFSET UNITYSDK_OFFSET(0x9203570)
#define RPG_CLIENT_BOXINGCLUBMODULE_HASNEWLEVELNOTPASSRELEASED_OFFSET UNITYSDK_OFFSET(0x9205850)
#define RPG_CLIENT_BOXINGCLUBMODULE_HASNEWLEVELRELEASED_OFFSET UNITYSDK_OFFSET(0x91FD4A0)
#define RPG_CLIENT_BOXINGCLUBMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9202E10)
#define RPG_CLIENT_BOXINGCLUBMODULE_ISLEVELINSTANCEUNREAD_OFFSET UNITYSDK_OFFSET(0x9205C40)
#define RPG_CLIENT_BOXINGCLUBMODULE_ISNORMALTABUNLOCK_OFFSET UNITYSDK_OFFSET(0x9203DB0)
#define RPG_CLIENT_BOXINGCLUBMODULE_ISRESONANCEPHONEMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0x9203EF0)
#define RPG_CLIENT_BOXINGCLUBMODULE_ISRESONANCEPREMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0x9203E50)
#define RPG_CLIENT_BOXINGCLUBMODULE_ISRESONANCETABUNLOCK_OFFSET UNITYSDK_OFFSET(0x9203C20)
#define RPG_CLIENT_BOXINGCLUBMODULE_ONNEWLEVELNOTIFIED_OFFSET UNITYSDK_OFFSET(0x9205A10)
#define RPG_CLIENT_BOXINGCLUBMODULE_REQUESTRELATIVEMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x9205180)
#define RPG_CLIENT_BOXINGCLUBMODULE_SENDGETCHALLENGEDATAREQ_OFFSET UNITYSDK_OFFSET(0x9205340)
#define RPG_CLIENT_BOXINGCLUBMODULE_SET_BOXINGCLUBLEVELDICT_OFFSET UNITYSDK_OFFSET(0x9209120)
#define RPG_CLIENT_BOXINGCLUBMODULE_SET_FINISHEDQUESTLISTDIC_OFFSET UNITYSDK_OFFSET(0x92090E0)
#define RPG_CLIENT_BOXINGCLUBMODULE_SET_REDDOTQUESTSERIESDIC_OFFSET UNITYSDK_OFFSET(0x9209100)
#define RPG_CLIENT_BOXINGCLUBMODULE_STARTBATTLE_OFFSET UNITYSDK_OFFSET(0x92034A0)
#define RPG_CLIENT_BOXINGCLUBMODULE_STARTMATCH_OFFSET UNITYSDK_OFFSET(0x92033C0)
#define RPG_CLIENT_BOXINGCLUBMODULE_TELEPORTTOFISTCLUB_OFFSET UNITYSDK_OFFSET(0x9205680)
#define RPG_CLIENT_BOXINGCLUBMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x92053F0)
#define RPG_CLIENT_BOXINGCLUBMODULE_TRYGETLOCALTEAMBYCHALLENGEID_OFFSET UNITYSDK_OFFSET(0x9206000)
#define RPG_CLIENT_BOXINGCLUBMODULE_TRYGETTRIALAVATARSBYCHALLENGEID_OFFSET UNITYSDK_OFFSET(0x9206700)
#define RPG_CLIENT_BOXINGCLUBMODULE_TRYSHOWCHALLENGEMAINPAGE_OFFSET UNITYSDK_OFFSET(0x91FFEC0)
#define RPG_CLIENT_BOXINGCLUBMODULE_TRYSHOWRESONANCECHALLENGEMAINPAGE_OFFSET UNITYSDK_OFFSET(0x92036F0)
#define RPG_CLIENT_BOXINGCLUBMODULE_UPDATECACHEDENTRANCEPANELREDDOT_OFFSET UNITYSDK_OFFSET(0x9205CF0)
#define RPG_CLIENT_BOXINGCLUBMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9202EF0)
#define RPG_CLIENT_BOXINGCLUBMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9202FA0)
#define RPG_CLIENT_BOXINGCLUBMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9209130)
#define RPG_CLIENT_BOXINGCLUBMODULE__CUSTOMINIT_OFFSET UNITYSDK_OFFSET(0x92031C0)
#define RPG_CLIENT_BOXINGCLUBMODULE__GETCHALLENGESTAGE_OFFSET UNITYSDK_OFFSET(0x9203650)
#define RPG_CLIENT_BOXINGCLUBMODULE__GETRESONANCECHALLENGESTAGE_OFFSET UNITYSDK_OFFSET(0x92039F0)
#define RPG_CLIENT_BOXINGCLUBMODULE__INITLEVELINSTANCE_OFFSET UNITYSDK_OFFSET(0x9206B40)
#define RPG_CLIENT_BOXINGCLUBMODULE__INITNORMALUNLOCKMISSION_OFFSET UNITYSDK_OFFSET(0x9207C60)
#define RPG_CLIENT_BOXINGCLUBMODULE__INITQUESTDIC_OFFSET UNITYSDK_OFFSET(0x9207090)
#define RPG_CLIENT_BOXINGCLUBMODULE__INITRESONANCERESIDENTQUESTLIST_OFFSET UNITYSDK_OFFSET(0x9207750)
#define RPG_CLIENT_BOXINGCLUBMODULE__INITRESONANCEUNLOCKMISSION_OFFSET UNITYSDK_OFFSET(0x9207920)
#define RPG_CLIENT_BOXINGCLUBMODULE__INITREWARDQUEST_OFFSET UNITYSDK_OFFSET(0x9206DF0)
#define RPG_CLIENT_BOXINGCLUBMODULE__ISLOCALENTRANCEPANELUNREAD_OFFSET UNITYSDK_OFFSET(0x9205F00)
#define RPG_CLIENT_BOXINGCLUBMODULE__ONBOXINGCLUBREWARDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9208360)
#define RPG_CLIENT_BOXINGCLUBMODULE__ONCMDBOXINGCLUBCHALLENGEUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9208A70)
#define RPG_CLIENT_BOXINGCLUBMODULE__ONCMDCHOOSEBOXINGCLUBRESONANCESCRSP_OFFSET UNITYSDK_OFFSET(0x9208BE0)
#define RPG_CLIENT_BOXINGCLUBMODULE__ONCMDCHOOSEBOXINGCLUBSTAGEOPTIONALBUFFSCRSP_OFFSET UNITYSDK_OFFSET(0x9208D90)
#define RPG_CLIENT_BOXINGCLUBMODULE__ONCMDSETBOXINGCLUBRESONANCESCRSP_OFFSET UNITYSDK_OFFSET(0x9208F40)
#define RPG_CLIENT_BOXINGCLUBMODULE__ONGETBOXINGCLUBINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x9207E20)
#define RPG_CLIENT_BOXINGCLUBMODULE__ONGIVEUPBOXINGCLUBCHALLENGESCRSP_OFFSET UNITYSDK_OFFSET(0x92088F0)
#define RPG_CLIENT_BOXINGCLUBMODULE__ONMATCHBOXINGCLUBOPPONENTSCRSP_OFFSET UNITYSDK_OFFSET(0x92085F0)
#define RPG_CLIENT_BOXINGCLUBMODULE__ONSTARTBOXINGCLUBBATTLESCRSP_OFFSET UNITYSDK_OFFSET(0x9208750)
#define RPG_CLIENT_BOXINGCLUBMODULE__REFRESHFINISHEDQUEST_OFFSET UNITYSDK_OFFSET(0x9203F90)
#define RPG_CLIENT_BOXINGCLUBMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9209350)
#define RPG_CLIENT_BOXINGCLUBMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9209260)
#define RPG_CLIENT_BOXINGCLUBMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x92092F0)
#define RPG_CLIENT_BOXINGCLUBMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9209360)

namespace RPG::Client
{
	inline static constexpr unsigned int BoxingClubModule_TypeDefinitionIndex = 51095;

	class BoxingClubModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* _EntrancePanelReddot; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _ResonanceResidentQuestList; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* ResonanceResidentRedDotQuestList; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _ResonancePhoneMessageSubMission; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::BoxingClubLevelInstance*>* _BoxingClubLevelDict_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _ResonanceUnlockMissionList; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _RewardItemIDList; // 0x40
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BoxingClubActivityType, ::System::Collections::Generic::List_1<::System::UInt32>*>* _FinishedQuestListDic_k__BackingField; // 0x48
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BoxingClubActivityType, ::System::Collections::Generic::List_1<::RPG::GameCore::BoxingClubActivityQuestConfigRow*>*>* _RewardQuestSeriesListDic; // 0x50
		::System::Collections::Generic::List_1<::System::UInt32>* _NormalUnlockMissionList; // 0x58
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BoxingClubActivityType, ::System::Collections::Generic::List_1<::System::UInt32>*>* _RedDotQuestSeriesDic_k__BackingField; // 0x60
		::System::UInt32 _ResonancePreMission; // 0x68
		::System::Int32 LastBattleChallengeID; // 0x6C
		::System::Int32 LastTryBattleChallengeID; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void StartMatch(::System::UInt32 challengeID, ::System::Collections::Generic::List_1<::System::UInt32>* avatarIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_STARTMATCH_OFFSET))(this, challengeID, avatarIDs);
		}

		::System::Void StartBattle(::System::UInt32 challengeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_STARTBATTLE_OFFSET))(this, challengeID);
		}

		::System::Void GiveUpMatch(::System::UInt32 challengeID, ::System::Boolean isGiveUp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_GIVEUPMATCH_OFFSET))(this, challengeID, isGiveUp);
		}

		::System::Void TryShowChallengeMainPage(::System::UInt32 challengeID, ::System::Boolean mayNeedPreBuffDialog)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_TRYSHOWCHALLENGEMAINPAGE_OFFSET))(this, challengeID, mayNeedPreBuffDialog);
		}

		::System::Void TryShowResonanceChallengeMainPage(::System::UInt32 challengeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_TRYSHOWRESONANCECHALLENGEMAINPAGE_OFFSET))(this, challengeID);
		}

		::RPG::Client::BoxingClubUIStageEnum GetStageByChallengeID(::System::UInt32 challengeID)
		{
			return ((::RPG::Client::BoxingClubUIStageEnum(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_GETSTAGEBYCHALLENGEID_OFFSET))(this, challengeID);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::BoxingClubActivityQuestConfigRow*>* GetRewardQuestSeriesList(::RPG::GameCore::BoxingClubActivityType type)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::BoxingClubActivityQuestConfigRow*>*(*)(::PVOID, ::RPG::GameCore::BoxingClubActivityType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_GETREWARDQUESTSERIESLIST_OFFSET))(this, type);
		}

		::System::Boolean IsResonanceTabUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_ISRESONANCETABUNLOCK_OFFSET))(this);
		}

		::System::Boolean IsNormalTabUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_ISNORMALTABUNLOCK_OFFSET))(this);
		}

		::System::Boolean IsResonancePreMissionFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_ISRESONANCEPREMISSIONFINISH_OFFSET))(this);
		}

		::System::Boolean IsResonancePhoneMissionFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_ISRESONANCEPHONEMISSIONFINISH_OFFSET))(this);
		}

		::System::Void _RefreshFinishedQuest(::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__REFRESHFINISHEDQUEST_OFFSET))(this, o);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetRedDotQuestSeriesDic(::RPG::GameCore::BoxingClubActivityType type)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::BoxingClubActivityType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_GETREDDOTQUESTSERIESDIC_OFFSET))(this, type);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetFinishedQuestList(::RPG::GameCore::BoxingClubActivityType type)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::BoxingClubActivityType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_GETFINISHEDQUESTLIST_OFFSET))(this, type);
		}

		::System::Void RequestRelativeMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_REQUESTRELATIVEMISSIONDATA_OFFSET))(this);
		}

		::System::Void SendGetChallengeDataReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_SENDGETCHALLENGEDATAREQ_OFFSET))(this);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::BoxingClubPerformanceConfigRow*>* GetPerformanceConfig()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::BoxingClubPerformanceConfigRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_GETPERFORMANCECONFIG_OFFSET))(this);
		}

		::System::Void TeleportToFistClub(::System::UInt32 entranceID, ::System::UInt32 mappingInfoID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_TELEPORTTOFISTCLUB_OFFSET))(this, entranceID, mappingInfoID);
		}

		::System::Boolean HasNewLevelReleased(::RPG::GameCore::BoxingClubActivityType type)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BoxingClubActivityType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_HASNEWLEVELRELEASED_OFFSET))(this, type);
		}

		::System::Boolean HasNewLevelNotPassReleased(::RPG::GameCore::BoxingClubActivityType type)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BoxingClubActivityType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_HASNEWLEVELNOTPASSRELEASED_OFFSET))(this, type);
		}

		::System::Void OnNewLevelNotified()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_ONNEWLEVELNOTIFIED_OFFSET))(this);
		}

		::System::Boolean IsLevelInstanceUnRead(::RPG::Client::BoxingClubLevelInstance* instance)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BoxingClubLevelInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_ISLEVELINSTANCEUNREAD_OFFSET))(this, instance);
		}

		::System::Void UpdateCachedEntrancePanelReddot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_UPDATECACHEDENTRANCEPANELREDDOT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* TryGetLocalTeamByChallengeID(::System::UInt32 challengeID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_TRYGETLOCALTEAMBYCHALLENGEID_OFFSET))(this, challengeID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* TryGetTrialAvatarsByChallengeID(::System::UInt32 challengeID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_TRYGETTRIALAVATARSBYCHALLENGEID_OFFSET))(this, challengeID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BoxingClubLevelInstance*>* GetBoxingClubLevelInstanceByType(::RPG::GameCore::BoxingClubActivityType type)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BoxingClubLevelInstance*>*(*)(::PVOID, ::RPG::GameCore::BoxingClubActivityType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_GETBOXINGCLUBLEVELINSTANCEBYTYPE_OFFSET))(this, type);
		}

		::System::Void _CustomInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__CUSTOMINIT_OFFSET))(this);
		}

		::System::Void _InitLevelInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__INITLEVELINSTANCE_OFFSET))(this);
		}

		::System::Void _InitRewardQuest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__INITREWARDQUEST_OFFSET))(this);
		}

		::System::Void _InitResonanceResidentQuestList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__INITRESONANCERESIDENTQUESTLIST_OFFSET))(this);
		}

		::System::Void _InitResonanceUnlockMission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__INITRESONANCEUNLOCKMISSION_OFFSET))(this);
		}

		::System::Void _InitNormalUnlockMission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__INITNORMALUNLOCKMISSION_OFFSET))(this);
		}

		::System::Void _InitQuestDic()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__INITQUESTDIC_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::RPG::Client::BoxingClubUIStageEnum _GetChallengeStage(::RPG::Client::BoxingClubLevelInstance* instance)
		{
			return ((::RPG::Client::BoxingClubUIStageEnum(*)(::PVOID, ::RPG::Client::BoxingClubLevelInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__GETCHALLENGESTAGE_OFFSET))(this, instance);
		}

		::System::UInt32 _GetResonanceChallengeStage(::RPG::Client::BoxingClubLevelInstance* instance)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::BoxingClubLevelInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__GETRESONANCECHALLENGESTAGE_OFFSET))(this, instance);
		}

		::System::Boolean _IsLocalEntrancePanelUnread(::RPG::Client::BoxingClubLevelInstance* instance)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BoxingClubLevelInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__ISLOCALENTRANCEPANELUNREAD_OFFSET))(this, instance);
		}

		::System::Void _OnGetBoxingClubInfoScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__ONGETBOXINGCLUBINFOSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnBoxingClubRewardScNotify(::System::UInt16 cmdID, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__ONBOXINGCLUBREWARDSCNOTIFY_OFFSET))(this, cmdID, ntfObject);
		}

		::System::Void _OnMatchBoxingClubOpponentScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__ONMATCHBOXINGCLUBOPPONENTSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnStartBoxingClubBattleScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__ONSTARTBOXINGCLUBBATTLESCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnGiveUpBoxingClubChallengeScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__ONGIVEUPBOXINGCLUBCHALLENGESCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdBoxingClubChallengeUpdateScNotify(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__ONCMDBOXINGCLUBCHALLENGEUPDATESCNOTIFY_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdChooseBoxingClubResonanceScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__ONCMDCHOOSEBOXINGCLUBRESONANCESCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdChooseBoxingClubStageOptionalBuffScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__ONCMDCHOOSEBOXINGCLUBSTAGEOPTIONALBUFFSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdSetBoxingClubResonanceScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__ONCMDSETBOXINGCLUBRESONANCESCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BoxingClubActivityType, ::System::Collections::Generic::List_1<::System::UInt32>*>* get_FinishedQuestListDic()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BoxingClubActivityType, ::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_GET_FINISHEDQUESTLISTDIC_OFFSET))(this);
		}

		::System::Void set_FinishedQuestListDic(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BoxingClubActivityType, ::System::Collections::Generic::List_1<::System::UInt32>*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BoxingClubActivityType, ::System::Collections::Generic::List_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_SET_FINISHEDQUESTLISTDIC_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BoxingClubActivityType, ::System::Collections::Generic::List_1<::System::UInt32>*>* get_RedDotQuestSeriesDic()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BoxingClubActivityType, ::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_GET_REDDOTQUESTSERIESDIC_OFFSET))(this);
		}

		::System::Void set_RedDotQuestSeriesDic(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BoxingClubActivityType, ::System::Collections::Generic::List_1<::System::UInt32>*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BoxingClubActivityType, ::System::Collections::Generic::List_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_SET_REDDOTQUESTSERIESDIC_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::BoxingClubLevelInstance*>* get_BoxingClubLevelDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::BoxingClubLevelInstance*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_GET_BOXINGCLUBLEVELDICT_OFFSET))(this);
		}

		::System::Void set_BoxingClubLevelDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::BoxingClubLevelInstance*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::BoxingClubLevelInstance*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_SET_BOXINGCLUBLEVELDICT_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
