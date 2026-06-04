#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MuseumTalkTriggerType.h"
#include "unitysdk/RPG/GameCore/MuseumTalkType.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_6A206029A8384F7E_1;
class Class_1_827373C1CEDFE355;
class Class_1_CD010263573232AE_1;
class Class_1_D1E0AD3915BCCF29_80;
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

#define RPG_CLIENT_MUSEUMMODULE_GETALLEXHIBITITEMDATALIST_OFFSET UNITYSDK_OFFSET(0xC218770)
#define RPG_CLIENT_MUSEUMMODULE_GETALLMUSEUMAVATARITEMDATALIST_OFFSET UNITYSDK_OFFSET(0xC2185F0)
#define RPG_CLIENT_MUSEUMMODULE_GETDISPLAYNPCSTAFFDATAS_OFFSET UNITYSDK_OFFSET(0xC211850)
#define RPG_CLIENT_MUSEUMMODULE_GETMUSEUMINFO_OFFSET UNITYSDK_OFFSET(0xC211090)
#define RPG_CLIENT_MUSEUMMODULE_GETMUSTTRIGGERTALKID_OFFSET UNITYSDK_OFFSET(0xC20FF70)
#define RPG_CLIENT_MUSEUMMODULE_GETRANDOMCOMMENTS_OFFSET UNITYSDK_OFFSET(0xC20B8B0)
#define RPG_CLIENT_MUSEUMMODULE_GETSTAFFDATA_OFFSET UNITYSDK_OFFSET(0xC2086E0)
#define RPG_CLIENT_MUSEUMMODULE_GETSTARTRELATEDMISSIONCOUNTBYCHAPTERID_OFFSET UNITYSDK_OFFSET(0xC20E440)
#define RPG_CLIENT_MUSEUMMODULE_GET_ALLEXHIBITITEMDATA_OFFSET UNITYSDK_OFFSET(0xC20B0F0)
#define RPG_CLIENT_MUSEUMMODULE_GET_ALLITEMMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xC20F310)
#define RPG_CLIENT_MUSEUMMODULE_GET_ALLMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xC20F300)
#define RPG_CLIENT_MUSEUMMODULE_GET_ALLMUSEUMAVATARITEMDATA_OFFSET UNITYSDK_OFFSET(0xC20AFB0)
#define RPG_CLIENT_MUSEUMMODULE_GET_ALLSTAFFMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xC20F320)
#define RPG_CLIENT_MUSEUMMODULE_GET_ALLSTAFFS_OFFSET UNITYSDK_OFFSET(0xC2185E0)
#define RPG_CLIENT_MUSEUMMODULE_GET_ATLASUNLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xC20F3C0)
#define RPG_CLIENT_MUSEUMMODULE_GET_CURCONFIGLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xC20F6F0)
#define RPG_CLIENT_MUSEUMMODULE_GET_CURFORCEMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xC20F580)
#define RPG_CLIENT_MUSEUMMODULE_GET_CURPHASEUNLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xC20F590)
#define RPG_CLIENT_MUSEUMMODULE_GET_EXHIBITITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xC218A80)
#define RPG_CLIENT_MUSEUMMODULE_GET_FINISHEDQUESTLIST_OFFSET UNITYSDK_OFFSET(0xC2189B0)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISALLAREAGOTFULLRENEWPOINT_OFFSET UNITYSDK_OFFSET(0xC218A30)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISALLFINISH_OFFSET UNITYSDK_OFFSET(0xC211D10)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISALREADYFINISH_OFFSET UNITYSDK_OFFSET(0xC218A60)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISATLASUNLOCK_OFFSET UNITYSDK_OFFSET(0xC20F400)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISCONFIGLOCKED_OFFSET UNITYSDK_OFFSET(0xC20F8B0)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISFORCEMISSIONTAKEN_OFFSET UNITYSDK_OFFSET(0xC20F760)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xC218A50)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISMARKETUNLOCK_OFFSET UNITYSDK_OFFSET(0xC20F460)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISPHASEUNLOCKMISSIONTAKEN_OFFSET UNITYSDK_OFFSET(0xC20F770)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISTARGETUNLOCK_OFFSET UNITYSDK_OFFSET(0xC20F520)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISUPGRADEUNLOCK_OFFSET UNITYSDK_OFFSET(0xC20F4C0)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISWAITFINISHTURNRSP_OFFSET UNITYSDK_OFFSET(0xC218950)
#define RPG_CLIENT_MUSEUMMODULE_GET_LOGICRANDOM_OFFSET UNITYSDK_OFFSET(0xC218990)
#define RPG_CLIENT_MUSEUMMODULE_GET_MARKETUNLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xC20F3D0)
#define RPG_CLIENT_MUSEUMMODULE_GET_MAXSTAFFSTATS_OFFSET UNITYSDK_OFFSET(0xC218970)
#define RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMAVATARCOUNT_OFFSET UNITYSDK_OFFSET(0xC218B60)
#define RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMCURRENCYCONFIGID_OFFSET UNITYSDK_OFFSET(0xC218910)
#define RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMDATA_OFFSET UNITYSDK_OFFSET(0xC2185D0)
#define RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMMISSIONCHAPTERID_OFFSET UNITYSDK_OFFSET(0xC20F790)
#define RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMMISSIONLIMIT_OFFSET UNITYSDK_OFFSET(0xC20E5A0)
#define RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMTURNRESULTCACHE_OFFSET UNITYSDK_OFFSET(0xC218930)
#define RPG_CLIENT_MUSEUMMODULE_GET_PHASEQUESTLIST_OFFSET UNITYSDK_OFFSET(0xC218A10)
#define RPG_CLIENT_MUSEUMMODULE_GET_REDDOTPHASEQUESTLIST_OFFSET UNITYSDK_OFFSET(0xC2189F0)
#define RPG_CLIENT_MUSEUMMODULE_GET_REDDOTQUESTSERIES_OFFSET UNITYSDK_OFFSET(0xC2189D0)
#define RPG_CLIENT_MUSEUMMODULE_GET_REWARDQUESTSERIESLIST_OFFSET UNITYSDK_OFFSET(0xC2188F0)
#define RPG_CLIENT_MUSEUMMODULE_GET_STAFFCOUNT_OFFSET UNITYSDK_OFFSET(0xC218B10)
#define RPG_CLIENT_MUSEUMMODULE_GET_TAKENITEMMISSIONCOUNT_OFFSET UNITYSDK_OFFSET(0xC20F330)
#define RPG_CLIENT_MUSEUMMODULE_GET_TAKENMISSIONCOUNT_OFFSET UNITYSDK_OFFSET(0xC20F370)
#define RPG_CLIENT_MUSEUMMODULE_GET_TAKENSTAFFMISSIONCOUNT_OFFSET UNITYSDK_OFFSET(0xC20F350)
#define RPG_CLIENT_MUSEUMMODULE_GET_TARGETUNLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xC20F3F0)
#define RPG_CLIENT_MUSEUMMODULE_GET_UNLOCKAVATARCOUNT_OFFSET UNITYSDK_OFFSET(0xC218D20)
#define RPG_CLIENT_MUSEUMMODULE_GET_UNLOCKEXHIBITITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xC218EE0)
#define RPG_CLIENT_MUSEUMMODULE_GET_UPGRADEUNLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xC20F3E0)
#define RPG_CLIENT_MUSEUMMODULE_HAVEHIDEPHASEMISSION_OFFSET UNITYSDK_OFFSET(0xC20DEB0)
#define RPG_CLIENT_MUSEUMMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xC212B40)
#define RPG_CLIENT_MUSEUMMODULE_ISCHAPTERMISSIONREACHLIMIT_OFFSET UNITYSDK_OFFSET(0xC20E3E0)
#define RPG_CLIENT_MUSEUMMODULE_ISPHASEMISSIONSTART_OFFSET UNITYSDK_OFFSET(0xC20E060)
#define RPG_CLIENT_MUSEUMMODULE_RANDOMGETTALKID_OFFSET UNITYSDK_OFFSET(0xC20F910)
#define RPG_CLIENT_MUSEUMMODULE_RANDOMGETTEXTIDBYTALKID_OFFSET UNITYSDK_OFFSET(0xC2100F0)
#define RPG_CLIENT_MUSEUMMODULE_REFRESHALLMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xC20C9B0)
#define RPG_CLIENT_MUSEUMMODULE_REFRESHALLUNLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xC20CFF0)
#define RPG_CLIENT_MUSEUMMODULE_REFRESHCONFIGLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xC20D530)
#define RPG_CLIENT_MUSEUMMODULE_REFRESHSTAFFAVAILABLE_OFFSET UNITYSDK_OFFSET(0xC2112A0)
#define RPG_CLIENT_MUSEUMMODULE_REMOVESTAFF_OFFSET UNITYSDK_OFFSET(0xC2111C0)
#define RPG_CLIENT_MUSEUMMODULE_SET_FINISHEDQUESTLIST_OFFSET UNITYSDK_OFFSET(0xC2189C0)
#define RPG_CLIENT_MUSEUMMODULE_SET_ISALLAREAGOTFULLRENEWPOINT_OFFSET UNITYSDK_OFFSET(0xC218A40)
#define RPG_CLIENT_MUSEUMMODULE_SET_ISALREADYFINISH_OFFSET UNITYSDK_OFFSET(0xC218A70)
#define RPG_CLIENT_MUSEUMMODULE_SET_ISWAITFINISHTURNRSP_OFFSET UNITYSDK_OFFSET(0xC218960)
#define RPG_CLIENT_MUSEUMMODULE_SET_LOGICRANDOM_OFFSET UNITYSDK_OFFSET(0xC2189A0)
#define RPG_CLIENT_MUSEUMMODULE_SET_MAXSTAFFSTATS_OFFSET UNITYSDK_OFFSET(0xC218980)
#define RPG_CLIENT_MUSEUMMODULE_SET_MUSEUMCURRENCYCONFIGID_OFFSET UNITYSDK_OFFSET(0xC218920)
#define RPG_CLIENT_MUSEUMMODULE_SET_MUSEUMTURNRESULTCACHE_OFFSET UNITYSDK_OFFSET(0xC218940)
#define RPG_CLIENT_MUSEUMMODULE_SET_PHASEQUESTLIST_OFFSET UNITYSDK_OFFSET(0xC218A20)
#define RPG_CLIENT_MUSEUMMODULE_SET_REDDOTPHASEQUESTLIST_OFFSET UNITYSDK_OFFSET(0xC218A00)
#define RPG_CLIENT_MUSEUMMODULE_SET_REDDOTQUESTSERIES_OFFSET UNITYSDK_OFFSET(0xC2189E0)
#define RPG_CLIENT_MUSEUMMODULE_SET_REWARDQUESTSERIESLIST_OFFSET UNITYSDK_OFFSET(0xC218900)
#define RPG_CLIENT_MUSEUMMODULE_SET_TAKENITEMMISSIONCOUNT_OFFSET UNITYSDK_OFFSET(0xC20F340)
#define RPG_CLIENT_MUSEUMMODULE_SET_TAKENSTAFFMISSIONCOUNT_OFFSET UNITYSDK_OFFSET(0xC20F360)
#define RPG_CLIENT_MUSEUMMODULE_TRYNOTIFYNEWTURN_OFFSET UNITYSDK_OFFSET(0xC211C20)
#define RPG_CLIENT_MUSEUMMODULE_TRYNOTIFYRANDOMEVENT_OFFSET UNITYSDK_OFFSET(0xC211A50)
#define RPG_CLIENT_MUSEUMMODULE_TRYNOTIFYTARGETREWARD_OFFSET UNITYSDK_OFFSET(0xC211DB0)
#define RPG_CLIENT_MUSEUMMODULE_TRYTRIGGERTUTORIALMISSIONPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xC212480)
#define RPG_CLIENT_MUSEUMMODULE_UPDATEUNSEENTALKMISSION_OFFSET UNITYSDK_OFFSET(0xC2102D0)
#define RPG_CLIENT_MUSEUMMODULE__ADDMUSTTRIGGERTALKID_OFFSET UNITYSDK_OFFSET(0xC2108E0)
#define RPG_CLIENT_MUSEUMMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC213200)
#define RPG_CLIENT_MUSEUMMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC2134E0)
#define RPG_CLIENT_MUSEUMMODULE__ADDTALKID_OFFSET UNITYSDK_OFFSET(0xC210B10)
#define RPG_CLIENT_MUSEUMMODULE__BEGINMUSEUMPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xC214FD0)
#define RPG_CLIENT_MUSEUMMODULE__CACHETARGETREWARD_OFFSET UNITYSDK_OFFSET(0xC216A10)
#define RPG_CLIENT_MUSEUMMODULE__CANTAKEITEMMISSION_OFFSET UNITYSDK_OFFSET(0xC20F210)
#define RPG_CLIENT_MUSEUMMODULE__CLEARTARGETREWARDCACHE_OFFSET UNITYSDK_OFFSET(0xC2122C0)
#define RPG_CLIENT_MUSEUMMODULE__CMDBUYNPCSTUFFSCRSP_OFFSET UNITYSDK_OFFSET(0xC214BA0)
#define RPG_CLIENT_MUSEUMMODULE__CMDFINISHCURTURNSCRSP_OFFSET UNITYSDK_OFFSET(0xC214D40)
#define RPG_CLIENT_MUSEUMMODULE__CMDGETMUSEUMINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xC213FB0)
#define RPG_CLIENT_MUSEUMMODULE__CMDMUSEUMRANDOMEVENTQUERYSCRSP_OFFSET UNITYSDK_OFFSET(0xC215410)
#define RPG_CLIENT_MUSEUMMODULE__CMDMUSEUMRANDOMEVENTSELECTSCRSP_OFFSET UNITYSDK_OFFSET(0xC2154B0)
#define RPG_CLIENT_MUSEUMMODULE__CMDREMOVESTUFFFROMAREASCRSP_OFFSET UNITYSDK_OFFSET(0xC214CA0)
#define RPG_CLIENT_MUSEUMMODULE__CMDSETSTUFFTOAREASCRSP_OFFSET UNITYSDK_OFFSET(0xC214C20)
#define RPG_CLIENT_MUSEUMMODULE__CMDTAKECOLLECTREWARDRSP_OFFSET UNITYSDK_OFFSET(0xC215600)
#define RPG_CLIENT_MUSEUMMODULE__CMDUPGRADEAREASCRSP_OFFSET UNITYSDK_OFFSET(0xC2151D0)
#define RPG_CLIENT_MUSEUMMODULE__CMDUPGRADEAREASTATSCRSP_OFFSET UNITYSDK_OFFSET(0xC215280)
#define RPG_CLIENT_MUSEUMMODULE__CREATEALLEXHIBITCOLLECTIONITEMDATA_OFFSET UNITYSDK_OFFSET(0xC217F60)
#define RPG_CLIENT_MUSEUMMODULE__CREATEALLFORCEMISSIONID_OFFSET UNITYSDK_OFFSET(0xC20D7C0)
#define RPG_CLIENT_MUSEUMMODULE__CREATEALLMISSIONID_OFFSET UNITYSDK_OFFSET(0xC20CB50)
#define RPG_CLIENT_MUSEUMMODULE__CREATEALLPHASEUNLOCKMISSIONID_OFFSET UNITYSDK_OFFSET(0xC20EE70)
#define RPG_CLIENT_MUSEUMMODULE__CREATEALLSTAFFCOLLECTIONITEMDATA_OFFSET UNITYSDK_OFFSET(0xC217B30)
#define RPG_CLIENT_MUSEUMMODULE__CREATEALLSTAFFSDATA_OFFSET UNITYSDK_OFFSET(0xC211310)
#define RPG_CLIENT_MUSEUMMODULE__CREATETALKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xC2106E0)
#define RPG_CLIENT_MUSEUMMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC210EA0)
#define RPG_CLIENT_MUSEUMMODULE__GETCOMMENTPOOLINDEX_OFFSET UNITYSDK_OFFSET(0xC20C8B0)
#define RPG_CLIENT_MUSEUMMODULE__GETCOMMENTPOOL_OFFSET UNITYSDK_OFFSET(0xC20C730)
#define RPG_CLIENT_MUSEUMMODULE__GETHIGHESTPRIORITY_OFFSET UNITYSDK_OFFSET(0xC210DC0)
#define RPG_CLIENT_MUSEUMMODULE__GETPOSITIVECOMMENTPROB_OFFSET UNITYSDK_OFFSET(0xC20C7E0)
#define RPG_CLIENT_MUSEUMMODULE__GETSTARTRELATEDMISSIONCOUNTBYCHAPTERID_B__28_0_OFFSET UNITYSDK_OFFSET(0xC2190C0)
#define RPG_CLIENT_MUSEUMMODULE__GETTUTORIALMISSIONPERFORMANCEROW_OFFSET UNITYSDK_OFFSET(0xC212850)
#define RPG_CLIENT_MUSEUMMODULE__HASTARGETREWARDCACHE_OFFSET UNITYSDK_OFFSET(0xC212210)
#define RPG_CLIENT_MUSEUMMODULE__INITREWARDQUEST_OFFSET UNITYSDK_OFFSET(0xC212E80)
#define RPG_CLIENT_MUSEUMMODULE__INITTALKDATA_OFFSET UNITYSDK_OFFSET(0xC210550)
#define RPG_CLIENT_MUSEUMMODULE__ISHAVEMISSIONEVENT_OFFSET UNITYSDK_OFFSET(0xC2172A0)
#define RPG_CLIENT_MUSEUMMODULE__LOADTALKDATA_OFFSET UNITYSDK_OFFSET(0xC20FAB0)
#define RPG_CLIENT_MUSEUMMODULE__ONBEFOREMUSEUMDATACHANGE_1_OFFSET UNITYSDK_OFFSET(0xC214180)
#define RPG_CLIENT_MUSEUMMODULE__ONBEFOREMUSEUMDATACHANGE_OFFSET UNITYSDK_OFFSET(0xC215B20)
#define RPG_CLIENT_MUSEUMMODULE__ONFORCEMISSIONTAKEN_OFFSET UNITYSDK_OFFSET(0xC20F0C0)
#define RPG_CLIENT_MUSEUMMODULE__ONMAINMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0xC216CC0)
#define RPG_CLIENT_MUSEUMMODULE__ONMAINMISSIONTAKEN_OFFSET UNITYSDK_OFFSET(0xC216C00)
#define RPG_CLIENT_MUSEUMMODULE__ONMUSEUMPERFORMANCEEND_OFFSET UNITYSDK_OFFSET(0xC2170D0)
#define RPG_CLIENT_MUSEUMMODULE__ONREFRESHEVENTSTAFFAVAILABLE_OFFSET UNITYSDK_OFFSET(0xC217400)
#define RPG_CLIENT_MUSEUMMODULE__ONSHOWLOADINGPAGE_OFFSET UNITYSDK_OFFSET(0xC217390)
#define RPG_CLIENT_MUSEUMMODULE__ONSYNCGETEXHIBITSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xC2160E0)
#define RPG_CLIENT_MUSEUMMODULE__ONSYNCGETSTUFFSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xC215E50)
#define RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMFUNDSCHANGEDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xC215D80)
#define RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMINFOCHANGEDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xC215950)
#define RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMRANDOMEVENTSTARTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xC2162F0)
#define RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMTARGETMISSIONFINISHNOTIFY_OFFSET UNITYSDK_OFFSET(0xC216840)
#define RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMTARGETREWARDNOTIFY_OFFSET UNITYSDK_OFFSET(0xC2169A0)
#define RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMTARGETSTARTNOTIFY_OFFSET UNITYSDK_OFFSET(0xC216690)
#define RPG_CLIENT_MUSEUMMODULE__PREPARECOMMENTS_OFFSET UNITYSDK_OFFSET(0xC20C070)
#define RPG_CLIENT_MUSEUMMODULE__READCOMMENTCONST_OFFSET UNITYSDK_OFFSET(0xC20BDE0)
#define RPG_CLIENT_MUSEUMMODULE__READUNLOCKMISSIONID_OFFSET UNITYSDK_OFFSET(0xC20D190)
#define RPG_CLIENT_MUSEUMMODULE__RECEIVEALLMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xC20E7B0)
#define RPG_CLIENT_MUSEUMMODULE__RECEIVEUNLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xC20ED20)
#define RPG_CLIENT_MUSEUMMODULE__REFRESHCONFIGLOCKMISSIONDATA_B__14_0_OFFSET UNITYSDK_OFFSET(0xC2190A0)
#define RPG_CLIENT_MUSEUMMODULE__REFRESHEVENTSTAFFAVAILABLE_1_OFFSET UNITYSDK_OFFSET(0xC215D10)
#define RPG_CLIENT_MUSEUMMODULE__REFRESHEVENTSTAFFAVAILABLE_OFFSET UNITYSDK_OFFSET(0xC2146E0)
#define RPG_CLIENT_MUSEUMMODULE__REFRESHFINISHEDQUEST_OFFSET UNITYSDK_OFFSET(0xC217660)
#define RPG_CLIENT_MUSEUMMODULE__REFRESHFINISHSTATUS_OFFSET UNITYSDK_OFFSET(0xC214B40)
#define RPG_CLIENT_MUSEUMMODULE__REFRESHFORCEMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xC20DD00)
#define RPG_CLIENT_MUSEUMMODULE__REFRESHPHASEUNLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xC20DB40)
#define RPG_CLIENT_MUSEUMMODULE__REFRESHSINGLESTAFFAVAILABLE_OFFSET UNITYSDK_OFFSET(0xC2175F0)
#define RPG_CLIENT_MUSEUMMODULE__REFRESHSTAFFAVAILABLE_OFFSET UNITYSDK_OFFSET(0xC211450)
#define RPG_CLIENT_MUSEUMMODULE__REFRESHTAKENREWARDMUSEUMDATA_OFFSET UNITYSDK_OFFSET(0xC214750)
#define RPG_CLIENT_MUSEUMMODULE__RESETSTATUS_OFFSET UNITYSDK_OFFSET(0xC214370)
#define RPG_CLIENT_MUSEUMMODULE__SETVALIDTALKIDSCACHE_OFFSET UNITYSDK_OFFSET(0xC20FC30)
#define RPG_CLIENT_MUSEUMMODULE__TRIGGERPERFORMANCEANDEXITMUSEUM_OFFSET UNITYSDK_OFFSET(0xC212540)
#define RPG_CLIENT_MUSEUMMODULE__TRYADDTALKMISSIONLIST_OFFSET UNITYSDK_OFFSET(0xC210D10)
#define RPG_CLIENT_MUSEUMMODULE__TRYCACHEPHASEUPGRADE_OFFSET UNITYSDK_OFFSET(0xC218390)
#define RPG_CLIENT_MUSEUMMODULE__TRYCACHETURNCHANGE_OFFSET UNITYSDK_OFFSET(0xC218570)
#define RPG_CLIENT_MUSEUMMODULE__TRYCACHETURNRESULT_OFFSET UNITYSDK_OFFSET(0xC2184F0)
#define RPG_CLIENT_MUSEUMMODULE__TRYNOTIFYMUSEUMEXHIBITGET_OFFSET UNITYSDK_OFFSET(0xC218330)
#define RPG_CLIENT_MUSEUMMODULE__TRYNOTIFYNEWPHASEBEGIN_OFFSET UNITYSDK_OFFSET(0xC216DA0)
#define RPG_CLIENT_MUSEUMMODULE__TRYNOTIFYPHASEUPGRADE_OFFSET UNITYSDK_OFFSET(0xC217210)
#define RPG_CLIENT_MUSEUMMODULE__TRYUPDATEUNSEENMISSIONBYTALKID_OFFSET UNITYSDK_OFFSET(0xC20FEC0)
#define RPG_CLIENT_MUSEUMMODULE__UNINITCOMMENTDATA_OFFSET UNITYSDK_OFFSET(0xC20C860)
#define RPG_CLIENT_MUSEUMMODULE__UNINITMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xC20E6C0)
#define RPG_CLIENT_MUSEUMMODULE__UNINITTALKDATA_OFFSET UNITYSDK_OFFSET(0xC210870)
#define RPG_CLIENT_MUSEUMMODULE__UPDATEUNSEENTUTORIALMISSION_OFFSET UNITYSDK_OFFSET(0xC212930)
#define RPG_CLIENT_MUSEUMMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xC219110)
#define RPG_CLIENT_MUSEUMMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC219190)
#define RPG_CLIENT_MUSEUMMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC2191F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumModule_TypeDefinitionIndex = 62023;

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
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MainMissionData*>* _AllItemMissionData; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _AllItemMissionID; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _AllMissionID; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _AllUnlockMissionID; // 0x28
		::RPG::Client::Promises::Promise* _RefreshUnlockMissionDataPromise; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumExhibitItemData*>* _AllExhibitItemData; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _FinishedQuestList_k__BackingField; // 0x40
		::RPG::Client::MainMissionData* _TargetUnlockMissionData; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumAvatarItemData*>* _AllMuseumAvatarItemData; // 0x50
		::RPG::Client::MainMissionData* _CurForceMissionData; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumStaffData*>* _AllStaffs; // 0x60
		::RPG::Client::MainMissionData* _MarketUnlockMissionData; // 0x68
		::System::Collections::Generic::List_1<::System::UInt32>* _RedDotQuestSeries_k__BackingField; // 0x70
		::System::Collections::Generic::List_1<::System::UInt32>* _AllStaffMissionID; // 0x78
		::RPG::Client::Promises::Promise* _RefreshMissionDataPromise; // 0x80
		::RPG::Client::MainMissionData* _AtlasUnlockMissionData; // 0x88
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MuseumTalkTriggerType, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MuseumTalkType, ::System::UInt32>*>* _TriggerTypeToMustTriggerTalkDict; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MainMissionData*>* _AllStaffMissionData; // 0x98
		::RPG::Client::Promises::Promise* _GetMuseumInfoPromise; // 0xA0
		::System::Collections::Generic::List_1<::System::UInt32>* _AllPhaseUnlockMissionID; // 0xA8
		::System::Collections::Generic::List_1<::System::UInt32>* _AllForceMissionID; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MainMissionData*>* _AllMissionData; // 0xB8
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MuseumTalkTriggerType, ::System::Collections::Generic::List_1<::System::UInt32>*>* _TriggerTypeToTalkIDs; // 0xC0
		::Class_1_827373C1CEDFE355* _LogicRandom_k__BackingField; // 0xC8
		::RPG::Client::Promises::Promise* _RefreshConfigLockMissionDataPromise; // 0xD0
		::System::Collections::Generic::List_1<::RPG::GameCore::MuseumActivityQuestConfigRow*>* _RewardQuestSeriesList_k__BackingField; // 0xD8
		::Il2CppArray<::System::Single>* _PositiveCommentProb; // 0xE0
		::Il2CppArray<::System::Collections::Generic::List_1<::RPG::GameCore::MuseumCommentsRow*>*>* _Comments; // 0xE8
		::RPG::Client::Promises::Promise* _RemoveStaffPromise; // 0xF0
		::RPG::Client::MuseumTurnResult* _MuseumTurnResultCache_k__BackingField; // 0xF8
		::System::Collections::Generic::List_1<::System::UInt32>* _TalkMissionList; // 0x100
		::RPG::Client::MainMissionData* _UpgradeUnlockMissionData; // 0x108
		::System::Collections::Generic::List_1<::System::UInt32>* _RedDotPhaseQuestList_k__BackingField; // 0x110
		::System::Collections::Generic::List_1<::System::UInt32>* _ValidTalkIDsCache; // 0x118
		::RPG::Client::MuseumData* _MuseumData; // 0x120
		::RPG::Client::MuseumGetItemNotifyParam* _MuseumGetItemNotifyCache; // 0x128
		::System::Collections::Generic::List_1<::System::UInt32>* _PhaseQuestList_k__BackingField; // 0x130
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MainMissionData*>* _AllPhaseUnlockMissionData; // 0x138
		::System::UInt32 _CommentNumPerArea; // 0x140
		::System::Nullable_1<::System::UInt32> _PhaseUpgradeNotify; // 0x144
		::System::UInt32 _UpgradeUnlockMissionID; // 0x14C
		::System::Boolean _IsInPerfomance; // 0x150
		::System::Boolean _IsAllAreaGotFullRenewPoint_k__BackingField; // 0x151
		::System::Boolean _IsTurnResultNeedNotify; // 0x152
		::System::Boolean _IsAlreadyFinish; // 0x153
		::System::Boolean _IsTakenItemMission; // 0x154
		::System::Boolean _IsWaitFinishTurnRsp_k__BackingField; // 0x155
		::System::Boolean _MuseumShowNewTurnHint; // 0x156
		::System::UInt32 _MuseumCurrencyConfigID_k__BackingField; // 0x158
		::System::UInt32 _TargetUnlockMissionID; // 0x15C
		::System::UInt32 _AtlasUnlockMissionID; // 0x160
		::System::UInt32 _TakenStaffMissionCount_k__BackingField; // 0x164
		::System::Int32 _MaxStaffStats_k__BackingField; // 0x168
		::System::UInt32 _MarketUnlockMissionID; // 0x16C
		::System::Boolean _IsAlreadyFinish_k__BackingField; // 0x170
		::System::Boolean _IsDataLoaded; // 0x171
		::System::UInt32 _MuseumMissionLimit; // 0x174
		::System::UInt32 _TakenItemMissionCount_k__BackingField; // 0x178
		::System::UInt32 _ListeningMainMissionID; // 0x17C
		::System::UInt32 _MuseumMissionChapterID; // 0x180

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::MuseumCommentsRow*>* GetRandomComments(::RPG::Client::MuseumAreaData* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::MuseumCommentsRow*>*(*)(::PVOID, ::RPG::Client::MuseumAreaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GETRANDOMCOMMENTS_OFFSET))(this, a1);
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

		::System::Collections::Generic::List_1<::RPG::GameCore::MuseumCommentsRow*>* _GetCommentPool(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::MuseumCommentsRow*>*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__GETCOMMENTPOOL_OFFSET))(this, a1, a2);
		}

		::System::Single _GetPositiveCommentProb(::RPG::Client::MuseumAreaData* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::MuseumAreaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__GETPOSITIVECOMMENTPROB_OFFSET))(this, a1);
		}

		static ::System::Int32 _GetCommentPoolIndex(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__GETCOMMENTPOOLINDEX_OFFSET))(a1, a2);
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

		::System::Void _ReceiveAllMissionData(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__RECEIVEALLMISSIONDATA_OFFSET))(this, a1);
		}

		::System::Void _ReadUnlockMissionID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__READUNLOCKMISSIONID_OFFSET))(this);
		}

		::System::Void _ReceiveUnlockMissionData(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__RECEIVEUNLOCKMISSIONDATA_OFFSET))(this, a1);
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

		::System::Void _OnForceMissionTaken(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONFORCEMISSIONTAKEN_OFFSET))(this, a1);
		}

		::System::Boolean _CanTakeItemMission(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CANTAKEITEMMISSION_OFFSET))(this, a1);
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

		::System::Void set_TakenItemMissionCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_TAKENITEMMISSIONCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_TakenStaffMissionCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_TAKENSTAFFMISSIONCOUNT_OFFSET))(this);
		}

		::System::Void set_TakenStaffMissionCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_TAKENSTAFFMISSIONCOUNT_OFFSET))(this, a1);
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

		::System::UInt32 RandomGetTalkID(::RPG::GameCore::MuseumTalkTriggerType a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::MuseumTalkTriggerType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_RANDOMGETTALKID_OFFSET))(this, a1);
		}

		::System::UInt32 GetMustTriggerTalkID(::RPG::GameCore::MuseumTalkTriggerType a1, ::RPG::GameCore::MuseumTalkType a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::MuseumTalkTriggerType, ::RPG::GameCore::MuseumTalkType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GETMUSTTRIGGERTALKID_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TextID RandomGetTextIDByTalkID(::System::UInt32 a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_RANDOMGETTEXTIDBYTALKID_OFFSET))(this, a1);
		}

		::System::Void UpdateUnseenTalkMission(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_UPDATEUNSEENTALKMISSION_OFFSET))(this, a1, a2);
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

		::System::Void _AddTalkID(::RPG::GameCore::MuseumDeskTalkConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MuseumDeskTalkConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ADDTALKID_OFFSET))(this, a1);
		}

		::System::Void _AddMustTriggerTalkID(::RPG::GameCore::MuseumDeskTalkConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MuseumDeskTalkConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ADDMUSTTRIGGERTALKID_OFFSET))(this, a1);
		}

		::System::Void _TryAddTalkMissionList(::RPG::GameCore::MuseumDeskTalkConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MuseumDeskTalkConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__TRYADDTALKMISSIONLIST_OFFSET))(this, a1);
		}

		::System::Void _TryUpdateUnseenMissionByTalkID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__TRYUPDATEUNSEENMISSIONBYTALKID_OFFSET))(this, a1);
		}

		::System::Void _SetValidTalkIDsCache(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__SETVALIDTALKIDSCACHE_OFFSET))(this, a1);
		}

		::System::UInt32 _GetHighestPriority(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__GETHIGHESTPRIORITY_OFFSET))(this, a1);
		}

		::RPG::Client::MuseumStaffData* GetStaffData(::System::UInt32 a1)
		{
			return ((::RPG::Client::MuseumStaffData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GETSTAFFDATA_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* GetMuseumInfo()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GETMUSEUMINFO_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* RemoveStaff(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_REMOVESTAFF_OFFSET))(this, a1);
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

		::System::Void _CmdGetMuseumInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CMDGETMUSEUMINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _CmdBuyNpcStuffScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CMDBUYNPCSTUFFSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _CmdSetStuffToAreaScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CMDSETSTUFFTOAREASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _CmdRemoveStuffFromAreaScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CMDREMOVESTUFFFROMAREASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _CmdFinishCurTurnScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CMDFINISHCURTURNSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _CmdUpgradeAreaScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CMDUPGRADEAREASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _CmdUpgradeAreaStatScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CMDUPGRADEAREASTATSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _CmdMuseumRandomEventQueryScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CMDMUSEUMRANDOMEVENTQUERYSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _CmdMuseumRandomEventSelectScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CMDMUSEUMRANDOMEVENTSELECTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _CmdTakeCollectRewardRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CMDTAKECOLLECTREWARDRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSyncMuseumInfoChangedScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMINFOCHANGEDSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSyncMuseumFundsChangedScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMFUNDSCHANGEDSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSyncGetStuffScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONSYNCGETSTUFFSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSyncGetExhibitScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONSYNCGETEXHIBITSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSyncMuseumRandomEventStartScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMRANDOMEVENTSTARTSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSyncMuseumTargetStartNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMTARGETSTARTNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSyncMuseumTargetMissionFinishNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMTARGETMISSIONFINISHNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSyncMuseumTargetRewardNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMTARGETREWARDNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Boolean _HasTargetRewardCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__HASTARGETREWARDCACHE_OFFSET))(this);
		}

		::System::Void _CacheTargetReward(::Class_1_D1E0AD3915BCCF29_80* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_80*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CACHETARGETREWARD_OFFSET))(this, a1);
		}

		::System::Void _ClearTargetRewardCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CLEARTARGETREWARDCACHE_OFFSET))(this);
		}

		::System::Void _OnMainMissionTaken(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONMAINMISSIONTAKEN_OFFSET))(this, a1);
		}

		::System::Void _OnMainMissionFinish(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONMAINMISSIONFINISH_OFFSET))(this, a1);
		}

		::System::Void _OnMuseumPerformanceEnd(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONMUSEUMPERFORMANCEEND_OFFSET))(this, a1);
		}

		::System::Void _OnShowLoadingPage(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONSHOWLOADINGPAGE_OFFSET))(this, a1);
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

		::System::Void _RefreshTakenRewardMuseumData(::Class_1_6A206029A8384F7E_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6A206029A8384F7E_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__REFRESHTAKENREWARDMUSEUMDATA_OFFSET))(this, a1);
		}

		::System::Void _RefreshStaffAvailable(::RPG::Client::Promises::Promise* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__REFRESHSTAFFAVAILABLE_OFFSET))(this, a1);
		}

		::System::Void _RefreshEventStaffAvailable(::Class_1_6A206029A8384F7E_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6A206029A8384F7E_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__REFRESHEVENTSTAFFAVAILABLE_OFFSET))(this, a1);
		}

		::System::Void _RefreshEventStaffAvailable_1(::Class_1_CD010263573232AE_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_CD010263573232AE_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__REFRESHEVENTSTAFFAVAILABLE_1_OFFSET))(this, a1);
		}

		::System::Void _OnRefreshEventStaffAvailable(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONREFRESHEVENTSTAFFAVAILABLE_OFFSET))(this, a1);
		}

		::System::Void _RefreshSingleStaffAvailable(::RPG::Client::MuseumStaffData* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumStaffData*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__REFRESHSINGLESTAFFAVAILABLE_OFFSET))(this, a1, a2);
		}

		::System::Void _InitRewardQuest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__INITREWARDQUEST_OFFSET))(this);
		}

		::System::Void _RefreshFinishedQuest(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__REFRESHFINISHEDQUEST_OFFSET))(this, a1);
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

		::System::Void _OnBeforeMuseumDataChange(::Class_1_CD010263573232AE_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_CD010263573232AE_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONBEFOREMUSEUMDATACHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnBeforeMuseumDataChange_1(::Class_1_6A206029A8384F7E_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6A206029A8384F7E_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONBEFOREMUSEUMDATACHANGE_1_OFFSET))(this, a1);
		}

		::System::Void _TryNotifyMuseumExhibitGet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__TRYNOTIFYMUSEUMEXHIBITGET_OFFSET))(this);
		}

		::System::Void _TryCachePhaseUpgrade(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__TRYCACHEPHASEUPGRADE_OFFSET))(this, a1);
		}

		::System::Void _TryCacheTurnChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__TRYCACHETURNCHANGE_OFFSET))(this);
		}

		::System::Void _TryCacheTurnResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__TRYCACHETURNRESULT_OFFSET))(this);
		}

		::System::Void _UpdateUnseenTutorialMission(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__UPDATEUNSEENTUTORIALMISSION_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::MuseumTutorialTalkRow* _GetTutorialMissionPerformanceRow()
		{
			return ((::RPG::GameCore::MuseumTutorialTalkRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__GETTUTORIALMISSIONPERFORMANCEROW_OFFSET))(this);
		}

		::System::Boolean _IsHaveMissionEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ISHAVEMISSIONEVENT_OFFSET))(this);
		}

		::System::Void _TryNotifyNewPhaseBegin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__TRYNOTIFYNEWPHASEBEGIN_OFFSET))(this, a1);
		}

		::System::Void _TriggerPerformanceAndExitMuseum(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__TRIGGERPERFORMANCEANDEXITMUSEUM_OFFSET))(this, a1);
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

		::System::Void set_RewardQuestSeriesList(::System::Collections::Generic::List_1<::RPG::GameCore::MuseumActivityQuestConfigRow*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::MuseumActivityQuestConfigRow*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_REWARDQUESTSERIESLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_MuseumCurrencyConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMCURRENCYCONFIGID_OFFSET))(this);
		}

		::System::Void set_MuseumCurrencyConfigID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_MUSEUMCURRENCYCONFIGID_OFFSET))(this, a1);
		}

		::RPG::Client::MuseumTurnResult* get_MuseumTurnResultCache()
		{
			return ((::RPG::Client::MuseumTurnResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMTURNRESULTCACHE_OFFSET))(this);
		}

		::System::Void set_MuseumTurnResultCache(::RPG::Client::MuseumTurnResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumTurnResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_MUSEUMTURNRESULTCACHE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsWaitFinishTurnRsp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ISWAITFINISHTURNRSP_OFFSET))(this);
		}

		::System::Void set_IsWaitFinishTurnRsp(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_ISWAITFINISHTURNRSP_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxStaffStats()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_MAXSTAFFSTATS_OFFSET))(this);
		}

		::System::Void set_MaxStaffStats(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_MAXSTAFFSTATS_OFFSET))(this, a1);
		}

		::Class_1_827373C1CEDFE355* get_LogicRandom()
		{
			return ((::Class_1_827373C1CEDFE355*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_LOGICRANDOM_OFFSET))(this);
		}

		::System::Void set_LogicRandom(::Class_1_827373C1CEDFE355* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_827373C1CEDFE355*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_LOGICRANDOM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_FinishedQuestList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_FINISHEDQUESTLIST_OFFSET))(this);
		}

		::System::Void set_FinishedQuestList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_FINISHEDQUESTLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RedDotQuestSeries()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_REDDOTQUESTSERIES_OFFSET))(this);
		}

		::System::Void set_RedDotQuestSeries(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_REDDOTQUESTSERIES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RedDotPhaseQuestList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_REDDOTPHASEQUESTLIST_OFFSET))(this);
		}

		::System::Void set_RedDotPhaseQuestList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_REDDOTPHASEQUESTLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_PhaseQuestList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_PHASEQUESTLIST_OFFSET))(this);
		}

		::System::Void set_PhaseQuestList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_PHASEQUESTLIST_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAllAreaGotFullRenewPoint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ISALLAREAGOTFULLRENEWPOINT_OFFSET))(this);
		}

		::System::Void set_IsAllAreaGotFullRenewPoint(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_ISALLAREAGOTFULLRENEWPOINT_OFFSET))(this, a1);
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

		::System::Void set_IsAlreadyFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_ISALREADYFINISH_OFFSET))(this, a1);
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

		::System::Boolean _GetStartRelatedMissionCountByChapterID_b__28_0(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__GETSTARTRELATEDMISSIONCOUNTBYCHAPTERID_B__28_0_OFFSET))(this, a1);
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
