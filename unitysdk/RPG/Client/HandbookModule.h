#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/GuideChallengeType.h"

class Class_1_21C7581DFE99F091_33;
class Class_1_8C2974ED0C175887_1;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class AvatarFarmGuideData; }
namespace RPG::Client { class HandbookChapterData; }
namespace RPG::Client { class HandbookChronicleDisplayData; }
namespace RPG::Client { class HandbookGuideData; }
namespace RPG::Client { class HandbookRogueData; }
namespace RPG::Client { class MissionChronicleMainPathData; }
namespace RPG::Client { class MissionChronicleSubPathData; }
namespace RPG::Client { class PenaconyEndmostChroniclePathData; }
namespace RPG::Client { class RogueTournRelicCocoonData; }
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

#define RPG_CLIENT_HANDBOOKMODULE_ADDGRIDFIGHTSCOREREWARDDATATIMER_OFFSET UNITYSDK_OFFSET(0xD301DA0)
#define RPG_CLIENT_HANDBOOKMODULE_ADDROGUESCOREREWARDDATATIMER_OFFSET UNITYSDK_OFFSET(0xD301F20)
#define RPG_CLIENT_HANDBOOKMODULE_CHECKISHANDBOOKNEWESTROGUEBETANEW_OFFSET UNITYSDK_OFFSET(0xD3026C0)
#define RPG_CLIENT_HANDBOOKMODULE_DAILYACTIVEINITIATED_OFFSET UNITYSDK_OFFSET(0xD2FB700)
#define RPG_CLIENT_HANDBOOKMODULE_GENERATECHAPTERDATA_OFFSET UNITYSDK_OFFSET(0xD2F8470)
#define RPG_CLIENT_HANDBOOKMODULE_GETALLGUIDEDATAS_OFFSET UNITYSDK_OFFSET(0xD2FF2A0)
#define RPG_CLIENT_HANDBOOKMODULE_GETCHAPTERDATALIST_OFFSET UNITYSDK_OFFSET(0xD2F8900)
#define RPG_CLIENT_HANDBOOKMODULE_GETCHAPTERDATA_OFFSET UNITYSDK_OFFSET(0xD2F97E0)
#define RPG_CLIENT_HANDBOOKMODULE_GETDAILYACTIVEREWARDS_OFFSET UNITYSDK_OFFSET(0xD2EE4E0)
#define RPG_CLIENT_HANDBOOKMODULE_GETDAILYQUESTIDS_OFFSET UNITYSDK_OFFSET(0xD2EE650)
#define RPG_CLIENT_HANDBOOKMODULE_GETDAILYQUESTSORTVALUE_OFFSET UNITYSDK_OFFSET(0xD2FB650)
#define RPG_CLIENT_HANDBOOKMODULE_GETGUIDECHALLENGEDATACONFIGBYCHALLENGEID_OFFSET UNITYSDK_OFFSET(0xD2F91E0)
#define RPG_CLIENT_HANDBOOKMODULE_GETGUIDECHALLENGEITEMROWS_OFFSET UNITYSDK_OFFSET(0xD2F8B30)
#define RPG_CLIENT_HANDBOOKMODULE_GETGUIDECHALLENGETABIDS_OFFSET UNITYSDK_OFFSET(0xD2F8940)
#define RPG_CLIENT_HANDBOOKMODULE_GETGUIDECHALLENGEUNLOCKMAINMISSIONIDS_OFFSET UNITYSDK_OFFSET(0xD2F8FC0)
#define RPG_CLIENT_HANDBOOKMODULE_GETGUIDECHALLENGEUNLOCKSUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0xD2F9120)
#define RPG_CLIENT_HANDBOOKMODULE_GETGUIDEDATA_OFFSET UNITYSDK_OFFSET(0xD2F6210)
#define RPG_CLIENT_HANDBOOKMODULE_GETGUIDEROGUEDATA_OFFSET UNITYSDK_OFFSET(0xD300EE0)
#define RPG_CLIENT_HANDBOOKMODULE_GETHANDBOOKROGUENEWTYPEIDLIST_OFFSET UNITYSDK_OFFSET(0xD3020A0)
#define RPG_CLIENT_HANDBOOKMODULE_GETLATESTUPDATEDCHAPTERID_OFFSET UNITYSDK_OFFSET(0xD2FAC50)
#define RPG_CLIENT_HANDBOOKMODULE_GETLATESTUPDATEDMAINPATHID_OFFSET UNITYSDK_OFFSET(0xD2FA790)
#define RPG_CLIENT_HANDBOOKMODULE_GETMATERIALGUIDEIDLISTBYAVATAR_OFFSET UNITYSDK_OFFSET(0xD2F2C60)
#define RPG_CLIENT_HANDBOOKMODULE_GETQUICKGUIDEEXPIRETIME_OFFSET UNITYSDK_OFFSET(0xD2FF580)
#define RPG_CLIENT_HANDBOOKMODULE_GETQUICKGUIDENEXTBEGINTIME_OFFSET UNITYSDK_OFFSET(0xD2FF6E0)
#define RPG_CLIENT_HANDBOOKMODULE_GETSHOWGUIDEDATASFORNOTLOCKEDBYFARMADVANCELIMIT_OFFSET UNITYSDK_OFFSET(0xD2FF050)
#define RPG_CLIENT_HANDBOOKMODULE_GETSHOWGUIDEDATASFORRELIC_OFFSET UNITYSDK_OFFSET(0xD2EFEF0)
#define RPG_CLIENT_HANDBOOKMODULE_GETSHOWGUIDEDATASFORROGUERELIC_OFFSET UNITYSDK_OFFSET(0xD2F03E0)
#define RPG_CLIENT_HANDBOOKMODULE_GETSHOWGUIDEDATAS_OFFSET UNITYSDK_OFFSET(0xD2FED20)
#define RPG_CLIENT_HANDBOOKMODULE_GETSHOWROGUEDATALIST_OFFSET UNITYSDK_OFFSET(0xD300FE0)
#define RPG_CLIENT_HANDBOOKMODULE_GETSORTEDCHRONICLEDISPLAYDATALIST_OFFSET UNITYSDK_OFFSET(0xD2F6A30)
#define RPG_CLIENT_HANDBOOKMODULE_GETSORTEDMAINPATHLIST_OFFSET UNITYSDK_OFFSET(0xD2F9380)
#define RPG_CLIENT_HANDBOOKMODULE_GETSORTEDSUBPATHLIST_OFFSET UNITYSDK_OFFSET(0xD2F9CA0)
#define RPG_CLIENT_HANDBOOKMODULE_GET_ACTIVEPOINTITEMID_OFFSET UNITYSDK_OFFSET(0xD2FC970)
#define RPG_CLIENT_HANDBOOKMODULE_GET_ACTIVEPOINT_OFFSET UNITYSDK_OFFSET(0xD2FC8F0)
#define RPG_CLIENT_HANDBOOKMODULE_GET_ALLROGUETYPEROWLIST_OFFSET UNITYSDK_OFFSET(0xD3024A0)
#define RPG_CLIENT_HANDBOOKMODULE_GET_GRIDFIGHTACTIVITYPAGEGOTOID_OFFSET UNITYSDK_OFFSET(0xD302FC0)
#define RPG_CLIENT_HANDBOOKMODULE_GET_HANDBOOKCHRONICLEONGOINGMISSIONID_OFFSET UNITYSDK_OFFSET(0xD2FB630)
#define RPG_CLIENT_HANDBOOKMODULE_GET_MAXACTIVEPOINT_OFFSET UNITYSDK_OFFSET(0xD2FC950)
#define RPG_CLIENT_HANDBOOKMODULE_GET_REDDOTDIRTYIDSCACHE_OFFSET UNITYSDK_OFFSET(0xD3000E0)
#define RPG_CLIENT_HANDBOOKMODULE_GET_ROGUEACTIVITYPAGEGOTOID_OFFSET UNITYSDK_OFFSET(0xD302EB0)
#define RPG_CLIENT_HANDBOOKMODULE_GET_ROGUEREDDOTDIRTYIDSCACHE_OFFSET UNITYSDK_OFFSET(0xD302E90)
#define RPG_CLIENT_HANDBOOKMODULE_GET_TAKENACTIVELEVELS_OFFSET UNITYSDK_OFFSET(0xD2FC930)
#define RPG_CLIENT_HANDBOOKMODULE_GET_TODAYWORLDLEVEL_OFFSET UNITYSDK_OFFSET(0xD2FC910)
#define RPG_CLIENT_HANDBOOKMODULE_GET__ENDMOSTUNLOCKSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0xD2FB2E0)
#define RPG_CLIENT_HANDBOOKMODULE_GOTOGUIDE_OFFSET UNITYSDK_OFFSET(0xD2FF840)
#define RPG_CLIENT_HANDBOOKMODULE_GOTOTOGUIDEGRIDFIGHTENTRANCE_OFFSET UNITYSDK_OFFSET(0xD301D10)
#define RPG_CLIENT_HANDBOOKMODULE_GOTOTOGUIDEROGUEDLC_OFFSET UNITYSDK_OFFSET(0xD301560)
#define RPG_CLIENT_HANDBOOKMODULE_GOTOTOGUIDEROGUENOUS_OFFSET UNITYSDK_OFFSET(0xD301690)
#define RPG_CLIENT_HANDBOOKMODULE_GOTOTOGUIDEROGUETOURNENTRANCE_OFFSET UNITYSDK_OFFSET(0xD3017C0)
#define RPG_CLIENT_HANDBOOKMODULE_GOTOTOGUIDEROGUETOURNRELICCOCOON_OFFSET UNITYSDK_OFFSET(0xD3019E0)
#define RPG_CLIENT_HANDBOOKMODULE_GOTOTOGUIDEROGUE_OFFSET UNITYSDK_OFFSET(0xD2FFB90)
#define RPG_CLIENT_HANDBOOKMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xD3030D0)
#define RPG_CLIENT_HANDBOOKMODULE_ISCHRONICLEUNLOCKED_OFFSET UNITYSDK_OFFSET(0xD2FA5D0)
#define RPG_CLIENT_HANDBOOKMODULE_ISENDMOSTMAINPATHUNLOCKED_OFFSET UNITYSDK_OFFSET(0xD2F7590)
#define RPG_CLIENT_HANDBOOKMODULE_ISGUIDECHALLENGEITEMUNLOCK_OFFSET UNITYSDK_OFFSET(0xD2F8DC0)
#define RPG_CLIENT_HANDBOOKMODULE_ISGUIDECHALLENGETABUNLOCK_OFFSET UNITYSDK_OFFSET(0xD2F8E20)
#define RPG_CLIENT_HANDBOOKMODULE_ISGUIDECHALLENGETYPESHOW_OFFSET UNITYSDK_OFFSET(0xD2F8E60)
#define RPG_CLIENT_HANDBOOKMODULE_ISGUIDETABUNLOCK_OFFSET UNITYSDK_OFFSET(0xD2FFCD0)
#define RPG_CLIENT_HANDBOOKMODULE_ISROGUEDLCUNLOCKED_OFFSET UNITYSDK_OFFSET(0xD3002B0)
#define RPG_CLIENT_HANDBOOKMODULE_ISROGUETABUNLOCK_OFFSET UNITYSDK_OFFSET(0xD300160)
#define RPG_CLIENT_HANDBOOKMODULE_ISROUGETOURNRELICUNLOCK_OFFSET UNITYSDK_OFFSET(0xD2F01F0)
#define RPG_CLIENT_HANDBOOKMODULE_MARKLATESTUPDATEDNODESEEN_OFFSET UNITYSDK_OFFSET(0xD2FADC0)
#define RPG_CLIENT_HANDBOOKMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xD303840)
#define RPG_CLIENT_HANDBOOKMODULE_PREPAREOPENCONDTIONMISSION_OFFSET UNITYSDK_OFFSET(0xD300410)
#define RPG_CLIENT_HANDBOOKMODULE_REFRESHGACHATIMEBYGUIDEIDS_OFFSET UNITYSDK_OFFSET(0xD2FE640)
#define RPG_CLIENT_HANDBOOKMODULE_REFRESHGUIDEITEMTELEPORTS_OFFSET UNITYSDK_OFFSET(0xD2FEC60)
#define RPG_CLIENT_HANDBOOKMODULE_REFRESHTELEPORTBYGUIDEIDS_OFFSET UNITYSDK_OFFSET(0xD2FE9A0)
#define RPG_CLIENT_HANDBOOKMODULE_SENDPACKETSAFTERLOGINFINISHED_OFFSET UNITYSDK_OFFSET(0xD3033B0)
#define RPG_CLIENT_HANDBOOKMODULE_SETHANDBOOKNEWESTROGUEBETASEEN_OFFSET UNITYSDK_OFFSET(0xD3028C0)
#define RPG_CLIENT_HANDBOOKMODULE_SETHANDBOOKROGUETYPENEWSEEN_OFFSET UNITYSDK_OFFSET(0xD302B30)
#define RPG_CLIENT_HANDBOOKMODULE_SET_ACTIVEPOINTITEMID_OFFSET UNITYSDK_OFFSET(0xD2FC980)
#define RPG_CLIENT_HANDBOOKMODULE_SET_ACTIVEPOINT_OFFSET UNITYSDK_OFFSET(0xD2FC900)
#define RPG_CLIENT_HANDBOOKMODULE_SET_HANDBOOKCHRONICLEONGOINGMISSIONID_OFFSET UNITYSDK_OFFSET(0xD2FB640)
#define RPG_CLIENT_HANDBOOKMODULE_SET_MAXACTIVEPOINT_OFFSET UNITYSDK_OFFSET(0xD2FC960)
#define RPG_CLIENT_HANDBOOKMODULE_SET_REDDOTDIRTYIDSCACHE_OFFSET UNITYSDK_OFFSET(0xD3000F0)
#define RPG_CLIENT_HANDBOOKMODULE_SET_ROGUEREDDOTDIRTYIDSCACHE_OFFSET UNITYSDK_OFFSET(0xD302EA0)
#define RPG_CLIENT_HANDBOOKMODULE_SET_TAKENACTIVELEVELS_OFFSET UNITYSDK_OFFSET(0xD2FC940)
#define RPG_CLIENT_HANDBOOKMODULE_SET_TODAYWORLDLEVEL_OFFSET UNITYSDK_OFFSET(0xD2FC920)
#define RPG_CLIENT_HANDBOOKMODULE_STARTQUICKGUIDEREFRESHTIMER_OFFSET UNITYSDK_OFFSET(0xD2FFD60)
#define RPG_CLIENT_HANDBOOKMODULE_STOPQUICKGUIDEREFRESHTIMER_OFFSET UNITYSDK_OFFSET(0xD2FFFC0)
#define RPG_CLIENT_HANDBOOKMODULE_TAKEREWARD_OFFSET UNITYSDK_OFFSET(0xD2FB890)
#define RPG_CLIENT_HANDBOOKMODULE__ADDMAINPATH_OFFSET UNITYSDK_OFFSET(0xD2F98E0)
#define RPG_CLIENT_HANDBOOKMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xD3036E0)
#define RPG_CLIENT_HANDBOOKMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xD303420)
#define RPG_CLIENT_HANDBOOKMODULE__ADDPENACONYENDMOSTSUBPATH_OFFSET UNITYSDK_OFFSET(0xD2FB050)
#define RPG_CLIENT_HANDBOOKMODULE__ADDSUBPATH_OFFSET UNITYSDK_OFFSET(0xD2FAE30)
#define RPG_CLIENT_HANDBOOKMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xD3038B0)
#define RPG_CLIENT_HANDBOOKMODULE__FINDGUIDEIDBYMATERIALITEMBYAVATARID_OFFSET UNITYSDK_OFFSET(0xD2FD3C0)
#define RPG_CLIENT_HANDBOOKMODULE__FINDGUIDEIDBYMATERIALITEM_OFFSET UNITYSDK_OFFSET(0xD2FD910)
#define RPG_CLIENT_HANDBOOKMODULE__GATHERLEVELUPMATERIALGUIDEIDBYAVATARID_OFFSET UNITYSDK_OFFSET(0xD2FCF40)
#define RPG_CLIENT_HANDBOOKMODULE__GATHERLEVELUPMATERIALGUIDEIDBYITEMID_OFFSET UNITYSDK_OFFSET(0xD2FC9B0)
#define RPG_CLIENT_HANDBOOKMODULE__GENERATEPENACONYENDMOSTSUBPATHLIST_OFFSET UNITYSDK_OFFSET(0xD2FA530)
#define RPG_CLIENT_HANDBOOKMODULE__GENERATESUBPATHLISTBYCONNECTION_OFFSET UNITYSDK_OFFSET(0xD2FA240)
#define RPG_CLIENT_HANDBOOKMODULE__GENERATESUBPATHLISTBYLOGICCONNECTION_OFFSET UNITYSDK_OFFSET(0xD2F9F50)
#define RPG_CLIENT_HANDBOOKMODULE__GETALLGUIDEMISSIONCONDTIONLIST_OFFSET UNITYSDK_OFFSET(0xD3006F0)
#define RPG_CLIENT_HANDBOOKMODULE__GETALLGUIDEROGUECONFIGIDLIST_OFFSET UNITYSDK_OFFSET(0xD301340)
#define RPG_CLIENT_HANDBOOKMODULE__GUIDEINIT_OFFSET UNITYSDK_OFFSET(0xD2FE2D0)
#define RPG_CLIENT_HANDBOOKMODULE__GUIDESENDPACKETSAFTERLOGINFINISHED_OFFSET UNITYSDK_OFFSET(0xD2FE600)
#define RPG_CLIENT_HANDBOOKMODULE__GUIDEUNINIT_OFFSET UNITYSDK_OFFSET(0xD2FE560)
#define RPG_CLIENT_HANDBOOKMODULE__ISCURRENTFARMMATCHINGWORLDMATERIALBYAVATARID_OFFSET UNITYSDK_OFFSET(0xD2FDE60)
#define RPG_CLIENT_HANDBOOKMODULE__ISCURRENTFARMMATCHINGWORLDMATERIALBYITEMID_OFFSET UNITYSDK_OFFSET(0xD2FE1A0)
#define RPG_CLIENT_HANDBOOKMODULE__ISMISSIONMAIN_OFFSET UNITYSDK_OFFSET(0xD2FB240)
#define RPG_CLIENT_HANDBOOKMODULE__ONCURRENTTRACKINGCHRONICLEMISSIONDATAPREPARED_OFFSET UNITYSDK_OFFSET(0xD2FB3C0)
#define RPG_CLIENT_HANDBOOKMODULE__ONDAILYACTIVEINFONOTIFY_OFFSET UNITYSDK_OFFSET(0xD2FC130)
#define RPG_CLIENT_HANDBOOKMODULE__ONGETDAILYACTIVEINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xD2FBA20)
#define RPG_CLIENT_HANDBOOKMODULE__ONONGINGMISSIONUPDATED_OFFSET UNITYSDK_OFFSET(0xD2F96C0)
#define RPG_CLIENT_HANDBOOKMODULE__ONQUICKGUIDEREFRESHTIMER_OFFSET UNITYSDK_OFFSET(0xD300070)
#define RPG_CLIENT_HANDBOOKMODULE__ONTAKEALLAPREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0xD2FC3F0)
#define RPG_CLIENT_HANDBOOKMODULE__ONTAKEAPREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0xD2FC2A0)
#define RPG_CLIENT_HANDBOOKMODULE__PREPARERELATIVEMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xD2FB460)
#define RPG_CLIENT_HANDBOOKMODULE__ROGUEINIT_OFFSET UNITYSDK_OFFSET(0xD300100)
#define RPG_CLIENT_HANDBOOKMODULE__SAFEGETHANDBOOKGUIDEDATA_OFFSET UNITYSDK_OFFSET(0xD2FE4B0)
#define RPG_CLIENT_HANDBOOKMODULE__SAFEGETHANDBOOKROGUEDATA_OFFSET UNITYSDK_OFFSET(0xD300F30)
#define RPG_CLIENT_HANDBOOKMODULE__TRANSFERWITHCHECK_OFFSET UNITYSDK_OFFSET(0xD2FF8B0)
#define RPG_CLIENT_HANDBOOKMODULE__TRYUPDATEREFRESHTIMER_OFFSET UNITYSDK_OFFSET(0xD2FFDE0)
#define RPG_CLIENT_HANDBOOKMODULE__UPDATEACTIVEPOINT_OFFSET UNITYSDK_OFFSET(0xD2FBBC0)
#define RPG_CLIENT_HANDBOOKMODULE__UPDATEACTIVEREWARDS_OFFSET UNITYSDK_OFFSET(0xD2FBC30)
#define RPG_CLIENT_HANDBOOKMODULE__UPDATEDAILYACTIVEQUESTS_OFFSET UNITYSDK_OFFSET(0xD2FC090)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookModule_TypeDefinitionIndex = 65629;

	class HandbookModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::UInt32 _ChronicleTabUnlock = 0x5EB; // 0x0
		// static const ::System::UInt32 _FirstEndmostChronicleNodeID = 0xFC64A; // 0x0
		// static const ::System::UInt32 UNLOCKID = 0x26AF; // 0x0
		// static const ::System::UInt32 RogueTabUnlock = 0xC366; // 0x0
		// static const ::System::UInt32 _GridFightTabUnlock = 0xC365; // 0x0
		// static const ::System::UInt32 _RogueVanillaTabUnlock = 0x26F3; // 0x0
		::System::Collections::Generic::List_1<::System::UInt32>* _DailyQuestIDs; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::GuideRogueTabRow*>* _AllRogueTypeRowList; // 0x18
		::RPG::GameCore::GameplayGuideTabConfigRow* _RogueRelicTypeRow; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _RogueRedDotDirtyIDsCache_k__BackingField; // 0x28
		::System::Collections::Generic::HashSet_1<::System::Int64>* _ScoreRewardDataTimerCache; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HandbookRogueData*>* _HandbookRogueDataList; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _SubMissionIDConditionList; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* _TakenActiveLevels_k__BackingField; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* _RedDotDirtyIDsCache_k__BackingField; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HandbookGuideData*>* _HandbookGuideDatas; // 0x58
		::System::Collections::Generic::List_1<::RPG::Client::HandbookChapterData*>* _ChapterDataList; // 0x60
		::System::Collections::Generic::List_1<::System::UInt32>* _MainMissionIDConditionList; // 0x68
		::RPG::Client::Promises::Promise* _DailyActiveInitiated; // 0x70
		::System::UInt32 _QuickGuideWaitingFinishTimeStamp; // 0x78
		::System::UInt32 _ActivePoint_k__BackingField; // 0x7C
		::System::UInt32 _HandbookChronicleOngoingMissionID_k__BackingField; // 0x80
		::System::UInt32 _ActivePointItemID_k__BackingField; // 0x84
		::System::Boolean _HasDailyActiveInitiated; // 0x88
		::System::Int32 _QuickGuideWaitingTimerID; // 0x8C
		::System::UInt32 _QuickGuideWaitingTypeID; // 0x90
		::System::UInt32 _TodayWorldLevel_k__BackingField; // 0x94
		::System::UInt32 _MaxActivePoint_k__BackingField; // 0x98

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

		::System::Void _AddPenaconyEndmostSubPath(::System::Collections::Generic::List_1<::RPG::Client::PenaconyEndmostChroniclePathData*>*& a1, ::Class_1_8C2974ED0C175887_1* a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PenaconyEndmostChroniclePathData*>*&, ::Class_1_8C2974ED0C175887_1*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__ADDPENACONYENDMOSTSUBPATH_OFFSET))(this, a1, a2, a3);
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

		::System::Void _UpdateActiveRewards(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_33*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_33*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE__UPDATEACTIVEREWARDS_OFFSET))(this, a1);
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

		::System::Collections::Generic::List_1<::RPG::Client::AvatarFarmGuideData*>* GetMaterialGuideIDListByAvatar(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarFarmGuideData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE_GETMATERIALGUIDEIDLISTBYAVATAR_OFFSET))(this, a1);
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
