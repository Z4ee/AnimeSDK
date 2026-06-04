#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/BoxingClubUIStageEnum.h"
#include "unitysdk/RPG/GameCore/BoxingClubActivityType.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class BoxingClubLevelInstance; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::GameCore { class BoxingClubActivityQuestConfigRow; }
namespace RPG::GameCore { class BoxingClubPerformanceConfigRow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BOXINGCLUBMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB448C20)
#define RPG_CLIENT_BOXINGCLUBMODULE_GETBOXINGCLUBLEVELINSTANCEBYTYPE_OFFSET UNITYSDK_OFFSET(0xB44BAF0)
#define RPG_CLIENT_BOXINGCLUBMODULE_GETFINISHEDQUESTLIST_OFFSET UNITYSDK_OFFSET(0xB44A2B0)
#define RPG_CLIENT_BOXINGCLUBMODULE_GETPERFORMANCECONFIG_OFFSET UNITYSDK_OFFSET(0xB44A6A0)
#define RPG_CLIENT_BOXINGCLUBMODULE_GETREDDOTQUESTSERIESDIC_OFFSET UNITYSDK_OFFSET(0xB44A250)
#define RPG_CLIENT_BOXINGCLUBMODULE_GETREWARDQUESTSERIESLIST_OFFSET UNITYSDK_OFFSET(0xB449410)
#define RPG_CLIENT_BOXINGCLUBMODULE_GETSTAGEBYCHALLENGEID_OFFSET UNITYSDK_OFFSET(0xB449320)
#define RPG_CLIENT_BOXINGCLUBMODULE_GET_BOXINGCLUBLEVELDICT_OFFSET UNITYSDK_OFFSET(0xB44E370)
#define RPG_CLIENT_BOXINGCLUBMODULE_GET_FINISHEDQUESTLISTDIC_OFFSET UNITYSDK_OFFSET(0xB44E330)
#define RPG_CLIENT_BOXINGCLUBMODULE_GET_REDDOTQUESTSERIESDIC_OFFSET UNITYSDK_OFFSET(0xB44E350)
#define RPG_CLIENT_BOXINGCLUBMODULE_GIVEUPMATCH_OFFSET UNITYSDK_OFFSET(0xB448EB0)
#define RPG_CLIENT_BOXINGCLUBMODULE_HASNEWLEVELNOTPASSRELEASED_OFFSET UNITYSDK_OFFSET(0xB44AAF0)
#define RPG_CLIENT_BOXINGCLUBMODULE_HASNEWLEVELRELEASED_OFFSET UNITYSDK_OFFSET(0xB442D80)
#define RPG_CLIENT_BOXINGCLUBMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xB448490)
#define RPG_CLIENT_BOXINGCLUBMODULE_ISLEVELINSTANCEUNREAD_OFFSET UNITYSDK_OFFSET(0xB44AEE0)
#define RPG_CLIENT_BOXINGCLUBMODULE_ISNORMALTABUNLOCK_OFFSET UNITYSDK_OFFSET(0xB449670)
#define RPG_CLIENT_BOXINGCLUBMODULE_ISRESONANCEPHONEMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0xB4497B0)
#define RPG_CLIENT_BOXINGCLUBMODULE_ISRESONANCEPREMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0xB449710)
#define RPG_CLIENT_BOXINGCLUBMODULE_ISRESONANCETABUNLOCK_OFFSET UNITYSDK_OFFSET(0xB4494C0)
#define RPG_CLIENT_BOXINGCLUBMODULE_ONNEWLEVELNOTIFIED_OFFSET UNITYSDK_OFFSET(0xB44ACA0)
#define RPG_CLIENT_BOXINGCLUBMODULE_REQUESTRELATIVEMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xB44A310)
#define RPG_CLIENT_BOXINGCLUBMODULE_SENDGETCHALLENGEDATAREQ_OFFSET UNITYSDK_OFFSET(0xB44A500)
#define RPG_CLIENT_BOXINGCLUBMODULE_SET_BOXINGCLUBLEVELDICT_OFFSET UNITYSDK_OFFSET(0xB44E380)
#define RPG_CLIENT_BOXINGCLUBMODULE_SET_FINISHEDQUESTLISTDIC_OFFSET UNITYSDK_OFFSET(0xB44E340)
#define RPG_CLIENT_BOXINGCLUBMODULE_SET_REDDOTQUESTSERIESDIC_OFFSET UNITYSDK_OFFSET(0xB44E360)
#define RPG_CLIENT_BOXINGCLUBMODULE_STARTBATTLE_OFFSET UNITYSDK_OFFSET(0xB448E10)
#define RPG_CLIENT_BOXINGCLUBMODULE_STARTMATCH_OFFSET UNITYSDK_OFFSET(0xB448D60)
#define RPG_CLIENT_BOXINGCLUBMODULE_TELEPORTTOFISTCLUB_OFFSET UNITYSDK_OFFSET(0xB44A920)
#define RPG_CLIENT_BOXINGCLUBMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xB44A5B0)
#define RPG_CLIENT_BOXINGCLUBMODULE_TRYGETLOCALTEAMBYCHALLENGEID_OFFSET UNITYSDK_OFFSET(0xB44B2F0)
#define RPG_CLIENT_BOXINGCLUBMODULE_TRYGETTRIALAVATARSBYCHALLENGEID_OFFSET UNITYSDK_OFFSET(0xB44B890)
#define RPG_CLIENT_BOXINGCLUBMODULE_TRYSHOWCHALLENGEMAINPAGE_OFFSET UNITYSDK_OFFSET(0xB445650)
#define RPG_CLIENT_BOXINGCLUBMODULE_TRYSHOWRESONANCECHALLENGEMAINPAGE_OFFSET UNITYSDK_OFFSET(0xB449000)
#define RPG_CLIENT_BOXINGCLUBMODULE_UPDATECACHEDENTRANCEPANELREDDOT_OFFSET UNITYSDK_OFFSET(0xB44AFE0)
#define RPG_CLIENT_BOXINGCLUBMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB4484F0)
#define RPG_CLIENT_BOXINGCLUBMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB4485C0)
#define RPG_CLIENT_BOXINGCLUBMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xB44E390)
#define RPG_CLIENT_BOXINGCLUBMODULE__CUSTOMINIT_OFFSET UNITYSDK_OFFSET(0xB448B60)
#define RPG_CLIENT_BOXINGCLUBMODULE__GETCHALLENGESTAGE_OFFSET UNITYSDK_OFFSET(0xB448F60)
#define RPG_CLIENT_BOXINGCLUBMODULE__GETRESONANCECHALLENGESTAGE_OFFSET UNITYSDK_OFFSET(0xB449290)
#define RPG_CLIENT_BOXINGCLUBMODULE__INITLEVELINSTANCE_OFFSET UNITYSDK_OFFSET(0xB44BCA0)
#define RPG_CLIENT_BOXINGCLUBMODULE__INITNORMALUNLOCKMISSION_OFFSET UNITYSDK_OFFSET(0xB44CF90)
#define RPG_CLIENT_BOXINGCLUBMODULE__INITQUESTDIC_OFFSET UNITYSDK_OFFSET(0xB44C330)
#define RPG_CLIENT_BOXINGCLUBMODULE__INITRESONANCERESIDENTQUESTLIST_OFFSET UNITYSDK_OFFSET(0xB44CA00)
#define RPG_CLIENT_BOXINGCLUBMODULE__INITRESONANCEUNLOCKMISSION_OFFSET UNITYSDK_OFFSET(0xB44CC10)
#define RPG_CLIENT_BOXINGCLUBMODULE__INITREWARDQUEST_OFFSET UNITYSDK_OFFSET(0xB44BFB0)
#define RPG_CLIENT_BOXINGCLUBMODULE__ISLOCALENTRANCEPANELUNREAD_OFFSET UNITYSDK_OFFSET(0xB44B1F0)
#define RPG_CLIENT_BOXINGCLUBMODULE__ONBOXINGCLUBREWARDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB44D660)
#define RPG_CLIENT_BOXINGCLUBMODULE__ONCMDBOXINGCLUBCHALLENGEUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB44DCD0)
#define RPG_CLIENT_BOXINGCLUBMODULE__ONCMDCHOOSEBOXINGCLUBRESONANCESCRSP_OFFSET UNITYSDK_OFFSET(0xB44DE30)
#define RPG_CLIENT_BOXINGCLUBMODULE__ONCMDCHOOSEBOXINGCLUBSTAGEOPTIONALBUFFSCRSP_OFFSET UNITYSDK_OFFSET(0xB44DFE0)
#define RPG_CLIENT_BOXINGCLUBMODULE__ONCMDSETBOXINGCLUBRESONANCESCRSP_OFFSET UNITYSDK_OFFSET(0xB44E190)
#define RPG_CLIENT_BOXINGCLUBMODULE__ONGETBOXINGCLUBINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xB44D190)
#define RPG_CLIENT_BOXINGCLUBMODULE__ONGIVEUPBOXINGCLUBCHALLENGESCRSP_OFFSET UNITYSDK_OFFSET(0xB44DB60)
#define RPG_CLIENT_BOXINGCLUBMODULE__ONMATCHBOXINGCLUBOPPONENTSCRSP_OFFSET UNITYSDK_OFFSET(0xB44D880)
#define RPG_CLIENT_BOXINGCLUBMODULE__ONSTARTBOXINGCLUBBATTLESCRSP_OFFSET UNITYSDK_OFFSET(0xB44D9D0)
#define RPG_CLIENT_BOXINGCLUBMODULE__REFRESHFINISHEDQUEST_OFFSET UNITYSDK_OFFSET(0xB449850)
#define RPG_CLIENT_BOXINGCLUBMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB44E5B0)
#define RPG_CLIENT_BOXINGCLUBMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB44E4D0)
#define RPG_CLIENT_BOXINGCLUBMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB44E550)
#define RPG_CLIENT_BOXINGCLUBMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB44E5C0)

namespace RPG::Client
{
	inline static constexpr unsigned int BoxingClubModule_TypeDefinitionIndex = 58896;

	class BoxingClubModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BoxingClubActivityType, ::System::Collections::Generic::List_1<::RPG::GameCore::BoxingClubActivityQuestConfigRow*>*>* _RewardQuestSeriesListDic; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BoxingClubActivityType, ::System::Collections::Generic::List_1<::System::UInt32>*>* _RedDotQuestSeriesDic_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _ResonanceResidentQuestList; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _RewardItemIDList; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _ResonancePhoneMessageSubMission; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* _EntrancePanelReddot; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _ResonanceUnlockMissionList; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* _NormalUnlockMissionList; // 0x48
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BoxingClubActivityType, ::System::Collections::Generic::List_1<::System::UInt32>*>* _FinishedQuestListDic_k__BackingField; // 0x50
		::System::Collections::Generic::List_1<::System::UInt32>* ResonanceResidentRedDotQuestList; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::BoxingClubLevelInstance*>* _BoxingClubLevelDict_k__BackingField; // 0x60
		::System::Int32 LastTryBattleChallengeID; // 0x68
		::System::Int32 LastBattleChallengeID; // 0x6C
		::System::UInt32 _ResonancePreMission; // 0x70

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

		::System::Void StartMatch(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_STARTMATCH_OFFSET))(this, a1, a2);
		}

		::System::Void StartBattle(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_STARTBATTLE_OFFSET))(this, a1);
		}

		::System::Void GiveUpMatch(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_GIVEUPMATCH_OFFSET))(this, a1, a2);
		}

		::System::Void TryShowChallengeMainPage(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_TRYSHOWCHALLENGEMAINPAGE_OFFSET))(this, a1, a2);
		}

		::System::Void TryShowResonanceChallengeMainPage(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_TRYSHOWRESONANCECHALLENGEMAINPAGE_OFFSET))(this, a1);
		}

		::RPG::Client::BoxingClubUIStageEnum GetStageByChallengeID(::System::UInt32 a1)
		{
			return ((::RPG::Client::BoxingClubUIStageEnum(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_GETSTAGEBYCHALLENGEID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::BoxingClubActivityQuestConfigRow*>* GetRewardQuestSeriesList(::RPG::GameCore::BoxingClubActivityType a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::BoxingClubActivityQuestConfigRow*>*(*)(::PVOID, ::RPG::GameCore::BoxingClubActivityType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_GETREWARDQUESTSERIESLIST_OFFSET))(this, a1);
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

		::System::Void _RefreshFinishedQuest(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__REFRESHFINISHEDQUEST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetRedDotQuestSeriesDic(::RPG::GameCore::BoxingClubActivityType a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::BoxingClubActivityType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_GETREDDOTQUESTSERIESDIC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetFinishedQuestList(::RPG::GameCore::BoxingClubActivityType a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::BoxingClubActivityType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_GETFINISHEDQUESTLIST_OFFSET))(this, a1);
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

		::System::Void TeleportToFistClub(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_TELEPORTTOFISTCLUB_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasNewLevelReleased(::RPG::GameCore::BoxingClubActivityType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BoxingClubActivityType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_HASNEWLEVELRELEASED_OFFSET))(this, a1);
		}

		::System::Boolean HasNewLevelNotPassReleased(::RPG::GameCore::BoxingClubActivityType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BoxingClubActivityType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_HASNEWLEVELNOTPASSRELEASED_OFFSET))(this, a1);
		}

		::System::Void OnNewLevelNotified()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_ONNEWLEVELNOTIFIED_OFFSET))(this);
		}

		::System::Boolean IsLevelInstanceUnRead(::RPG::Client::BoxingClubLevelInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BoxingClubLevelInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_ISLEVELINSTANCEUNREAD_OFFSET))(this, a1);
		}

		::System::Void UpdateCachedEntrancePanelReddot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_UPDATECACHEDENTRANCEPANELREDDOT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* TryGetLocalTeamByChallengeID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_TRYGETLOCALTEAMBYCHALLENGEID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* TryGetTrialAvatarsByChallengeID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_TRYGETTRIALAVATARSBYCHALLENGEID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BoxingClubLevelInstance*>* GetBoxingClubLevelInstanceByType(::RPG::GameCore::BoxingClubActivityType a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BoxingClubLevelInstance*>*(*)(::PVOID, ::RPG::GameCore::BoxingClubActivityType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_GETBOXINGCLUBLEVELINSTANCEBYTYPE_OFFSET))(this, a1);
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

		::RPG::Client::BoxingClubUIStageEnum _GetChallengeStage(::RPG::Client::BoxingClubLevelInstance* a1)
		{
			return ((::RPG::Client::BoxingClubUIStageEnum(*)(::PVOID, ::RPG::Client::BoxingClubLevelInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__GETCHALLENGESTAGE_OFFSET))(this, a1);
		}

		::System::UInt32 _GetResonanceChallengeStage(::RPG::Client::BoxingClubLevelInstance* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::BoxingClubLevelInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__GETRESONANCECHALLENGESTAGE_OFFSET))(this, a1);
		}

		::System::Boolean _IsLocalEntrancePanelUnread(::RPG::Client::BoxingClubLevelInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BoxingClubLevelInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__ISLOCALENTRANCEPANELUNREAD_OFFSET))(this, a1);
		}

		::System::Void _OnGetBoxingClubInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__ONGETBOXINGCLUBINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnBoxingClubRewardScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__ONBOXINGCLUBREWARDSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnMatchBoxingClubOpponentScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__ONMATCHBOXINGCLUBOPPONENTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnStartBoxingClubBattleScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__ONSTARTBOXINGCLUBBATTLESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGiveUpBoxingClubChallengeScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__ONGIVEUPBOXINGCLUBCHALLENGESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdBoxingClubChallengeUpdateScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__ONCMDBOXINGCLUBCHALLENGEUPDATESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdChooseBoxingClubResonanceScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__ONCMDCHOOSEBOXINGCLUBRESONANCESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdChooseBoxingClubStageOptionalBuffScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__ONCMDCHOOSEBOXINGCLUBSTAGEOPTIONALBUFFSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdSetBoxingClubResonanceScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE__ONCMDSETBOXINGCLUBRESONANCESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BoxingClubActivityType, ::System::Collections::Generic::List_1<::System::UInt32>*>* get_FinishedQuestListDic()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BoxingClubActivityType, ::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_GET_FINISHEDQUESTLISTDIC_OFFSET))(this);
		}

		::System::Void set_FinishedQuestListDic(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BoxingClubActivityType, ::System::Collections::Generic::List_1<::System::UInt32>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BoxingClubActivityType, ::System::Collections::Generic::List_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_SET_FINISHEDQUESTLISTDIC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BoxingClubActivityType, ::System::Collections::Generic::List_1<::System::UInt32>*>* get_RedDotQuestSeriesDic()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BoxingClubActivityType, ::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_GET_REDDOTQUESTSERIESDIC_OFFSET))(this);
		}

		::System::Void set_RedDotQuestSeriesDic(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BoxingClubActivityType, ::System::Collections::Generic::List_1<::System::UInt32>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BoxingClubActivityType, ::System::Collections::Generic::List_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_SET_REDDOTQUESTSERIESDIC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::BoxingClubLevelInstance*>* get_BoxingClubLevelDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::BoxingClubLevelInstance*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_GET_BOXINGCLUBLEVELDICT_OFFSET))(this);
		}

		::System::Void set_BoxingClubLevelDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::BoxingClubLevelInstance*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::BoxingClubLevelInstance*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBMODULE_SET_BOXINGCLUBLEVELDICT_OFFSET))(this, a1);
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
