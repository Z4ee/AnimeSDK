#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_16.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/FightFestChallengeResultInfo.h"
#include "unitysdk/RPG/Client/FightFestProgress.h"
#include "unitysdk/RPG/GameCore/ActivityRank.h"
#include "unitysdk/RPG/GameCore/FightFestCoachType.h"
#include "unitysdk/Struct_2_CEE7CE649BE83DBF.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_1CBA230307F9C289_31;
class Class_1_1CBA230307F9C289_32;
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

#define RPG_CLIENT_FIGHTFESTMODULE_CLEARCHALLENGERESTARTINFO_OFFSET UNITYSDK_OFFSET(0x1AE50110)
#define RPG_CLIENT_FIGHTFESTMODULE_CLEARCHALLENGERESULTINFO_OFFSET UNITYSDK_OFFSET(0x1AE507E0)
#define RPG_CLIENT_FIGHTFESTMODULE_CLEARCURLINEUPSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1AE4FAC0)
#define RPG_CLIENT_FIGHTFESTMODULE_CLEARINBATTLEFIGHTFEST_OFFSET UNITYSDK_OFFSET(0x1AE4F040)
#define RPG_CLIENT_FIGHTFESTMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AE59CF0)
#define RPG_CLIENT_FIGHTFESTMODULE_ENTERCHALLENGEBATTLE_OFFSET UNITYSDK_OFFSET(0x1AE52440)
#define RPG_CLIENT_FIGHTFESTMODULE_ENTERFIGHTFESTCHALLENGE_OFFSET UNITYSDK_OFFSET(0x1AE4FCC0)
#define RPG_CLIENT_FIGHTFESTMODULE_FINDSTARTINGSUBMISSION_OFFSET UNITYSDK_OFFSET(0x1AE547D0)
#define RPG_CLIENT_FIGHTFESTMODULE_GETAVAILABLEPAPERIDS_OFFSET UNITYSDK_OFFSET(0x1AE534C0)
#define RPG_CLIENT_FIGHTFESTMODULE_GETCHALLENGELEVELDATABYID_OFFSET UNITYSDK_OFFSET(0x1AE4F490)
#define RPG_CLIENT_FIGHTFESTMODULE_GETCHALLENGERACEPROGRESS_OFFSET UNITYSDK_OFFSET(0x1AE5B5A0)
#define RPG_CLIENT_FIGHTFESTMODULE_GETCHALLENGEREWARDQUESTIDS_OFFSET UNITYSDK_OFFSET(0x1AE50860)
#define RPG_CLIENT_FIGHTFESTMODULE_GETCOACHSKILLBYID_OFFSET UNITYSDK_OFFSET(0x1AE590C0)
#define RPG_CLIENT_FIGHTFESTMODULE_GETCOACHSKILLPROGRESS_OFFSET UNITYSDK_OFFSET(0x1AE5B6E0)
#define RPG_CLIENT_FIGHTFESTMODULE_GETCOACHSKILLS_OFFSET UNITYSDK_OFFSET(0x1AE595B0)
#define RPG_CLIENT_FIGHTFESTMODULE_GETCURLINEUPSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1AE52260)
#define RPG_CLIENT_FIGHTFESTMODULE_GETCURRENTPHASE_OFFSET UNITYSDK_OFFSET(0x1AE545B0)
#define RPG_CLIENT_FIGHTFESTMODULE_GETCURSCORERACE_OFFSET UNITYSDK_OFFSET(0x1AE56570)
#define RPG_CLIENT_FIGHTFESTMODULE_GETLINEUPSAVEDATA_OFFSET UNITYSDK_OFFSET(0x1AE528A0)
#define RPG_CLIENT_FIGHTFESTMODULE_GETNEXTAVAILABLEPAPER_OFFSET UNITYSDK_OFFSET(0x1AE53A50)
#define RPG_CLIENT_FIGHTFESTMODULE_GETPAPERINTERVIEWS_OFFSET UNITYSDK_OFFSET(0x1AE53DD0)
#define RPG_CLIENT_FIGHTFESTMODULE_GETPAPERPROGRESS_OFFSET UNITYSDK_OFFSET(0x1AE5B8E0)
#define RPG_CLIENT_FIGHTFESTMODULE_GETPAPER_OFFSET UNITYSDK_OFFSET(0x1AE53CE0)
#define RPG_CLIENT_FIGHTFESTMODULE_GETPHASEBYID_OFFSET UNITYSDK_OFFSET(0x1AE549E0)
#define RPG_CLIENT_FIGHTFESTMODULE_GETPREVAVAILABLEPAPER_OFFSET UNITYSDK_OFFSET(0x1AE53740)
#define RPG_CLIENT_FIGHTFESTMODULE_GETRACEDATA_OFFSET UNITYSDK_OFFSET(0x1AE4F2D0)
#define RPG_CLIENT_FIGHTFESTMODULE_GETRANK_OFFSET UNITYSDK_OFFSET(0x1AE4FB10)
#define RPG_CLIENT_FIGHTFESTMODULE_GETRECOMMENDLEVELBYWORLDLEVEL_OFFSET UNITYSDK_OFFSET(0x1AE4FC30)
#define RPG_CLIENT_FIGHTFESTMODULE_GETRESIDENTREWARDPROGRESS_OFFSET UNITYSDK_OFFSET(0x1AE5BA50)
#define RPG_CLIENT_FIGHTFESTMODULE_GETSCORERACEPROGRESS_OFFSET UNITYSDK_OFFSET(0x1AE5B390)
#define RPG_CLIENT_FIGHTFESTMODULE_GETSCORERACES_OFFSET UNITYSDK_OFFSET(0x1AE564A0)
#define RPG_CLIENT_FIGHTFESTMODULE_GETUNSEENCHALLENGELEVELIDS_OFFSET UNITYSDK_OFFSET(0x1AE4CC30)
#define RPG_CLIENT_FIGHTFESTMODULE_GETUNSEENCOACHSKILLS_OFFSET UNITYSDK_OFFSET(0x1AE57A80)
#define RPG_CLIENT_FIGHTFESTMODULE_GETUNSEENSCORERACES_OFFSET UNITYSDK_OFFSET(0x1AE58C90)
#define RPG_CLIENT_FIGHTFESTMODULE_GET_CHALLENGELEVELDATAMAP_OFFSET UNITYSDK_OFFSET(0x1AE521D0)
#define RPG_CLIENT_FIGHTFESTMODULE_GET_CHALLENGELEVELRANKLIMIT_OFFSET UNITYSDK_OFFSET(0x1AE521F0)
#define RPG_CLIENT_FIGHTFESTMODULE_GET_CHALLENGERESULTINFO_OFFSET UNITYSDK_OFFSET(0x1AE52230)
#define RPG_CLIENT_FIGHTFESTMODULE_GET_COINNUM_OFFSET UNITYSDK_OFFSET(0x1AE5B020)
#define RPG_CLIENT_FIGHTFESTMODULE_GET_CURSCORE_OFFSET UNITYSDK_OFFSET(0x1AE56D70)
#define RPG_CLIENT_FIGHTFESTMODULE_GET_INBATTLECOACHSKILLS_OFFSET UNITYSDK_OFFSET(0x1AE4F180)
#define RPG_CLIENT_FIGHTFESTMODULE_GET_INBATTLEFIGHTFESTCHALLENGELEVELDATA_OFFSET UNITYSDK_OFFSET(0x1AE4F3C0)
#define RPG_CLIENT_FIGHTFESTMODULE_GET_INBATTLEFIGHTFESTEVENTID_OFFSET UNITYSDK_OFFSET(0x1AE4F160)
#define RPG_CLIENT_FIGHTFESTMODULE_GET_INBATTLEFIGHTFESTID_OFFSET UNITYSDK_OFFSET(0x1AE4F140)
#define RPG_CLIENT_FIGHTFESTMODULE_GET_INBATTLEFIGHTFESTSTAGEINFODATA_OFFSET UNITYSDK_OFFSET(0x1AE4F1A0)
#define RPG_CLIENT_FIGHTFESTMODULE_GET_INBATTLEFIGHTFESTTYPE_OFFSET UNITYSDK_OFFSET(0x1AE4F120)
#define RPG_CLIENT_FIGHTFESTMODULE_GET_ISCHALLENGERACEUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1AE5B2D0)
#define RPG_CLIENT_FIGHTFESTMODULE_GET_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0x1AE5B100)
#define RPG_CLIENT_FIGHTFESTMODULE_GET_ISINTIMELIMITSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1AE5B160)
#define RPG_CLIENT_FIGHTFESTMODULE_GET_ISPAPERUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1AE5B210)
#define RPG_CLIENT_FIGHTFESTMODULE_GET_ISSCORERACETHIRDCHAMPIONFINISH_OFFSET UNITYSDK_OFFSET(0x1AE57830)
#define RPG_CLIENT_FIGHTFESTMODULE_GET_ISSHOWPASSIVESKILLUNLOCKHINT_OFFSET UNITYSDK_OFFSET(0x1AE59060)
#define RPG_CLIENT_FIGHTFESTMODULE_GET_LOCKEDAVATARSKILLEVENTIDS_OFFSET UNITYSDK_OFFSET(0x1AE56DB0)
#define RPG_CLIENT_FIGHTFESTMODULE_GET_SCOREPHASEIDS_OFFSET UNITYSDK_OFFSET(0x1AE56D90)
#define RPG_CLIENT_FIGHTFESTMODULE_GET_SCORERACETHIRDCHAMPIONFINISHIMGPATH_OFFSET UNITYSDK_OFFSET(0x1AE579A0)
#define RPG_CLIENT_FIGHTFESTMODULE_GET_WORLDLEVELTORECOMMENDLEVELDICT_OFFSET UNITYSDK_OFFSET(0x1AE52210)
#define RPG_CLIENT_FIGHTFESTMODULE_GET__SCORERACETHIRDCHAMPIONFINISHSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x1AE578E0)
#define RPG_CLIENT_FIGHTFESTMODULE_HASNEXTAVAILABLEPAPER_OFFSET UNITYSDK_OFFSET(0x1AE53C80)
#define RPG_CLIENT_FIGHTFESTMODULE_HASPREVAVAILABLEPAPER_OFFSET UNITYSDK_OFFSET(0x1AE53C20)
#define RPG_CLIENT_FIGHTFESTMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1AE59AA0)
#define RPG_CLIENT_FIGHTFESTMODULE_ISALLREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x1AE58F20)
#define RPG_CLIENT_FIGHTFESTMODULE_ISSHOWCHALLENGEREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x1AE4C6E0)
#define RPG_CLIENT_FIGHTFESTMODULE_ISSHOWEVERYDAYREDDOT_OFFSET UNITYSDK_OFFSET(0x1AE4C4D0)
#define RPG_CLIENT_FIGHTFESTMODULE_ISSHOWLEVELREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x1AE4C5A0)
#define RPG_CLIENT_FIGHTFESTMODULE_ISSHOWQUESTREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x1AE4C640)
#define RPG_CLIENT_FIGHTFESTMODULE_ISSHOWSCORERACENEWTIPS_OFFSET UNITYSDK_OFFSET(0x1AE4C740)
#define RPG_CLIENT_FIGHTFESTMODULE_ISSHOWSPECIALINVITEEARLYACCESSHINT_OFFSET UNITYSDK_OFFSET(0x1AE56DD0)
#define RPG_CLIENT_FIGHTFESTMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x1AE59E70)
#define RPG_CLIENT_FIGHTFESTMODULE_RECORDALLCHALLENGELEVELSEENUNLOCK_OFFSET UNITYSDK_OFFSET(0x1AE580B0)
#define RPG_CLIENT_FIGHTFESTMODULE_RECORDCHALLENGELEVELSEENUNLOCK_OFFSET UNITYSDK_OFFSET(0x1AE581E0)
#define RPG_CLIENT_FIGHTFESTMODULE_RECORDCOACHSKILLSEENBYTYPE_OFFSET UNITYSDK_OFFSET(0x1AE57C80)
#define RPG_CLIENT_FIGHTFESTMODULE_RECORDCOACHSKILLSEEN_OFFSET UNITYSDK_OFFSET(0x1AE57E00)
#define RPG_CLIENT_FIGHTFESTMODULE_RECORDSCORERACESEENALL_OFFSET UNITYSDK_OFFSET(0x1AE583D0)
#define RPG_CLIENT_FIGHTFESTMODULE_RECORDSCORERACESEEN_OFFSET UNITYSDK_OFFSET(0x1AE58790)
#define RPG_CLIENT_FIGHTFESTMODULE_RECORDSPECIALINVITEEARLYACCESSHINTSEEN_OFFSET UNITYSDK_OFFSET(0x1AE57230)
#define RPG_CLIENT_FIGHTFESTMODULE_RESTARTBATTLEWITHLINEUPSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1AE4F520)
#define RPG_CLIENT_FIGHTFESTMODULE_RESTARTFIGHTFESTCHALLENGE_OFFSET UNITYSDK_OFFSET(0x1AE50670)
#define RPG_CLIENT_FIGHTFESTMODULE_SAVELINEUPSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1AE522B0)
#define RPG_CLIENT_FIGHTFESTMODULE_SET_CHALLENGELEVELDATAMAP_OFFSET UNITYSDK_OFFSET(0x1AE521E0)
#define RPG_CLIENT_FIGHTFESTMODULE_SET_CHALLENGELEVELRANKLIMIT_OFFSET UNITYSDK_OFFSET(0x1AE52200)
#define RPG_CLIENT_FIGHTFESTMODULE_SET_CHALLENGERESULTINFO_OFFSET UNITYSDK_OFFSET(0x1AE52250)
#define RPG_CLIENT_FIGHTFESTMODULE_SET_COINNUM_OFFSET UNITYSDK_OFFSET(0x1AE5AE70)
#define RPG_CLIENT_FIGHTFESTMODULE_SET_CURSCORE_OFFSET UNITYSDK_OFFSET(0x1AE56D80)
#define RPG_CLIENT_FIGHTFESTMODULE_SET_INBATTLECOACHSKILLS_OFFSET UNITYSDK_OFFSET(0x1AE4F190)
#define RPG_CLIENT_FIGHTFESTMODULE_SET_INBATTLEFIGHTFESTEVENTID_OFFSET UNITYSDK_OFFSET(0x1AE4F170)
#define RPG_CLIENT_FIGHTFESTMODULE_SET_INBATTLEFIGHTFESTID_OFFSET UNITYSDK_OFFSET(0x1AE4F150)
#define RPG_CLIENT_FIGHTFESTMODULE_SET_INBATTLEFIGHTFESTTYPE_OFFSET UNITYSDK_OFFSET(0x1AE4F130)
#define RPG_CLIENT_FIGHTFESTMODULE_SET_LOCKEDAVATARSKILLEVENTIDS_OFFSET UNITYSDK_OFFSET(0x1AE56DC0)
#define RPG_CLIENT_FIGHTFESTMODULE_SET_SCOREPHASEIDS_OFFSET UNITYSDK_OFFSET(0x1AE56DA0)
#define RPG_CLIENT_FIGHTFESTMODULE_SET_WORLDLEVELTORECOMMENDLEVELDICT_OFFSET UNITYSDK_OFFSET(0x1AE52220)
#define RPG_CLIENT_FIGHTFESTMODULE_SYNCINBATTLEFIGHTFEST_OFFSET UNITYSDK_OFFSET(0x1AE4EFD0)
#define RPG_CLIENT_FIGHTFESTMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x1AE50C80)
#define RPG_CLIENT_FIGHTFESTMODULE_TRYSETAUTOSHOWCHALLENGELEVELID_OFFSET UNITYSDK_OFFSET(0x1AE50610)
#define RPG_CLIENT_FIGHTFESTMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1AE59ED0)
#define RPG_CLIENT_FIGHTFESTMODULE__ADDSINGLELEVELDATA_OFFSET UNITYSDK_OFFSET(0x1AE51F90)
#define RPG_CLIENT_FIGHTFESTMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE5BFC0)
#define RPG_CLIENT_FIGHTFESTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE5BB60)
#define RPG_CLIENT_FIGHTFESTMODULE__DISPOSECHALLENGELEVELS_OFFSET UNITYSDK_OFFSET(0x1AE52040)
#define RPG_CLIENT_FIGHTFESTMODULE__DISPOSECOACHSKILLS_OFFSET UNITYSDK_OFFSET(0x1AE59510)
#define RPG_CLIENT_FIGHTFESTMODULE__DISPOSERACES_OFFSET UNITYSDK_OFFSET(0x1AE56010)
#define RPG_CLIENT_FIGHTFESTMODULE__DISPOSESPECIALINVITEEARLYACCESSCHECKER_OFFSET UNITYSDK_OFFSET(0x1AE57790)
#define RPG_CLIENT_FIGHTFESTMODULE__GETAVATARLISTFROMIDLIST_OFFSET UNITYSDK_OFFSET(0x1AE4F830)
#define RPG_CLIENT_FIGHTFESTMODULE__GETDEPENDANTMAINMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x1AE5AC00)
#define RPG_CLIENT_FIGHTFESTMODULE__GETDEPENDANTSUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x1AE5A6B0)
#define RPG_CLIENT_FIGHTFESTMODULE__GETEVENTIDBYRACEID_OFFSET UNITYSDK_OFFSET(0x1AE52D60)
#define RPG_CLIENT_FIGHTFESTMODULE__GETLASTUNLOCKEDSCOREPHASE_OFFSET UNITYSDK_OFFSET(0x1AE56220)
#define RPG_CLIENT_FIGHTFESTMODULE__INITCHALLENGELEVELRANK_OFFSET UNITYSDK_OFFSET(0x1AE51C20)
#define RPG_CLIENT_FIGHTFESTMODULE__INITCHALLENGELEVELS_OFFSET UNITYSDK_OFFSET(0x1AE51A20)
#define RPG_CLIENT_FIGHTFESTMODULE__INITCOACHSKILLS_OFFSET UNITYSDK_OFFSET(0x1AE59220)
#define RPG_CLIENT_FIGHTFESTMODULE__INITLEVELDATAS_OFFSET UNITYSDK_OFFSET(0x1AE51A80)
#define RPG_CLIENT_FIGHTFESTMODULE__INITPAPERS_OFFSET UNITYSDK_OFFSET(0x1AE52EE0)
#define RPG_CLIENT_FIGHTFESTMODULE__INITPASSIVESKILLUNLOCKHINTCHECKER_OFFSET UNITYSDK_OFFSET(0x1AE59460)
#define RPG_CLIENT_FIGHTFESTMODULE__INITPHASES_OFFSET UNITYSDK_OFFSET(0x1AE541F0)
#define RPG_CLIENT_FIGHTFESTMODULE__INITRACES_OFFSET UNITYSDK_OFFSET(0x1AE54BA0)
#define RPG_CLIENT_FIGHTFESTMODULE__INITRECOMMENDLEVEL_OFFSET UNITYSDK_OFFSET(0x1AE51DE0)
#define RPG_CLIENT_FIGHTFESTMODULE__INITSPECIALINVITEEARLYACCESSCHECKER_OFFSET UNITYSDK_OFFSET(0x1AE57570)
#define RPG_CLIENT_FIGHTFESTMODULE__ISALLCHALLENGEQUESTGOT_OFFSET UNITYSDK_OFFSET(0x1AE51810)
#define RPG_CLIENT_FIGHTFESTMODULE__ONFIGHTFESTSCOREUPDATENOTIFY_OFFSET UNITYSDK_OFFSET(0x1AE5AFA0)
#define RPG_CLIENT_FIGHTFESTMODULE__ONFIGHTFESTUNLOCKSKILLNOTIFY_OFFSET UNITYSDK_OFFSET(0x1AE596D0)
#define RPG_CLIENT_FIGHTFESTMODULE__ONFIGHTFESTUPDATECHALLENGERECORDNOTIFY_OFFSET UNITYSDK_OFFSET(0x1AE50F20)
#define RPG_CLIENT_FIGHTFESTMODULE__ONFIGHTFESTUPDATECOINNOTIFY_OFFSET UNITYSDK_OFFSET(0x1AE5AF20)
#define RPG_CLIENT_FIGHTFESTMODULE__ONGETFIGHTFESTDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1AE5ADA0)
#define RPG_CLIENT_FIGHTFESTMODULE__RECORDINBATTLEACTIVECOACHTYPE_OFFSET UNITYSDK_OFFSET(0x1AE4F0B0)
#define RPG_CLIENT_FIGHTFESTMODULE__RECORDLINEUPSAVEDATA_1_OFFSET UNITYSDK_OFFSET(0x1AE50160)
#define RPG_CLIENT_FIGHTFESTMODULE__RECORDLINEUPSAVEDATA_OFFSET UNITYSDK_OFFSET(0x1AE52380)
#define RPG_CLIENT_FIGHTFESTMODULE__SENDINITREQUEST_OFFSET UNITYSDK_OFFSET(0x1AE5A220)
#define RPG_CLIENT_FIGHTFESTMODULE__SYNCCHALLENGE_OFFSET UNITYSDK_OFFSET(0x1AE51290)
#define RPG_CLIENT_FIGHTFESTMODULE__SYNCSCORE_OFFSET UNITYSDK_OFFSET(0x1AE560A0)
#define RPG_CLIENT_FIGHTFESTMODULE__SYNCSINGLECHALLENGE_OFFSET UNITYSDK_OFFSET(0x1AE51730)
#define RPG_CLIENT_FIGHTFESTMODULE__SYNCUNLOCKEDCOACHSKILLS_OFFSET UNITYSDK_OFFSET(0x1AE59870)
#define RPG_CLIENT_FIGHTFESTMODULE___SENDINITREQUEST_B__162_0_OFFSET UNITYSDK_OFFSET(0x1AE5C0F0)

namespace RPG::Client
{
	inline static constexpr unsigned int FightFestModule_TypeDefinitionIndex = 64249;

	class FightFestModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>** StaticGet__SpecialInviteEarlyAccessPhase2Conditions()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FightFestModule_TypeDefinitionIndex)->GetStaticField(0xF8E0);
		}
		// static const ::System::Int32 _SaveDataAvatarCount = 0x4; // 0x0
		// static const ::System::Int32 _SaveDataSkillCount = 0x2; // 0x0
		// static const ::System::String* _PassiveSkillUnlockHintConstKey; // 0x0
		// static const ::System::UInt32 OFFER_TYPE = 0x4; // 0x0
		// static const ::System::UInt32 ACTIVITY_REWARD_ID = 0xC362; // 0x0
		::System::Collections::Generic::List_1<::System::UInt32>* _LockedAvatarSkillEventIDs_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _UnChallengeSeenLevelIDs; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::FightFestRaceData*>* _RaceDatas; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::FightFestChallengeLevelData*>* _ChallengeLevelDataMap_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::FightFestCoachSkill*>* _UnSeenCoachSkills; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _ScorePhaseIDs_k__BackingField; // 0x38
		::RPG::Client::FightFestChallengeResultInfo _ChallengeResultInfo_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::FightFestScoreRace*>* _UnSeenScoreRaces; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::FightFestPaper*>* Papers; // 0x68
		::RPG::Client::ExprConditionChecker* _PassiveSkillUnlockHintChecker; // 0x70
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ActivityRank, ::System::UInt32>* _ChallengeLevelRankLimit_k__BackingField; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::FightFestScoreRace*>*>* _ScoreRaces; // 0x80
		::System::Collections::Generic::List_1<::System::UInt32>* _InBattleCoachSkills_k__BackingField; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _WorldLevelToRecommendLevelDict_k__BackingField; // 0x90
		::System::Collections::Generic::List_1<::System::UInt32>* _FinishedQuestIDs; // 0x98
		::System::Collections::Generic::List_1<::RPG::Client::FightFestPhase*>* Phases; // 0xA0
		::System::Collections::Generic::List_1<::RPG::Client::FightFestCoachSkill*>* CoachSkills; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::ExprConditionChecker*>* _SpecialInviteEarlyAccessCheckerMap; // 0xB0
		::System::Collections::Generic::List_1<::RPG::Client::FightFestPaperInterview*>* PaperInterviews; // 0xB8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::FightFestMainRace*>*>* _MainRaces; // 0xC0
		::Struct_2_CEE7CE649BE83DBF _RestartInfo; // 0xC8
		::RPG::Client::FightFestLineupSnapShot* _LineupSnapShot; // 0xE0
		::System::Nullable_1<::System::UInt32> _AutoShowChallengeLevelID; // 0xE8
		::System::Boolean _IsMissionDataReady; // 0xF0
		::System::Boolean _IsFightFestDataReady; // 0xF1
		::System::UInt32 _InBattleFightFestID_k__BackingField; // 0xF4
		::System::UInt32 _UnlockPaperQuestID; // 0xF8
		::System::UInt32 CoinItemID; // 0xFC
		::Enum_3_4608E37A1B3D374A_16 _InBattleFightFestType_k__BackingField; // 0x100
		::System::UInt32 _InBattleFightFestEventID_k__BackingField; // 0x104
		::System::UInt32 _CurScore_k__BackingField; // 0x108
		::System::UInt32 _UnlockChallengeQuestID; // 0x10C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__CCTOR_OFFSET))();
		}

		::System::Void SyncInBattleFightFest(::Class_1_E4D4FA1CB2E4394F* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E4D4FA1CB2E4394F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_SYNCINBATTLEFIGHTFEST_OFFSET))(this, a1);
		}

		::System::Void ClearInBattleFightFest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_CLEARINBATTLEFIGHTFEST_OFFSET))(this);
		}

		::System::Void _RecordInBattleActiveCoachType(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__RECORDINBATTLEACTIVECOACHTYPE_OFFSET))(this, a1);
		}

		::Enum_3_4608E37A1B3D374A_16 get_InBattleFightFestType()
		{
			return ((::Enum_3_4608E37A1B3D374A_16(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GET_INBATTLEFIGHTFESTTYPE_OFFSET))(this);
		}

		::System::Void set_InBattleFightFestType(::Enum_3_4608E37A1B3D374A_16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_16))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_SET_INBATTLEFIGHTFESTTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_InBattleFightFestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GET_INBATTLEFIGHTFESTID_OFFSET))(this);
		}

		::System::Void set_InBattleFightFestID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_SET_INBATTLEFIGHTFESTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_InBattleFightFestEventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GET_INBATTLEFIGHTFESTEVENTID_OFFSET))(this);
		}

		::System::Void set_InBattleFightFestEventID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_SET_INBATTLEFIGHTFESTEVENTID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_InBattleCoachSkills()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GET_INBATTLECOACHSKILLS_OFFSET))(this);
		}

		::System::Void set_InBattleCoachSkills(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_SET_INBATTLECOACHSKILLS_OFFSET))(this, a1);
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

		::RPG::Client::FightFestChallengeLevelData* GetChallengeLevelDataByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::FightFestChallengeLevelData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETCHALLENGELEVELDATABYID_OFFSET))(this, a1);
		}

		::RPG::GameCore::ActivityRank GetRank(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityRank(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETRANK_OFFSET))(this, a1);
		}

		::System::UInt32 GetRecommendLevelByWorldLevel(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETRECOMMENDLEVELBYWORLDLEVEL_OFFSET))(this, a1);
		}

		::System::Void EnterFightFestChallenge(::RPG::Client::FightFestChallengeLevelData* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestChallengeLevelData*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_ENTERFIGHTFESTCHALLENGE_OFFSET))(this, a1, a2, a3);
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

		::System::Void TrySetAutoShowChallengeLevelID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_TRYSETAUTOSHOWCHALLENGELEVELID_OFFSET))(this, a1);
		}

		::System::Void _OnFightFestUpdateChallengeRecordNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__ONFIGHTFESTUPDATECHALLENGERECORDNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _SyncChallenge(::System::Collections::Generic::IEnumerable_1<::Class_1_1CBA230307F9C289_31*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_1CBA230307F9C289_31*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__SYNCCHALLENGE_OFFSET))(this, a1);
		}

		::System::Void _SyncSingleChallenge(::Class_1_1CBA230307F9C289_31* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_31*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__SYNCSINGLECHALLENGE_OFFSET))(this, a1);
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

		::System::Void _AddSingleLevelData(::RPG::Client::FightFestChallengeLevelData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestChallengeLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__ADDSINGLELEVELDATA_OFFSET))(this, a1);
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

		::System::Void set_ChallengeLevelDataMap(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::FightFestChallengeLevelData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::FightFestChallengeLevelData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_SET_CHALLENGELEVELDATAMAP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ActivityRank, ::System::UInt32>* get_ChallengeLevelRankLimit()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ActivityRank, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GET_CHALLENGELEVELRANKLIMIT_OFFSET))(this);
		}

		::System::Void set_ChallengeLevelRankLimit(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ActivityRank, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ActivityRank, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_SET_CHALLENGELEVELRANKLIMIT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_WorldLevelToRecommendLevelDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GET_WORLDLEVELTORECOMMENDLEVELDICT_OFFSET))(this);
		}

		::System::Void set_WorldLevelToRecommendLevelDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_SET_WORLDLEVELTORECOMMENDLEVELDICT_OFFSET))(this, a1);
		}

		::RPG::Client::FightFestChallengeResultInfo get_ChallengeResultInfo()
		{
			return ((::RPG::Client::FightFestChallengeResultInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GET_CHALLENGERESULTINFO_OFFSET))(this);
		}

		::System::Void set_ChallengeResultInfo(::RPG::Client::FightFestChallengeResultInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestChallengeResultInfo))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_SET_CHALLENGERESULTINFO_OFFSET))(this, a1);
		}

		::RPG::Client::FightFestLineupSnapShot* GetCurLineupSnapShot()
		{
			return ((::RPG::Client::FightFestLineupSnapShot*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETCURLINEUPSNAPSHOT_OFFSET))(this);
		}

		::System::Void ClearCurLineupSnapShot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_CLEARCURLINEUPSNAPSHOT_OFFSET))(this);
		}

		::System::Void SaveLineupSnapShot(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_SAVELINEUPSNAPSHOT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean EnterChallengeBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_ENTERCHALLENGEBATTLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_32*>* _GetAvatarListFromIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_32*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__GETAVATARLISTFROMIDLIST_OFFSET))(this, a1);
		}

		::RPG::Client::FightFestLineupSnapShot* GetLineupSaveData(::System::UInt32 a1)
		{
			return ((::RPG::Client::FightFestLineupSnapShot*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETLINEUPSAVEDATA_OFFSET))(this, a1);
		}

		::System::Void _RecordLineupSaveData(::RPG::Client::FightFestLineupSnapShot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestLineupSnapShot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__RECORDLINEUPSAVEDATA_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::System::Boolean, ::System::UInt32> _GetEventIDByRaceID(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::ValueTuple_2<::System::Boolean, ::System::UInt32>(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__GETEVENTIDBYRACEID_OFFSET))(this, a1, a2);
		}

		::System::Void _RecordLineupSaveData_1(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__RECORDLINEUPSAVEDATA_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _InitPapers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__INITPAPERS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAvailablePaperIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETAVAILABLEPAPERIDS_OFFSET))(this);
		}

		::RPG::Client::FightFestPaper* GetPrevAvailablePaper(::System::UInt32 a1)
		{
			return ((::RPG::Client::FightFestPaper*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETPREVAVAILABLEPAPER_OFFSET))(this, a1);
		}

		::RPG::Client::FightFestPaper* GetNextAvailablePaper(::System::UInt32 a1)
		{
			return ((::RPG::Client::FightFestPaper*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETNEXTAVAILABLEPAPER_OFFSET))(this, a1);
		}

		::System::Boolean HasPrevAvailablePaper(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_HASPREVAVAILABLEPAPER_OFFSET))(this, a1);
		}

		::System::Boolean HasNextAvailablePaper(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_HASNEXTAVAILABLEPAPER_OFFSET))(this, a1);
		}

		::RPG::Client::FightFestPaper* GetPaper(::System::UInt32 a1)
		{
			return ((::RPG::Client::FightFestPaper*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETPAPER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FightFestPaperInterview*>* GetPaperInterviews(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FightFestPaperInterview*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETPAPERINTERVIEWS_OFFSET))(this, a1);
		}

		::System::Void _InitPhases()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__INITPHASES_OFFSET))(this);
		}

		::RPG::Client::FightFestPhase* GetCurrentPhase()
		{
			return ((::RPG::Client::FightFestPhase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETCURRENTPHASE_OFFSET))(this);
		}

		::RPG::Client::SubMissionData* FindStartingSubMission(::RPG::Client::FightFestPhase* a1)
		{
			return ((::RPG::Client::SubMissionData*(*)(::PVOID, ::RPG::Client::FightFestPhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_FINDSTARTINGSUBMISSION_OFFSET))(this, a1);
		}

		::RPG::Client::FightFestPhase* GetPhaseByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::FightFestPhase*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETPHASEBYID_OFFSET))(this, a1);
		}

		::System::Void _InitRaces()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__INITRACES_OFFSET))(this);
		}

		::System::Void _DisposeRaces()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__DISPOSERACES_OFFSET))(this);
		}

		::System::Void _SyncScore(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__SYNCSCORE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::FightFestPhase* _GetLastUnlockedScorePhase()
		{
			return ((::RPG::Client::FightFestPhase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__GETLASTUNLOCKEDSCOREPHASE_OFFSET))(this);
		}

		::RPG::Client::FightFestRaceData* GetRaceData(::System::UInt32 a1)
		{
			return ((::RPG::Client::FightFestRaceData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETRACEDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FightFestScoreRace*>* GetScoreRaces(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FightFestScoreRace*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETSCORERACES_OFFSET))(this, a1);
		}

		::RPG::Client::FightFestScoreRace* GetCurScoreRace()
		{
			return ((::RPG::Client::FightFestScoreRace*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETCURSCORERACE_OFFSET))(this);
		}

		::System::UInt32 get_CurScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GET_CURSCORE_OFFSET))(this);
		}

		::System::Void set_CurScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_SET_CURSCORE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ScorePhaseIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GET_SCOREPHASEIDS_OFFSET))(this);
		}

		::System::Void set_ScorePhaseIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_SET_SCOREPHASEIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_LockedAvatarSkillEventIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GET_LOCKEDAVATARSKILLEVENTIDS_OFFSET))(this);
		}

		::System::Void set_LockedAvatarSkillEventIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_SET_LOCKEDAVATARSKILLEVENTIDS_OFFSET))(this, a1);
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

		::System::Void RecordCoachSkillSeenByType(::RPG::GameCore::FightFestCoachType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FightFestCoachType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_RECORDCOACHSKILLSEENBYTYPE_OFFSET))(this, a1);
		}

		::System::Void RecordCoachSkillSeen(::RPG::Client::FightFestCoachSkill* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestCoachSkill*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_RECORDCOACHSKILLSEEN_OFFSET))(this, a1);
		}

		::System::Void RecordAllChallengeLevelSeenUnlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_RECORDALLCHALLENGELEVELSEENUNLOCK_OFFSET))(this);
		}

		::System::Void RecordChallengeLevelSeenUnlock(::RPG::Client::FightFestChallengeLevelData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestChallengeLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_RECORDCHALLENGELEVELSEENUNLOCK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetUnSeenChallengeLevelIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETUNSEENCHALLENGELEVELIDS_OFFSET))(this);
		}

		::System::Void RecordScoreRaceSeenAll(::RPG::Client::FightFestScoreRace* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestScoreRace*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_RECORDSCORERACESEENALL_OFFSET))(this, a1);
		}

		::System::Void RecordScoreRaceSeen(::RPG::Client::FightFestScoreRace* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestScoreRace*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_RECORDSCORERACESEEN_OFFSET))(this, a1);
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

		::RPG::Client::FightFestCoachSkill* GetCoachSkillByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::FightFestCoachSkill*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETCOACHSKILLBYID_OFFSET))(this, a1);
		}

		::System::Void _InitCoachSkills()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__INITCOACHSKILLS_OFFSET))(this);
		}

		::System::Void _DisposeCoachSkills()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__DISPOSECOACHSKILLS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FightFestCoachSkill*>* GetCoachSkills(::RPG::GameCore::FightFestCoachType a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FightFestCoachSkill*>*(*)(::PVOID, ::RPG::GameCore::FightFestCoachType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETCOACHSKILLS_OFFSET))(this, a1);
		}

		::System::Void _OnFightFestUnlockSkillNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__ONFIGHTFESTUNLOCKSKILLNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _SyncUnlockedCoachSkills(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__SYNCUNLOCKEDCOACHSKILLS_OFFSET))(this, a1);
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

		::System::Void _OnGetFightFestDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__ONGETFIGHTFESTDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFightFestUpdateCoinNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__ONFIGHTFESTUPDATECOINNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFightFestScoreUpdateNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE__ONFIGHTFESTSCOREUPDATENOTIFY_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_CoinNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GET_COINNUM_OFFSET))(this);
		}

		::System::Void set_CoinNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_SET_COINNUM_OFFSET))(this, a1);
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

		::RPG::Client::FightFestProgress GetCoachSkillProgress(::RPG::GameCore::FightFestCoachType a1)
		{
			return ((::RPG::Client::FightFestProgress(*)(::PVOID, ::RPG::GameCore::FightFestCoachType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTMODULE_GETCOACHSKILLPROGRESS_OFFSET))(this, a1);
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
	};
}
