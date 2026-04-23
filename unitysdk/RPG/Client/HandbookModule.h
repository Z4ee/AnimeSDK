#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/GuideChallengeType.h"

class Class_1_21C7581DFE99F091_24;
class Class_1_8C2974ED0C175887;
class Class_1_EBB10EC01CCC4716_16;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class AvatarFarmGuideData; }
namespace RPG::Client { class HandbookChapterData; }
namespace RPG::Client { class HandbookChronicleDisplayData; }
namespace RPG::Client { class HandbookGuideData; }
namespace RPG::Client { class HandbookRogueData; }
namespace RPG::Client { class MissionChronicleMainPathData; }
namespace RPG::Client { class MissionChronicleSubPathData; }
namespace RPG::Client { class PenaconyEndmostChroniclePathData; }
namespace RPG::Client { class PreAvatarGrowthMaterialData; }
namespace RPG::Client { class PreReleaseCharaParam; }
namespace RPG::Client { class RogueTournRelicCocoonData; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class CocoonRow; }
namespace RPG::GameCore { class DailyActiveConfigRow; }
namespace RPG::GameCore { class GameplayGuideTabConfigRow; }
namespace RPG::GameCore { class GuideChallengeDataConfigRow; }
namespace RPG::GameCore { class GuideRogueTabRow; }
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class MissionChronicleConfig; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HANDBOOKMODULE_ADDGRIDFIGHTSCOREREWARDDATATIMER_OFFSET UNITYSDK_OFFSET(0xA5F8F80)
#define RPG_CLIENT_HANDBOOKMODULE_ADDROGUESCOREREWARDDATATIMER_OFFSET UNITYSDK_OFFSET(0xA5F90E0)
#define RPG_CLIENT_HANDBOOKMODULE_CHECKISHANDBOOKNEWESTROGUEBETANEW_OFFSET UNITYSDK_OFFSET(0xA5F9730)
#define RPG_CLIENT_HANDBOOKMODULE_CLEARDISABLEDAVATARLIST_OFFSET UNITYSDK_OFFSET(0xA5F1700)
#define RPG_CLIENT_HANDBOOKMODULE_DAILYACTIVEINITIATED_OFFSET UNITYSDK_OFFSET(0xA5EF720)
#define RPG_CLIENT_HANDBOOKMODULE_DISABLEALLPREAVATAR_OFFSET UNITYSDK_OFFSET(0xA5F1770)
#define RPG_CLIENT_HANDBOOKMODULE_EXISTINGUNSEENPRERELEASEAVATAR_OFFSET UNITYSDK_OFFSET(0xA5E9B90)
#define RPG_CLIENT_HANDBOOKMODULE_GENERATECHAPTERDATA_OFFSET UNITYSDK_OFFSET(0xA5ECF00)
#define RPG_CLIENT_HANDBOOKMODULE_GETALLGUIDEDATAS_OFFSET UNITYSDK_OFFSET(0xA5F6780)
#define RPG_CLIENT_HANDBOOKMODULE_GETCHAPTERDATALIST_OFFSET UNITYSDK_OFFSET(0xA5ED690)
#define RPG_CLIENT_HANDBOOKMODULE_GETCHAPTERDATA_OFFSET UNITYSDK_OFFSET(0xA5ED6D0)
#define RPG_CLIENT_HANDBOOKMODULE_GETDAILYACTIVEREWARDS_OFFSET UNITYSDK_OFFSET(0xA5EF8B0)
#define RPG_CLIENT_HANDBOOKMODULE_GETDAILYQUESTIDS_OFFSET UNITYSDK_OFFSET(0xA5EF630)
#define RPG_CLIENT_HANDBOOKMODULE_GETDAILYQUESTSORTVALUE_OFFSET UNITYSDK_OFFSET(0xA5EF670)
#define RPG_CLIENT_HANDBOOKMODULE_GETGUIDECHALLENGEDATACONFIGBYCHALLENGEID_OFFSET UNITYSDK_OFFSET(0xA5ECDB0)
#define RPG_CLIENT_HANDBOOKMODULE_GETGUIDECHALLENGEITEMROWS_OFFSET UNITYSDK_OFFSET(0xA5EC760)
#define RPG_CLIENT_HANDBOOKMODULE_GETGUIDECHALLENGETABIDS_OFFSET UNITYSDK_OFFSET(0xA5EC5A0)
#define RPG_CLIENT_HANDBOOKMODULE_GETGUIDECHALLENGEUNLOCKMAINMISSIONIDS_OFFSET UNITYSDK_OFFSET(0xA5ECC30)
#define RPG_CLIENT_HANDBOOKMODULE_GETGUIDECHALLENGEUNLOCKSUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0xA5ECD10)
#define RPG_CLIENT_HANDBOOKMODULE_GETGUIDEDATA_OFFSET UNITYSDK_OFFSET(0xA5EABA0)
#define RPG_CLIENT_HANDBOOKMODULE_GETGUIDEROGUEDATA_OFFSET UNITYSDK_OFFSET(0xA5F8460)
#define RPG_CLIENT_HANDBOOKMODULE_GETHANDBOOKROGUENEWTYPEIDLIST_OFFSET UNITYSDK_OFFSET(0xA5F9240)
#define RPG_CLIENT_HANDBOOKMODULE_GETLATESTUPDATEDCHAPTERID_OFFSET UNITYSDK_OFFSET(0xA5EECE0)
#define RPG_CLIENT_HANDBOOKMODULE_GETLATESTUPDATEDMAINPATHID_OFFSET UNITYSDK_OFFSET(0xA5EE6E0)
#define RPG_CLIENT_HANDBOOKMODULE_GETMATERIALGUIDEIDLISTBYAVATAR_OFFSET UNITYSDK_OFFSET(0xA5E7C90)
#define RPG_CLIENT_HANDBOOKMODULE_GETORCREATEPRERELEASECHARAPARAM_OFFSET UNITYSDK_OFFSET(0xA5F1520)
#define RPG_CLIENT_HANDBOOKMODULE_GETPREAVATARGROWTHMATERIALDATA_OFFSET UNITYSDK_OFFSET(0xA5F1B80)
#define RPG_CLIENT_HANDBOOKMODULE_GETPRERELEASECHARAPARAM_OFFSET UNITYSDK_OFFSET(0xA5E6430)
#define RPG_CLIENT_HANDBOOKMODULE_GETQUICKGUIDEEXPIRETIME_OFFSET UNITYSDK_OFFSET(0xA5F6A80)
#define RPG_CLIENT_HANDBOOKMODULE_GETQUICKGUIDENEXTBEGINTIME_OFFSET UNITYSDK_OFFSET(0xA5F6C00)
#define RPG_CLIENT_HANDBOOKMODULE_GETSHOWGUIDEDATASFORNOTLOCKEDBYFARMADVANCELIMIT_OFFSET UNITYSDK_OFFSET(0xA5F6580)
#define RPG_CLIENT_HANDBOOKMODULE_GETSHOWGUIDEDATASFORRELIC_OFFSET UNITYSDK_OFFSET(0xA5E4620)
#define RPG_CLIENT_HANDBOOKMODULE_GETSHOWGUIDEDATASFORROGUERELIC_OFFSET UNITYSDK_OFFSET(0xA5E4C20)
#define RPG_CLIENT_HANDBOOKMODULE_GETSHOWGUIDEDATAS_OFFSET UNITYSDK_OFFSET(0xA5F61D0)
#define RPG_CLIENT_HANDBOOKMODULE_GETSHOWROGUEDATALIST_OFFSET UNITYSDK_OFFSET(0xA5F8590)
#define RPG_CLIENT_HANDBOOKMODULE_GETSORTEDCHRONICLEDISPLAYDATALIST_OFFSET UNITYSDK_OFFSET(0xA5EB4B0)
#define RPG_CLIENT_HANDBOOKMODULE_GETSORTEDMAINPATHLIST_OFFSET UNITYSDK_OFFSET(0xA5ED290)
#define RPG_CLIENT_HANDBOOKMODULE_GETSORTEDSUBPATHLIST_OFFSET UNITYSDK_OFFSET(0xA5EDB40)
#define RPG_CLIENT_HANDBOOKMODULE_GET_ACTIVEPOINTITEMID_OFFSET UNITYSDK_OFFSET(0xA5F0750)
#define RPG_CLIENT_HANDBOOKMODULE_GET_ACTIVEPOINT_OFFSET UNITYSDK_OFFSET(0xA5F06D0)
#define RPG_CLIENT_HANDBOOKMODULE_GET_ALLROGUETYPEROWLIST_OFFSET UNITYSDK_OFFSET(0xA5F95F0)
#define RPG_CLIENT_HANDBOOKMODULE_GET_GRIDFIGHTACTIVITYPAGEGOTOID_OFFSET UNITYSDK_OFFSET(0xA5F9EB0)
#define RPG_CLIENT_HANDBOOKMODULE_GET_GROWTHGUIDEUNLOCKID_OFFSET UNITYSDK_OFFSET(0xA5F0FE0)
#define RPG_CLIENT_HANDBOOKMODULE_GET_HANDBOOKCHRONICLEONGOINGMISSIONID_OFFSET UNITYSDK_OFFSET(0xA5EF610)
#define RPG_CLIENT_HANDBOOKMODULE_GET_MAXACTIVEPOINT_OFFSET UNITYSDK_OFFSET(0xA5F0730)
#define RPG_CLIENT_HANDBOOKMODULE_GET_REDDOTDIRTYIDSCACHE_OFFSET UNITYSDK_OFFSET(0xA5F75F0)
#define RPG_CLIENT_HANDBOOKMODULE_GET_ROGUEACTIVITYPAGEGOTOID_OFFSET UNITYSDK_OFFSET(0xA5F9DA0)
#define RPG_CLIENT_HANDBOOKMODULE_GET_ROGUEREDDOTDIRTYIDSCACHE_OFFSET UNITYSDK_OFFSET(0xA5F9D80)
#define RPG_CLIENT_HANDBOOKMODULE_GET_TAKENACTIVELEVELS_OFFSET UNITYSDK_OFFSET(0xA5F0710)
#define RPG_CLIENT_HANDBOOKMODULE_GET_TODAYWORLDLEVEL_OFFSET UNITYSDK_OFFSET(0xA5F06F0)
#define RPG_CLIENT_HANDBOOKMODULE_GET__ENDMOSTUNLOCKSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0xA5EF2E0)
#define RPG_CLIENT_HANDBOOKMODULE_GOTOGUIDE_OFFSET UNITYSDK_OFFSET(0xA5F6D80)
#define RPG_CLIENT_HANDBOOKMODULE_GOTOTOGUIDEGRIDFIGHTENTRANCE_OFFSET UNITYSDK_OFFSET(0xA5F8F40)
#define RPG_CLIENT_HANDBOOKMODULE_GOTOTOGUIDEROGUEDLC_OFFSET UNITYSDK_OFFSET(0xA5F8A50)
#define RPG_CLIENT_HANDBOOKMODULE_GOTOTOGUIDEROGUENOUS_OFFSET UNITYSDK_OFFSET(0xA5F8B60)
#define RPG_CLIENT_HANDBOOKMODULE_GOTOTOGUIDEROGUETOURNENTRANCE_OFFSET UNITYSDK_OFFSET(0xA5F8C70)
#define RPG_CLIENT_HANDBOOKMODULE_GOTOTOGUIDEROGUETOURNRELICCOCOON_OFFSET UNITYSDK_OFFSET(0xA5F8E80)
#define RPG_CLIENT_HANDBOOKMODULE_GOTOTOGUIDEROGUE_OFFSET UNITYSDK_OFFSET(0xA5F70C0)
#define RPG_CLIENT_HANDBOOKMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA5F9FC0)
#define RPG_CLIENT_HANDBOOKMODULE_ISAVATARUNSEENASPRESTATUS_OFFSET UNITYSDK_OFFSET(0xA5F2870)
#define RPG_CLIENT_HANDBOOKMODULE_ISCHRONICLEUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA5EE520)
#define RPG_CLIENT_HANDBOOKMODULE_ISCOLLABORATIONCHARA_OFFSET UNITYSDK_OFFSET(0xA5F0D00)
#define RPG_CLIENT_HANDBOOKMODULE_ISDISABLEDAVATAR_OFFSET UNITYSDK_OFFSET(0xA5F18F0)
#define RPG_CLIENT_HANDBOOKMODULE_ISENDMOSTMAINPATHUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA5EBF70)
#define RPG_CLIENT_HANDBOOKMODULE_ISGUIDECHALLENGEITEMUNLOCK_OFFSET UNITYSDK_OFFSET(0xA5ECA30)
#define RPG_CLIENT_HANDBOOKMODULE_ISGUIDECHALLENGETABUNLOCK_OFFSET UNITYSDK_OFFSET(0xA5ECA90)
#define RPG_CLIENT_HANDBOOKMODULE_ISGUIDECHALLENGETYPESHOW_OFFSET UNITYSDK_OFFSET(0xA5ECAD0)
#define RPG_CLIENT_HANDBOOKMODULE_ISGUIDETABUNLOCK_OFFSET UNITYSDK_OFFSET(0xA5F71F0)
#define RPG_CLIENT_HANDBOOKMODULE_ISROGUEDLCUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA5F77D0)
#define RPG_CLIENT_HANDBOOKMODULE_ISROGUETABUNLOCK_OFFSET UNITYSDK_OFFSET(0xA5F7680)
#define RPG_CLIENT_HANDBOOKMODULE_ISROUGETOURNRELICUNLOCK_OFFSET UNITYSDK_OFFSET(0xA5E4A70)
#define RPG_CLIENT_HANDBOOKMODULE_ISUPRELEASINGCHARA_OFFSET UNITYSDK_OFFSET(0xA5F0770)
#define RPG_CLIENT_HANDBOOKMODULE_MARKLATESTUPDATEDNODESEEN_OFFSET UNITYSDK_OFFSET(0xA5EEE40)
#define RPG_CLIENT_HANDBOOKMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA5FA6F0)
#define RPG_CLIENT_HANDBOOKMODULE_PREPAREOPENCONDTIONMISSION_OFFSET UNITYSDK_OFFSET(0xA5F7980)
#define RPG_CLIENT_HANDBOOKMODULE_RECORDALLPRERELEASEAVATARSEEN_OFFSET UNITYSDK_OFFSET(0xA5F2410)
#define RPG_CLIENT_HANDBOOKMODULE_RECORDPRERELEASEAVATARSEEN_OFFSET UNITYSDK_OFFSET(0xA5F2580)
#define RPG_CLIENT_HANDBOOKMODULE_REFRESHGACHATIMEBYGUIDEIDS_OFFSET UNITYSDK_OFFSET(0xA5F59B0)
#define RPG_CLIENT_HANDBOOKMODULE_REFRESHGUIDEITEMTELEPORTS_OFFSET UNITYSDK_OFFSET(0xA5F6090)
#define RPG_CLIENT_HANDBOOKMODULE_REFRESHPRESTATUSAVATARFORRECORD_OFFSET UNITYSDK_OFFSET(0xA5F2B20)
#define RPG_CLIENT_HANDBOOKMODULE_REFRESHTELEPORTBYGUIDEIDS_OFFSET UNITYSDK_OFFSET(0xA5F5E70)
#define RPG_CLIENT_HANDBOOKMODULE_REQUESTALLPREAVATARDATAREFRESH_OFFSET UNITYSDK_OFFSET(0xA5F0E40)
#define RPG_CLIENT_HANDBOOKMODULE_REQUESTPREAVATARRELICDATAREFRESH_OFFSET UNITYSDK_OFFSET(0xA5F0FF0)
#define RPG_CLIENT_HANDBOOKMODULE_SENDPACKETSAFTERLOGINFINISHED_OFFSET UNITYSDK_OFFSET(0xA5FA2E0)
#define RPG_CLIENT_HANDBOOKMODULE_SETDISABLEDAVATARLIST_OFFSET UNITYSDK_OFFSET(0xA5F1590)
#define RPG_CLIENT_HANDBOOKMODULE_SETHANDBOOKNEWESTROGUEBETASEEN_OFFSET UNITYSDK_OFFSET(0xA5F98B0)
#define RPG_CLIENT_HANDBOOKMODULE_SETHANDBOOKROGUETYPENEWSEEN_OFFSET UNITYSDK_OFFSET(0xA5F9AA0)
#define RPG_CLIENT_HANDBOOKMODULE_SET_ACTIVEPOINTITEMID_OFFSET UNITYSDK_OFFSET(0xA5F0760)
#define RPG_CLIENT_HANDBOOKMODULE_SET_ACTIVEPOINT_OFFSET UNITYSDK_OFFSET(0xA5F06E0)
#define RPG_CLIENT_HANDBOOKMODULE_SET_HANDBOOKCHRONICLEONGOINGMISSIONID_OFFSET UNITYSDK_OFFSET(0xA5EF620)
#define RPG_CLIENT_HANDBOOKMODULE_SET_MAXACTIVEPOINT_OFFSET UNITYSDK_OFFSET(0xA5F0740)
#define RPG_CLIENT_HANDBOOKMODULE_SET_REDDOTDIRTYIDSCACHE_OFFSET UNITYSDK_OFFSET(0xA5F7600)
#define RPG_CLIENT_HANDBOOKMODULE_SET_ROGUEREDDOTDIRTYIDSCACHE_OFFSET UNITYSDK_OFFSET(0xA5F9D90)
#define RPG_CLIENT_HANDBOOKMODULE_SET_TAKENACTIVELEVELS_OFFSET UNITYSDK_OFFSET(0xA5F0720)
#define RPG_CLIENT_HANDBOOKMODULE_SET_TODAYWORLDLEVEL_OFFSET UNITYSDK_OFFSET(0xA5F0700)
#define RPG_CLIENT_HANDBOOKMODULE_STARTQUICKGUIDEREFRESHTIMER_OFFSET UNITYSDK_OFFSET(0xA5F7280)
#define RPG_CLIENT_HANDBOOKMODULE_STOPQUICKGUIDEREFRESHTIMER_OFFSET UNITYSDK_OFFSET(0xA5F74D0)
#define RPG_CLIENT_HANDBOOKMODULE_TAKEREWARD_OFFSET UNITYSDK_OFFSET(0xA5EF9C0)
#define RPG_CLIENT_HANDBOOKMODULE_VALIDATEGROWTHTARGET_OFFSET UNITYSDK_OFFSET(0xA5F1A10)
#define RPG_CLIENT_HANDBOOKMODULE__ADDMAINPATH_OFFSET UNITYSDK_OFFSET(0xA5ED7B0)
#define RPG_CLIENT_HANDBOOKMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA5FA550)
#define RPG_CLIENT_HANDBOOKMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA5FA3D0)
#define RPG_CLIENT_HANDBOOKMODULE__ADDPENACONYENDMOSTSUBPATH_OFFSET UNITYSDK_OFFSET(0xA5EF0A0)
#define RPG_CLIENT_HANDBOOKMODULE__ADDSUBPATH_OFFSET UNITYSDK_OFFSET(0xA5EEEB0)
#define RPG_CLIENT_HANDBOOKMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA5FA880)
#define RPG_CLIENT_HANDBOOKMODULE__FINDGUIDEIDBYMATERIALITEMBYAVATARID_OFFSET UNITYSDK_OFFSET(0xA5F4890)
#define RPG_CLIENT_HANDBOOKMODULE__FINDGUIDEIDBYMATERIALITEM_OFFSET UNITYSDK_OFFSET(0xA5F4D70)
#define RPG_CLIENT_HANDBOOKMODULE__GATHERLEVELUPMATERIALGUIDEIDBYAVATARID_OFFSET UNITYSDK_OFFSET(0xA5F2090)
#define RPG_CLIENT_HANDBOOKMODULE__GATHERLEVELUPMATERIALGUIDEIDBYITEMID_OFFSET UNITYSDK_OFFSET(0xA5F1C60)
#define RPG_CLIENT_HANDBOOKMODULE__GENERATEPENACONYENDMOSTSUBPATHLIST_OFFSET UNITYSDK_OFFSET(0xA5EE480)
#define RPG_CLIENT_HANDBOOKMODULE__GENERATESUBPATHLISTBYCONNECTION_OFFSET UNITYSDK_OFFSET(0xA5EE120)
#define RPG_CLIENT_HANDBOOKMODULE__GENERATESUBPATHLISTBYLOGICCONNECTION_OFFSET UNITYSDK_OFFSET(0xA5EDDC0)
#define RPG_CLIENT_HANDBOOKMODULE__GETALLGUIDEMISSIONCONDTIONLIST_OFFSET UNITYSDK_OFFSET(0xA5F7C20)
#define RPG_CLIENT_HANDBOOKMODULE__GETALLGUIDEROGUECONFIGIDLIST_OFFSET UNITYSDK_OFFSET(0xA5F8890)
#define RPG_CLIENT_HANDBOOKMODULE__GUIDEINIT_OFFSET UNITYSDK_OFFSET(0xA5F5650)
#define RPG_CLIENT_HANDBOOKMODULE__GUIDESENDPACKETSAFTERLOGINFINISHED_OFFSET UNITYSDK_OFFSET(0xA5F5970)
#define RPG_CLIENT_HANDBOOKMODULE__GUIDEUNINIT_OFFSET UNITYSDK_OFFSET(0xA5F58C0)
#define RPG_CLIENT_HANDBOOKMODULE__ISAVATARSHOULDDISPLAY_OFFSET UNITYSDK_OFFSET(0xA5F3650)
#define RPG_CLIENT_HANDBOOKMODULE__ISCURRENTFARMMATCHINGWORLDMATERIALBYAVATARID_OFFSET UNITYSDK_OFFSET(0xA5F5250)
#define RPG_CLIENT_HANDBOOKMODULE__ISCURRENTFARMMATCHINGWORLDMATERIALBYITEMID_OFFSET UNITYSDK_OFFSET(0xA5F5520)
#define RPG_CLIENT_HANDBOOKMODULE__ISMISSIONMAIN_OFFSET UNITYSDK_OFFSET(0xA5EF240)
#define RPG_CLIENT_HANDBOOKMODULE__ONCURRENTTRACKINGCHRONICLEMISSIONDATAPREPARED_OFFSET UNITYSDK_OFFSET(0xA5EF3C0)
#define RPG_CLIENT_HANDBOOKMODULE__ONDAILYACTIVEINFONOTIFY_OFFSET UNITYSDK_OFFSET(0xA5F0170)
#define RPG_CLIENT_HANDBOOKMODULE__ONGETDAILYACTIVEINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xA5EFB80)
#define RPG_CLIENT_HANDBOOKMODULE__ONGETPREAVATARACTIVITYLISTSCRSP_OFFSET UNITYSDK_OFFSET(0xA5F3FD0)
#define RPG_CLIENT_HANDBOOKMODULE__ONGETPREAVATARGROWTHINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xA5F3950)
#define RPG_CLIENT_HANDBOOKMODULE__ONONGINGMISSIONUPDATED_OFFSET UNITYSDK_OFFSET(0xA5ED5A0)
#define RPG_CLIENT_HANDBOOKMODULE__ONQUICKGUIDEREFRESHTIMER_OFFSET UNITYSDK_OFFSET(0xA5F7580)
#define RPG_CLIENT_HANDBOOKMODULE__ONSCHEDULECHANGED_OFFSET UNITYSDK_OFFSET(0xA5F47B0)
#define RPG_CLIENT_HANDBOOKMODULE__ONTAKEALLAPREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0xA5F03A0)
#define RPG_CLIENT_HANDBOOKMODULE__ONTAKEAPREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0xA5F02E0)
#define RPG_CLIENT_HANDBOOKMODULE__PREPARERELATIVEMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xA5EF460)
#define RPG_CLIENT_HANDBOOKMODULE__ROGUEINIT_OFFSET UNITYSDK_OFFSET(0xA5F7610)
#define RPG_CLIENT_HANDBOOKMODULE__SAFEGETHANDBOOKGUIDEDATA_OFFSET UNITYSDK_OFFSET(0xA5F57D0)
#define RPG_CLIENT_HANDBOOKMODULE__SAFEGETHANDBOOKROGUEDATA_OFFSET UNITYSDK_OFFSET(0xA5F84B0)
#define RPG_CLIENT_HANDBOOKMODULE__SETUPAVATARPARAMLISTLOCALPART_OFFSET UNITYSDK_OFFSET(0xA5F2FC0)
#define RPG_CLIENT_HANDBOOKMODULE__TRANSFERWITHCHECK_OFFSET UNITYSDK_OFFSET(0xA5F6DF0)
#define RPG_CLIENT_HANDBOOKMODULE__TRYUPDATEREFRESHTIMER_OFFSET UNITYSDK_OFFSET(0xA5F7300)
#define RPG_CLIENT_HANDBOOKMODULE__UPDATEACTIVEPOINT_OFFSET UNITYSDK_OFFSET(0xA5EFD30)
#define RPG_CLIENT_HANDBOOKMODULE__UPDATEACTIVEREWARDS_OFFSET UNITYSDK_OFFSET(0xA5EFDB0)
#define RPG_CLIENT_HANDBOOKMODULE__UPDATEDAILYACTIVEQUESTS_OFFSET UNITYSDK_OFFSET(0xA5F00D0)
#define RPG_CLIENT_HANDBOOKMODULE__UPDATEPREAVATARPARAM_OFFSET UNITYSDK_OFFSET(0xA5F3D40)
#define RPG_CLIENT_HANDBOOKMODULE__UPDATEUSERPREFSTATUS_OFFSET UNITYSDK_OFFSET(0xA5F2B80)
#define RPG_CLIENT_HANDBOOKMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA5FAC50)
#define RPG_CLIENT_HANDBOOKMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA5FADA0)
#define RPG_CLIENT_HANDBOOKMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA5FAD40)
#define RPG_CLIENT_HANDBOOKMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA5FACE0)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookModule_TypeDefinitionIndex = 60425;

	class HandbookModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::UInt32 _ChronicleTabUnlock = 0x5EB; // 0x0
		// static const ::System::UInt32 _FirstEndmostChronicleNodeID = 0xFC64A; // 0x0
		// static const ::System::UInt32 UNLOCKID = 0x26AF; // 0x0
		// static const ::System::UInt32 _RogueTabUnlock = 0xC366; // 0x0
		// static const ::System::UInt32 _GridFightTabUnlock = 0xC365; // 0x0
		// static const ::System::UInt32 _RogueVanillaTabUnlock = 0x26F3; // 0x0
		::RPG::GameCore::GameplayGuideTabConfigRow* _RogueRelicTypeRow; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HandbookRogueData*>* _HandbookRogueDataList; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _RedDotDirtyIDsCache_k__BackingField; // 0x20
		::System::Collections::Generic::HashSet_1<::System::Int64>* _ScoreRewardDataTimerCache; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _TakenActiveLevels_k__BackingField; // 0x30
		::RPG::Client::Promises::Promise* _DailyActiveInitiated; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _SubMissionIDConditionList; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* _DisabledAvatarList; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* _MainMissionIDConditionList; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::HandbookChapterData*>* _ChapterDataList; // 0x58
		::System::Collections::Generic::List_1<::System::UInt32>* _RogueRedDotDirtyIDsCache_k__BackingField; // 0x60
		::RPG::Client::Promises::Promise* _RequestPreAvatarRefreshPromise; // 0x68
		::System::Collections::Generic::List_1<::System::UInt32>* _DailyQuestIDs; // 0x70
		::System::Collections::Generic::List_1<::RPG::Client::PreReleaseCharaParam*>* HandbookPreReleaseCharaList; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PreAvatarGrowthMaterialData*>* _PreAvatarGrowthMaterialDict; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HandbookGuideData*>* _HandbookGuideDatas; // 0x88
		::System::Collections::Generic::List_1<::RPG::GameCore::GuideRogueTabRow*>* _AllRogueTypeRowList; // 0x90
		::System::Int32 _QuickGuideWaitingTimerID; // 0x98
		::System::Boolean _HasDailyActiveInitiated; // 0x9C
		::System::UInt32 _MaxActivePoint_k__BackingField; // 0xA0
		::System::UInt32 _TodayWorldLevel_k__BackingField; // 0xA4
		::System::UInt32 _ActivePoint_k__BackingField; // 0xA8
		::System::UInt32 _ActivePointItemID_k__BackingField; // 0xAC
		::System::UInt32 _HandbookChronicleOngoingMissionID_k__BackingField; // 0xB0
		::System::UInt32 _QuickGuideWaitingFinishTimeStamp; // 0xB4
		::System::UInt32 _QuickGuideWaitingTypeID; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetGuideChallengeTabIDs(::System::UInt32 typeID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETGUIDECHALLENGETABIDS_OFFSET))(this, typeID);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GuideChallengeDataConfigRow*>* GetGuideChallengeItemRows(::System::UInt32 typeID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GuideChallengeDataConfigRow*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETGUIDECHALLENGEITEMROWS_OFFSET))(this, typeID);
		}

		::System::Boolean IsGuideChallengeItemUnlock(::RPG::GameCore::GuideChallengeDataConfigRow* row)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GuideChallengeDataConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_ISGUIDECHALLENGEITEMUNLOCK_OFFSET))(this, row);
		}

		::System::Boolean IsGuideChallengeTabUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_ISGUIDECHALLENGETABUNLOCK_OFFSET))(this);
		}

		::System::Boolean IsGuideChallengeTypeShow(::RPG::GameCore::GuideChallengeType type)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GuideChallengeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_ISGUIDECHALLENGETYPESHOW_OFFSET))(this, type);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetGuideChallengeUnlockMainMissionIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETGUIDECHALLENGEUNLOCKMAINMISSIONIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetGuideChallengeUnlockSubMissionIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETGUIDECHALLENGEUNLOCKSUBMISSIONIDS_OFFSET))(this);
		}

		::RPG::GameCore::GuideChallengeDataConfigRow* GetGuideChallengeDataConfigByChallengeID(::System::UInt32 challengeID)
		{
			return ((::RPG::GameCore::GuideChallengeDataConfigRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETGUIDECHALLENGEDATACONFIGBYCHALLENGEID_OFFSET))(this, challengeID);
		}

		::System::Void GenerateChapterData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GENERATECHAPTERDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::HandbookChapterData*>* GetChapterDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::HandbookChapterData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETCHAPTERDATALIST_OFFSET))(this);
		}

		::RPG::Client::HandbookChapterData* GetChapterData(::System::UInt32 chapterID)
		{
			return ((::RPG::Client::HandbookChapterData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETCHAPTERDATA_OFFSET))(this, chapterID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleMainPathData*>* GetSortedMainPathList(::System::UInt32 chapterID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleMainPathData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETSORTEDMAINPATHLIST_OFFSET))(this, chapterID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleSubPathData*>* GetSortedSubPathList(::RPG::Client::MissionChronicleMainPathData* mainPathData)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleSubPathData*>*(*)(::PVOID, ::RPG::Client::MissionChronicleMainPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETSORTEDSUBPATHLIST_OFFSET))(this, mainPathData);
		}

		::System::Collections::Generic::List_1<::RPG::Client::HandbookChronicleDisplayData*>* GetSortedChronicleDisplayDataList(::RPG::Client::MissionChronicleMainPathData* mainPathData)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::HandbookChronicleDisplayData*>*(*)(::PVOID, ::RPG::Client::MissionChronicleMainPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETSORTEDCHRONICLEDISPLAYDATALIST_OFFSET))(this, mainPathData);
		}

		::System::Boolean IsChronicleUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_ISCHRONICLEUNLOCKED_OFFSET))(this);
		}

		::System::UInt32 GetLatestUpdatedMainPathID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETLATESTUPDATEDMAINPATHID_OFFSET))(this);
		}

		::System::UInt32 GetLatestUpdatedChapterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETLATESTUPDATEDCHAPTERID_OFFSET))(this);
		}

		::System::Void MarkLatestUpdatedNodeSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_MARKLATESTUPDATEDNODESEEN_OFFSET))(this);
		}

		::System::Void _GenerateSubPathListByLogicConnection(::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleSubPathData*>*& subPathList, ::RPG::GameCore::MissionChronicleConfig* subPathConfig, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MissionChronicleSubPathData*>* subPathDict)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleSubPathData*>*&, ::RPG::GameCore::MissionChronicleConfig*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MissionChronicleSubPathData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__GENERATESUBPATHLISTBYLOGICCONNECTION_OFFSET))(this, subPathList, subPathConfig, subPathDict);
		}

		::System::Void _GenerateSubPathListByConnection(::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleSubPathData*>*& subPathList, ::RPG::GameCore::MissionChronicleConfig* subPathConfig, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MissionChronicleSubPathData*>* subPathDict)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleSubPathData*>*&, ::RPG::GameCore::MissionChronicleConfig*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MissionChronicleSubPathData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__GENERATESUBPATHLISTBYCONNECTION_OFFSET))(this, subPathList, subPathConfig, subPathDict);
		}

		::System::Void _GeneratePenaconyEndmostSubPathList(::System::Collections::Generic::List_1<::RPG::Client::PenaconyEndmostChroniclePathData*>*& subPathList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PenaconyEndmostChroniclePathData*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__GENERATEPENACONYENDMOSTSUBPATHLIST_OFFSET))(this, subPathList);
		}

		::System::Void _AddMainPath(::System::UInt32 chapterID, ::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleMainPathData*>*& mainPathList, ::RPG::Client::MissionChronicleMainPathData* mainPathData, ::System::Collections::Generic::HashSet_1<::System::UInt32>*& addedSet)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleMainPathData*>*&, ::RPG::Client::MissionChronicleMainPathData*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__ADDMAINPATH_OFFSET))(this, chapterID, mainPathList, mainPathData, addedSet);
		}

		::System::Void _AddSubPath(::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleSubPathData*>*& subPathList, ::RPG::Client::MissionChronicleSubPathData* subPathData, ::System::Collections::Generic::HashSet_1<::System::UInt32>*& addedSet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleSubPathData*>*&, ::RPG::Client::MissionChronicleSubPathData*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__ADDSUBPATH_OFFSET))(this, subPathList, subPathData, addedSet);
		}

		::System::Void _AddPenaconyEndmostSubPath(::System::Collections::Generic::List_1<::RPG::Client::PenaconyEndmostChroniclePathData*>*& dataList, ::Class_1_8C2974ED0C175887* row, ::System::Collections::Generic::HashSet_1<::System::UInt32>*& addedSet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PenaconyEndmostChroniclePathData*>*&, ::Class_1_8C2974ED0C175887*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__ADDPENACONYENDMOSTSUBPATH_OFFSET))(this, dataList, row, addedSet);
		}

		::System::Boolean IsEndmostMainPathUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_ISENDMOSTMAINPATHUNLOCKED_OFFSET))(this);
		}

		::System::Boolean _IsMissionMain(::RPG::Client::MissionChronicleSubPathData* subPathData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MissionChronicleSubPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__ISMISSIONMAIN_OFFSET))(this, subPathData);
		}

		::System::Void _OnOngingMissionUpdated(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__ONONGINGMISSIONUPDATED_OFFSET))(this, arg);
		}

		::System::Void _OnCurrentTrackingChronicleMissionDataPrepared()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__ONCURRENTTRACKINGCHRONICLEMISSIONDATAPREPARED_OFFSET))(this);
		}

		::System::Void _PrepareRelativeMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__PREPARERELATIVEMISSIONDATA_OFFSET))(this);
		}

		::System::UInt32 get_HandbookChronicleOngoingMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GET_HANDBOOKCHRONICLEONGOINGMISSIONID_OFFSET))(this);
		}

		::System::Void set_HandbookChronicleOngoingMissionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_SET_HANDBOOKCHRONICLEONGOINGMISSIONID_OFFSET))(this, value);
		}

		::System::UInt32 get__EndmostUnlockSubmissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GET__ENDMOSTUNLOCKSUBMISSIONID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetDailyQuestIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETDAILYQUESTIDS_OFFSET))(this);
		}

		::System::UInt32 GetDailyQuestSortValue(::System::UInt32 questID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETDAILYQUESTSORTVALUE_OFFSET))(this, questID);
		}

		::RPG::Client::Promises::IPromise* DailyActiveInitiated()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_DAILYACTIVEINITIATED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::DailyActiveConfigRow*>* GetDailyActiveRewards()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::DailyActiveConfigRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETDAILYACTIVEREWARDS_OFFSET))(this);
		}

		::System::Void TakeReward(::System::UInt32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_TAKEREWARD_OFFSET))(this, level);
		}

		::System::Void _OnGetDailyActiveInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__ONGETDAILYACTIVEINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnDailyActiveInfoNotify(::System::UInt16 cmd, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__ONDAILYACTIVEINFONOTIFY_OFFSET))(this, cmd, ntfObject);
		}

		::System::Void _UpdateActivePoint(::System::UInt32 activePoint)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__UPDATEACTIVEPOINT_OFFSET))(this, activePoint);
		}

		::System::Void _UpdateActiveRewards(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_24*>* activeRewardDatas)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_24*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__UPDATEACTIVEREWARDS_OFFSET))(this, activeRewardDatas);
		}

		::System::Void _UpdateDailyActiveQuests(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* questIDs)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__UPDATEDAILYACTIVEQUESTS_OFFSET))(this, questIDs);
		}

		::System::Void _OnTakeApRewardScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__ONTAKEAPREWARDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnTakeAllApRewardScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__ONTAKEALLAPREWARDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::UInt32 get_ActivePoint()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GET_ACTIVEPOINT_OFFSET))(this);
		}

		::System::Void set_ActivePoint(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_SET_ACTIVEPOINT_OFFSET))(this, value);
		}

		::System::UInt32 get_TodayWorldLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GET_TODAYWORLDLEVEL_OFFSET))(this);
		}

		::System::Void set_TodayWorldLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_SET_TODAYWORLDLEVEL_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_TakenActiveLevels()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GET_TAKENACTIVELEVELS_OFFSET))(this);
		}

		::System::Void set_TakenActiveLevels(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_SET_TAKENACTIVELEVELS_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxActivePoint()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GET_MAXACTIVEPOINT_OFFSET))(this);
		}

		::System::Void set_MaxActivePoint(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_SET_MAXACTIVEPOINT_OFFSET))(this, value);
		}

		::System::UInt32 get_ActivePointItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GET_ACTIVEPOINTITEMID_OFFSET))(this);
		}

		::System::Void set_ActivePointItemID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_SET_ACTIVEPOINTITEMID_OFFSET))(this, value);
		}

		::System::Boolean IsUpReleasingChara(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_ISUPRELEASINGCHARA_OFFSET))(this, avatarID);
		}

		::System::Boolean IsCollaborationChara(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_ISCOLLABORATIONCHARA_OFFSET))(this, avatarID);
		}

		::RPG::Client::Promises::Promise* RequestAllPreAvatarDataRefresh()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_REQUESTALLPREAVATARDATAREFRESH_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* RequestPreAvatarRelicDataRefresh(::System::UInt32 avatarRealID)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_REQUESTPREAVATARRELICDATAREFRESH_OFFSET))(this, avatarRealID);
		}

		::System::Void SetDisabledAvatarList(::System::Collections::Generic::List_1<::System::UInt32>* avatarList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_SETDISABLEDAVATARLIST_OFFSET))(this, avatarList);
		}

		::System::Void ClearDisabledAvatarList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_CLEARDISABLEDAVATARLIST_OFFSET))(this);
		}

		::System::Void DisableAllPreAvatar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_DISABLEALLPREAVATAR_OFFSET))(this);
		}

		::System::Boolean IsDisabledAvatar(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_ISDISABLEDAVATAR_OFFSET))(this, avatarID);
		}

		::System::Void ValidateGrowthTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_VALIDATEGROWTHTARGET_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarFarmGuideData*>* GetMaterialGuideIDListByAvatar(::System::UInt32 avatarID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarFarmGuideData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETMATERIALGUIDEIDLISTBYAVATAR_OFFSET))(this, avatarID);
		}

		::RPG::Client::PreReleaseCharaParam* GetPreReleaseCharaParam(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::PreReleaseCharaParam*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETPRERELEASECHARAPARAM_OFFSET))(this, avatarID);
		}

		::RPG::Client::PreReleaseCharaParam* GetOrCreatePreReleaseCharaParam(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::PreReleaseCharaParam*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETORCREATEPRERELEASECHARAPARAM_OFFSET))(this, avatarID);
		}

		::System::Void RecordAllPreReleaseAvatarSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_RECORDALLPRERELEASEAVATARSEEN_OFFSET))(this);
		}

		::System::Void RecordPreReleaseAvatarSeen(::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_RECORDPRERELEASEAVATARSEEN_OFFSET))(this, avatarID);
		}

		::System::Boolean ExistingUnseenPrereleaseAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_EXISTINGUNSEENPRERELEASEAVATAR_OFFSET))(this);
		}

		::System::Boolean IsAvatarUnseenAsPreStatus(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_ISAVATARUNSEENASPRESTATUS_OFFSET))(this, avatarID);
		}

		::System::Void RefreshPreStatusAvatarForRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_REFRESHPRESTATUSAVATARFORRECORD_OFFSET))(this);
		}

		::System::Void _SetupAvatarParamListLocalPart(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__SETUPAVATARPARAMLISTLOCALPART_OFFSET))(this, arg);
		}

		::System::Void _OnGetPreAvatarGrowthInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__ONGETPREAVATARGROWTHINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnGetPreAvatarActivityListScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__ONGETPREAVATARACTIVITYLISTSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnScheduleChanged(::RPG::Client::ScheduleData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__ONSCHEDULECHANGED_OFFSET))(this, data);
		}

		::System::Void _UpdateUserPrefStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__UPDATEUSERPREFSTATUS_OFFSET))(this);
		}

		::System::Void _UpdatePreAvatarParam(::Class_1_EBB10EC01CCC4716_16* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_16*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__UPDATEPREAVATARPARAM_OFFSET))(this, rsp);
		}

		static ::System::Boolean _IsAvatarShouldDisplay(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__ISAVATARSHOULDDISPLAY_OFFSET))(avatarID);
		}

		::System::Void _GatherLevelupMaterialGuideIDByAvatarID(::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* needItemList, ::System::UInt32 avatarID, ::System::Collections::Generic::List_1<::RPG::Client::AvatarFarmGuideData*>*& guideDataList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::AvatarFarmGuideData*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__GATHERLEVELUPMATERIALGUIDEIDBYAVATARID_OFFSET))(this, needItemList, avatarID, guideDataList);
		}

		::System::Void _GatherLevelupMaterialGuideIDByItemID(::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* needItemList, ::System::UInt32 worldMaterial, ::System::Collections::Generic::List_1<::RPG::Client::AvatarFarmGuideData*>*& guideDataList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::AvatarFarmGuideData*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__GATHERLEVELUPMATERIALGUIDEIDBYITEMID_OFFSET))(this, needItemList, worldMaterial, guideDataList);
		}

		::System::UInt32 _FindGuideIDByMaterialItemByAvatarID(::System::UInt32 itemID, ::System::UInt32 avatarID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__FINDGUIDEIDBYMATERIALITEMBYAVATARID_OFFSET))(this, itemID, avatarID);
		}

		::System::UInt32 _FindGuideIDByMaterialItem(::System::UInt32 itemID, ::System::UInt32 worldMaterial)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__FINDGUIDEIDBYMATERIALITEM_OFFSET))(this, itemID, worldMaterial);
		}

		::System::Boolean _IsCurrentFarmMatchingWorldMaterialByAvatarID(::RPG::GameCore::CocoonRow* row, ::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CocoonRow*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__ISCURRENTFARMMATCHINGWORLDMATERIALBYAVATARID_OFFSET))(this, row, avatarID);
		}

		::System::Boolean _IsCurrentFarmMatchingWorldMaterialByItemID(::RPG::GameCore::CocoonRow* row, ::System::UInt32 worldMaterial)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CocoonRow*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__ISCURRENTFARMMATCHINGWORLDMATERIALBYITEMID_OFFSET))(this, row, worldMaterial);
		}

		static ::System::UInt32 get_GrowthGuideUnlockID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GET_GROWTHGUIDEUNLOCKID_OFFSET))();
		}

		::System::Void _GuideInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__GUIDEINIT_OFFSET))(this);
		}

		::System::Void _GuideUnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__GUIDEUNINIT_OFFSET))(this);
		}

		::System::Void _GuideSendPacketsAfterLoginFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__GUIDESENDPACKETSAFTERLOGINFINISHED_OFFSET))(this);
		}

		::System::Void RefreshGachaTimeByGuideIDs(::System::Collections::Generic::List_1<::System::UInt32>* guideIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_REFRESHGACHATIMEBYGUIDEIDS_OFFSET))(this, guideIDs);
		}

		::System::Void RefreshTeleportByGuideIDs(::System::Collections::Generic::List_1<::System::UInt32>* guideIDs, ::System::Boolean forceFetch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_REFRESHTELEPORTBYGUIDEIDS_OFFSET))(this, guideIDs, forceFetch);
		}

		::System::Void RefreshGuideItemTeleports(::System::UInt32 typeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_REFRESHGUIDEITEMTELEPORTS_OFFSET))(this, typeID);
		}

		::RPG::Client::HandbookGuideData* GetGuideData(::System::UInt32 itemID)
		{
			return ((::RPG::Client::HandbookGuideData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETGUIDEDATA_OFFSET))(this, itemID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::HandbookGuideData*>* GetShowGuideDatas(::System::UInt32 typeID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::HandbookGuideData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETSHOWGUIDEDATAS_OFFSET))(this, typeID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::HandbookGuideData*>* GetShowGuideDatasForRelic()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::HandbookGuideData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETSHOWGUIDEDATASFORRELIC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::HandbookGuideData*>* GetShowGuideDatasForRogueRelic()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::HandbookGuideData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETSHOWGUIDEDATASFORROGUERELIC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::HandbookGuideData*>* GetShowGuideDatasForNotLockedByFarmAdvanceLimit(::System::UInt32 typeId)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::HandbookGuideData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETSHOWGUIDEDATASFORNOTLOCKEDBYFARMADVANCELIMIT_OFFSET))(this, typeId);
		}

		::System::Boolean IsRougeTournRelicUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_ISROUGETOURNRELICUNLOCK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::HandbookGuideData*>* GetAllGuideDatas(::System::UInt32 typeID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::HandbookGuideData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETALLGUIDEDATAS_OFFSET))(this, typeID);
		}

		::System::UInt32 GetQuickGuideExpireTime(::System::UInt32 typeID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETQUICKGUIDEEXPIRETIME_OFFSET))(this, typeID);
		}

		::System::UInt32 GetQuickGuideNextBeginTime(::System::UInt32 typeID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETQUICKGUIDENEXTBEGINTIME_OFFSET))(this, typeID);
		}

		::System::Void GoToGuide(::System::UInt32 entranceID, ::System::UInt32 mappingInfoID, ::System::UInt32 contentID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GOTOGUIDE_OFFSET))(this, entranceID, mappingInfoID, contentID);
		}

		::System::Void GotoToGuideRogue(::System::UInt32 entranceID, ::System::UInt32 mappingInfoID, ::System::Boolean autoShow, ::System::Boolean useCustomizedAreaID, ::System::UInt32 customizedAreaID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GOTOTOGUIDEROGUE_OFFSET))(this, entranceID, mappingInfoID, autoShow, useCustomizedAreaID, customizedAreaID);
		}

		::System::Boolean IsGuideTabUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_ISGUIDETABUNLOCK_OFFSET))(this);
		}

		::System::Void StartQuickGuideRefreshTimer(::System::UInt32 typeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_STARTQUICKGUIDEREFRESHTIMER_OFFSET))(this, typeID);
		}

		::System::Void StopQuickGuideRefreshTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_STOPQUICKGUIDEREFRESHTIMER_OFFSET))(this);
		}

		::System::Void _TryUpdateRefreshTimer(::System::UInt32 id, ::System::UInt32 timeStamp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__TRYUPDATEREFRESHTIMER_OFFSET))(this, id, timeStamp);
		}

		::RPG::Client::HandbookGuideData* _SafeGetHandbookGuideData(::System::UInt32 itemID)
		{
			return ((::RPG::Client::HandbookGuideData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__SAFEGETHANDBOOKGUIDEDATA_OFFSET))(this, itemID);
		}

		::System::Void _TransferWithCheck(::System::UInt32 entranceID, ::System::UInt32 mappingInfoID, ::System::UInt32 contentID, ::System::Action* transferCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__TRANSFERWITHCHECK_OFFSET))(this, entranceID, mappingInfoID, contentID, transferCallback);
		}

		::System::Void _OnQuickGuideRefreshTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__ONQUICKGUIDEREFRESHTIMER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RedDotDirtyIDsCache()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GET_REDDOTDIRTYIDSCACHE_OFFSET))(this);
		}

		::System::Void set_RedDotDirtyIDsCache(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_SET_REDDOTDIRTYIDSCACHE_OFFSET))(this, value);
		}

		::RPG::Client::PreAvatarGrowthMaterialData* GetPreAvatarGrowthMaterialData(::System::UInt32 avatarRealID)
		{
			return ((::RPG::Client::PreAvatarGrowthMaterialData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETPREAVATARGROWTHMATERIALDATA_OFFSET))(this, avatarRealID);
		}

		::System::Void _RogueInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__ROGUEINIT_OFFSET))(this);
		}

		::System::Boolean IsRogueTabUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_ISROGUETABUNLOCK_OFFSET))(this);
		}

		::System::Boolean IsRogueDLCUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_ISROGUEDLCUNLOCKED_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* PrepareOpenCondtionMission()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_PREPAREOPENCONDTIONMISSION_OFFSET))(this);
		}

		::RPG::Client::HandbookRogueData* GetGuideRogueData(::System::UInt32 itemID)
		{
			return ((::RPG::Client::HandbookRogueData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETGUIDEROGUEDATA_OFFSET))(this, itemID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::HandbookRogueData*>* GetShowRogueDataList(::System::UInt32 typeID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::HandbookRogueData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETSHOWROGUEDATALIST_OFFSET))(this, typeID);
		}

		::System::Void GotoToGuideRogueDLC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GOTOTOGUIDEROGUEDLC_OFFSET))(this);
		}

		::System::Void GotoToGuideRogueNous()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GOTOTOGUIDEROGUENOUS_OFFSET))(this);
		}

		::System::Void GotoToGuideRogueTournEntrance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GOTOTOGUIDEROGUETOURNENTRANCE_OFFSET))(this);
		}

		::System::Void GotoToGuideRogueTournRelicCocoon(::RPG::Client::RogueTournRelicCocoonData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournRelicCocoonData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GOTOTOGUIDEROGUETOURNRELICCOCOON_OFFSET))(this, data);
		}

		::System::Void GotoToGuideGridFightEntrance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GOTOTOGUIDEGRIDFIGHTENTRANCE_OFFSET))(this);
		}

		::System::Void AddGridFightScoreRewardDataTimer(::System::Int64 endTimeStamp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_ADDGRIDFIGHTSCOREREWARDDATATIMER_OFFSET))(this, endTimeStamp);
		}

		::System::Void AddRogueScoreRewardDataTimer(::System::Int64 endTimeStamp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_ADDROGUESCOREREWARDDATATIMER_OFFSET))(this, endTimeStamp);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetHandbookRogueNewTypeIdList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETHANDBOOKROGUENEWTYPEIDLIST_OFFSET))(this);
		}

		::System::Boolean CheckIsHandbookNewestRogueBetaNew(::System::UInt32 typeId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_CHECKISHANDBOOKNEWESTROGUEBETANEW_OFFSET))(this, typeId);
		}

		::System::Void SetHandbookNewestRogueBetaSeen(::System::UInt32 typeId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_SETHANDBOOKNEWESTROGUEBETASEEN_OFFSET))(this, typeId);
		}

		::System::Void SetHandbookRogueTypeNewSeen(::System::UInt32 typeId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_SETHANDBOOKROGUETYPENEWSEEN_OFFSET))(this, typeId);
		}

		::RPG::Client::HandbookRogueData* _SafeGetHandbookRogueData(::System::UInt32 itemID)
		{
			return ((::RPG::Client::HandbookRogueData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__SAFEGETHANDBOOKROGUEDATA_OFFSET))(this, itemID);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetAllGuideRogueConfigIDList(::System::UInt32 typeId)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__GETALLGUIDEROGUECONFIGIDLIST_OFFSET))(this, typeId);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetAllGuideMissionCondtionList(::System::Boolean isSub)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__GETALLGUIDEMISSIONCONDTIONLIST_OFFSET))(this, isSub);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RogueRedDotDirtyIDsCache()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GET_ROGUEREDDOTDIRTYIDSCACHE_OFFSET))(this);
		}

		::System::Void set_RogueRedDotDirtyIDsCache(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_SET_ROGUEREDDOTDIRTYIDSCACHE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GuideRogueTabRow*>* get_AllRogueTypeRowList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GuideRogueTabRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GET_ALLROGUETYPEROWLIST_OFFSET))(this);
		}

		::System::UInt32 get_RogueActivityPageGotoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GET_ROGUEACTIVITYPAGEGOTOID_OFFSET))(this);
		}

		::System::UInt32 get_GridFightActivityPageGotoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GET_GRIDFIGHTACTIVITYPAGEGOTOID_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_INIT_OFFSET))(this);
		}

		::System::Void SendPacketsAfterLoginFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_SENDPACKETSAFTERLOGINFINISHED_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}
	};
}
