#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_15.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/FightFestChallengeResultInfo.h"
#include "unitysdk/RPG/Client/FightFestProgress.h"
#include "unitysdk/RPG/GameCore/ActivityRank.h"
#include "unitysdk/RPG/GameCore/FightFestCoachType.h"
#include "unitysdk/Struct_2_CEE7CE649BE83DBF.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_1CBA230307F9C289_21;
class Class_1_1CBA230307F9C289_22;
class Class_1_E4D4FA1CB2E4394F;
namespace RPG::Client { class ExprConditionChecker; }
namespace RPG::Client { class FightFestChallengeLevelData; }
namespace RPG::Client { class FightFestCoachSkill; }
namespace RPG::Client { class FightFestLineupSnapShot; }
namespace RPG::Client { class FightFestMainRace; }
namespace RPG::Client { class FightFestPaper; }
namespace RPG::Client { class FightFestPaperInterview; }
namespace RPG::Client { class FightFestPhase; }
namespace RPG::Client { class FightFestRaceData; }
namespace RPG::Client { class FightFestScoreRace; }
namespace RPG::Client { class FightFestStageInfoData; }
namespace RPG::Client { class SubMissionData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FIGHTFESTMODULE_CLEARCHALLENGERESTARTINFO_OFFSET UNITYSDK_OFFSET(0xA374E10)
#define RPG_CLIENT_FIGHTFESTMODULE_CLEARCHALLENGERESULTINFO_OFFSET UNITYSDK_OFFSET(0xA3753A0)
#define RPG_CLIENT_FIGHTFESTMODULE_CLEARCURLINEUPSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xA374880)
#define RPG_CLIENT_FIGHTFESTMODULE_CLEARINBATTLEFIGHTFEST_OFFSET UNITYSDK_OFFSET(0xA373E70)
#define RPG_CLIENT_FIGHTFESTMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA37E280)
#define RPG_CLIENT_FIGHTFESTMODULE_ENTERCHALLENGEBATTLE_OFFSET UNITYSDK_OFFSET(0xA377200)
#define RPG_CLIENT_FIGHTFESTMODULE_ENTERFIGHTFESTCHALLENGE_OFFSET UNITYSDK_OFFSET(0xA374AD0)
#define RPG_CLIENT_FIGHTFESTMODULE_FINDSTARTINGSUBMISSION_OFFSET UNITYSDK_OFFSET(0xA378D80)
#define RPG_CLIENT_FIGHTFESTMODULE_GETAVAILABLEPAPERIDS_OFFSET UNITYSDK_OFFSET(0xA377ED0)
#define RPG_CLIENT_FIGHTFESTMODULE_GETCHALLENGELEVELDATABYID_OFFSET UNITYSDK_OFFSET(0xA3742B0)
#define RPG_CLIENT_FIGHTFESTMODULE_GETCHALLENGERACEPROGRESS_OFFSET UNITYSDK_OFFSET(0xA37F760)
#define RPG_CLIENT_FIGHTFESTMODULE_GETCHALLENGEREWARDQUESTIDS_OFFSET UNITYSDK_OFFSET(0xA375430)
#define RPG_CLIENT_FIGHTFESTMODULE_GETCOACHSKILLBYID_OFFSET UNITYSDK_OFFSET(0xA37D820)
#define RPG_CLIENT_FIGHTFESTMODULE_GETCOACHSKILLPROGRESS_OFFSET UNITYSDK_OFFSET(0xA37F8B0)
#define RPG_CLIENT_FIGHTFESTMODULE_GETCOACHSKILLS_OFFSET UNITYSDK_OFFSET(0xA37DBD0)
#define RPG_CLIENT_FIGHTFESTMODULE_GETCURLINEUPSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xA377030)
#define RPG_CLIENT_FIGHTFESTMODULE_GETCURRENTPHASE_OFFSET UNITYSDK_OFFSET(0xA378BE0)
#define RPG_CLIENT_FIGHTFESTMODULE_GETCURSCORERACE_OFFSET UNITYSDK_OFFSET(0xA37A530)
#define RPG_CLIENT_FIGHTFESTMODULE_GETLINEUPSAVEDATA_OFFSET UNITYSDK_OFFSET(0xA377600)
#define RPG_CLIENT_FIGHTFESTMODULE_GETNEXTAVAILABLEPAPER_OFFSET UNITYSDK_OFFSET(0xA378370)
#define RPG_CLIENT_FIGHTFESTMODULE_GETPAPERINTERVIEWS_OFFSET UNITYSDK_OFFSET(0xA378690)
#define RPG_CLIENT_FIGHTFESTMODULE_GETPAPERPROGRESS_OFFSET UNITYSDK_OFFSET(0xA37FA30)
#define RPG_CLIENT_FIGHTFESTMODULE_GETPAPER_OFFSET UNITYSDK_OFFSET(0xA3785B0)
#define RPG_CLIENT_FIGHTFESTMODULE_GETPHASEBYID_OFFSET UNITYSDK_OFFSET(0xA378EF0)
#define RPG_CLIENT_FIGHTFESTMODULE_GETPREVAVAILABLEPAPER_OFFSET UNITYSDK_OFFSET(0xA378100)
#define RPG_CLIENT_FIGHTFESTMODULE_GETRACEDATA_OFFSET UNITYSDK_OFFSET(0xA3740E0)
#define RPG_CLIENT_FIGHTFESTMODULE_GETRANK_OFFSET UNITYSDK_OFFSET(0xA3748D0)
#define RPG_CLIENT_FIGHTFESTMODULE_GETRECOMMENDLEVELBYWORLDLEVEL_OFFSET UNITYSDK_OFFSET(0xA374A30)
#define RPG_CLIENT_FIGHTFESTMODULE_GETRESIDENTREWARDPROGRESS_OFFSET UNITYSDK_OFFSET(0xA37FB80)
#define RPG_CLIENT_FIGHTFESTMODULE_GETSCORERACEPROGRESS_OFFSET UNITYSDK_OFFSET(0xA37F570)
#define RPG_CLIENT_FIGHTFESTMODULE_GETSCORERACES_OFFSET UNITYSDK_OFFSET(0xA37A4B0)
#define RPG_CLIENT_FIGHTFESTMODULE_GETUNSEENCHALLENGELEVELIDS_OFFSET UNITYSDK_OFFSET(0xA372090)
#define RPG_CLIENT_FIGHTFESTMODULE_GETUNSEENCOACHSKILLS_OFFSET UNITYSDK_OFFSET(0xA37BA30)
#define RPG_CLIENT_FIGHTFESTMODULE_GETUNSEENSCORERACES_OFFSET UNITYSDK_OFFSET(0xA37CF60)
#define RPG_CLIENT_FIGHTFESTMODULE_GET_CHALLENGELEVELDATAMAP_OFFSET UNITYSDK_OFFSET(0xA376F90)
#define RPG_CLIENT_FIGHTFESTMODULE_GET_CHALLENGELEVELRANKLIMIT_OFFSET UNITYSDK_OFFSET(0xA376FB0)
#define RPG_CLIENT_FIGHTFESTMODULE_GET_CHALLENGERESULTINFO_OFFSET UNITYSDK_OFFSET(0xA376FF0)
#define RPG_CLIENT_FIGHTFESTMODULE_GET_COINNUM_OFFSET UNITYSDK_OFFSET(0xA37F200)
#define RPG_CLIENT_FIGHTFESTMODULE_GET_CURSCORE_OFFSET UNITYSDK_OFFSET(0xA37AE30)
#define RPG_CLIENT_FIGHTFESTMODULE_GET_INBATTLECOACHSKILLS_OFFSET UNITYSDK_OFFSET(0xA373FF0)
#define RPG_CLIENT_FIGHTFESTMODULE_GET_INBATTLEFIGHTFESTCHALLENGELEVELDATA_OFFSET UNITYSDK_OFFSET(0xA3741B0)
#define RPG_CLIENT_FIGHTFESTMODULE_GET_INBATTLEFIGHTFESTEVENTID_OFFSET UNITYSDK_OFFSET(0xA373FD0)
#define RPG_CLIENT_FIGHTFESTMODULE_GET_INBATTLEFIGHTFESTID_OFFSET UNITYSDK_OFFSET(0xA373FB0)
#define RPG_CLIENT_FIGHTFESTMODULE_GET_INBATTLEFIGHTFESTSTAGEINFODATA_OFFSET UNITYSDK_OFFSET(0xA374010)
#define RPG_CLIENT_FIGHTFESTMODULE_GET_INBATTLEFIGHTFESTTYPE_OFFSET UNITYSDK_OFFSET(0xA373F90)
#define RPG_CLIENT_FIGHTFESTMODULE_GET_ISCHALLENGERACEUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA37F4B0)
#define RPG_CLIENT_FIGHTFESTMODULE_GET_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0xA37F2E0)
#define RPG_CLIENT_FIGHTFESTMODULE_GET_ISINTIMELIMITSCHEDULE_OFFSET UNITYSDK_OFFSET(0xA37F340)
#define RPG_CLIENT_FIGHTFESTMODULE_GET_ISPAPERUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA37F3F0)
#define RPG_CLIENT_FIGHTFESTMODULE_GET_ISSCORERACETHIRDCHAMPIONFINISH_OFFSET UNITYSDK_OFFSET(0xA37B7E0)
#define RPG_CLIENT_FIGHTFESTMODULE_GET_ISSHOWPASSIVESKILLUNLOCKHINT_OFFSET UNITYSDK_OFFSET(0xA37D7C0)
#define RPG_CLIENT_FIGHTFESTMODULE_GET_LOCKEDAVATARSKILLEVENTIDS_OFFSET UNITYSDK_OFFSET(0xA37AE70)
#define RPG_CLIENT_FIGHTFESTMODULE_GET_SCOREPHASEIDS_OFFSET UNITYSDK_OFFSET(0xA37AE50)
#define RPG_CLIENT_FIGHTFESTMODULE_GET_SCORERACETHIRDCHAMPIONFINISHIMGPATH_OFFSET UNITYSDK_OFFSET(0xA37B950)
#define RPG_CLIENT_FIGHTFESTMODULE_GET_WORLDLEVELTORECOMMENDLEVELDICT_OFFSET UNITYSDK_OFFSET(0xA376FD0)
#define RPG_CLIENT_FIGHTFESTMODULE_GET__SCORERACETHIRDCHAMPIONFINISHSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0xA37B890)
#define RPG_CLIENT_FIGHTFESTMODULE_HASNEXTAVAILABLEPAPER_OFFSET UNITYSDK_OFFSET(0xA378550)
#define RPG_CLIENT_FIGHTFESTMODULE_HASPREVAVAILABLEPAPER_OFFSET UNITYSDK_OFFSET(0xA3784F0)
#define RPG_CLIENT_FIGHTFESTMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA37E000)
#define RPG_CLIENT_FIGHTFESTMODULE_ISALLREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xA37D680)
#define RPG_CLIENT_FIGHTFESTMODULE_ISSHOWCHALLENGEREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xA371C00)
#define RPG_CLIENT_FIGHTFESTMODULE_ISSHOWEVERYDAYREDDOT_OFFSET UNITYSDK_OFFSET(0xA3719F0)
#define RPG_CLIENT_FIGHTFESTMODULE_ISSHOWLEVELREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xA371AC0)
#define RPG_CLIENT_FIGHTFESTMODULE_ISSHOWQUESTREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xA371B60)
#define RPG_CLIENT_FIGHTFESTMODULE_ISSHOWSCORERACENEWTIPS_OFFSET UNITYSDK_OFFSET(0xA371C60)
#define RPG_CLIENT_FIGHTFESTMODULE_ISSHOWSPECIALINVITEEARLYACCESSHINT_OFFSET UNITYSDK_OFFSET(0xA37AE90)
#define RPG_CLIENT_FIGHTFESTMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA37E3E0)
#define RPG_CLIENT_FIGHTFESTMODULE_RECORDALLCHALLENGELEVELSEENUNLOCK_OFFSET UNITYSDK_OFFSET(0xA37BF30)
#define RPG_CLIENT_FIGHTFESTMODULE_RECORDCHALLENGELEVELSEENUNLOCK_OFFSET UNITYSDK_OFFSET(0xA37C080)
#define RPG_CLIENT_FIGHTFESTMODULE_RECORDCOACHSKILLSEENBYTYPE_OFFSET UNITYSDK_OFFSET(0xA37BBC0)
#define RPG_CLIENT_FIGHTFESTMODULE_RECORDCOACHSKILLSEEN_OFFSET UNITYSDK_OFFSET(0xA37BD00)
#define RPG_CLIENT_FIGHTFESTMODULE_RECORDSCORERACESEENALL_OFFSET UNITYSDK_OFFSET(0xA37C270)
#define RPG_CLIENT_FIGHTFESTMODULE_RECORDSCORERACESEEN_OFFSET UNITYSDK_OFFSET(0xA37CAC0)
#define RPG_CLIENT_FIGHTFESTMODULE_RECORDSPECIALINVITEEARLYACCESSHINTSEEN_OFFSET UNITYSDK_OFFSET(0xA37B1E0)
#define RPG_CLIENT_FIGHTFESTMODULE_RESTARTBATTLEWITHLINEUPSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xA374370)
#define RPG_CLIENT_FIGHTFESTMODULE_RESTARTFIGHTFESTCHALLENGE_OFFSET UNITYSDK_OFFSET(0xA375280)
#define RPG_CLIENT_FIGHTFESTMODULE_SAVELINEUPSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xA377070)
#define RPG_CLIENT_FIGHTFESTMODULE_SET_CHALLENGELEVELDATAMAP_OFFSET UNITYSDK_OFFSET(0xA376FA0)
#define RPG_CLIENT_FIGHTFESTMODULE_SET_CHALLENGELEVELRANKLIMIT_OFFSET UNITYSDK_OFFSET(0xA376FC0)
#define RPG_CLIENT_FIGHTFESTMODULE_SET_CHALLENGERESULTINFO_OFFSET UNITYSDK_OFFSET(0xA377010)
#define RPG_CLIENT_FIGHTFESTMODULE_SET_COINNUM_OFFSET UNITYSDK_OFFSET(0xA37F050)
#define RPG_CLIENT_FIGHTFESTMODULE_SET_CURSCORE_OFFSET UNITYSDK_OFFSET(0xA37AE40)
#define RPG_CLIENT_FIGHTFESTMODULE_SET_INBATTLECOACHSKILLS_OFFSET UNITYSDK_OFFSET(0xA374000)
#define RPG_CLIENT_FIGHTFESTMODULE_SET_INBATTLEFIGHTFESTEVENTID_OFFSET UNITYSDK_OFFSET(0xA373FE0)
#define RPG_CLIENT_FIGHTFESTMODULE_SET_INBATTLEFIGHTFESTID_OFFSET UNITYSDK_OFFSET(0xA373FC0)
#define RPG_CLIENT_FIGHTFESTMODULE_SET_INBATTLEFIGHTFESTTYPE_OFFSET UNITYSDK_OFFSET(0xA373FA0)
#define RPG_CLIENT_FIGHTFESTMODULE_SET_LOCKEDAVATARSKILLEVENTIDS_OFFSET UNITYSDK_OFFSET(0xA37AE80)
#define RPG_CLIENT_FIGHTFESTMODULE_SET_SCOREPHASEIDS_OFFSET UNITYSDK_OFFSET(0xA37AE60)
#define RPG_CLIENT_FIGHTFESTMODULE_SET_WORLDLEVELTORECOMMENDLEVELDICT_OFFSET UNITYSDK_OFFSET(0xA376FE0)
#define RPG_CLIENT_FIGHTFESTMODULE_SYNCINBATTLEFIGHTFEST_OFFSET UNITYSDK_OFFSET(0xA373E00)
#define RPG_CLIENT_FIGHTFESTMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xA375A50)
#define RPG_CLIENT_FIGHTFESTMODULE_TRYSETAUTOSHOWCHALLENGELEVELID_OFFSET UNITYSDK_OFFSET(0xA375220)
#define RPG_CLIENT_FIGHTFESTMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA37E440)
#define RPG_CLIENT_FIGHTFESTMODULE__ADDSINGLELEVELDATA_OFFSET UNITYSDK_OFFSET(0xA376CF0)
#define RPG_CLIENT_FIGHTFESTMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0xA380080)
#define RPG_CLIENT_FIGHTFESTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA37FC60)
#define RPG_CLIENT_FIGHTFESTMODULE__DISPOSECHALLENGELEVELS_OFFSET UNITYSDK_OFFSET(0xA376DA0)
#define RPG_CLIENT_FIGHTFESTMODULE__DISPOSECOACHSKILLS_OFFSET UNITYSDK_OFFSET(0xA37DB30)
#define RPG_CLIENT_FIGHTFESTMODULE__DISPOSERACES_OFFSET UNITYSDK_OFFSET(0xA37A070)
#define RPG_CLIENT_FIGHTFESTMODULE__DISPOSESPECIALINVITEEARLYACCESSCHECKER_OFFSET UNITYSDK_OFFSET(0xA37B740)
#define RPG_CLIENT_FIGHTFESTMODULE__GETAVATARLISTFROMIDLIST_OFFSET UNITYSDK_OFFSET(0xA3745E0)
#define RPG_CLIENT_FIGHTFESTMODULE__GETDEPENDANTMAINMISSIONIDS_OFFSET UNITYSDK_OFFSET(0xA37EE30)
#define RPG_CLIENT_FIGHTFESTMODULE__GETDEPENDANTSUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0xA37EA50)
#define RPG_CLIENT_FIGHTFESTMODULE__GETEVENTIDBYRACEID_OFFSET UNITYSDK_OFFSET(0xA3779D0)
#define RPG_CLIENT_FIGHTFESTMODULE__GETLASTUNLOCKEDSCOREPHASE_OFFSET UNITYSDK_OFFSET(0xA37A290)
#define RPG_CLIENT_FIGHTFESTMODULE__INITCHALLENGELEVELRANK_OFFSET UNITYSDK_OFFSET(0xA376970)
#define RPG_CLIENT_FIGHTFESTMODULE__INITCHALLENGELEVELS_OFFSET UNITYSDK_OFFSET(0xA376720)
#define RPG_CLIENT_FIGHTFESTMODULE__INITCOACHSKILLS_OFFSET UNITYSDK_OFFSET(0xA37D8F0)
#define RPG_CLIENT_FIGHTFESTMODULE__INITLEVELDATAS_OFFSET UNITYSDK_OFFSET(0xA376780)
#define RPG_CLIENT_FIGHTFESTMODULE__INITPAPERS_OFFSET UNITYSDK_OFFSET(0xA377AF0)
#define RPG_CLIENT_FIGHTFESTMODULE__INITPASSIVESKILLUNLOCKHINTCHECKER_OFFSET UNITYSDK_OFFSET(0xA37DA80)
#define RPG_CLIENT_FIGHTFESTMODULE__INITPHASES_OFFSET UNITYSDK_OFFSET(0xA378910)
#define RPG_CLIENT_FIGHTFESTMODULE__INITRACES_OFFSET UNITYSDK_OFFSET(0xA379040)
#define RPG_CLIENT_FIGHTFESTMODULE__INITRECOMMENDLEVEL_OFFSET UNITYSDK_OFFSET(0xA376B30)
#define RPG_CLIENT_FIGHTFESTMODULE__INITSPECIALINVITEEARLYACCESSCHECKER_OFFSET UNITYSDK_OFFSET(0xA37B520)
#define RPG_CLIENT_FIGHTFESTMODULE__ISALLCHALLENGEQUESTGOT_OFFSET UNITYSDK_OFFSET(0xA376510)
#define RPG_CLIENT_FIGHTFESTMODULE__ONFIGHTFESTSCOREUPDATENOTIFY_OFFSET UNITYSDK_OFFSET(0xA37F180)
#define RPG_CLIENT_FIGHTFESTMODULE__ONFIGHTFESTUNLOCKSKILLNOTIFY_OFFSET UNITYSDK_OFFSET(0xA37DCD0)
#define RPG_CLIENT_FIGHTFESTMODULE__ONFIGHTFESTUPDATECHALLENGERECORDNOTIFY_OFFSET UNITYSDK_OFFSET(0xA375D20)
#define RPG_CLIENT_FIGHTFESTMODULE__ONFIGHTFESTUPDATECOINNOTIFY_OFFSET UNITYSDK_OFFSET(0xA37F100)
#define RPG_CLIENT_FIGHTFESTMODULE__ONGETFIGHTFESTDATASCRSP_OFFSET UNITYSDK_OFFSET(0xA37EF80)
#define RPG_CLIENT_FIGHTFESTMODULE__RECORDINBATTLEACTIVECOACHTYPE_OFFSET UNITYSDK_OFFSET(0xA373EF0)
#define RPG_CLIENT_FIGHTFESTMODULE__RECORDLINEUPSAVEDATA_1_OFFSET UNITYSDK_OFFSET(0xA374E60)
#define RPG_CLIENT_FIGHTFESTMODULE__RECORDLINEUPSAVEDATA_OFFSET UNITYSDK_OFFSET(0xA377140)
#define RPG_CLIENT_FIGHTFESTMODULE__SENDINITREQUEST_OFFSET UNITYSDK_OFFSET(0xA37E590)
#define RPG_CLIENT_FIGHTFESTMODULE__SYNCCHALLENGE_OFFSET UNITYSDK_OFFSET(0xA3760E0)
#define RPG_CLIENT_FIGHTFESTMODULE__SYNCSCORE_OFFSET UNITYSDK_OFFSET(0xA37A0E0)
#define RPG_CLIENT_FIGHTFESTMODULE__SYNCSINGLECHALLENGE_OFFSET UNITYSDK_OFFSET(0xA3763E0)
#define RPG_CLIENT_FIGHTFESTMODULE__SYNCUNLOCKEDCOACHSKILLS_OFFSET UNITYSDK_OFFSET(0xA37DE30)
#define RPG_CLIENT_FIGHTFESTMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA380250)
#define RPG_CLIENT_FIGHTFESTMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA3801C0)
#define RPG_CLIENT_FIGHTFESTMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA380260)
#define RPG_CLIENT_FIGHTFESTMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA3802C0)
#define RPG_CLIENT_FIGHTFESTMODULE___SENDINITREQUEST_B__162_0_OFFSET UNITYSDK_OFFSET(0xA3801B0)

namespace RPG::Client
{
	inline static constexpr unsigned int FightFestModule_TypeDefinitionIndex = 59053;

	class FightFestModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>** StaticGet__SpecialInviteEarlyAccessPhase2Conditions()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FightFestModule_TypeDefinitionIndex)->GetStaticField(0xD3E0);
		}
		// static const ::System::Int32 _SaveDataAvatarCount = 0x4; // 0x0
		// static const ::System::Int32 _SaveDataSkillCount = 0x2; // 0x0
		// static const ::System::String* _PassiveSkillUnlockHintConstKey; // 0x0
		// static const ::System::UInt32 OFFER_TYPE = 0x4; // 0x0
		// static const ::System::UInt32 ACTIVITY_REWARD_ID = 0xC362; // 0x0
		::System::Collections::Generic::List_1<::System::UInt32>* _LockedAvatarSkillEventIDs_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _ScorePhaseIDs_k__BackingField; // 0x18
		::RPG::Client::FightFestLineupSnapShot* _LineupSnapShot; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _InBattleCoachSkills_k__BackingField; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::FightFestScoreRace*>*>* _ScoreRaces; // 0x30
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ActivityRank, ::System::UInt32>* _ChallengeLevelRankLimit_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::FightFestRaceData*>* _RaceDatas; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::FightFestMainRace*>*>* _MainRaces; // 0x48
		::RPG::Client::ExprConditionChecker* _PassiveSkillUnlockHintChecker; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::FightFestScoreRace*>* _UnSeenScoreRaces; // 0x58
		::System::Collections::Generic::List_1<::RPG::Client::FightFestPaper*>* Papers; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::ExprConditionChecker*>* _SpecialInviteEarlyAccessCheckerMap; // 0x68
		::System::Collections::Generic::List_1<::RPG::Client::FightFestPaperInterview*>* PaperInterviews; // 0x70
		::System::Collections::Generic::List_1<::System::UInt32>* _UnChallengeSeenLevelIDs; // 0x78
		::System::Collections::Generic::List_1<::RPG::Client::FightFestCoachSkill*>* _UnSeenCoachSkills; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::FightFestChallengeLevelData*>* _ChallengeLevelDataMap_k__BackingField; // 0x88
		::System::Collections::Generic::List_1<::RPG::Client::FightFestCoachSkill*>* CoachSkills; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _WorldLevelToRecommendLevelDict_k__BackingField; // 0x98
		::RPG::Client::FightFestChallengeResultInfo _ChallengeResultInfo_k__BackingField; // 0xA0
		::System::Collections::Generic::List_1<::System::UInt32>* _FinishedQuestIDs; // 0xC0
		::System::Collections::Generic::List_1<::RPG::Client::FightFestPhase*>* Phases; // 0xC8
		::Struct_2_CEE7CE649BE83DBF _RestartInfo; // 0xD0
		::System::UInt32 _UnlockChallengeQuestID; // 0xE8
		::System::UInt32 _CurScore_k__BackingField; // 0xEC
		::System::UInt32 CoinItemID; // 0xF0
		::System::UInt32 _InBattleFightFestID_k__BackingField; // 0xF4
		::System::UInt32 _InBattleFightFestEventID_k__BackingField; // 0xF8
		::System::Nullable_1<::System::UInt32> _AutoShowChallengeLevelID; // 0xFC
		::System::Boolean _IsFightFestDataReady; // 0x104
		::System::Boolean _IsMissionDataReady; // 0x105
		::Enum_3_4608E37A1B3D374A_15 _InBattleFightFestType_k__BackingField; // 0x108
		::System::UInt32 _UnlockPaperQuestID; // 0x10C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__CCTOR_OFFSET))();
		}

		::System::Void SyncInBattleFightFest(::Class_1_E4D4FA1CB2E4394F* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E4D4FA1CB2E4394F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_SYNCINBATTLEFIGHTFEST_OFFSET))(this, rsp);
		}

		::System::Void ClearInBattleFightFest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_CLEARINBATTLEFIGHTFEST_OFFSET))(this);
		}

		::System::Void _RecordInBattleActiveCoachType(::System::Collections::Generic::List_1<::System::UInt32>* skills)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__RECORDINBATTLEACTIVECOACHTYPE_OFFSET))(this, skills);
		}

		::Enum_3_4608E37A1B3D374A_15 get_InBattleFightFestType()
		{
			return ((::Enum_3_4608E37A1B3D374A_15(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GET_INBATTLEFIGHTFESTTYPE_OFFSET))(this);
		}

		::System::Void set_InBattleFightFestType(::Enum_3_4608E37A1B3D374A_15 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_15))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_SET_INBATTLEFIGHTFESTTYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_InBattleFightFestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GET_INBATTLEFIGHTFESTID_OFFSET))(this);
		}

		::System::Void set_InBattleFightFestID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_SET_INBATTLEFIGHTFESTID_OFFSET))(this, value);
		}

		::System::UInt32 get_InBattleFightFestEventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GET_INBATTLEFIGHTFESTEVENTID_OFFSET))(this);
		}

		::System::Void set_InBattleFightFestEventID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_SET_INBATTLEFIGHTFESTEVENTID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_InBattleCoachSkills()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GET_INBATTLECOACHSKILLS_OFFSET))(this);
		}

		::System::Void set_InBattleCoachSkills(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_SET_INBATTLECOACHSKILLS_OFFSET))(this, value);
		}

		::RPG::Client::FightFestStageInfoData* get_InBattleFightFestStageInfoData()
		{
			return ((::RPG::Client::FightFestStageInfoData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GET_INBATTLEFIGHTFESTSTAGEINFODATA_OFFSET))(this);
		}

		::RPG::Client::FightFestChallengeLevelData* get_InBattleFightFestChallengeLevelData()
		{
			return ((::RPG::Client::FightFestChallengeLevelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GET_INBATTLEFIGHTFESTCHALLENGELEVELDATA_OFFSET))(this);
		}

		::System::Boolean RestartBattleWithLineupSnapShot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_RESTARTBATTLEWITHLINEUPSNAPSHOT_OFFSET))(this);
		}

		::RPG::Client::FightFestChallengeLevelData* GetChallengeLevelDataByID(::System::UInt32 challengeID)
		{
			return ((::RPG::Client::FightFestChallengeLevelData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETCHALLENGELEVELDATABYID_OFFSET))(this, challengeID);
		}

		::RPG::GameCore::ActivityRank GetRank(::System::UInt32 score)
		{
			return ((::RPG::GameCore::ActivityRank(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETRANK_OFFSET))(this, score);
		}

		::System::UInt32 GetRecommendLevelByWorldLevel(::System::UInt32 worldLevel)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETRECOMMENDLEVELBYWORLDLEVEL_OFFSET))(this, worldLevel);
		}

		::System::Void EnterFightFestChallenge(::RPG::Client::FightFestChallengeLevelData* levelData, ::System::Collections::Generic::List_1<::System::UInt32>* selectedAvatarIDs, ::System::Collections::Generic::List_1<::System::UInt32>* selectedSkillIDs)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestChallengeLevelData*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_ENTERFIGHTFESTCHALLENGE_OFFSET))(this, levelData, selectedAvatarIDs, selectedSkillIDs);
		}

		::System::Void RestartFightFestChallenge()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_RESTARTFIGHTFESTCHALLENGE_OFFSET))(this);
		}

		::System::Void ClearChallengeResultInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_CLEARCHALLENGERESULTINFO_OFFSET))(this);
		}

		::System::Void ClearChallengeRestartInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_CLEARCHALLENGERESTARTINFO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetChallengeRewardQuestIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETCHALLENGEREWARDQUESTIDS_OFFSET))(this);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void TrySetAutoShowChallengeLevelID(::System::UInt32 stageID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_TRYSETAUTOSHOWCHALLENGELEVELID_OFFSET))(this, stageID);
		}

		::System::Void _OnFightFestUpdateChallengeRecordNotify(::System::UInt16 cmd, ::System::Object* ntfObj)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__ONFIGHTFESTUPDATECHALLENGERECORDNOTIFY_OFFSET))(this, cmd, ntfObj);
		}

		::System::Void _SyncChallenge(::System::Collections::Generic::IEnumerable_1<::Class_1_1CBA230307F9C289_21*>* challengeList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_1CBA230307F9C289_21*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__SYNCCHALLENGE_OFFSET))(this, challengeList);
		}

		::System::Void _SyncSingleChallenge(::Class_1_1CBA230307F9C289_21* challenge)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_21*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__SYNCSINGLECHALLENGE_OFFSET))(this, challenge);
		}

		::System::Boolean _IsAllChallengeQuestGot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__ISALLCHALLENGEQUESTGOT_OFFSET))(this);
		}

		::System::Void _InitChallengeLevels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__INITCHALLENGELEVELS_OFFSET))(this);
		}

		::System::Void _InitLevelDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__INITLEVELDATAS_OFFSET))(this);
		}

		::System::Void _AddSingleLevelData(::RPG::Client::FightFestChallengeLevelData* levelData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestChallengeLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__ADDSINGLELEVELDATA_OFFSET))(this, levelData);
		}

		::System::Void _InitChallengeLevelRank()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__INITCHALLENGELEVELRANK_OFFSET))(this);
		}

		::System::Void _InitRecommendLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__INITRECOMMENDLEVEL_OFFSET))(this);
		}

		::System::Void _DisposeChallengeLevels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__DISPOSECHALLENGELEVELS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::FightFestChallengeLevelData*>* get_ChallengeLevelDataMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::FightFestChallengeLevelData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GET_CHALLENGELEVELDATAMAP_OFFSET))(this);
		}

		::System::Void set_ChallengeLevelDataMap(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::FightFestChallengeLevelData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::FightFestChallengeLevelData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_SET_CHALLENGELEVELDATAMAP_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ActivityRank, ::System::UInt32>* get_ChallengeLevelRankLimit()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ActivityRank, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GET_CHALLENGELEVELRANKLIMIT_OFFSET))(this);
		}

		::System::Void set_ChallengeLevelRankLimit(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ActivityRank, ::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ActivityRank, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_SET_CHALLENGELEVELRANKLIMIT_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_WorldLevelToRecommendLevelDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GET_WORLDLEVELTORECOMMENDLEVELDICT_OFFSET))(this);
		}

		::System::Void set_WorldLevelToRecommendLevelDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_SET_WORLDLEVELTORECOMMENDLEVELDICT_OFFSET))(this, value);
		}

		::RPG::Client::FightFestChallengeResultInfo get_ChallengeResultInfo()
		{
			return ((::RPG::Client::FightFestChallengeResultInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GET_CHALLENGERESULTINFO_OFFSET))(this);
		}

		::System::Void set_ChallengeResultInfo(::RPG::Client::FightFestChallengeResultInfo value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestChallengeResultInfo))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_SET_CHALLENGERESULTINFO_OFFSET))(this, value);
		}

		::RPG::Client::FightFestLineupSnapShot* GetCurLineupSnapShot()
		{
			return ((::RPG::Client::FightFestLineupSnapShot*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETCURLINEUPSNAPSHOT_OFFSET))(this);
		}

		::System::Void ClearCurLineupSnapShot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_CLEARCURLINEUPSNAPSHOT_OFFSET))(this);
		}

		::System::Void SaveLineupSnapShot(::System::UInt32 raceID, ::System::UInt32 eventID, ::System::Collections::Generic::List_1<::System::UInt32>* selectedAvatarIDs, ::System::Collections::Generic::List_1<::System::UInt32>* selectedSkillIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_SAVELINEUPSNAPSHOT_OFFSET))(this, raceID, eventID, selectedAvatarIDs, selectedSkillIDs);
		}

		::System::Boolean EnterChallengeBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_ENTERCHALLENGEBATTLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_22*>* _GetAvatarListFromIDList(::System::Collections::Generic::List_1<::System::UInt32>* avatarIDList)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_22*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__GETAVATARLISTFROMIDLIST_OFFSET))(this, avatarIDList);
		}

		::RPG::Client::FightFestLineupSnapShot* GetLineupSaveData(::System::UInt32 eventID)
		{
			return ((::RPG::Client::FightFestLineupSnapShot*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETLINEUPSAVEDATA_OFFSET))(this, eventID);
		}

		::System::Void _RecordLineupSaveData(::RPG::Client::FightFestLineupSnapShot* snapShot)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestLineupSnapShot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__RECORDLINEUPSAVEDATA_OFFSET))(this, snapShot);
		}

		::System::ValueTuple_2<::System::Boolean, ::System::UInt32> _GetEventIDByRaceID(::System::UInt32 raceID, ::System::UInt32 eventID)
		{
			return ((::System::ValueTuple_2<::System::Boolean, ::System::UInt32>(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__GETEVENTIDBYRACEID_OFFSET))(this, raceID, eventID);
		}

		::System::Void _RecordLineupSaveData_1(::System::UInt32 eventID, ::System::Collections::Generic::List_1<::System::UInt32>* selectedAvatarIDs, ::System::Collections::Generic::List_1<::System::UInt32>* selectedSkillIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__RECORDLINEUPSAVEDATA_1_OFFSET))(this, eventID, selectedAvatarIDs, selectedSkillIDs);
		}

		::System::Void _InitPapers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__INITPAPERS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAvailablePaperIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETAVAILABLEPAPERIDS_OFFSET))(this);
		}

		::RPG::Client::FightFestPaper* GetPrevAvailablePaper(::System::UInt32 currentPaperID)
		{
			return ((::RPG::Client::FightFestPaper*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETPREVAVAILABLEPAPER_OFFSET))(this, currentPaperID);
		}

		::RPG::Client::FightFestPaper* GetNextAvailablePaper(::System::UInt32 currentPaperID)
		{
			return ((::RPG::Client::FightFestPaper*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETNEXTAVAILABLEPAPER_OFFSET))(this, currentPaperID);
		}

		::System::Boolean HasPrevAvailablePaper(::System::UInt32 currentPaperID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_HASPREVAVAILABLEPAPER_OFFSET))(this, currentPaperID);
		}

		::System::Boolean HasNextAvailablePaper(::System::UInt32 currentPaperID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_HASNEXTAVAILABLEPAPER_OFFSET))(this, currentPaperID);
		}

		::RPG::Client::FightFestPaper* GetPaper(::System::UInt32 paperID)
		{
			return ((::RPG::Client::FightFestPaper*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETPAPER_OFFSET))(this, paperID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FightFestPaperInterview*>* GetPaperInterviews(::System::UInt32 paperID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FightFestPaperInterview*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETPAPERINTERVIEWS_OFFSET))(this, paperID);
		}

		::System::Void _InitPhases()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__INITPHASES_OFFSET))(this);
		}

		::RPG::Client::FightFestPhase* GetCurrentPhase()
		{
			return ((::RPG::Client::FightFestPhase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETCURRENTPHASE_OFFSET))(this);
		}

		::RPG::Client::SubMissionData* FindStartingSubMission(::RPG::Client::FightFestPhase* phase)
		{
			return ((::RPG::Client::SubMissionData*(*)(::PVOID, ::RPG::Client::FightFestPhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_FINDSTARTINGSUBMISSION_OFFSET))(this, phase);
		}

		::RPG::Client::FightFestPhase* GetPhaseByID(::System::UInt32 phaseID)
		{
			return ((::RPG::Client::FightFestPhase*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETPHASEBYID_OFFSET))(this, phaseID);
		}

		::System::Void _InitRaces()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__INITRACES_OFFSET))(this);
		}

		::System::Void _DisposeRaces()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__DISPOSERACES_OFFSET))(this);
		}

		::System::Void _SyncScore(::System::UInt32 score, ::System::UInt32 raceID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__SYNCSCORE_OFFSET))(this, score, raceID);
		}

		::RPG::Client::FightFestPhase* _GetLastUnlockedScorePhase()
		{
			return ((::RPG::Client::FightFestPhase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__GETLASTUNLOCKEDSCOREPHASE_OFFSET))(this);
		}

		::RPG::Client::FightFestRaceData* GetRaceData(::System::UInt32 raceID)
		{
			return ((::RPG::Client::FightFestRaceData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETRACEDATA_OFFSET))(this, raceID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FightFestScoreRace*>* GetScoreRaces(::System::UInt32 phaseID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FightFestScoreRace*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETSCORERACES_OFFSET))(this, phaseID);
		}

		::RPG::Client::FightFestScoreRace* GetCurScoreRace()
		{
			return ((::RPG::Client::FightFestScoreRace*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETCURSCORERACE_OFFSET))(this);
		}

		::System::UInt32 get_CurScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GET_CURSCORE_OFFSET))(this);
		}

		::System::Void set_CurScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_SET_CURSCORE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ScorePhaseIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GET_SCOREPHASEIDS_OFFSET))(this);
		}

		::System::Void set_ScorePhaseIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_SET_SCOREPHASEIDS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_LockedAvatarSkillEventIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GET_LOCKEDAVATARSKILLEVENTIDS_OFFSET))(this);
		}

		::System::Void set_LockedAvatarSkillEventIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_SET_LOCKEDAVATARSKILLEVENTIDS_OFFSET))(this, value);
		}

		::System::Boolean IsShowSpecialInviteEarlyAccessHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_ISSHOWSPECIALINVITEEARLYACCESSHINT_OFFSET))(this);
		}

		::System::Void RecordSpecialInviteEarlyAccessHintSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_RECORDSPECIALINVITEEARLYACCESSHINTSEEN_OFFSET))(this);
		}

		::System::Void _InitSpecialInviteEarlyAccessChecker()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__INITSPECIALINVITEEARLYACCESSCHECKER_OFFSET))(this);
		}

		::System::Void _DisposeSpecialInviteEarlyAccessChecker()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__DISPOSESPECIALINVITEEARLYACCESSCHECKER_OFFSET))(this);
		}

		::System::Boolean get_IsScoreRaceThirdChampionFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GET_ISSCORERACETHIRDCHAMPIONFINISH_OFFSET))(this);
		}

		::System::String* get_ScoreRaceThirdChampionFinishImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GET_SCORERACETHIRDCHAMPIONFINISHIMGPATH_OFFSET))(this);
		}

		::System::UInt32 get__ScoreRaceThirdChampionFinishSubMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GET__SCORERACETHIRDCHAMPIONFINISHSUBMISSIONID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FightFestCoachSkill*>* GetUnSeenCoachSkills()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FightFestCoachSkill*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETUNSEENCOACHSKILLS_OFFSET))(this);
		}

		::System::Void RecordCoachSkillSeenByType(::RPG::GameCore::FightFestCoachType coachType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FightFestCoachType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_RECORDCOACHSKILLSEENBYTYPE_OFFSET))(this, coachType);
		}

		::System::Void RecordCoachSkillSeen(::RPG::Client::FightFestCoachSkill* skill)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestCoachSkill*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_RECORDCOACHSKILLSEEN_OFFSET))(this, skill);
		}

		::System::Void RecordAllChallengeLevelSeenUnlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_RECORDALLCHALLENGELEVELSEENUNLOCK_OFFSET))(this);
		}

		::System::Void RecordChallengeLevelSeenUnlock(::RPG::Client::FightFestChallengeLevelData* levelData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestChallengeLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_RECORDCHALLENGELEVELSEENUNLOCK_OFFSET))(this, levelData);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetUnSeenChallengeLevelIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETUNSEENCHALLENGELEVELIDS_OFFSET))(this);
		}

		::System::Void RecordScoreRaceSeenAll(::RPG::Client::FightFestScoreRace* race)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestScoreRace*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_RECORDSCORERACESEENALL_OFFSET))(this, race);
		}

		::System::Void RecordScoreRaceSeen(::RPG::Client::FightFestScoreRace* race)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestScoreRace*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_RECORDSCORERACESEEN_OFFSET))(this, race);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FightFestScoreRace*>* GetUnSeenScoreRaces()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FightFestScoreRace*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETUNSEENSCORERACES_OFFSET))(this);
		}

		::System::Boolean IsShowScoreRaceNewTips()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_ISSHOWSCORERACENEWTIPS_OFFSET))(this);
		}

		::System::Boolean IsShowEveryDayRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_ISSHOWEVERYDAYREDDOT_OFFSET))(this);
		}

		::System::Boolean IsAllRewardTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_ISALLREWARDTAKEN_OFFSET))(this);
		}

		::System::Boolean IsShowLevelRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_ISSHOWLEVELREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowQuestRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_ISSHOWQUESTREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowChallengeRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_ISSHOWCHALLENGEREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean get_IsShowPassiveSkillUnlockHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GET_ISSHOWPASSIVESKILLUNLOCKHINT_OFFSET))(this);
		}

		::RPG::Client::FightFestCoachSkill* GetCoachSkillByID(::System::UInt32 id)
		{
			return ((::RPG::Client::FightFestCoachSkill*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETCOACHSKILLBYID_OFFSET))(this, id);
		}

		::System::Void _InitCoachSkills()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__INITCOACHSKILLS_OFFSET))(this);
		}

		::System::Void _DisposeCoachSkills()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__DISPOSECOACHSKILLS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FightFestCoachSkill*>* GetCoachSkills(::RPG::GameCore::FightFestCoachType coachSkillType)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FightFestCoachSkill*>*(*)(::PVOID, ::RPG::GameCore::FightFestCoachType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETCOACHSKILLS_OFFSET))(this, coachSkillType);
		}

		::System::Void _OnFightFestUnlockSkillNotify(::System::UInt16 cmd, ::System::Object* rspObj)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__ONFIGHTFESTUNLOCKSKILLNOTIFY_OFFSET))(this, cmd, rspObj);
		}

		::System::Void _SyncUnlockedCoachSkills(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* unlockedCoachSkills)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__SYNCUNLOCKEDCOACHSKILLS_OFFSET))(this, unlockedCoachSkills);
		}

		::System::Void _InitPassiveSkillUnlockHintChecker()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__INITPASSIVESKILLUNLOCKHINTCHECKER_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _SendInitRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__SENDINITREQUEST_OFFSET))(this);
		}

		::System::Void _OnGetFightFestDataScRsp(::System::UInt16 cmd, ::System::Object* rspObj)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__ONGETFIGHTFESTDATASCRSP_OFFSET))(this, cmd, rspObj);
		}

		::System::Void _OnFightFestUpdateCoinNotify(::System::UInt16 cmd, ::System::Object* rspObj)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__ONFIGHTFESTUPDATECOINNOTIFY_OFFSET))(this, cmd, rspObj);
		}

		::System::Void _OnFightFestScoreUpdateNotify(::System::UInt16 cmd, ::System::Object* rspObj)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__ONFIGHTFESTSCOREUPDATENOTIFY_OFFSET))(this, cmd, rspObj);
		}

		::System::UInt32 get_CoinNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GET_COINNUM_OFFSET))(this);
		}

		::System::Void set_CoinNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_SET_COINNUM_OFFSET))(this, value);
		}

		::System::Boolean get_IsDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GET_ISDATAREADY_OFFSET))(this);
		}

		::System::Boolean get_IsInTimeLimitSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GET_ISINTIMELIMITSCHEDULE_OFFSET))(this);
		}

		::System::Boolean get_IsPaperUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GET_ISPAPERUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsChallengeRaceUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GET_ISCHALLENGERACEUNLOCKED_OFFSET))(this);
		}

		::RPG::Client::FightFestProgress GetScoreRaceProgress()
		{
			return ((::RPG::Client::FightFestProgress(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETSCORERACEPROGRESS_OFFSET))(this);
		}

		::RPG::Client::FightFestProgress GetChallengeRaceProgress()
		{
			return ((::RPG::Client::FightFestProgress(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETCHALLENGERACEPROGRESS_OFFSET))(this);
		}

		::RPG::Client::FightFestProgress GetCoachSkillProgress(::RPG::GameCore::FightFestCoachType coachSkillType)
		{
			return ((::RPG::Client::FightFestProgress(*)(::PVOID, ::RPG::GameCore::FightFestCoachType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETCOACHSKILLPROGRESS_OFFSET))(this, coachSkillType);
		}

		::RPG::Client::FightFestProgress GetPaperProgress()
		{
			return ((::RPG::Client::FightFestProgress(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETPAPERPROGRESS_OFFSET))(this);
		}

		::RPG::Client::FightFestProgress GetResidentRewardProgress()
		{
			return ((::RPG::Client::FightFestProgress(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETRESIDENTREWARDPROGRESS_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* _GetDependantSubMissionIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__GETDEPENDANTSUBMISSIONIDS_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* _GetDependantMainMissionIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__GETDEPENDANTMAINMISSIONIDS_OFFSET))(this);
		}

		::System::Void __SendInitRequest_b__162_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE___SENDINITREQUEST_B__162_0_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
