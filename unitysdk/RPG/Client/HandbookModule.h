#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/GuideChallengeType.h"

class Class_1_21C7581DFE99F091_31;
class Class_1_21DCD4640D389503_14;
class Class_1_8C2974ED0C175887;
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

#define RPG_CLIENT_HANDBOOKMODULE_ADDGRIDFIGHTSCOREREWARDDATATIMER_OFFSET UNITYSDK_OFFSET(0x1A064620)
#define RPG_CLIENT_HANDBOOKMODULE_ADDROGUESCOREREWARDDATATIMER_OFFSET UNITYSDK_OFFSET(0x1A0647A0)
#define RPG_CLIENT_HANDBOOKMODULE_CHECKISHANDBOOKNEWESTROGUEBETANEW_OFFSET UNITYSDK_OFFSET(0x1A064F40)
#define RPG_CLIENT_HANDBOOKMODULE_CLEARDISABLEDAVATARLIST_OFFSET UNITYSDK_OFFSET(0x1A05C990)
#define RPG_CLIENT_HANDBOOKMODULE_DAILYACTIVEINITIATED_OFFSET UNITYSDK_OFFSET(0x1A05AD50)
#define RPG_CLIENT_HANDBOOKMODULE_DISABLEALLPREAVATAR_OFFSET UNITYSDK_OFFSET(0x1A05C9F0)
#define RPG_CLIENT_HANDBOOKMODULE_EXISTINGUNSEENPRERELEASEAVATAR_OFFSET UNITYSDK_OFFSET(0x1A0545C0)
#define RPG_CLIENT_HANDBOOKMODULE_GENERATECHAPTERDATA_OFFSET UNITYSDK_OFFSET(0x1A057AE0)
#define RPG_CLIENT_HANDBOOKMODULE_GETALLGUIDEDATAS_OFFSET UNITYSDK_OFFSET(0x1A061AF0)
#define RPG_CLIENT_HANDBOOKMODULE_GETCHAPTERDATALIST_OFFSET UNITYSDK_OFFSET(0x1A057F70)
#define RPG_CLIENT_HANDBOOKMODULE_GETCHAPTERDATA_OFFSET UNITYSDK_OFFSET(0x1A058E50)
#define RPG_CLIENT_HANDBOOKMODULE_GETDAILYACTIVEREWARDS_OFFSET UNITYSDK_OFFSET(0x1A04D8B0)
#define RPG_CLIENT_HANDBOOKMODULE_GETDAILYQUESTIDS_OFFSET UNITYSDK_OFFSET(0x1A04DA20)
#define RPG_CLIENT_HANDBOOKMODULE_GETDAILYQUESTSORTVALUE_OFFSET UNITYSDK_OFFSET(0x1A05ACA0)
#define RPG_CLIENT_HANDBOOKMODULE_GETGUIDECHALLENGEDATACONFIGBYCHALLENGEID_OFFSET UNITYSDK_OFFSET(0x1A058850)
#define RPG_CLIENT_HANDBOOKMODULE_GETGUIDECHALLENGEITEMROWS_OFFSET UNITYSDK_OFFSET(0x1A0581A0)
#define RPG_CLIENT_HANDBOOKMODULE_GETGUIDECHALLENGETABIDS_OFFSET UNITYSDK_OFFSET(0x1A057FB0)
#define RPG_CLIENT_HANDBOOKMODULE_GETGUIDECHALLENGEUNLOCKMAINMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x1A058630)
#define RPG_CLIENT_HANDBOOKMODULE_GETGUIDECHALLENGEUNLOCKSUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x1A058790)
#define RPG_CLIENT_HANDBOOKMODULE_GETGUIDEDATA_OFFSET UNITYSDK_OFFSET(0x1A0558C0)
#define RPG_CLIENT_HANDBOOKMODULE_GETGUIDEROGUEDATA_OFFSET UNITYSDK_OFFSET(0x1A063760)
#define RPG_CLIENT_HANDBOOKMODULE_GETHANDBOOKROGUENEWTYPEIDLIST_OFFSET UNITYSDK_OFFSET(0x1A064920)
#define RPG_CLIENT_HANDBOOKMODULE_GETLATESTUPDATEDCHAPTERID_OFFSET UNITYSDK_OFFSET(0x1A05A2B0)
#define RPG_CLIENT_HANDBOOKMODULE_GETLATESTUPDATEDMAINPATHID_OFFSET UNITYSDK_OFFSET(0x1A059DF0)
#define RPG_CLIENT_HANDBOOKMODULE_GETMATERIALGUIDEIDLISTBYAVATAR_OFFSET UNITYSDK_OFFSET(0x1A052100)
#define RPG_CLIENT_HANDBOOKMODULE_GETORCREATEPRERELEASECHARAPARAM_OFFSET UNITYSDK_OFFSET(0x1A05C7A0)
#define RPG_CLIENT_HANDBOOKMODULE_GETPREAVATARGROWTHMATERIALDATA_OFFSET UNITYSDK_OFFSET(0x1A03E6A0)
#define RPG_CLIENT_HANDBOOKMODULE_GETPRERELEASECHARAPARAM_OFFSET UNITYSDK_OFFSET(0x1A050C90)
#define RPG_CLIENT_HANDBOOKMODULE_GETQUICKGUIDEEXPIRETIME_OFFSET UNITYSDK_OFFSET(0x1A061DD0)
#define RPG_CLIENT_HANDBOOKMODULE_GETQUICKGUIDENEXTBEGINTIME_OFFSET UNITYSDK_OFFSET(0x1A061F30)
#define RPG_CLIENT_HANDBOOKMODULE_GETSHOWGUIDEDATASFORNOTLOCKEDBYFARMADVANCELIMIT_OFFSET UNITYSDK_OFFSET(0x1A0618A0)
#define RPG_CLIENT_HANDBOOKMODULE_GETSHOWGUIDEDATASFORRELIC_OFFSET UNITYSDK_OFFSET(0x1A04F280)
#define RPG_CLIENT_HANDBOOKMODULE_GETSHOWGUIDEDATASFORROGUERELIC_OFFSET UNITYSDK_OFFSET(0x1A04F780)
#define RPG_CLIENT_HANDBOOKMODULE_GETSHOWGUIDEDATAS_OFFSET UNITYSDK_OFFSET(0x1A061570)
#define RPG_CLIENT_HANDBOOKMODULE_GETSHOWROGUEDATALIST_OFFSET UNITYSDK_OFFSET(0x1A063860)
#define RPG_CLIENT_HANDBOOKMODULE_GETSORTEDCHRONICLEDISPLAYDATALIST_OFFSET UNITYSDK_OFFSET(0x1A0560A0)
#define RPG_CLIENT_HANDBOOKMODULE_GETSORTEDMAINPATHLIST_OFFSET UNITYSDK_OFFSET(0x1A0589F0)
#define RPG_CLIENT_HANDBOOKMODULE_GETSORTEDSUBPATHLIST_OFFSET UNITYSDK_OFFSET(0x1A059300)
#define RPG_CLIENT_HANDBOOKMODULE_GET_ACTIVEPOINTITEMID_OFFSET UNITYSDK_OFFSET(0x1A05BFE0)
#define RPG_CLIENT_HANDBOOKMODULE_GET_ACTIVEPOINT_OFFSET UNITYSDK_OFFSET(0x1A05BF60)
#define RPG_CLIENT_HANDBOOKMODULE_GET_ALLROGUETYPEROWLIST_OFFSET UNITYSDK_OFFSET(0x1A064D20)
#define RPG_CLIENT_HANDBOOKMODULE_GET_GRIDFIGHTACTIVITYPAGEGOTOID_OFFSET UNITYSDK_OFFSET(0x1A065810)
#define RPG_CLIENT_HANDBOOKMODULE_GET_GROWTHGUIDEUNLOCKID_OFFSET UNITYSDK_OFFSET(0x1A05C750)
#define RPG_CLIENT_HANDBOOKMODULE_GET_HANDBOOKCHRONICLEONGOINGMISSIONID_OFFSET UNITYSDK_OFFSET(0x1A05AC80)
#define RPG_CLIENT_HANDBOOKMODULE_GET_MAXACTIVEPOINT_OFFSET UNITYSDK_OFFSET(0x1A05BFC0)
#define RPG_CLIENT_HANDBOOKMODULE_GET_REDDOTDIRTYIDSCACHE_OFFSET UNITYSDK_OFFSET(0x1A062950)
#define RPG_CLIENT_HANDBOOKMODULE_GET_ROGUEACTIVITYPAGEGOTOID_OFFSET UNITYSDK_OFFSET(0x1A065700)
#define RPG_CLIENT_HANDBOOKMODULE_GET_ROGUEREDDOTDIRTYIDSCACHE_OFFSET UNITYSDK_OFFSET(0x1A0656E0)
#define RPG_CLIENT_HANDBOOKMODULE_GET_TAKENACTIVELEVELS_OFFSET UNITYSDK_OFFSET(0x1A05BFA0)
#define RPG_CLIENT_HANDBOOKMODULE_GET_TODAYWORLDLEVEL_OFFSET UNITYSDK_OFFSET(0x1A05BF80)
#define RPG_CLIENT_HANDBOOKMODULE_GET__ENDMOSTUNLOCKSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x1A05A930)
#define RPG_CLIENT_HANDBOOKMODULE_GOTOGUIDE_OFFSET UNITYSDK_OFFSET(0x1A062090)
#define RPG_CLIENT_HANDBOOKMODULE_GOTOTOGUIDEGRIDFIGHTENTRANCE_OFFSET UNITYSDK_OFFSET(0x1A064590)
#define RPG_CLIENT_HANDBOOKMODULE_GOTOTOGUIDEROGUEDLC_OFFSET UNITYSDK_OFFSET(0x1A063DE0)
#define RPG_CLIENT_HANDBOOKMODULE_GOTOTOGUIDEROGUENOUS_OFFSET UNITYSDK_OFFSET(0x1A063F10)
#define RPG_CLIENT_HANDBOOKMODULE_GOTOTOGUIDEROGUETOURNENTRANCE_OFFSET UNITYSDK_OFFSET(0x1A064040)
#define RPG_CLIENT_HANDBOOKMODULE_GOTOTOGUIDEROGUETOURNRELICCOCOON_OFFSET UNITYSDK_OFFSET(0x1A064260)
#define RPG_CLIENT_HANDBOOKMODULE_GOTOTOGUIDEROGUE_OFFSET UNITYSDK_OFFSET(0x1A0623F0)
#define RPG_CLIENT_HANDBOOKMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1A065920)
#define RPG_CLIENT_HANDBOOKMODULE_ISAVATARUNSEENASPRESTATUS_OFFSET UNITYSDK_OFFSET(0x1A05DC40)
#define RPG_CLIENT_HANDBOOKMODULE_ISCHRONICLEUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1A059C30)
#define RPG_CLIENT_HANDBOOKMODULE_ISCOLLABORATIONCHARA_OFFSET UNITYSDK_OFFSET(0x1A05C3F0)
#define RPG_CLIENT_HANDBOOKMODULE_ISDISABLEDAVATAR_OFFSET UNITYSDK_OFFSET(0x1A05CB80)
#define RPG_CLIENT_HANDBOOKMODULE_ISENDMOSTMAINPATHUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1A056C00)
#define RPG_CLIENT_HANDBOOKMODULE_ISGUIDECHALLENGEITEMUNLOCK_OFFSET UNITYSDK_OFFSET(0x1A058430)
#define RPG_CLIENT_HANDBOOKMODULE_ISGUIDECHALLENGETABUNLOCK_OFFSET UNITYSDK_OFFSET(0x1A058490)
#define RPG_CLIENT_HANDBOOKMODULE_ISGUIDECHALLENGETYPESHOW_OFFSET UNITYSDK_OFFSET(0x1A0584D0)
#define RPG_CLIENT_HANDBOOKMODULE_ISGUIDETABUNLOCK_OFFSET UNITYSDK_OFFSET(0x1A062530)
#define RPG_CLIENT_HANDBOOKMODULE_ISROGUEDLCUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1A062B20)
#define RPG_CLIENT_HANDBOOKMODULE_ISROGUETABUNLOCK_OFFSET UNITYSDK_OFFSET(0x1A0629D0)
#define RPG_CLIENT_HANDBOOKMODULE_ISROUGETOURNRELICUNLOCK_OFFSET UNITYSDK_OFFSET(0x1A04F580)
#define RPG_CLIENT_HANDBOOKMODULE_ISUPRELEASINGCHARA_OFFSET UNITYSDK_OFFSET(0x1A05C000)
#define RPG_CLIENT_HANDBOOKMODULE_MARKLATESTUPDATEDNODESEEN_OFFSET UNITYSDK_OFFSET(0x1A05A420)
#define RPG_CLIENT_HANDBOOKMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x1A0662B0)
#define RPG_CLIENT_HANDBOOKMODULE_PREPAREOPENCONDTIONMISSION_OFFSET UNITYSDK_OFFSET(0x1A062C80)
#define RPG_CLIENT_HANDBOOKMODULE_RECORDALLPRERELEASEAVATARSEEN_OFFSET UNITYSDK_OFFSET(0x1A05D7D0)
#define RPG_CLIENT_HANDBOOKMODULE_RECORDPRERELEASEAVATARSEEN_OFFSET UNITYSDK_OFFSET(0x1A05D950)
#define RPG_CLIENT_HANDBOOKMODULE_REFRESHGACHATIMEBYGUIDEIDS_OFFSET UNITYSDK_OFFSET(0x1A060E90)
#define RPG_CLIENT_HANDBOOKMODULE_REFRESHGUIDEITEMTELEPORTS_OFFSET UNITYSDK_OFFSET(0x1A0614B0)
#define RPG_CLIENT_HANDBOOKMODULE_REFRESHPRESTATUSAVATARFORRECORD_OFFSET UNITYSDK_OFFSET(0x1A05DED0)
#define RPG_CLIENT_HANDBOOKMODULE_REFRESHTELEPORTBYGUIDEIDS_OFFSET UNITYSDK_OFFSET(0x1A0611F0)
#define RPG_CLIENT_HANDBOOKMODULE_REQUESTALLPREAVATARDATAREFRESH_OFFSET UNITYSDK_OFFSET(0x1A05C570)
#define RPG_CLIENT_HANDBOOKMODULE_REQUESTPREAVATARRELICDATAREFRESH_OFFSET UNITYSDK_OFFSET(0x1A0425B0)
#define RPG_CLIENT_HANDBOOKMODULE_SENDPACKETSAFTERLOGINFINISHED_OFFSET UNITYSDK_OFFSET(0x1A065C00)
#define RPG_CLIENT_HANDBOOKMODULE_SETDISABLEDAVATARLIST_OFFSET UNITYSDK_OFFSET(0x1A05C810)
#define RPG_CLIENT_HANDBOOKMODULE_SETHANDBOOKNEWESTROGUEBETASEEN_OFFSET UNITYSDK_OFFSET(0x1A065140)
#define RPG_CLIENT_HANDBOOKMODULE_SETHANDBOOKROGUETYPENEWSEEN_OFFSET UNITYSDK_OFFSET(0x1A0653B0)
#define RPG_CLIENT_HANDBOOKMODULE_SET_ACTIVEPOINTITEMID_OFFSET UNITYSDK_OFFSET(0x1A05BFF0)
#define RPG_CLIENT_HANDBOOKMODULE_SET_ACTIVEPOINT_OFFSET UNITYSDK_OFFSET(0x1A05BF70)
#define RPG_CLIENT_HANDBOOKMODULE_SET_HANDBOOKCHRONICLEONGOINGMISSIONID_OFFSET UNITYSDK_OFFSET(0x1A05AC90)
#define RPG_CLIENT_HANDBOOKMODULE_SET_MAXACTIVEPOINT_OFFSET UNITYSDK_OFFSET(0x1A05BFD0)
#define RPG_CLIENT_HANDBOOKMODULE_SET_REDDOTDIRTYIDSCACHE_OFFSET UNITYSDK_OFFSET(0x1A062960)
#define RPG_CLIENT_HANDBOOKMODULE_SET_ROGUEREDDOTDIRTYIDSCACHE_OFFSET UNITYSDK_OFFSET(0x1A0656F0)
#define RPG_CLIENT_HANDBOOKMODULE_SET_TAKENACTIVELEVELS_OFFSET UNITYSDK_OFFSET(0x1A05BFB0)
#define RPG_CLIENT_HANDBOOKMODULE_SET_TODAYWORLDLEVEL_OFFSET UNITYSDK_OFFSET(0x1A05BF90)
#define RPG_CLIENT_HANDBOOKMODULE_STARTQUICKGUIDEREFRESHTIMER_OFFSET UNITYSDK_OFFSET(0x1A0625C0)
#define RPG_CLIENT_HANDBOOKMODULE_STOPQUICKGUIDEREFRESHTIMER_OFFSET UNITYSDK_OFFSET(0x1A062830)
#define RPG_CLIENT_HANDBOOKMODULE_TAKEREWARD_OFFSET UNITYSDK_OFFSET(0x1A05AEE0)
#define RPG_CLIENT_HANDBOOKMODULE_VALIDATEGROWTHTARGET_OFFSET UNITYSDK_OFFSET(0x1A05CC70)
#define RPG_CLIENT_HANDBOOKMODULE__ADDMAINPATH_OFFSET UNITYSDK_OFFSET(0x1A058F50)
#define RPG_CLIENT_HANDBOOKMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1A0660D0)
#define RPG_CLIENT_HANDBOOKMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1A065CF0)
#define RPG_CLIENT_HANDBOOKMODULE__ADDPENACONYENDMOSTSUBPATH_OFFSET UNITYSDK_OFFSET(0x1A05A6A0)
#define RPG_CLIENT_HANDBOOKMODULE__ADDSUBPATH_OFFSET UNITYSDK_OFFSET(0x1A05A490)
#define RPG_CLIENT_HANDBOOKMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A066430)
#define RPG_CLIENT_HANDBOOKMODULE__FINDGUIDEIDBYMATERIALITEMBYAVATARID_OFFSET UNITYSDK_OFFSET(0x1A05FC10)
#define RPG_CLIENT_HANDBOOKMODULE__FINDGUIDEIDBYMATERIALITEM_OFFSET UNITYSDK_OFFSET(0x1A060160)
#define RPG_CLIENT_HANDBOOKMODULE__GATHERLEVELUPMATERIALGUIDEIDBYAVATARID_OFFSET UNITYSDK_OFFSET(0x1A05D350)
#define RPG_CLIENT_HANDBOOKMODULE__GATHERLEVELUPMATERIALGUIDEIDBYITEMID_OFFSET UNITYSDK_OFFSET(0x1A05CDB0)
#define RPG_CLIENT_HANDBOOKMODULE__GENERATEPENACONYENDMOSTSUBPATHLIST_OFFSET UNITYSDK_OFFSET(0x1A059B90)
#define RPG_CLIENT_HANDBOOKMODULE__GENERATESUBPATHLISTBYCONNECTION_OFFSET UNITYSDK_OFFSET(0x1A0598A0)
#define RPG_CLIENT_HANDBOOKMODULE__GENERATESUBPATHLISTBYLOGICCONNECTION_OFFSET UNITYSDK_OFFSET(0x1A0595B0)
#define RPG_CLIENT_HANDBOOKMODULE__GETALLGUIDEMISSIONCONDTIONLIST_OFFSET UNITYSDK_OFFSET(0x1A062F70)
#define RPG_CLIENT_HANDBOOKMODULE__GETALLGUIDEROGUECONFIGIDLIST_OFFSET UNITYSDK_OFFSET(0x1A063BC0)
#define RPG_CLIENT_HANDBOOKMODULE__GUIDEINIT_OFFSET UNITYSDK_OFFSET(0x1A060B20)
#define RPG_CLIENT_HANDBOOKMODULE__GUIDESENDPACKETSAFTERLOGINFINISHED_OFFSET UNITYSDK_OFFSET(0x1A060E50)
#define RPG_CLIENT_HANDBOOKMODULE__GUIDEUNINIT_OFFSET UNITYSDK_OFFSET(0x1A060DB0)
#define RPG_CLIENT_HANDBOOKMODULE__ISAVATARSHOULDDISPLAY_OFFSET UNITYSDK_OFFSET(0x1A05EB30)
#define RPG_CLIENT_HANDBOOKMODULE__ISCURRENTFARMMATCHINGWORLDMATERIALBYAVATARID_OFFSET UNITYSDK_OFFSET(0x1A0606B0)
#define RPG_CLIENT_HANDBOOKMODULE__ISCURRENTFARMMATCHINGWORLDMATERIALBYITEMID_OFFSET UNITYSDK_OFFSET(0x1A0609F0)
#define RPG_CLIENT_HANDBOOKMODULE__ISMISSIONMAIN_OFFSET UNITYSDK_OFFSET(0x1A05A890)
#define RPG_CLIENT_HANDBOOKMODULE__ONCURRENTTRACKINGCHRONICLEMISSIONDATAPREPARED_OFFSET UNITYSDK_OFFSET(0x1A05AA10)
#define RPG_CLIENT_HANDBOOKMODULE__ONDAILYACTIVEINFONOTIFY_OFFSET UNITYSDK_OFFSET(0x1A05B7A0)
#define RPG_CLIENT_HANDBOOKMODULE__ONGETDAILYACTIVEINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x1A05B070)
#define RPG_CLIENT_HANDBOOKMODULE__ONGETPREAVATARACTIVITYLISTSCRSP_OFFSET UNITYSDK_OFFSET(0x1A05F4E0)
#define RPG_CLIENT_HANDBOOKMODULE__ONGETPREAVATARGROWTHINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x1A05ED60)
#define RPG_CLIENT_HANDBOOKMODULE__ONONGINGMISSIONUPDATED_OFFSET UNITYSDK_OFFSET(0x1A058D30)
#define RPG_CLIENT_HANDBOOKMODULE__ONQUICKGUIDEREFRESHTIMER_OFFSET UNITYSDK_OFFSET(0x1A0628E0)
#define RPG_CLIENT_HANDBOOKMODULE__ONSCHEDULECHANGED_OFFSET UNITYSDK_OFFSET(0x1A05FB30)
#define RPG_CLIENT_HANDBOOKMODULE__ONTAKEALLAPREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x1A05BA60)
#define RPG_CLIENT_HANDBOOKMODULE__ONTAKEAPREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x1A05B910)
#define RPG_CLIENT_HANDBOOKMODULE__PREPARERELATIVEMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x1A05AAB0)
#define RPG_CLIENT_HANDBOOKMODULE__ROGUEINIT_OFFSET UNITYSDK_OFFSET(0x1A062970)
#define RPG_CLIENT_HANDBOOKMODULE__SAFEGETHANDBOOKGUIDEDATA_OFFSET UNITYSDK_OFFSET(0x1A060D00)
#define RPG_CLIENT_HANDBOOKMODULE__SAFEGETHANDBOOKROGUEDATA_OFFSET UNITYSDK_OFFSET(0x1A0637B0)
#define RPG_CLIENT_HANDBOOKMODULE__SETUPAVATARPARAMLISTLOCALPART_OFFSET UNITYSDK_OFFSET(0x1A05E370)
#define RPG_CLIENT_HANDBOOKMODULE__TRANSFERWITHCHECK_OFFSET UNITYSDK_OFFSET(0x1A062100)
#define RPG_CLIENT_HANDBOOKMODULE__TRYUPDATEREFRESHTIMER_OFFSET UNITYSDK_OFFSET(0x1A062640)
#define RPG_CLIENT_HANDBOOKMODULE__UPDATEACTIVEPOINT_OFFSET UNITYSDK_OFFSET(0x1A05B220)
#define RPG_CLIENT_HANDBOOKMODULE__UPDATEACTIVEREWARDS_OFFSET UNITYSDK_OFFSET(0x1A05B2A0)
#define RPG_CLIENT_HANDBOOKMODULE__UPDATEDAILYACTIVEQUESTS_OFFSET UNITYSDK_OFFSET(0x1A05B700)
#define RPG_CLIENT_HANDBOOKMODULE__UPDATEPREAVATARPARAM_OFFSET UNITYSDK_OFFSET(0x1A05F2C0)
#define RPG_CLIENT_HANDBOOKMODULE__UPDATEUSERPREFSTATUS_OFFSET UNITYSDK_OFFSET(0x1A05DF30)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookModule_TypeDefinitionIndex = 65689;

	class HandbookModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::UInt32 _ChronicleTabUnlock = 0x5EB; // 0x0
		// static const ::System::UInt32 _FirstEndmostChronicleNodeID = 0xFC64A; // 0x0
		// static const ::System::UInt32 UNLOCKID = 0x26AF; // 0x0
		// static const ::System::UInt32 _RogueTabUnlock = 0xC366; // 0x0
		// static const ::System::UInt32 _GridFightTabUnlock = 0xC365; // 0x0
		// static const ::System::UInt32 _RogueVanillaTabUnlock = 0x26F3; // 0x0
		::RPG::Client::Promises::Promise* _DailyActiveInitiated; // 0x10
		::RPG::Client::Promises::Promise* _RequestPreAvatarRefreshPromise; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HandbookGuideData*>* _HandbookGuideDatas; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _DailyQuestIDs; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::GuideRogueTabRow*>* _AllRogueTypeRowList; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _TakenActiveLevels_k__BackingField; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HandbookRogueData*>* _HandbookRogueDataList; // 0x40
		::System::Collections::Generic::HashSet_1<::System::Int64>* _ScoreRewardDataTimerCache; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::PreReleaseCharaParam*>* HandbookPreReleaseCharaList; // 0x50
		::System::Collections::Generic::List_1<::System::UInt32>* _RedDotDirtyIDsCache_k__BackingField; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PreAvatarGrowthMaterialData*>* _PreAvatarGrowthMaterialDict; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::HandbookChapterData*>* _ChapterDataList; // 0x68
		::System::Collections::Generic::List_1<::System::UInt32>* _SubMissionIDConditionList; // 0x70
		::System::Collections::Generic::List_1<::System::UInt32>* _DisabledAvatarList; // 0x78
		::System::Collections::Generic::List_1<::System::UInt32>* _RogueRedDotDirtyIDsCache_k__BackingField; // 0x80
		::System::Collections::Generic::List_1<::System::UInt32>* _MainMissionIDConditionList; // 0x88
		::RPG::GameCore::GameplayGuideTabConfigRow* _RogueRelicTypeRow; // 0x90
		::System::UInt32 _TodayWorldLevel_k__BackingField; // 0x98
		::System::UInt32 _QuickGuideWaitingTypeID; // 0x9C
		::System::UInt32 _QuickGuideWaitingFinishTimeStamp; // 0xA0
		::System::UInt32 _ActivePoint_k__BackingField; // 0xA4
		::System::UInt32 _ActivePointItemID_k__BackingField; // 0xA8
		::System::Boolean _HasDailyActiveInitiated; // 0xAC
		::System::Int32 _QuickGuideWaitingTimerID; // 0xB0
		::System::UInt32 _MaxActivePoint_k__BackingField; // 0xB4
		::System::UInt32 _HandbookChronicleOngoingMissionID_k__BackingField; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetGuideChallengeTabIDs(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETGUIDECHALLENGETABIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GuideChallengeDataConfigRow*>* GetGuideChallengeItemRows(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GuideChallengeDataConfigRow*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETGUIDECHALLENGEITEMROWS_OFFSET))(this, a1);
		}

		::System::Boolean IsGuideChallengeItemUnlock(::RPG::GameCore::GuideChallengeDataConfigRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GuideChallengeDataConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_ISGUIDECHALLENGEITEMUNLOCK_OFFSET))(this, a1);
		}

		::System::Boolean IsGuideChallengeTabUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_ISGUIDECHALLENGETABUNLOCK_OFFSET))(this);
		}

		::System::Boolean IsGuideChallengeTypeShow(::RPG::GameCore::GuideChallengeType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GuideChallengeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_ISGUIDECHALLENGETYPESHOW_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetGuideChallengeUnlockMainMissionIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETGUIDECHALLENGEUNLOCKMAINMISSIONIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetGuideChallengeUnlockSubMissionIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETGUIDECHALLENGEUNLOCKSUBMISSIONIDS_OFFSET))(this);
		}

		::RPG::GameCore::GuideChallengeDataConfigRow* GetGuideChallengeDataConfigByChallengeID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GuideChallengeDataConfigRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETGUIDECHALLENGEDATACONFIGBYCHALLENGEID_OFFSET))(this, a1);
		}

		::System::Void GenerateChapterData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GENERATECHAPTERDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::HandbookChapterData*>* GetChapterDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::HandbookChapterData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETCHAPTERDATALIST_OFFSET))(this);
		}

		::RPG::Client::HandbookChapterData* GetChapterData(::System::UInt32 a1)
		{
			return ((::RPG::Client::HandbookChapterData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETCHAPTERDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleMainPathData*>* GetSortedMainPathList(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleMainPathData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETSORTEDMAINPATHLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleSubPathData*>* GetSortedSubPathList(::RPG::Client::MissionChronicleMainPathData* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleSubPathData*>*(*)(::PVOID, ::RPG::Client::MissionChronicleMainPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETSORTEDSUBPATHLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::HandbookChronicleDisplayData*>* GetSortedChronicleDisplayDataList(::RPG::Client::MissionChronicleMainPathData* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::HandbookChronicleDisplayData*>*(*)(::PVOID, ::RPG::Client::MissionChronicleMainPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETSORTEDCHRONICLEDISPLAYDATALIST_OFFSET))(this, a1);
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

		::System::Void _GenerateSubPathListByLogicConnection(::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleSubPathData*>*& a1, ::RPG::GameCore::MissionChronicleConfig* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MissionChronicleSubPathData*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleSubPathData*>*&, ::RPG::GameCore::MissionChronicleConfig*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MissionChronicleSubPathData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__GENERATESUBPATHLISTBYLOGICCONNECTION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _GenerateSubPathListByConnection(::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleSubPathData*>*& a1, ::RPG::GameCore::MissionChronicleConfig* a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MissionChronicleSubPathData*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleSubPathData*>*&, ::RPG::GameCore::MissionChronicleConfig*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MissionChronicleSubPathData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__GENERATESUBPATHLISTBYCONNECTION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _GeneratePenaconyEndmostSubPathList(::System::Collections::Generic::List_1<::RPG::Client::PenaconyEndmostChroniclePathData*>*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PenaconyEndmostChroniclePathData*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__GENERATEPENACONYENDMOSTSUBPATHLIST_OFFSET))(this, a1);
		}

		::System::Void _AddMainPath(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleMainPathData*>*& a2, ::RPG::Client::MissionChronicleMainPathData* a3, ::System::Collections::Generic::HashSet_1<::System::UInt32>*& a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleMainPathData*>*&, ::RPG::Client::MissionChronicleMainPathData*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__ADDMAINPATH_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _AddSubPath(::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleSubPathData*>*& a1, ::RPG::Client::MissionChronicleSubPathData* a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleSubPathData*>*&, ::RPG::Client::MissionChronicleSubPathData*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__ADDSUBPATH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _AddPenaconyEndmostSubPath(::System::Collections::Generic::List_1<::RPG::Client::PenaconyEndmostChroniclePathData*>*& a1, ::Class_1_8C2974ED0C175887* a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PenaconyEndmostChroniclePathData*>*&, ::Class_1_8C2974ED0C175887*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__ADDPENACONYENDMOSTSUBPATH_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IsEndmostMainPathUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_ISENDMOSTMAINPATHUNLOCKED_OFFSET))(this);
		}

		::System::Boolean _IsMissionMain(::RPG::Client::MissionChronicleSubPathData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MissionChronicleSubPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__ISMISSIONMAIN_OFFSET))(this, a1);
		}

		::System::Void _OnOngingMissionUpdated(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__ONONGINGMISSIONUPDATED_OFFSET))(this, a1);
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

		::System::Void set_HandbookChronicleOngoingMissionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_SET_HANDBOOKCHRONICLEONGOINGMISSIONID_OFFSET))(this, a1);
		}

		::System::UInt32 get__EndmostUnlockSubmissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GET__ENDMOSTUNLOCKSUBMISSIONID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetDailyQuestIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETDAILYQUESTIDS_OFFSET))(this);
		}

		::System::UInt32 GetDailyQuestSortValue(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETDAILYQUESTSORTVALUE_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* DailyActiveInitiated()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_DAILYACTIVEINITIATED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::DailyActiveConfigRow*>* GetDailyActiveRewards()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::DailyActiveConfigRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETDAILYACTIVEREWARDS_OFFSET))(this);
		}

		::System::Void TakeReward(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_TAKEREWARD_OFFSET))(this, a1);
		}

		::System::Void _OnGetDailyActiveInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__ONGETDAILYACTIVEINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnDailyActiveInfoNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__ONDAILYACTIVEINFONOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateActivePoint(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__UPDATEACTIVEPOINT_OFFSET))(this, a1);
		}

		::System::Void _UpdateActiveRewards(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_31*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_31*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__UPDATEACTIVEREWARDS_OFFSET))(this, a1);
		}

		::System::Void _UpdateDailyActiveQuests(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__UPDATEDAILYACTIVEQUESTS_OFFSET))(this, a1);
		}

		::System::Void _OnTakeApRewardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__ONTAKEAPREWARDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTakeAllApRewardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__ONTAKEALLAPREWARDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_ActivePoint()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GET_ACTIVEPOINT_OFFSET))(this);
		}

		::System::Void set_ActivePoint(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_SET_ACTIVEPOINT_OFFSET))(this, a1);
		}

		::System::UInt32 get_TodayWorldLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GET_TODAYWORLDLEVEL_OFFSET))(this);
		}

		::System::Void set_TodayWorldLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_SET_TODAYWORLDLEVEL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_TakenActiveLevels()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GET_TAKENACTIVELEVELS_OFFSET))(this);
		}

		::System::Void set_TakenActiveLevels(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_SET_TAKENACTIVELEVELS_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxActivePoint()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GET_MAXACTIVEPOINT_OFFSET))(this);
		}

		::System::Void set_MaxActivePoint(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_SET_MAXACTIVEPOINT_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActivePointItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GET_ACTIVEPOINTITEMID_OFFSET))(this);
		}

		::System::Void set_ActivePointItemID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_SET_ACTIVEPOINTITEMID_OFFSET))(this, a1);
		}

		::System::Boolean IsUpReleasingChara(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_ISUPRELEASINGCHARA_OFFSET))(this, a1);
		}

		::System::Boolean IsCollaborationChara(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_ISCOLLABORATIONCHARA_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::Promise* RequestAllPreAvatarDataRefresh()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_REQUESTALLPREAVATARDATAREFRESH_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* RequestPreAvatarRelicDataRefresh(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_REQUESTPREAVATARRELICDATAREFRESH_OFFSET))(this, a1);
		}

		::System::Void SetDisabledAvatarList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_SETDISABLEDAVATARLIST_OFFSET))(this, a1);
		}

		::System::Void ClearDisabledAvatarList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_CLEARDISABLEDAVATARLIST_OFFSET))(this);
		}

		::System::Void DisableAllPreAvatar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_DISABLEALLPREAVATAR_OFFSET))(this);
		}

		::System::Boolean IsDisabledAvatar(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_ISDISABLEDAVATAR_OFFSET))(this, a1);
		}

		::System::Void ValidateGrowthTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_VALIDATEGROWTHTARGET_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarFarmGuideData*>* GetMaterialGuideIDListByAvatar(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarFarmGuideData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETMATERIALGUIDEIDLISTBYAVATAR_OFFSET))(this, a1);
		}

		::RPG::Client::PreReleaseCharaParam* GetPreReleaseCharaParam(::System::UInt32 a1)
		{
			return ((::RPG::Client::PreReleaseCharaParam*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETPRERELEASECHARAPARAM_OFFSET))(this, a1);
		}

		::RPG::Client::PreReleaseCharaParam* GetOrCreatePreReleaseCharaParam(::System::UInt32 a1)
		{
			return ((::RPG::Client::PreReleaseCharaParam*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETORCREATEPRERELEASECHARAPARAM_OFFSET))(this, a1);
		}

		::System::Void RecordAllPreReleaseAvatarSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_RECORDALLPRERELEASEAVATARSEEN_OFFSET))(this);
		}

		::System::Void RecordPreReleaseAvatarSeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_RECORDPRERELEASEAVATARSEEN_OFFSET))(this, a1);
		}

		::System::Boolean ExistingUnseenPrereleaseAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_EXISTINGUNSEENPRERELEASEAVATAR_OFFSET))(this);
		}

		::System::Boolean IsAvatarUnseenAsPreStatus(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_ISAVATARUNSEENASPRESTATUS_OFFSET))(this, a1);
		}

		::System::Void RefreshPreStatusAvatarForRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_REFRESHPRESTATUSAVATARFORRECORD_OFFSET))(this);
		}

		::System::Void _SetupAvatarParamListLocalPart(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__SETUPAVATARPARAMLISTLOCALPART_OFFSET))(this, a1);
		}

		::System::Void _OnGetPreAvatarGrowthInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__ONGETPREAVATARGROWTHINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetPreAvatarActivityListScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__ONGETPREAVATARACTIVITYLISTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnScheduleChanged(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__ONSCHEDULECHANGED_OFFSET))(this, a1);
		}

		::System::Void _UpdateUserPrefStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__UPDATEUSERPREFSTATUS_OFFSET))(this);
		}

		::System::Void _UpdatePreAvatarParam(::Class_1_21DCD4640D389503_14* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_14*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__UPDATEPREAVATARPARAM_OFFSET))(this, a1);
		}

		static ::System::Boolean _IsAvatarShouldDisplay(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__ISAVATARSHOULDDISPLAY_OFFSET))(a1);
		}

		::System::Void _GatherLevelupMaterialGuideIDByAvatarID(::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::RPG::Client::AvatarFarmGuideData*>*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::AvatarFarmGuideData*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__GATHERLEVELUPMATERIALGUIDEIDBYAVATARID_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _GatherLevelupMaterialGuideIDByItemID(::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::RPG::Client::AvatarFarmGuideData*>*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::AvatarFarmGuideData*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__GATHERLEVELUPMATERIALGUIDEIDBYITEMID_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 _FindGuideIDByMaterialItemByAvatarID(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__FINDGUIDEIDBYMATERIALITEMBYAVATARID_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _FindGuideIDByMaterialItem(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__FINDGUIDEIDBYMATERIALITEM_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsCurrentFarmMatchingWorldMaterialByAvatarID(::RPG::GameCore::CocoonRow* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CocoonRow*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__ISCURRENTFARMMATCHINGWORLDMATERIALBYAVATARID_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsCurrentFarmMatchingWorldMaterialByItemID(::RPG::GameCore::CocoonRow* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CocoonRow*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__ISCURRENTFARMMATCHINGWORLDMATERIALBYITEMID_OFFSET))(this, a1, a2);
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

		::System::Void RefreshGachaTimeByGuideIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_REFRESHGACHATIMEBYGUIDEIDS_OFFSET))(this, a1);
		}

		::System::Void RefreshTeleportByGuideIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_REFRESHTELEPORTBYGUIDEIDS_OFFSET))(this, a1, a2);
		}

		::System::Void RefreshGuideItemTeleports(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_REFRESHGUIDEITEMTELEPORTS_OFFSET))(this, a1);
		}

		::RPG::Client::HandbookGuideData* GetGuideData(::System::UInt32 a1)
		{
			return ((::RPG::Client::HandbookGuideData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETGUIDEDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::HandbookGuideData*>* GetShowGuideDatas(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::HandbookGuideData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETSHOWGUIDEDATAS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::HandbookGuideData*>* GetShowGuideDatasForRelic()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::HandbookGuideData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETSHOWGUIDEDATASFORRELIC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::HandbookGuideData*>* GetShowGuideDatasForRogueRelic()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::HandbookGuideData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETSHOWGUIDEDATASFORROGUERELIC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::HandbookGuideData*>* GetShowGuideDatasForNotLockedByFarmAdvanceLimit(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::HandbookGuideData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETSHOWGUIDEDATASFORNOTLOCKEDBYFARMADVANCELIMIT_OFFSET))(this, a1);
		}

		::System::Boolean IsRougeTournRelicUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_ISROUGETOURNRELICUNLOCK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::HandbookGuideData*>* GetAllGuideDatas(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::HandbookGuideData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETALLGUIDEDATAS_OFFSET))(this, a1);
		}

		::System::UInt32 GetQuickGuideExpireTime(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETQUICKGUIDEEXPIRETIME_OFFSET))(this, a1);
		}

		::System::UInt32 GetQuickGuideNextBeginTime(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETQUICKGUIDENEXTBEGINTIME_OFFSET))(this, a1);
		}

		::System::Void GoToGuide(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GOTOGUIDE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GotoToGuideRogue(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GOTOTOGUIDEROGUE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean IsGuideTabUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_ISGUIDETABUNLOCK_OFFSET))(this);
		}

		::System::Void StartQuickGuideRefreshTimer(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_STARTQUICKGUIDEREFRESHTIMER_OFFSET))(this, a1);
		}

		::System::Void StopQuickGuideRefreshTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_STOPQUICKGUIDEREFRESHTIMER_OFFSET))(this);
		}

		::System::Void _TryUpdateRefreshTimer(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__TRYUPDATEREFRESHTIMER_OFFSET))(this, a1, a2);
		}

		::RPG::Client::HandbookGuideData* _SafeGetHandbookGuideData(::System::UInt32 a1)
		{
			return ((::RPG::Client::HandbookGuideData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__SAFEGETHANDBOOKGUIDEDATA_OFFSET))(this, a1);
		}

		::System::Void _TransferWithCheck(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__TRANSFERWITHCHECK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _OnQuickGuideRefreshTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__ONQUICKGUIDEREFRESHTIMER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RedDotDirtyIDsCache()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GET_REDDOTDIRTYIDSCACHE_OFFSET))(this);
		}

		::System::Void set_RedDotDirtyIDsCache(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_SET_REDDOTDIRTYIDSCACHE_OFFSET))(this, a1);
		}

		::RPG::Client::PreAvatarGrowthMaterialData* GetPreAvatarGrowthMaterialData(::System::UInt32 a1)
		{
			return ((::RPG::Client::PreAvatarGrowthMaterialData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETPREAVATARGROWTHMATERIALDATA_OFFSET))(this, a1);
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

		::RPG::Client::HandbookRogueData* GetGuideRogueData(::System::UInt32 a1)
		{
			return ((::RPG::Client::HandbookRogueData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETGUIDEROGUEDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::HandbookRogueData*>* GetShowRogueDataList(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::HandbookRogueData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETSHOWROGUEDATALIST_OFFSET))(this, a1);
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

		::System::Void GotoToGuideRogueTournRelicCocoon(::RPG::Client::RogueTournRelicCocoonData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournRelicCocoonData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GOTOTOGUIDEROGUETOURNRELICCOCOON_OFFSET))(this, a1);
		}

		::System::Void GotoToGuideGridFightEntrance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GOTOTOGUIDEGRIDFIGHTENTRANCE_OFFSET))(this);
		}

		::System::Void AddGridFightScoreRewardDataTimer(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_ADDGRIDFIGHTSCOREREWARDDATATIMER_OFFSET))(this, a1);
		}

		::System::Void AddRogueScoreRewardDataTimer(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_ADDROGUESCOREREWARDDATATIMER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetHandbookRogueNewTypeIdList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETHANDBOOKROGUENEWTYPEIDLIST_OFFSET))(this);
		}

		::System::Boolean CheckIsHandbookNewestRogueBetaNew(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_CHECKISHANDBOOKNEWESTROGUEBETANEW_OFFSET))(this, a1);
		}

		::System::Void SetHandbookNewestRogueBetaSeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_SETHANDBOOKNEWESTROGUEBETASEEN_OFFSET))(this, a1);
		}

		::System::Void SetHandbookRogueTypeNewSeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_SETHANDBOOKROGUETYPENEWSEEN_OFFSET))(this, a1);
		}

		::RPG::Client::HandbookRogueData* _SafeGetHandbookRogueData(::System::UInt32 a1)
		{
			return ((::RPG::Client::HandbookRogueData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__SAFEGETHANDBOOKROGUEDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetAllGuideRogueConfigIDList(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__GETALLGUIDEROGUECONFIGIDLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetAllGuideMissionCondtionList(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__GETALLGUIDEMISSIONCONDTIONLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RogueRedDotDirtyIDsCache()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GET_ROGUEREDDOTDIRTYIDSCACHE_OFFSET))(this);
		}

		::System::Void set_RogueRedDotDirtyIDsCache(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_SET_ROGUEREDDOTDIRTYIDSCACHE_OFFSET))(this, a1);
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
	};
}
