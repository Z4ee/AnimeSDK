#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MuseumTalkTriggerType.h"
#include "unitysdk/RPG/GameCore/MuseumTalkType.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_14E02E1F6D70E487_6;
class Class_1_14E02E1F6D70E487_7;
class Class_1_827373C1CEDFE355;
class Class_1_D1E0AD3915BCCF29_78;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class MainMissionData; }
namespace RPG::Client { class MuseumAreaData; }
namespace RPG::Client { class MuseumAvatarItemData; }
namespace RPG::Client { class MuseumData; }
namespace RPG::Client { class MuseumExhibitItemData; }
namespace RPG::Client { class MuseumGetItemNotifyParam; }
namespace RPG::Client { class MuseumStaffData; }
namespace RPG::Client { class MuseumTurnResult; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class MuseumActivityQuestConfigRow; }
namespace RPG::GameCore { class MuseumCommentsRow; }
namespace RPG::GameCore { class MuseumDeskTalkConfigRow; }
namespace RPG::GameCore { class MuseumTutorialTalkRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MUSEUMMODULE_GETALLEXHIBITITEMDATALIST_OFFSET UNITYSDK_OFFSET(0xAB0B800)
#define RPG_CLIENT_MUSEUMMODULE_GETALLMUSEUMAVATARITEMDATALIST_OFFSET UNITYSDK_OFFSET(0xAB0B730)
#define RPG_CLIENT_MUSEUMMODULE_GETDISPLAYNPCSTAFFDATAS_OFFSET UNITYSDK_OFFSET(0xAB05370)
#define RPG_CLIENT_MUSEUMMODULE_GETMUSEUMINFO_OFFSET UNITYSDK_OFFSET(0xAB04C80)
#define RPG_CLIENT_MUSEUMMODULE_GETMUSTTRIGGERTALKID_OFFSET UNITYSDK_OFFSET(0xAB03CD0)
#define RPG_CLIENT_MUSEUMMODULE_GETRANDOMCOMMENTS_OFFSET UNITYSDK_OFFSET(0xAAFFF00)
#define RPG_CLIENT_MUSEUMMODULE_GETSTAFFDATA_OFFSET UNITYSDK_OFFSET(0xAAFD370)
#define RPG_CLIENT_MUSEUMMODULE_GETSTARTRELATEDMISSIONCOUNTBYCHAPTERID_OFFSET UNITYSDK_OFFSET(0xAB02440)
#define RPG_CLIENT_MUSEUMMODULE_GET_ALLEXHIBITITEMDATA_OFFSET UNITYSDK_OFFSET(0xAAFF810)
#define RPG_CLIENT_MUSEUMMODULE_GET_ALLITEMMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xAB03100)
#define RPG_CLIENT_MUSEUMMODULE_GET_ALLMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xAB030F0)
#define RPG_CLIENT_MUSEUMMODULE_GET_ALLMUSEUMAVATARITEMDATA_OFFSET UNITYSDK_OFFSET(0xAAFF7B0)
#define RPG_CLIENT_MUSEUMMODULE_GET_ALLSTAFFMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xAB03110)
#define RPG_CLIENT_MUSEUMMODULE_GET_ALLSTAFFS_OFFSET UNITYSDK_OFFSET(0xAB0B720)
#define RPG_CLIENT_MUSEUMMODULE_GET_ATLASUNLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xAB031B0)
#define RPG_CLIENT_MUSEUMMODULE_GET_CURCONFIGLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xAB03510)
#define RPG_CLIENT_MUSEUMMODULE_GET_CURFORCEMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xAB03370)
#define RPG_CLIENT_MUSEUMMODULE_GET_CURPHASEUNLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xAB03380)
#define RPG_CLIENT_MUSEUMMODULE_GET_EXHIBITITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xAB0BBF0)
#define RPG_CLIENT_MUSEUMMODULE_GET_FINISHEDQUESTLIST_OFFSET UNITYSDK_OFFSET(0xAB0B990)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISALLAREAGOTFULLRENEWPOINT_OFFSET UNITYSDK_OFFSET(0xAB0BA10)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISALLFINISH_OFFSET UNITYSDK_OFFSET(0xAB0BA40)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISALREADYFINISH_OFFSET UNITYSDK_OFFSET(0xAB0BBD0)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISATLASUNLOCK_OFFSET UNITYSDK_OFFSET(0xAB031F0)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISCONFIGLOCKED_OFFSET UNITYSDK_OFFSET(0xAB036D0)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISFORCEMISSIONTAKEN_OFFSET UNITYSDK_OFFSET(0xAB03580)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xAB0BA30)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISMARKETUNLOCK_OFFSET UNITYSDK_OFFSET(0xAB03250)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISPHASEUNLOCKMISSIONTAKEN_OFFSET UNITYSDK_OFFSET(0xAB03590)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISTARGETUNLOCK_OFFSET UNITYSDK_OFFSET(0xAB03310)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISUPGRADEUNLOCK_OFFSET UNITYSDK_OFFSET(0xAB032B0)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISWAITFINISHTURNRSP_OFFSET UNITYSDK_OFFSET(0xAB0B930)
#define RPG_CLIENT_MUSEUMMODULE_GET_LOGICRANDOM_OFFSET UNITYSDK_OFFSET(0xAB0B970)
#define RPG_CLIENT_MUSEUMMODULE_GET_MARKETUNLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xAB031C0)
#define RPG_CLIENT_MUSEUMMODULE_GET_MAXSTAFFSTATS_OFFSET UNITYSDK_OFFSET(0xAB0B950)
#define RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMAVATARCOUNT_OFFSET UNITYSDK_OFFSET(0xAB0BCE0)
#define RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMCURRENCYCONFIGID_OFFSET UNITYSDK_OFFSET(0xAB0B8F0)
#define RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMDATA_OFFSET UNITYSDK_OFFSET(0xAB0B710)
#define RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMMISSIONCHAPTERID_OFFSET UNITYSDK_OFFSET(0xAB035B0)
#define RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMMISSIONLIMIT_OFFSET UNITYSDK_OFFSET(0xAB02570)
#define RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMTURNRESULTCACHE_OFFSET UNITYSDK_OFFSET(0xAB0B910)
#define RPG_CLIENT_MUSEUMMODULE_GET_PHASEQUESTLIST_OFFSET UNITYSDK_OFFSET(0xAB0B9F0)
#define RPG_CLIENT_MUSEUMMODULE_GET_REDDOTPHASEQUESTLIST_OFFSET UNITYSDK_OFFSET(0xAB0B9D0)
#define RPG_CLIENT_MUSEUMMODULE_GET_REDDOTQUESTSERIES_OFFSET UNITYSDK_OFFSET(0xAB0B9B0)
#define RPG_CLIENT_MUSEUMMODULE_GET_REWARDQUESTSERIESLIST_OFFSET UNITYSDK_OFFSET(0xAB0B8D0)
#define RPG_CLIENT_MUSEUMMODULE_GET_STAFFCOUNT_OFFSET UNITYSDK_OFFSET(0xAB0BC80)
#define RPG_CLIENT_MUSEUMMODULE_GET_TAKENITEMMISSIONCOUNT_OFFSET UNITYSDK_OFFSET(0xAB03120)
#define RPG_CLIENT_MUSEUMMODULE_GET_TAKENMISSIONCOUNT_OFFSET UNITYSDK_OFFSET(0xAB03160)
#define RPG_CLIENT_MUSEUMMODULE_GET_TAKENSTAFFMISSIONCOUNT_OFFSET UNITYSDK_OFFSET(0xAB03140)
#define RPG_CLIENT_MUSEUMMODULE_GET_TARGETUNLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xAB031E0)
#define RPG_CLIENT_MUSEUMMODULE_GET_UNLOCKAVATARCOUNT_OFFSET UNITYSDK_OFFSET(0xAB0BE80)
#define RPG_CLIENT_MUSEUMMODULE_GET_UNLOCKEXHIBITITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xAB0C020)
#define RPG_CLIENT_MUSEUMMODULE_GET_UPGRADEUNLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xAB031D0)
#define RPG_CLIENT_MUSEUMMODULE_HAVEHIDEPHASEMISSION_OFFSET UNITYSDK_OFFSET(0xAB01E60)
#define RPG_CLIENT_MUSEUMMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xAB064F0)
#define RPG_CLIENT_MUSEUMMODULE_ISCHAPTERMISSIONREACHLIMIT_OFFSET UNITYSDK_OFFSET(0xAB023E0)
#define RPG_CLIENT_MUSEUMMODULE_ISPHASEMISSIONSTART_OFFSET UNITYSDK_OFFSET(0xAB02060)
#define RPG_CLIENT_MUSEUMMODULE_RANDOMGETTALKID_OFFSET UNITYSDK_OFFSET(0xAB03730)
#define RPG_CLIENT_MUSEUMMODULE_RANDOMGETTEXTIDBYTALKID_OFFSET UNITYSDK_OFFSET(0xAB03E70)
#define RPG_CLIENT_MUSEUMMODULE_REFRESHALLMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xAB00DD0)
#define RPG_CLIENT_MUSEUMMODULE_REFRESHALLUNLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xAB01290)
#define RPG_CLIENT_MUSEUMMODULE_REFRESHCONFIGLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xAB01710)
#define RPG_CLIENT_MUSEUMMODULE_REFRESHSTAFFAVAILABLE_OFFSET UNITYSDK_OFFSET(0xAB04E70)
#define RPG_CLIENT_MUSEUMMODULE_REMOVESTAFF_OFFSET UNITYSDK_OFFSET(0xAB04D90)
#define RPG_CLIENT_MUSEUMMODULE_SET_FINISHEDQUESTLIST_OFFSET UNITYSDK_OFFSET(0xAB0B9A0)
#define RPG_CLIENT_MUSEUMMODULE_SET_ISALLAREAGOTFULLRENEWPOINT_OFFSET UNITYSDK_OFFSET(0xAB0BA20)
#define RPG_CLIENT_MUSEUMMODULE_SET_ISALREADYFINISH_OFFSET UNITYSDK_OFFSET(0xAB0BBE0)
#define RPG_CLIENT_MUSEUMMODULE_SET_ISWAITFINISHTURNRSP_OFFSET UNITYSDK_OFFSET(0xAB0B940)
#define RPG_CLIENT_MUSEUMMODULE_SET_LOGICRANDOM_OFFSET UNITYSDK_OFFSET(0xAB0B980)
#define RPG_CLIENT_MUSEUMMODULE_SET_MAXSTAFFSTATS_OFFSET UNITYSDK_OFFSET(0xAB0B960)
#define RPG_CLIENT_MUSEUMMODULE_SET_MUSEUMCURRENCYCONFIGID_OFFSET UNITYSDK_OFFSET(0xAB0B900)
#define RPG_CLIENT_MUSEUMMODULE_SET_MUSEUMTURNRESULTCACHE_OFFSET UNITYSDK_OFFSET(0xAB0B920)
#define RPG_CLIENT_MUSEUMMODULE_SET_PHASEQUESTLIST_OFFSET UNITYSDK_OFFSET(0xAB0BA00)
#define RPG_CLIENT_MUSEUMMODULE_SET_REDDOTPHASEQUESTLIST_OFFSET UNITYSDK_OFFSET(0xAB0B9E0)
#define RPG_CLIENT_MUSEUMMODULE_SET_REDDOTQUESTSERIES_OFFSET UNITYSDK_OFFSET(0xAB0B9C0)
#define RPG_CLIENT_MUSEUMMODULE_SET_REWARDQUESTSERIESLIST_OFFSET UNITYSDK_OFFSET(0xAB0B8E0)
#define RPG_CLIENT_MUSEUMMODULE_SET_TAKENITEMMISSIONCOUNT_OFFSET UNITYSDK_OFFSET(0xAB03130)
#define RPG_CLIENT_MUSEUMMODULE_SET_TAKENSTAFFMISSIONCOUNT_OFFSET UNITYSDK_OFFSET(0xAB03150)
#define RPG_CLIENT_MUSEUMMODULE_TRYNOTIFYNEWTURN_OFFSET UNITYSDK_OFFSET(0xAB05690)
#define RPG_CLIENT_MUSEUMMODULE_TRYNOTIFYRANDOMEVENT_OFFSET UNITYSDK_OFFSET(0xAB05530)
#define RPG_CLIENT_MUSEUMMODULE_TRYNOTIFYTARGETREWARD_OFFSET UNITYSDK_OFFSET(0xAB05770)
#define RPG_CLIENT_MUSEUMMODULE_TRYTRIGGERTUTORIALMISSIONPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xAB05E40)
#define RPG_CLIENT_MUSEUMMODULE_UPDATEUNSEENTALKMISSION_OFFSET UNITYSDK_OFFSET(0xAB04040)
#define RPG_CLIENT_MUSEUMMODULE__ADDMUSTTRIGGERTALKID_OFFSET UNITYSDK_OFFSET(0xAB04580)
#define RPG_CLIENT_MUSEUMMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xAB06A10)
#define RPG_CLIENT_MUSEUMMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xAB06C90)
#define RPG_CLIENT_MUSEUMMODULE__ADDTALKID_OFFSET UNITYSDK_OFFSET(0xAB047C0)
#define RPG_CLIENT_MUSEUMMODULE__BEGINMUSEUMPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xAB08080)
#define RPG_CLIENT_MUSEUMMODULE__CACHETARGETREWARD_OFFSET UNITYSDK_OFFSET(0xAB09700)
#define RPG_CLIENT_MUSEUMMODULE__CANTAKEITEMMISSION_OFFSET UNITYSDK_OFFSET(0xAB02FC0)
#define RPG_CLIENT_MUSEUMMODULE__CLEARTARGETREWARDCACHE_OFFSET UNITYSDK_OFFSET(0xAB05C80)
#define RPG_CLIENT_MUSEUMMODULE__CMDBUYNPCSTUFFSCRSP_OFFSET UNITYSDK_OFFSET(0xAB07C50)
#define RPG_CLIENT_MUSEUMMODULE__CMDFINISHCURTURNSCRSP_OFFSET UNITYSDK_OFFSET(0xAB07DF0)
#define RPG_CLIENT_MUSEUMMODULE__CMDGETMUSEUMINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xAB07090)
#define RPG_CLIENT_MUSEUMMODULE__CMDMUSEUMRANDOMEVENTQUERYSCRSP_OFFSET UNITYSDK_OFFSET(0xAB084E0)
#define RPG_CLIENT_MUSEUMMODULE__CMDMUSEUMRANDOMEVENTSELECTSCRSP_OFFSET UNITYSDK_OFFSET(0xAB08580)
#define RPG_CLIENT_MUSEUMMODULE__CMDREMOVESTUFFFROMAREASCRSP_OFFSET UNITYSDK_OFFSET(0xAB07D50)
#define RPG_CLIENT_MUSEUMMODULE__CMDSETSTUFFTOAREASCRSP_OFFSET UNITYSDK_OFFSET(0xAB07CD0)
#define RPG_CLIENT_MUSEUMMODULE__CMDTAKECOLLECTREWARDRSP_OFFSET UNITYSDK_OFFSET(0xAB08630)
#define RPG_CLIENT_MUSEUMMODULE__CMDUPGRADEAREASCRSP_OFFSET UNITYSDK_OFFSET(0xAB08300)
#define RPG_CLIENT_MUSEUMMODULE__CMDUPGRADEAREASTATSCRSP_OFFSET UNITYSDK_OFFSET(0xAB083A0)
#define RPG_CLIENT_MUSEUMMODULE__CREATEALLEXHIBITCOLLECTIONITEMDATA_OFFSET UNITYSDK_OFFSET(0xAB0B160)
#define RPG_CLIENT_MUSEUMMODULE__CREATEALLFORCEMISSIONID_OFFSET UNITYSDK_OFFSET(0xAB018C0)
#define RPG_CLIENT_MUSEUMMODULE__CREATEALLMISSIONID_OFFSET UNITYSDK_OFFSET(0xAB00F60)
#define RPG_CLIENT_MUSEUMMODULE__CREATEALLPHASEUNLOCKMISSIONID_OFFSET UNITYSDK_OFFSET(0xAB02D10)
#define RPG_CLIENT_MUSEUMMODULE__CREATEALLSTAFFCOLLECTIONITEMDATA_OFFSET UNITYSDK_OFFSET(0xAB0ADD0)
#define RPG_CLIENT_MUSEUMMODULE__CREATEALLSTAFFSDATA_OFFSET UNITYSDK_OFFSET(0xAB04EE0)
#define RPG_CLIENT_MUSEUMMODULE__CREATETALKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xAB043D0)
#define RPG_CLIENT_MUSEUMMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xAB04AF0)
#define RPG_CLIENT_MUSEUMMODULE__GETCOMMENTPOOLINDEX_OFFSET UNITYSDK_OFFSET(0xAB00D80)
#define RPG_CLIENT_MUSEUMMODULE__GETCOMMENTPOOL_OFFSET UNITYSDK_OFFSET(0xAB00BE0)
#define RPG_CLIENT_MUSEUMMODULE__GETHIGHESTPRIORITY_OFFSET UNITYSDK_OFFSET(0xAB04A30)
#define RPG_CLIENT_MUSEUMMODULE__GETPOSITIVECOMMENTPROB_OFFSET UNITYSDK_OFFSET(0xAB00CA0)
#define RPG_CLIENT_MUSEUMMODULE__GETSTARTRELATEDMISSIONCOUNTBYCHAPTERID_B__28_0_OFFSET UNITYSDK_OFFSET(0xAB0C1E0)
#define RPG_CLIENT_MUSEUMMODULE__GETTUTORIALMISSIONPERFORMANCEROW_OFFSET UNITYSDK_OFFSET(0xAB06200)
#define RPG_CLIENT_MUSEUMMODULE__HASTARGETREWARDCACHE_OFFSET UNITYSDK_OFFSET(0xAB05BD0)
#define RPG_CLIENT_MUSEUMMODULE__INITREWARDQUEST_OFFSET UNITYSDK_OFFSET(0xAB06830)
#define RPG_CLIENT_MUSEUMMODULE__INITTALKDATA_OFFSET UNITYSDK_OFFSET(0xAB04240)
#define RPG_CLIENT_MUSEUMMODULE__ISHAVEMISSIONEVENT_OFFSET UNITYSDK_OFFSET(0xAB09F50)
#define RPG_CLIENT_MUSEUMMODULE__LOADTALKDATA_OFFSET UNITYSDK_OFFSET(0xAB038C0)
#define RPG_CLIENT_MUSEUMMODULE__ONBEFOREMUSEUMDATACHANGE_1_OFFSET UNITYSDK_OFFSET(0xAB07250)
#define RPG_CLIENT_MUSEUMMODULE__ONBEFOREMUSEUMDATACHANGE_OFFSET UNITYSDK_OFFSET(0xAB08A50)
#define RPG_CLIENT_MUSEUMMODULE__ONFORCEMISSIONTAKEN_OFFSET UNITYSDK_OFFSET(0xAB02EB0)
#define RPG_CLIENT_MUSEUMMODULE__ONMAINMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0xAB099B0)
#define RPG_CLIENT_MUSEUMMODULE__ONMAINMISSIONTAKEN_OFFSET UNITYSDK_OFFSET(0xAB098F0)
#define RPG_CLIENT_MUSEUMMODULE__ONMUSEUMPERFORMANCEEND_OFFSET UNITYSDK_OFFSET(0xAB09D80)
#define RPG_CLIENT_MUSEUMMODULE__ONREFRESHEVENTSTAFFAVAILABLE_OFFSET UNITYSDK_OFFSET(0xAB0A090)
#define RPG_CLIENT_MUSEUMMODULE__ONSHOWLOADINGPAGE_OFFSET UNITYSDK_OFFSET(0xAB0A040)
#define RPG_CLIENT_MUSEUMMODULE__ONSYNCGETEXHIBITSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xAB09040)
#define RPG_CLIENT_MUSEUMMODULE__ONSYNCGETSTUFFSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xAB08D70)
#define RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMFUNDSCHANGEDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xAB08CA0)
#define RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMINFOCHANGEDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xAB088A0)
#define RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMRANDOMEVENTSTARTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xAB09280)
#define RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMTARGETMISSIONFINISHNOTIFY_OFFSET UNITYSDK_OFFSET(0xAB095A0)
#define RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMTARGETREWARDNOTIFY_OFFSET UNITYSDK_OFFSET(0xAB09690)
#define RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMTARGETSTARTNOTIFY_OFFSET UNITYSDK_OFFSET(0xAB09480)
#define RPG_CLIENT_MUSEUMMODULE__PREPARECOMMENTS_OFFSET UNITYSDK_OFFSET(0xAB005A0)
#define RPG_CLIENT_MUSEUMMODULE__READCOMMENTCONST_OFFSET UNITYSDK_OFFSET(0xAB002F0)
#define RPG_CLIENT_MUSEUMMODULE__READUNLOCKMISSIONID_OFFSET UNITYSDK_OFFSET(0xAB01420)
#define RPG_CLIENT_MUSEUMMODULE__RECEIVEALLMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xAB02740)
#define RPG_CLIENT_MUSEUMMODULE__RECEIVEUNLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xAB02BD0)
#define RPG_CLIENT_MUSEUMMODULE__REFRESHCONFIGLOCKMISSIONDATA_B__14_0_OFFSET UNITYSDK_OFFSET(0xAB0C1C0)
#define RPG_CLIENT_MUSEUMMODULE__REFRESHEVENTSTAFFAVAILABLE_1_OFFSET UNITYSDK_OFFSET(0xAB08C30)
#define RPG_CLIENT_MUSEUMMODULE__REFRESHEVENTSTAFFAVAILABLE_OFFSET UNITYSDK_OFFSET(0xAB077D0)
#define RPG_CLIENT_MUSEUMMODULE__REFRESHFINISHEDQUEST_OFFSET UNITYSDK_OFFSET(0xAB0A520)
#define RPG_CLIENT_MUSEUMMODULE__REFRESHFINISHSTATUS_OFFSET UNITYSDK_OFFSET(0xAB07BF0)
#define RPG_CLIENT_MUSEUMMODULE__REFRESHFORCEMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xAB01CC0)
#define RPG_CLIENT_MUSEUMMODULE__REFRESHPHASEUNLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xAB01B20)
#define RPG_CLIENT_MUSEUMMODULE__REFRESHSINGLESTAFFAVAILABLE_OFFSET UNITYSDK_OFFSET(0xAB0A4B0)
#define RPG_CLIENT_MUSEUMMODULE__REFRESHSTAFFAVAILABLE_OFFSET UNITYSDK_OFFSET(0xAB04FE0)
#define RPG_CLIENT_MUSEUMMODULE__REFRESHTAKENREWARDMUSEUMDATA_OFFSET UNITYSDK_OFFSET(0xAB07840)
#define RPG_CLIENT_MUSEUMMODULE__RESETSTATUS_OFFSET UNITYSDK_OFFSET(0xAB07430)
#define RPG_CLIENT_MUSEUMMODULE__SETVALIDTALKIDSCACHE_OFFSET UNITYSDK_OFFSET(0xAB039D0)
#define RPG_CLIENT_MUSEUMMODULE__TRIGGERPERFORMANCEANDEXITMUSEUM_OFFSET UNITYSDK_OFFSET(0xAB05F00)
#define RPG_CLIENT_MUSEUMMODULE__TRYADDTALKMISSIONLIST_OFFSET UNITYSDK_OFFSET(0xAB049A0)
#define RPG_CLIENT_MUSEUMMODULE__TRYCACHEPHASEUPGRADE_OFFSET UNITYSDK_OFFSET(0xAB0B500)
#define RPG_CLIENT_MUSEUMMODULE__TRYCACHETURNCHANGE_OFFSET UNITYSDK_OFFSET(0xAB0B6C0)
#define RPG_CLIENT_MUSEUMMODULE__TRYCACHETURNRESULT_OFFSET UNITYSDK_OFFSET(0xAB0B650)
#define RPG_CLIENT_MUSEUMMODULE__TRYNOTIFYMUSEUMEXHIBITGET_OFFSET UNITYSDK_OFFSET(0xAB0B4A0)
#define RPG_CLIENT_MUSEUMMODULE__TRYNOTIFYNEWPHASEBEGIN_OFFSET UNITYSDK_OFFSET(0xAB09A90)
#define RPG_CLIENT_MUSEUMMODULE__TRYNOTIFYPHASEUPGRADE_OFFSET UNITYSDK_OFFSET(0xAB09EC0)
#define RPG_CLIENT_MUSEUMMODULE__TRYUPDATEUNSEENMISSIONBYTALKID_OFFSET UNITYSDK_OFFSET(0xAB03C20)
#define RPG_CLIENT_MUSEUMMODULE__UNINITCOMMENTDATA_OFFSET UNITYSDK_OFFSET(0xAB00D20)
#define RPG_CLIENT_MUSEUMMODULE__UNINITMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xAB02690)
#define RPG_CLIENT_MUSEUMMODULE__UNINITTALKDATA_OFFSET UNITYSDK_OFFSET(0xAB04510)
#define RPG_CLIENT_MUSEUMMODULE__UPDATEUNSEENTUTORIALMISSION_OFFSET UNITYSDK_OFFSET(0xAB062E0)
#define RPG_CLIENT_MUSEUMMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xAB0C230)
#define RPG_CLIENT_MUSEUMMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xAB0C2C0)
#define RPG_CLIENT_MUSEUMMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xAB0C320)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumModule_TypeDefinitionIndex = 61099;

	class MuseumModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::String* _PositiveCommentProbKey; // 0x0
		// static const ::System::String* _CommentNumPerAreaKey; // 0x0
		// static const ::System::String* _MuseumMissionLimitIDKey; // 0x0
		// static const ::System::String* _MuseumMissionChapterIDKey; // 0x0
		// static const ::System::String* _AtlasUnlockMissionIDKey; // 0x0
		// static const ::System::String* _MarketUnlockMissionIDKey; // 0x0
		// static const ::System::String* _UpgradeUnlockMissionIDKey; // 0x0
		// static const ::System::String* _TargetUnlockMissionIDKey; // 0x0
		// static const ::System::UInt32 _MuseumMaxPhaseLevel = 0x5; // 0x0
		// static const ::System::String* _MUSEUM_PERFORMANCE_EVENT_PREFIX; // 0x0
		// static const ::System::String* _MUSEUM_HIDE_MISSION_PERFORMANCE_EVENT; // 0x0
		// static const ::System::String* _MuseumCurrencyItemIDKey; // 0x0
		// static const ::System::String* _MUSEUM_END_PERFORMANCE_EVENT; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumExhibitItemData*>* _AllExhibitItemData; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _AllPhaseUnlockMissionID; // 0x18
		::RPG::Client::MuseumTurnResult* _MuseumTurnResultCache_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::GameCore::MuseumActivityQuestConfigRow*>* _RewardQuestSeriesList_k__BackingField; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumAvatarItemData*>* _AllMuseumAvatarItemData; // 0x30
		::RPG::Client::MuseumData* _MuseumData; // 0x38
		::RPG::Client::Promises::Promise* _RemoveStaffPromise; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* _AllStaffMissionID; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* _AllUnlockMissionID; // 0x50
		::RPG::Client::MuseumGetItemNotifyParam* _MuseumGetItemNotifyCache; // 0x58
		::System::Collections::Generic::List_1<::System::UInt32>* _RedDotPhaseQuestList_k__BackingField; // 0x60
		::Il2CppArray<::System::Collections::Generic::List_1<::RPG::GameCore::MuseumCommentsRow*>*>* _Comments; // 0x68
		::RPG::Client::Promises::Promise* _GetMuseumInfoPromise; // 0x70
		::System::Collections::Generic::List_1<::System::UInt32>* _TalkMissionList; // 0x78
		::Class_1_827373C1CEDFE355* _LogicRandom_k__BackingField; // 0x80
		::RPG::Client::Promises::Promise* _RefreshConfigLockMissionDataPromise; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MainMissionData*>* _AllItemMissionData; // 0x90
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MuseumTalkTriggerType, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MuseumTalkType, ::System::UInt32>*>* _TriggerTypeToMustTriggerTalkDict; // 0x98
		::RPG::Client::Promises::Promise* _RefreshMissionDataPromise; // 0xA0
		::Il2CppArray<::System::Single>* _PositiveCommentProb; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MainMissionData*>* _AllStaffMissionData; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MainMissionData*>* _AllMissionData; // 0xB8
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MuseumTalkTriggerType, ::System::Collections::Generic::List_1<::System::UInt32>*>* _TriggerTypeToTalkIDs; // 0xC0
		::RPG::Client::MainMissionData* _AtlasUnlockMissionData; // 0xC8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MainMissionData*>* _AllPhaseUnlockMissionData; // 0xD0
		::System::Collections::Generic::List_1<::System::UInt32>* _AllItemMissionID; // 0xD8
		::RPG::Client::MainMissionData* _CurForceMissionData; // 0xE0
		::System::Collections::Generic::List_1<::System::UInt32>* _FinishedQuestList_k__BackingField; // 0xE8
		::RPG::Client::MainMissionData* _MarketUnlockMissionData; // 0xF0
		::System::Collections::Generic::List_1<::System::UInt32>* _AllMissionID; // 0xF8
		::System::Collections::Generic::List_1<::System::UInt32>* _RedDotQuestSeries_k__BackingField; // 0x100
		::RPG::Client::Promises::Promise* _RefreshUnlockMissionDataPromise; // 0x108
		::RPG::Client::MainMissionData* _UpgradeUnlockMissionData; // 0x110
		::System::Collections::Generic::List_1<::System::UInt32>* _AllForceMissionID; // 0x118
		::RPG::Client::MainMissionData* _TargetUnlockMissionData; // 0x120
		::System::Collections::Generic::List_1<::System::UInt32>* _PhaseQuestList_k__BackingField; // 0x128
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumStaffData*>* _AllStaffs; // 0x130
		::System::Collections::Generic::List_1<::System::UInt32>* _ValidTalkIDsCache; // 0x138
		::System::Boolean _IsAllAreaGotFullRenewPoint_k__BackingField; // 0x140
		::System::Boolean _IsInPerfomance; // 0x141
		::System::UInt32 _MuseumMissionLimit; // 0x144
		::System::UInt32 _MarketUnlockMissionID; // 0x148
		::System::UInt32 _TakenStaffMissionCount_k__BackingField; // 0x14C
		::System::UInt32 _TakenItemMissionCount_k__BackingField; // 0x150
		::System::Int32 _MaxStaffStats_k__BackingField; // 0x154
		::System::UInt32 _CommentNumPerArea; // 0x158
		::System::UInt32 _MuseumMissionChapterID; // 0x15C
		::System::UInt32 _UpgradeUnlockMissionID; // 0x160
		::System::UInt32 _TargetUnlockMissionID; // 0x164
		::System::Boolean _IsTurnResultNeedNotify; // 0x168
		::System::Boolean _IsWaitFinishTurnRsp_k__BackingField; // 0x169
		::System::Boolean _IsTakenItemMission; // 0x16A
		::System::Boolean _IsAlreadyFinish; // 0x16B
		::System::Boolean _IsDataLoaded; // 0x16C
		::System::Boolean _MuseumShowNewTurnHint; // 0x16D
		::System::Boolean _IsAlreadyFinish_k__BackingField; // 0x16E
		::System::Nullable_1<::System::UInt32> _PhaseUpgradeNotify; // 0x170
		::System::UInt32 _MuseumCurrencyConfigID_k__BackingField; // 0x178
		::System::UInt32 _AtlasUnlockMissionID; // 0x17C
		::System::UInt32 _ListeningMainMissionID; // 0x180

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::MuseumCommentsRow*>* GetRandomComments(::RPG::Client::MuseumAreaData* areaData)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::MuseumCommentsRow*>*(*)(::PVOID, ::RPG::Client::MuseumAreaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GETRANDOMCOMMENTS_OFFSET))(this, areaData);
		}

		::System::Void _UnInitCommentData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__UNINITCOMMENTDATA_OFFSET))(this);
		}

		::System::Void _ReadCommentConst()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__READCOMMENTCONST_OFFSET))(this);
		}

		::System::Void _PrepareComments()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__PREPARECOMMENTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::MuseumCommentsRow*>* _GetCommentPool(::System::UInt32 areaID, ::System::Boolean isPositive)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::MuseumCommentsRow*>*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__GETCOMMENTPOOL_OFFSET))(this, areaID, isPositive);
		}

		::System::Single _GetPositiveCommentProb(::RPG::Client::MuseumAreaData* areaData)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::MuseumAreaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__GETPOSITIVECOMMENTPROB_OFFSET))(this, areaData);
		}

		static ::System::Int32 _GetCommentPoolIndex(::System::UInt32 areaID, ::System::Boolean isPositive)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__GETCOMMENTPOOLINDEX_OFFSET))(areaID, isPositive);
		}

		::RPG::Client::Promises::Promise* RefreshAllMissionData()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_REFRESHALLMISSIONDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* RefreshAllUnlockMissionData()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_REFRESHALLUNLOCKMISSIONDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* RefreshConfigLockMissionData()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_REFRESHCONFIGLOCKMISSIONDATA_OFFSET))(this);
		}

		::System::Boolean HaveHidePhaseMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_HAVEHIDEPHASEMISSION_OFFSET))(this);
		}

		::System::Boolean IsChapterMissionReachLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_ISCHAPTERMISSIONREACHLIMIT_OFFSET))(this);
		}

		::System::Void _UnInitMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__UNINITMISSIONDATA_OFFSET))(this);
		}

		::System::Void _CreateAllMissionID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CREATEALLMISSIONID_OFFSET))(this);
		}

		::System::Void _ReceiveAllMissionData(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* dataList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__RECEIVEALLMISSIONDATA_OFFSET))(this, dataList);
		}

		::System::Void _ReadUnlockMissionID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__READUNLOCKMISSIONID_OFFSET))(this);
		}

		::System::Void _ReceiveUnlockMissionData(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* dataList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__RECEIVEUNLOCKMISSIONDATA_OFFSET))(this, dataList);
		}

		::System::Void _CreateAllForceMissionID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CREATEALLFORCEMISSIONID_OFFSET))(this);
		}

		::System::Void _CreateAllPhaseUnlockMissionID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CREATEALLPHASEUNLOCKMISSIONID_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* _RefreshPhaseUnlockMissionData()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__REFRESHPHASEUNLOCKMISSIONDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* _RefreshForceMissionData()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__REFRESHFORCEMISSIONDATA_OFFSET))(this);
		}

		::System::Void _OnForceMissionTaken(::System::UInt32 mainMissionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONFORCEMISSIONTAKEN_OFFSET))(this, mainMissionID);
		}

		::System::Boolean _CanTakeItemMission(::System::UInt32 mainMissionID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CANTAKEITEMMISSION_OFFSET))(this, mainMissionID);
		}

		::System::Int32 GetStartRelatedMissionCountByChapterID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GETSTARTRELATEDMISSIONCOUNTBYCHAPTERID_OFFSET))(this);
		}

		::System::Boolean IsPhaseMissionStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_ISPHASEMISSIONSTART_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MainMissionData*>* get_AllMissionData()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MainMissionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ALLMISSIONDATA_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MainMissionData*>* get_AllItemMissionData()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MainMissionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ALLITEMMISSIONDATA_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MainMissionData*>* get_AllStaffMissionData()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MainMissionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ALLSTAFFMISSIONDATA_OFFSET))(this);
		}

		::System::UInt32 get_TakenItemMissionCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_TAKENITEMMISSIONCOUNT_OFFSET))(this);
		}

		::System::Void set_TakenItemMissionCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_TAKENITEMMISSIONCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_TakenStaffMissionCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_TAKENSTAFFMISSIONCOUNT_OFFSET))(this);
		}

		::System::Void set_TakenStaffMissionCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_TAKENSTAFFMISSIONCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_TakenMissionCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_TAKENMISSIONCOUNT_OFFSET))(this);
		}

		::RPG::Client::MainMissionData* get_AtlasUnlockMissionData()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ATLASUNLOCKMISSIONDATA_OFFSET))(this);
		}

		::RPG::Client::MainMissionData* get_MarketUnlockMissionData()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_MARKETUNLOCKMISSIONDATA_OFFSET))(this);
		}

		::RPG::Client::MainMissionData* get_UpgradeUnlockMissionData()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_UPGRADEUNLOCKMISSIONDATA_OFFSET))(this);
		}

		::RPG::Client::MainMissionData* get_TargetUnlockMissionData()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_TARGETUNLOCKMISSIONDATA_OFFSET))(this);
		}

		::System::Boolean get_IsAtlasUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ISATLASUNLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsMarketUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ISMARKETUNLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsUpgradeUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ISUPGRADEUNLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsTargetUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ISTARGETUNLOCK_OFFSET))(this);
		}

		::RPG::Client::MainMissionData* get_CurForceMissionData()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_CURFORCEMISSIONDATA_OFFSET))(this);
		}

		::RPG::Client::MainMissionData* get_CurPhaseUnlockMissionData()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_CURPHASEUNLOCKMISSIONDATA_OFFSET))(this);
		}

		::RPG::Client::MainMissionData* get_CurConfigLockMissionData()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_CURCONFIGLOCKMISSIONDATA_OFFSET))(this);
		}

		::System::UInt32 get_MuseumMissionLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMMISSIONLIMIT_OFFSET))(this);
		}

		::System::UInt32 get_MuseumMissionChapterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMMISSIONCHAPTERID_OFFSET))(this);
		}

		::System::Boolean get_IsForceMissionTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ISFORCEMISSIONTAKEN_OFFSET))(this);
		}

		::System::Boolean get_IsPhaseUnlockMissionTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ISPHASEUNLOCKMISSIONTAKEN_OFFSET))(this);
		}

		::System::Boolean get_IsConfigLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ISCONFIGLOCKED_OFFSET))(this);
		}

		::System::UInt32 RandomGetTalkID(::RPG::GameCore::MuseumTalkTriggerType triggerType)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::MuseumTalkTriggerType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_RANDOMGETTALKID_OFFSET))(this, triggerType);
		}

		::System::UInt32 GetMustTriggerTalkID(::RPG::GameCore::MuseumTalkTriggerType triggerType, ::RPG::GameCore::MuseumTalkType talkType)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::MuseumTalkTriggerType, ::RPG::GameCore::MuseumTalkType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GETMUSTTRIGGERTALKID_OFFSET))(this, triggerType, talkType);
		}

		::RPG::Client::TextID RandomGetTextIDByTalkID(::System::UInt32 talkID)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_RANDOMGETTEXTIDBYTALKID_OFFSET))(this, talkID);
		}

		::System::Void UpdateUnseenTalkMission(::System::UInt32 missionID, ::System::Boolean hasSeen)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_UPDATEUNSEENTALKMISSION_OFFSET))(this, missionID, hasSeen);
		}

		::System::Void _InitTalkData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__INITTALKDATA_OFFSET))(this);
		}

		::System::Void _UnInitTalkData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__UNINITTALKDATA_OFFSET))(this);
		}

		::System::Void _LoadTalkData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__LOADTALKDATA_OFFSET))(this);
		}

		::System::Void _CreateTalkMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CREATETALKMISSIONDATA_OFFSET))(this);
		}

		::System::Void _AddTalkID(::RPG::GameCore::MuseumDeskTalkConfigRow* talkRow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MuseumDeskTalkConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ADDTALKID_OFFSET))(this, talkRow);
		}

		::System::Void _AddMustTriggerTalkID(::RPG::GameCore::MuseumDeskTalkConfigRow* talkRow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MuseumDeskTalkConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ADDMUSTTRIGGERTALKID_OFFSET))(this, talkRow);
		}

		::System::Void _TryAddTalkMissionList(::RPG::GameCore::MuseumDeskTalkConfigRow* talkRow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MuseumDeskTalkConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__TRYADDTALKMISSIONLIST_OFFSET))(this, talkRow);
		}

		::System::Void _TryUpdateUnseenMissionByTalkID(::System::UInt32 talkID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__TRYUPDATEUNSEENMISSIONBYTALKID_OFFSET))(this, talkID);
		}

		::System::Void _SetValidTalkIDsCache(::System::Collections::Generic::List_1<::System::UInt32>* talkIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__SETVALIDTALKIDSCACHE_OFFSET))(this, talkIDs);
		}

		::System::UInt32 _GetHighestPriority(::System::Collections::Generic::List_1<::System::UInt32>* talkIDs)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__GETHIGHESTPRIORITY_OFFSET))(this, talkIDs);
		}

		::RPG::Client::MuseumStaffData* GetStaffData(::System::UInt32 staffID)
		{
			return ((::RPG::Client::MuseumStaffData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GETSTAFFDATA_OFFSET))(this, staffID);
		}

		::RPG::Client::Promises::IPromise* GetMuseumInfo()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GETMUSEUMINFO_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* RemoveStaff(::System::UInt32 staffID)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_REMOVESTAFF_OFFSET))(this, staffID);
		}

		::RPG::Client::Promises::IPromise* RefreshStaffAvailable()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_REFRESHSTAFFAVAILABLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MuseumStaffData*>* GetDisplayNpcStaffDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MuseumStaffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GETDISPLAYNPCSTAFFDATAS_OFFSET))(this);
		}

		::System::Void TryNotifyRandomEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_TRYNOTIFYRANDOMEVENT_OFFSET))(this);
		}

		::System::Boolean TryNotifyNewTurn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_TRYNOTIFYNEWTURN_OFFSET))(this);
		}

		::System::Void TryNotifyTargetReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_TRYNOTIFYTARGETREWARD_OFFSET))(this);
		}

		::System::Boolean TryTriggerTutorialMissionPerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_TRYTRIGGERTUTORIALMISSIONPERFORMANCE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _CmdGetMuseumInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CMDGETMUSEUMINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _CmdBuyNpcStuffScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CMDBUYNPCSTUFFSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _CmdSetStuffToAreaScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CMDSETSTUFFTOAREASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _CmdRemoveStuffFromAreaScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CMDREMOVESTUFFFROMAREASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _CmdFinishCurTurnScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CMDFINISHCURTURNSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _CmdUpgradeAreaScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CMDUPGRADEAREASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _CmdUpgradeAreaStatScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CMDUPGRADEAREASTATSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _CmdMuseumRandomEventQueryScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CMDMUSEUMRANDOMEVENTQUERYSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _CmdMuseumRandomEventSelectScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CMDMUSEUMRANDOMEVENTSELECTSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _CmdTakeCollectRewardRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CMDTAKECOLLECTREWARDRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnSyncMuseumInfoChangedScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMINFOCHANGEDSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnSyncMuseumFundsChangedScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMFUNDSCHANGEDSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnSyncGetStuffScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONSYNCGETSTUFFSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnSyncGetExhibitScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONSYNCGETEXHIBITSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnSyncMuseumRandomEventStartScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMRANDOMEVENTSTARTSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnSyncMuseumTargetStartNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMTARGETSTARTNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnSyncMuseumTargetMissionFinishNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMTARGETMISSIONFINISHNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnSyncMuseumTargetRewardNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMTARGETREWARDNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Boolean _HasTargetRewardCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__HASTARGETREWARDCACHE_OFFSET))(this);
		}

		::System::Void _CacheTargetReward(::Class_1_D1E0AD3915BCCF29_78* ntf)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_78*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CACHETARGETREWARD_OFFSET))(this, ntf);
		}

		::System::Void _ClearTargetRewardCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CLEARTARGETREWARDCACHE_OFFSET))(this);
		}

		::System::Void _OnMainMissionTaken(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONMAINMISSIONTAKEN_OFFSET))(this, arg);
		}

		::System::Void _OnMainMissionFinish(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONMAINMISSIONFINISH_OFFSET))(this, arg);
		}

		::System::Void _OnMuseumPerformanceEnd(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONMUSEUMPERFORMANCEEND_OFFSET))(this, arg);
		}

		::System::Void _OnShowLoadingPage(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONSHOWLOADINGPAGE_OFFSET))(this, arg);
		}

		::System::Void _BeginMuseumPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__BEGINMUSEUMPERFORMANCE_OFFSET))(this);
		}

		::System::Boolean _TryNotifyPhaseUpgrade()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__TRYNOTIFYPHASEUPGRADE_OFFSET))(this);
		}

		::System::Void _ResetStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__RESETSTATUS_OFFSET))(this);
		}

		::System::Void _RefreshTakenRewardMuseumData(::Class_1_14E02E1F6D70E487_6* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__REFRESHTAKENREWARDMUSEUMDATA_OFFSET))(this, rsp);
		}

		::System::Void _RefreshStaffAvailable(::RPG::Client::Promises::Promise* finishPromise)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__REFRESHSTAFFAVAILABLE_OFFSET))(this, finishPromise);
		}

		::System::Void _RefreshEventStaffAvailable(::Class_1_14E02E1F6D70E487_6* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__REFRESHEVENTSTAFFAVAILABLE_OFFSET))(this, rsp);
		}

		::System::Void _RefreshEventStaffAvailable_1(::Class_1_14E02E1F6D70E487_7* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__REFRESHEVENTSTAFFAVAILABLE_1_OFFSET))(this, notify);
		}

		::System::Void _OnRefreshEventStaffAvailable(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* eventList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONREFRESHEVENTSTAFFAVAILABLE_OFFSET))(this, eventList);
		}

		::System::Void _RefreshSingleStaffAvailable(::RPG::Client::MuseumStaffData* museumStaffData, ::System::Boolean isUnlock)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumStaffData*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__REFRESHSINGLESTAFFAVAILABLE_OFFSET))(this, museumStaffData, isUnlock);
		}

		::System::Void _InitRewardQuest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__INITREWARDQUEST_OFFSET))(this);
		}

		::System::Void _RefreshFinishedQuest(::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__REFRESHFINISHEDQUEST_OFFSET))(this, o);
		}

		::System::Void _CreateAllStaffsData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CREATEALLSTAFFSDATA_OFFSET))(this);
		}

		::System::Void _CreateAllStaffCollectionItemData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CREATEALLSTAFFCOLLECTIONITEMDATA_OFFSET))(this);
		}

		::System::Void _CreateAllExhibitCollectionItemData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CREATEALLEXHIBITCOLLECTIONITEMDATA_OFFSET))(this);
		}

		::System::Void _OnBeforeMuseumDataChange(::Class_1_14E02E1F6D70E487_7* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONBEFOREMUSEUMDATACHANGE_OFFSET))(this, notify);
		}

		::System::Void _OnBeforeMuseumDataChange_1(::Class_1_14E02E1F6D70E487_6* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONBEFOREMUSEUMDATACHANGE_1_OFFSET))(this, rsp);
		}

		::System::Void _TryNotifyMuseumExhibitGet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__TRYNOTIFYMUSEUMEXHIBITGET_OFFSET))(this);
		}

		::System::Void _TryCachePhaseUpgrade(::System::UInt32 curRenewPoint)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__TRYCACHEPHASEUPGRADE_OFFSET))(this, curRenewPoint);
		}

		::System::Void _TryCacheTurnChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__TRYCACHETURNCHANGE_OFFSET))(this);
		}

		::System::Void _TryCacheTurnResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__TRYCACHETURNRESULT_OFFSET))(this);
		}

		::System::Void _UpdateUnseenTutorialMission(::System::UInt32 missionID, ::System::Boolean hasSeen)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__UPDATEUNSEENTUTORIALMISSION_OFFSET))(this, missionID, hasSeen);
		}

		::RPG::GameCore::MuseumTutorialTalkRow* _GetTutorialMissionPerformanceRow()
		{
			return ((::RPG::GameCore::MuseumTutorialTalkRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__GETTUTORIALMISSIONPERFORMANCEROW_OFFSET))(this);
		}

		::System::Boolean _IsHaveMissionEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ISHAVEMISSIONEVENT_OFFSET))(this);
		}

		::System::Void _TryNotifyNewPhaseBegin(::System::UInt32 mainMissionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__TRYNOTIFYNEWPHASEBEGIN_OFFSET))(this, mainMissionID);
		}

		::System::Void _TriggerPerformanceAndExitMuseum(::System::String* customString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__TRIGGERPERFORMANCEANDEXITMUSEUM_OFFSET))(this, customString);
		}

		::System::Void _RefreshFinishStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__REFRESHFINISHSTATUS_OFFSET))(this);
		}

		::RPG::Client::MuseumData* get_MuseumData()
		{
			return ((::RPG::Client::MuseumData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMDATA_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumStaffData*>* get_AllStaffs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumStaffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ALLSTAFFS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MuseumAvatarItemData*>* GetAllMuseumAvatarItemDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MuseumAvatarItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GETALLMUSEUMAVATARITEMDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MuseumExhibitItemData*>* GetAllExhibitItemDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MuseumExhibitItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GETALLEXHIBITITEMDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumAvatarItemData*>* get_AllMuseumAvatarItemData()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumAvatarItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ALLMUSEUMAVATARITEMDATA_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumExhibitItemData*>* get_AllExhibitItemData()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumExhibitItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ALLEXHIBITITEMDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::MuseumActivityQuestConfigRow*>* get_RewardQuestSeriesList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::MuseumActivityQuestConfigRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_REWARDQUESTSERIESLIST_OFFSET))(this);
		}

		::System::Void set_RewardQuestSeriesList(::System::Collections::Generic::List_1<::RPG::GameCore::MuseumActivityQuestConfigRow*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::MuseumActivityQuestConfigRow*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_REWARDQUESTSERIESLIST_OFFSET))(this, value);
		}

		::System::UInt32 get_MuseumCurrencyConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMCURRENCYCONFIGID_OFFSET))(this);
		}

		::System::Void set_MuseumCurrencyConfigID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_MUSEUMCURRENCYCONFIGID_OFFSET))(this, value);
		}

		::RPG::Client::MuseumTurnResult* get_MuseumTurnResultCache()
		{
			return ((::RPG::Client::MuseumTurnResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMTURNRESULTCACHE_OFFSET))(this);
		}

		::System::Void set_MuseumTurnResultCache(::RPG::Client::MuseumTurnResult* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumTurnResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_MUSEUMTURNRESULTCACHE_OFFSET))(this, value);
		}

		::System::Boolean get_IsWaitFinishTurnRsp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ISWAITFINISHTURNRSP_OFFSET))(this);
		}

		::System::Void set_IsWaitFinishTurnRsp(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_ISWAITFINISHTURNRSP_OFFSET))(this, value);
		}

		::System::Int32 get_MaxStaffStats()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_MAXSTAFFSTATS_OFFSET))(this);
		}

		::System::Void set_MaxStaffStats(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_MAXSTAFFSTATS_OFFSET))(this, value);
		}

		::Class_1_827373C1CEDFE355* get_LogicRandom()
		{
			return ((::Class_1_827373C1CEDFE355*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_LOGICRANDOM_OFFSET))(this);
		}

		::System::Void set_LogicRandom(::Class_1_827373C1CEDFE355* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_827373C1CEDFE355*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_LOGICRANDOM_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_FinishedQuestList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_FINISHEDQUESTLIST_OFFSET))(this);
		}

		::System::Void set_FinishedQuestList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_FINISHEDQUESTLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RedDotQuestSeries()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_REDDOTQUESTSERIES_OFFSET))(this);
		}

		::System::Void set_RedDotQuestSeries(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_REDDOTQUESTSERIES_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RedDotPhaseQuestList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_REDDOTPHASEQUESTLIST_OFFSET))(this);
		}

		::System::Void set_RedDotPhaseQuestList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_REDDOTPHASEQUESTLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_PhaseQuestList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_PHASEQUESTLIST_OFFSET))(this);
		}

		::System::Void set_PhaseQuestList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_PHASEQUESTLIST_OFFSET))(this, value);
		}

		::System::Boolean get_IsAllAreaGotFullRenewPoint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ISALLAREAGOTFULLRENEWPOINT_OFFSET))(this);
		}

		::System::Void set_IsAllAreaGotFullRenewPoint(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_ISALLAREAGOTFULLRENEWPOINT_OFFSET))(this, value);
		}

		::System::Boolean get_IsInPerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ISINPERFORMANCE_OFFSET))(this);
		}

		::System::Boolean get_IsAllFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ISALLFINISH_OFFSET))(this);
		}

		::System::Boolean get_IsAlreadyFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ISALREADYFINISH_OFFSET))(this);
		}

		::System::Void set_IsAlreadyFinish(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_ISALREADYFINISH_OFFSET))(this, value);
		}

		::System::Int32 get_ExhibitItemCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_EXHIBITITEMCOUNT_OFFSET))(this);
		}

		::System::Int32 get_StaffCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_STAFFCOUNT_OFFSET))(this);
		}

		::System::Int32 get_MuseumAvatarCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMAVATARCOUNT_OFFSET))(this);
		}

		::System::Int32 get_UnlockAvatarCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_UNLOCKAVATARCOUNT_OFFSET))(this);
		}

		::System::Int32 get_UnlockExhibitItemCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_UNLOCKEXHIBITITEMCOUNT_OFFSET))(this);
		}

		::System::Void _RefreshConfigLockMissionData_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__REFRESHCONFIGLOCKMISSIONDATA_B__14_0_OFFSET))(this);
		}

		::System::Boolean _GetStartRelatedMissionCountByChapterID_b__28_0(::RPG::Client::MainMissionData* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__GETSTARTRELATEDMISSIONCOUNTBYCHAPTERID_B__28_0_OFFSET))(this, item);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
