#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_0CF86E4F213706E6;
class Class_1_BDE0598EF34BE45E;
class Class_1_FAB24B2D24758D65;
class Class_1_FB0633E85BD6CF8E_15;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Proto { class ItemList; }
namespace RPG::Client { class AddNewAvatarInfo; }
namespace RPG::Client { class RogueAeonData; }
namespace RPG::Client { class RogueAreaData; }
namespace RPG::Client { class RogueBuffData; }
namespace RPG::Client { class RogueBuffEnhanceItem; }
namespace RPG::Client { class RogueData; }
namespace RPG::Client { class RogueEndlessAreaData; }
namespace RPG::Client { class RogueEndlessConstValue; }
namespace RPG::Client { class RogueEndlessProgressInfo; }
namespace RPG::Client { class RogueFinishInfo; }
namespace RPG::Client { class RogueTalentData; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class RogueBuffRow; }
namespace RPG::GameCore { class RogueRoomRow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB079410)
#define RPG_CLIENT_ROGUEMODULE_ENTERROGUEMAPROOM_OFFSET UNITYSDK_OFFSET(0xB07AFD0)
#define RPG_CLIENT_ROGUEMODULE_ENTERROGUE_OFFSET UNITYSDK_OFFSET(0xB07AF40)
#define RPG_CLIENT_ROGUEMODULE_GETACHIVEDBUFFLIST_OFFSET UNITYSDK_OFFSET(0xB077290)
#define RPG_CLIENT_ROGUEMODULE_GETAREALOCKSTATUS_OFFSET UNITYSDK_OFFSET(0xB076B00)
#define RPG_CLIENT_ROGUEMODULE_GETCURRENTAREAID_OFFSET UNITYSDK_OFFSET(0xB0766F0)
#define RPG_CLIENT_ROGUEMODULE_GETCURRENTROGUEROOMROW_OFFSET UNITYSDK_OFFSET(0xB076850)
#define RPG_CLIENT_ROGUEMODULE_GETMAXDIFFUNLOCKAREADATA_OFFSET UNITYSDK_OFFSET(0xB0768A0)
#define RPG_CLIENT_ROGUEMODULE_GETMAXPROGRESSUNLOCKAREADATA_OFFSET UNITYSDK_OFFSET(0xB0769D0)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEAEONDATA_OFFSET UNITYSDK_OFFSET(0xB0767C0)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEBUFFCANUPNUMBYGROUPID_OFFSET UNITYSDK_OFFSET(0xB077E80)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEBUFFENHANCEITEM_OFFSET UNITYSDK_OFFSET(0xB077990)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEBUFFNUMBYGROUPID_OFFSET UNITYSDK_OFFSET(0xB077B50)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEBUFFROWSBYGROUPID_OFFSET UNITYSDK_OFFSET(0xB0780C0)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEDATA_OFFSET UNITYSDK_OFFSET(0xB0766B0)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEENDLESSAREADATALIST_OFFSET UNITYSDK_OFFSET(0xB074790)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEENDLESSMEGABUFFIDS_OFFSET UNITYSDK_OFFSET(0xB074D00)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEENTRANCEFLOORID_OFFSET UNITYSDK_OFFSET(0xB077A30)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEENTRANCEGROUPID_OFFSET UNITYSDK_OFFSET(0xB077A90)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEENTRANCEINSTANCEID_OFFSET UNITYSDK_OFFSET(0xB077AF0)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEPICKAVATARMAXCOUNT_OFFSET UNITYSDK_OFFSET(0xB0774B0)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEPROPREWARDLEFTCOUNT_OFFSET UNITYSDK_OFFSET(0xB0776C0)
#define RPG_CLIENT_ROGUEMODULE_GETROGUETALENTDATA_OFFSET UNITYSDK_OFFSET(0xB076780)
#define RPG_CLIENT_ROGUEMODULE_GET_AVAILABLEPOINTREWARDLEVELLIST_OFFSET UNITYSDK_OFFSET(0xB076470)
#define RPG_CLIENT_ROGUEMODULE_GET_ENDLESSOVERBONUSREWARDTAKENTIME_OFFSET UNITYSDK_OFFSET(0xB076430)
#define RPG_CLIENT_ROGUEMODULE_GET_ENDLESSPOINTREWARDTAKENLIST_OFFSET UNITYSDK_OFFSET(0xB076450)
#define RPG_CLIENT_ROGUEMODULE_GET_ENDLESSPOINT_OFFSET UNITYSDK_OFFSET(0xB076410)
#define RPG_CLIENT_ROGUEMODULE_GET_HASAVAILABLEPOINTREWARD_OFFSET UNITYSDK_OFFSET(0xB076490)
#define RPG_CLIENT_ROGUEMODULE_GET_ROGUEENDLESSAREADATAS_OFFSET UNITYSDK_OFFSET(0xB0763F0)
#define RPG_CLIENT_ROGUEMODULE_GET_ROGUEENDLESSCONSTVALUE_OFFSET UNITYSDK_OFFSET(0xB076500)
#define RPG_CLIENT_ROGUEMODULE_HASROGUECHESTREWARDLEFTCOUNT_OFFSET UNITYSDK_OFFSET(0xB077740)
#define RPG_CLIENT_ROGUEMODULE_HASROGUEENDLESSINDOING_OFFSET UNITYSDK_OFFSET(0xB0762A0)
#define RPG_CLIENT_ROGUEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xB0792C0)
#define RPG_CLIENT_ROGUEMODULE_ISBUFFACHIVEDBUFF_OFFSET UNITYSDK_OFFSET(0xB077330)
#define RPG_CLIENT_ROGUEMODULE_ISINROGUEENDLESSBATTLE_OFFSET UNITYSDK_OFFSET(0xB074B30)
#define RPG_CLIENT_ROGUEMODULE_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0xB077050)
#define RPG_CLIENT_ROGUEMODULE_ISROGUEENDLESSAREA_OFFSET UNITYSDK_OFFSET(0xB074450)
#define RPG_CLIENT_ROGUEMODULE_ISROGUEENDLESSOPENING_OFFSET UNITYSDK_OFFSET(0xB076070)
#define RPG_CLIENT_ROGUEMODULE_ISROGUEENDLESSUNLOCK_OFFSET UNITYSDK_OFFSET(0xB076170)
#define RPG_CLIENT_ROGUEMODULE_LEAVEROGUE_OFFSET UNITYSDK_OFFSET(0xB07B070)
#define RPG_CLIENT_ROGUEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xB079620)
#define RPG_CLIENT_ROGUEMODULE_QUITCURRENTROGUE_OFFSET UNITYSDK_OFFSET(0xB07B250)
#define RPG_CLIENT_ROGUEMODULE_QUITROGUE_OFFSET UNITYSDK_OFFSET(0xB07B1A0)
#define RPG_CLIENT_ROGUEMODULE_ROGUEENDLESSGETAREADATA_OFFSET UNITYSDK_OFFSET(0xB074670)
#define RPG_CLIENT_ROGUEMODULE_ROGUEENDLESSGETSCORERANK_OFFSET UNITYSDK_OFFSET(0xB074820)
#define RPG_CLIENT_ROGUEMODULE_SAVEENTERROGUETEAM_OFFSET UNITYSDK_OFFSET(0xB078BC0)
#define RPG_CLIENT_ROGUEMODULE_SENDROGUEENDLESSMODULEINITREQUEST_OFFSET UNITYSDK_OFFSET(0xB0744C0)
#define RPG_CLIENT_ROGUEMODULE_SETAUTOSHOWROGUEHANDBOOKPAGE_OFFSET UNITYSDK_OFFSET(0xB079230)
#define RPG_CLIENT_ROGUEMODULE_SETAUTOSHOWROGUESELECTMAINPAGE_OFFSET UNITYSDK_OFFSET(0xB0791D0)
#define RPG_CLIENT_ROGUEMODULE_SET_AVAILABLEPOINTREWARDLEVELLIST_OFFSET UNITYSDK_OFFSET(0xB076480)
#define RPG_CLIENT_ROGUEMODULE_SET_ENDLESSOVERBONUSREWARDTAKENTIME_OFFSET UNITYSDK_OFFSET(0xB076440)
#define RPG_CLIENT_ROGUEMODULE_SET_ENDLESSPOINTREWARDTAKENLIST_OFFSET UNITYSDK_OFFSET(0xB076460)
#define RPG_CLIENT_ROGUEMODULE_SET_ENDLESSPOINT_OFFSET UNITYSDK_OFFSET(0xB076420)
#define RPG_CLIENT_ROGUEMODULE_SET_ROGUEENDLESSAREADATAS_OFFSET UNITYSDK_OFFSET(0xB076400)
#define RPG_CLIENT_ROGUEMODULE_SET_ROGUEENDLESSCONSTVALUE_OFFSET UNITYSDK_OFFSET(0xB076510)
#define RPG_CLIENT_ROGUEMODULE_SHOULDSHOWMAINPAGE_OFFSET UNITYSDK_OFFSET(0xB079030)
#define RPG_CLIENT_ROGUEMODULE_SHOWROGUEMAINPAGE_OFFSET UNITYSDK_OFFSET(0xB078FC0)
#define RPG_CLIENT_ROGUEMODULE_STARTROGUEWITHAEON_OFFSET UNITYSDK_OFFSET(0xB07AE80)
#define RPG_CLIENT_ROGUEMODULE_STARTROGUE_OFFSET UNITYSDK_OFFSET(0xB07ADC0)
#define RPG_CLIENT_ROGUEMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xB0782C0)
#define RPG_CLIENT_ROGUEMODULE_TRYGETROGUETEAMBYWORLDINDEX_OFFSET UNITYSDK_OFFSET(0xB078CC0)
#define RPG_CLIENT_ROGUEMODULE_TRYINITROGUETALENTDATA_OFFSET UNITYSDK_OFFSET(0xB076F10)
#define RPG_CLIENT_ROGUEMODULE_TRYSHOWBUFFAEONFIRSTTALK_OFFSET UNITYSDK_OFFSET(0xB07A9F0)
#define RPG_CLIENT_ROGUEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB0796B0)
#define RPG_CLIENT_ROGUEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB07B2A0)
#define RPG_CLIENT_ROGUEMODULE__ADDROGUEBUFFTAGSRECURSIVE_OFFSET UNITYSDK_OFFSET(0xB07A320)
#define RPG_CLIENT_ROGUEMODULE__CANSHOWROGUEFINISHIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xB07E290)
#define RPG_CLIENT_ROGUEMODULE__CHECKSHOWHANDBOOKPAGE_OFFSET UNITYSDK_OFFSET(0xB078B50)
#define RPG_CLIENT_ROGUEMODULE__CHECKSHOWROGUEFINISH_OFFSET UNITYSDK_OFFSET(0xB078400)
#define RPG_CLIENT_ROGUEMODULE__CHECKSHOWTRANSFERTOROGUE_OFFSET UNITYSDK_OFFSET(0xB078790)
#define RPG_CLIENT_ROGUEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xB076520)
#define RPG_CLIENT_ROGUEMODULE__ENDLESSTRYSHOWREWARDDISPLAY_OFFSET UNITYSDK_OFFSET(0xB075700)
#define RPG_CLIENT_ROGUEMODULE__GETAEONBUFFDIALOGUEGROUPID_OFFSET UNITYSDK_OFFSET(0xB07AA60)
#define RPG_CLIENT_ROGUEMODULE__GETPROPEXTRAINFO_OFFSET UNITYSDK_OFFSET(0xB077530)
#define RPG_CLIENT_ROGUEMODULE__GETROGUEBUFFTAGS_OFFSET UNITYSDK_OFFSET(0xB077CC0)
#define RPG_CLIENT_ROGUEMODULE__ISINROGUELEAVEMAPENTRANCE_OFFSET UNITYSDK_OFFSET(0xB07A5F0)
#define RPG_CLIENT_ROGUEMODULE__ISSATISFYTRANSFERSUBMISSIONSTATE_OFFSET UNITYSDK_OFFSET(0xB07A830)
#define RPG_CLIENT_ROGUEMODULE__NOTIFYROGUEENDLESSREWARD_OFFSET UNITYSDK_OFFSET(0xB075380)
#define RPG_CLIENT_ROGUEMODULE__ONBATTLERESULTBEFOREPHASE_OFFSET UNITYSDK_OFFSET(0xB075FB0)
#define RPG_CLIENT_ROGUEMODULE__ONCMDENABLEROGUETALENTSCRSP_OFFSET UNITYSDK_OFFSET(0xB07FED0)
#define RPG_CLIENT_ROGUEMODULE__ONCMDENHANCEROGUEBUFFSCRSP_OFFSET UNITYSDK_OFFSET(0xB07EAE0)
#define RPG_CLIENT_ROGUEMODULE__ONCMDENTERROGUEMAPROOMSCRSP_OFFSET UNITYSDK_OFFSET(0xB07C670)
#define RPG_CLIENT_ROGUEMODULE__ONCMDENTERROGUESCRSP_OFFSET UNITYSDK_OFFSET(0xB07BDA0)
#define RPG_CLIENT_ROGUEMODULE__ONCMDFINISHAEONDIALOGUEGROUPSCRSP_OFFSET UNITYSDK_OFFSET(0xB07FB10)
#define RPG_CLIENT_ROGUEMODULE__ONCMDGETROGUEAEONINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xB07F700)
#define RPG_CLIENT_ROGUEMODULE__ONCMDGETROGUEBUFFENHANCEINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xB07EA20)
#define RPG_CLIENT_ROGUEMODULE__ONCMDGETROGUEINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xB07B820)
#define RPG_CLIENT_ROGUEMODULE__ONCMDGETROGUETALENTINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xB07FE50)
#define RPG_CLIENT_ROGUEMODULE__ONCMDLEAVEROGUESCRSP_OFFSET UNITYSDK_OFFSET(0xB07BED0)
#define RPG_CLIENT_ROGUEMODULE__ONCMDOPENROGUECHESTSCRSP_OFFSET UNITYSDK_OFFSET(0xB07E600)
#define RPG_CLIENT_ROGUEMODULE__ONCMDPICKROGUEAVATARSCRSP_OFFSET UNITYSDK_OFFSET(0xB07EBE0)
#define RPG_CLIENT_ROGUEMODULE__ONCMDQUITROGUESCRSP_OFFSET UNITYSDK_OFFSET(0xB07C140)
#define RPG_CLIENT_ROGUEMODULE__ONCMDREVIVEROGUEAVATARSCRSP_OFFSET UNITYSDK_OFFSET(0xB07F410)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSTARTROGUESCRSP_OFFSET UNITYSDK_OFFSET(0xB07BA00)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEAEONSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB07E980)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEAREAUNLOCKSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB07C230)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEEXPLOREWINSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB07DFC0)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEFINISHSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB07E110)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEGETITEMSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB07E820)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEMAPROOMSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB07DE10)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEREVIVEINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB07F610)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUESEASONFINISHSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB07E440)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUESTATUSSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB07C3A0)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEVIRTUALITEMINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB07B890)
#define RPG_CLIENT_ROGUEMODULE__ONGETNEWAVATARINROGUE_OFFSET UNITYSDK_OFFSET(0xB079D60)
#define RPG_CLIENT_ROGUEMODULE__ONGETROGUEENDLESSACTIVITYDATASCRSP_OFFSET UNITYSDK_OFFSET(0xB075940)
#define RPG_CLIENT_ROGUEMODULE__ONPLAYSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0xB0798F0)
#define RPG_CLIENT_ROGUEMODULE__ONROGUEENDLESSACTIVITYBATTLEENDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB075E70)
#define RPG_CLIENT_ROGUEMODULE__ONTAKEROGUEENDLESSACTIVITYALLBONUSREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0xB075DE0)
#define RPG_CLIENT_ROGUEMODULE__ONTAKEROGUEENDLESSACTIVITYPOINTREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0xB075D50)
#define RPG_CLIENT_ROGUEMODULE__ONUPDATEPROPEXTRAINFO_OFFSET UNITYSDK_OFFSET(0xB079A30)
#define RPG_CLIENT_ROGUEMODULE__PREPARETRANSFERSUBMISSIONSTATE_OFFSET UNITYSDK_OFFSET(0xB07A8E0)
#define RPG_CLIENT_ROGUEMODULE__REFRESHAVAILABLELEVELREWARD_OFFSET UNITYSDK_OFFSET(0xB0754D0)
#define RPG_CLIENT_ROGUEMODULE__REFRESHROGUEDATA_OFFSET UNITYSDK_OFFSET(0xB079E60)
#define RPG_CLIENT_ROGUEMODULE__REFRESHROGUEENDLESSDATA_OFFSET UNITYSDK_OFFSET(0xB075110)
#define RPG_CLIENT_ROGUEMODULE__REFRESHROGUEVIRTUALITEMS_OFFSET UNITYSDK_OFFSET(0xB079F40)
#define RPG_CLIENT_ROGUEMODULE__ROGUEENDLESSADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB075F00)
#define RPG_CLIENT_ROGUEMODULE__ROGUEENDLESSADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB075820)
#define RPG_CLIENT_ROGUEMODULE__ROGUEENDLESSDISPOSE_OFFSET UNITYSDK_OFFSET(0xB075040)
#define RPG_CLIENT_ROGUEMODULE__ROGUEENDLESSINIT_OFFSET UNITYSDK_OFFSET(0xB074F20)
#define RPG_CLIENT_ROGUEMODULE__ROGUEENDLESSUNINIT_OFFSET UNITYSDK_OFFSET(0xB074F80)
#define RPG_CLIENT_ROGUEMODULE__SETENTERROGUEMAPLOADINGTYPE_OFFSET UNITYSDK_OFFSET(0xB07A220)
#define RPG_CLIENT_ROGUEMODULE__SETEXITROGUEMAPLOADINGTYPE_OFFSET UNITYSDK_OFFSET(0xB07A2A0)
#define RPG_CLIENT_ROGUEMODULE__SHOWBUFFAEONFIRSTTALK_OFFSET UNITYSDK_OFFSET(0xB07AB70)
#define RPG_CLIENT_ROGUEMODULE__SYNCSCOREREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xB075C80)
#define RPG_CLIENT_ROGUEMODULE__TRYAUTOSHOWROGUEENDLESSLEAVE_OFFSET UNITYSDK_OFFSET(0xB0752A0)
#define RPG_CLIENT_ROGUEMODULE__TRYAUTOSHOWROGUELEAVE_OFFSET UNITYSDK_OFFSET(0xB0783A0)
#define RPG_CLIENT_ROGUEMODULE__TRYSETCACHEROGUEFINISHINFO_OFFSET UNITYSDK_OFFSET(0xB07A450)
#define RPG_CLIENT_ROGUEMODULE__TRYSHOWAREANAMEAFTERTELEPOT_OFFSET UNITYSDK_OFFSET(0xB079980)
#define RPG_CLIENT_ROGUEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB080040)
#define RPG_CLIENT_ROGUEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB07FFB0)
#define RPG_CLIENT_ROGUEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xB080050)
#define RPG_CLIENT_ROGUEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB0800B0)
#define RPG_CLIENT_ROGUEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB080110)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueModule_TypeDefinitionIndex = 62152;

	class RogueModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::RogueEndlessConstValue* _RogueEndlessConstValue_k__BackingField; // 0x10
		::RPG::Client::Promises::Promise* _LeaveRoguePromise; // 0x18
		::RPG::Client::RogueEndlessProgressInfo* EndlessProgressInfo; // 0x20
		::RPG::Client::RogueFinishInfo* _CacheRogueFinishInfo; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::AddNewAvatarInfo*>* _CacheRogueGetNewAvatarInfo; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueAeonData*>* _RogueAeonDataDic; // 0x38
		::RPG::Client::Promises::Promise* _QuitRoguePromise; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* _RogueBuffGroupID2Tags; // 0x48
		::RPG::Client::RogueData* _RogueData; // 0x50
		::System::Collections::Generic::List_1<::System::UInt32>* _AvailablePointRewardLevelList_k__BackingField; // 0x58
		::System::Collections::Generic::List_1<::System::UInt32>* _EndlessPointRewardTakenList_k__BackingField; // 0x60
		::RPG::Client::RogueTalentData* _RogueTalentData; // 0x68
		::System::Collections::Generic::List_1<::System::UInt32>* _RogueEndlessScoreRank; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueEndlessAreaData*>* _RogueEndlessAreaDatas_k__BackingField; // 0x78
		::System::Collections::Generic::List_1<::System::UInt32>* _RogueEndlessMegaBuffIDs; // 0x80
		::System::UInt32 _RogueEntranceInstanceID; // 0x88
		::System::Boolean _IsWaitingAutoShowRogueHandbookPage; // 0x8C
		::System::Boolean _NeedShowAreaNameAfterTelepot; // 0x8D
		::System::Boolean HasAvailableOverBonusReward; // 0x8E
		::System::Boolean _NeedCheckRogueLeave; // 0x8F
		::System::UInt32 _LastLeaveAreaID; // 0x90
		::System::UInt32 _AutoShowRogueAreaID; // 0x94
		::System::UInt32 _RogueEntranceGroupID; // 0x98
		::System::Boolean _NeedCheckRogueFinish; // 0x9C
		::System::Boolean _IsWaitingAutoShowRogueSelectMainPage; // 0x9D
		::System::UInt32 _RogueLeaveMapEntranceID; // 0xA0
		::System::UInt32 _RogueEntranceFloorID; // 0xA4
		::System::UInt32 _EndlessPoint_k__BackingField; // 0xA8
		::System::UInt32 _EndlessOverBonusRewardTakenTime_k__BackingField; // 0xAC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__CTOR_OFFSET))(this);
		}

		::System::Boolean IsRogueEndlessArea(::System::UInt32 areaID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_ISROGUEENDLESSAREA_OFFSET))(this, areaID);
		}

		::System::Void SendRogueEndlessModuleInitRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_SENDROGUEENDLESSMODULEINITREQUEST_OFFSET))(this);
		}

		::RPG::Client::RogueEndlessAreaData* RogueEndlessGetAreaData(::System::UInt32 areaID)
		{
			return ((::RPG::Client::RogueEndlessAreaData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_ROGUEENDLESSGETAREADATA_OFFSET))(this, areaID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueEndlessAreaData*>* GetRogueEndlessAreaDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueEndlessAreaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETROGUEENDLESSAREADATALIST_OFFSET))(this);
		}

		::System::Int32 RogueEndlessGetScoreRank(::System::UInt32 score)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_ROGUEENDLESSGETSCORERANK_OFFSET))(this, score);
		}

		::System::Boolean IsInRogueEndlessBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_ISINROGUEENDLESSBATTLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetRogueEndlessMegaBuffIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETROGUEENDLESSMEGABUFFIDS_OFFSET))(this);
		}

		::System::Void _RogueEndlessInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ROGUEENDLESSINIT_OFFSET))(this);
		}

		::System::Void _RogueEndlessUnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ROGUEENDLESSUNINIT_OFFSET))(this);
		}

		::System::Void _RogueEndlessDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ROGUEENDLESSDISPOSE_OFFSET))(this);
		}

		::System::Void _RefreshRogueEndlessData(::Class_1_BDE0598EF34BE45E* rogueInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BDE0598EF34BE45E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__REFRESHROGUEENDLESSDATA_OFFSET))(this, rogueInfo);
		}

		::System::Void _TryAutoShowRogueEndlessLeave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__TRYAUTOSHOWROGUEENDLESSLEAVE_OFFSET))(this);
		}

		::System::Void _NotifyRogueEndlessReward(::Proto::ItemList* reward)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__NOTIFYROGUEENDLESSREWARD_OFFSET))(this, reward);
		}

		::System::Void _RefreshAvailableLevelReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__REFRESHAVAILABLELEVELREWARD_OFFSET))(this);
		}

		::System::Boolean _EndlessTryShowRewardDisplay(::Class_1_0CF86E4F213706E6* rsp)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_0CF86E4F213706E6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ENDLESSTRYSHOWREWARDDISPLAY_OFFSET))(this, rsp);
		}

		::System::Void _RogueEndlessAddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ROGUEENDLESSADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetRogueEndlessActivityDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONGETROGUEENDLESSACTIVITYDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnTakeRogueEndlessActivityPointRewardScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONTAKEROGUEENDLESSACTIVITYPOINTREWARDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnTakeRogueEndlessActivityAllBonusRewardScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONTAKEROGUEENDLESSACTIVITYALLBONUSREWARDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _SyncScoreRewardTaken(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* takenRewardLevelList, ::System::UInt32 overBonusRewardTakeTimes)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__SYNCSCOREREWARDTAKEN_OFFSET))(this, takenRewardLevelList, overBonusRewardTakeTimes);
		}

		::System::Void _OnRogueEndlessActivityBattleEndScNotify(::System::UInt16 cmd, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONROGUEENDLESSACTIVITYBATTLEENDSCNOTIFY_OFFSET))(this, cmd, ntfObject);
		}

		::System::Void _RogueEndlessAddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ROGUEENDLESSADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnBattleResultBeforePhase(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONBATTLERESULTBEFOREPHASE_OFFSET))(this, obj);
		}

		::System::Boolean IsRogueEndlessOpening()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_ISROGUEENDLESSOPENING_OFFSET))(this);
		}

		::System::Boolean IsRogueEndlessUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_ISROGUEENDLESSUNLOCK_OFFSET))(this);
		}

		::System::Boolean HasRogueEndlessInDoing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_HASROGUEENDLESSINDOING_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueEndlessAreaData*>* get_RogueEndlessAreaDatas()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueEndlessAreaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GET_ROGUEENDLESSAREADATAS_OFFSET))(this);
		}

		::System::Void set_RogueEndlessAreaDatas(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueEndlessAreaData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueEndlessAreaData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_SET_ROGUEENDLESSAREADATAS_OFFSET))(this, value);
		}

		::System::UInt32 get_EndlessPoint()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GET_ENDLESSPOINT_OFFSET))(this);
		}

		::System::Void set_EndlessPoint(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_SET_ENDLESSPOINT_OFFSET))(this, value);
		}

		::System::UInt32 get_EndlessOverBonusRewardTakenTime()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GET_ENDLESSOVERBONUSREWARDTAKENTIME_OFFSET))(this);
		}

		::System::Void set_EndlessOverBonusRewardTakenTime(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_SET_ENDLESSOVERBONUSREWARDTAKENTIME_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_EndlessPointRewardTakenList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GET_ENDLESSPOINTREWARDTAKENLIST_OFFSET))(this);
		}

		::System::Void set_EndlessPointRewardTakenList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_SET_ENDLESSPOINTREWARDTAKENLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AvailablePointRewardLevelList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GET_AVAILABLEPOINTREWARDLEVELLIST_OFFSET))(this);
		}

		::System::Void set_AvailablePointRewardLevelList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_SET_AVAILABLEPOINTREWARDLEVELLIST_OFFSET))(this, value);
		}

		::System::Boolean get_HasAvailablePointReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GET_HASAVAILABLEPOINTREWARD_OFFSET))(this);
		}

		::RPG::Client::RogueEndlessConstValue* get_RogueEndlessConstValue()
		{
			return ((::RPG::Client::RogueEndlessConstValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GET_ROGUEENDLESSCONSTVALUE_OFFSET))(this);
		}

		::System::Void set_RogueEndlessConstValue(::RPG::Client::RogueEndlessConstValue* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueEndlessConstValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_SET_ROGUEENDLESSCONSTVALUE_OFFSET))(this, value);
		}

		::RPG::Client::RogueData* GetRogueData()
		{
			return ((::RPG::Client::RogueData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETROGUEDATA_OFFSET))(this);
		}

		::System::UInt32 GetCurrentAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETCURRENTAREAID_OFFSET))(this);
		}

		::RPG::Client::RogueTalentData* GetRogueTalentData()
		{
			return ((::RPG::Client::RogueTalentData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETROGUETALENTDATA_OFFSET))(this);
		}

		::RPG::Client::RogueAeonData* GetRogueAeonData(::System::UInt32 aeonID)
		{
			return ((::RPG::Client::RogueAeonData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETROGUEAEONDATA_OFFSET))(this, aeonID);
		}

		::RPG::GameCore::RogueRoomRow* GetCurrentRogueRoomRow()
		{
			return ((::RPG::GameCore::RogueRoomRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETCURRENTROGUEROOMROW_OFFSET))(this);
		}

		::RPG::Client::RogueAreaData* GetMaxDiffUnlockAreaData()
		{
			return ((::RPG::Client::RogueAreaData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETMAXDIFFUNLOCKAREADATA_OFFSET))(this);
		}

		::RPG::Client::RogueAreaData* GetMaxProgressUnlockAreaData()
		{
			return ((::RPG::Client::RogueAreaData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETMAXPROGRESSUNLOCKAREADATA_OFFSET))(this);
		}

		::System::Boolean GetAreaLockStatus(::System::UInt32 areaID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETAREALOCKSTATUS_OFFSET))(this, areaID);
		}

		::System::Void TryInitRogueTalentData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_TRYINITROGUETALENTDATA_OFFSET))(this);
		}

		::System::Boolean IsInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_ISINSCHEDULE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* GetAchivedBuffList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETACHIVEDBUFFLIST_OFFSET))(this);
		}

		::System::Boolean IsBuffAchivedBuff(::System::UInt32 buffID, ::System::UInt32 buffLevel)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_ISBUFFACHIVEDBUFF_OFFSET))(this, buffID, buffLevel);
		}

		::System::UInt32 GetRoguePickAvatarMaxCount(::System::UInt32 propRuntimeID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETROGUEPICKAVATARMAXCOUNT_OFFSET))(this, propRuntimeID);
		}

		::System::UInt32 GetRoguePropRewardLeftCount(::System::UInt32 propRuntimeID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETROGUEPROPREWARDLEFTCOUNT_OFFSET))(this, propRuntimeID);
		}

		::System::Boolean HasRogueChestRewardLeftCount()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_HASROGUECHESTREWARDLEFTCOUNT_OFFSET))(this);
		}

		::RPG::Client::RogueBuffEnhanceItem* GetRogueBuffEnhanceItem(::System::UInt32 rogueBuffID)
		{
			return ((::RPG::Client::RogueBuffEnhanceItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETROGUEBUFFENHANCEITEM_OFFSET))(this, rogueBuffID);
		}

		::System::UInt32 GetRogueEntranceFloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETROGUEENTRANCEFLOORID_OFFSET))(this);
		}

		::System::UInt32 GetRogueEntranceGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETROGUEENTRANCEGROUPID_OFFSET))(this);
		}

		::System::UInt32 GetRogueEntranceInstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETROGUEENTRANCEINSTANCEID_OFFSET))(this);
		}

		::System::UInt32 GetRogueBuffNumByGroupID(::System::UInt32 rogueBuffGroupID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETROGUEBUFFNUMBYGROUPID_OFFSET))(this, rogueBuffGroupID);
		}

		::System::UInt32 GetRogueBuffCanUpNumByGroupID(::System::UInt32 rogueBuffGroupID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETROGUEBUFFCANUPNUMBYGROUPID_OFFSET))(this, rogueBuffGroupID);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::RogueBuffRow*>* GetRogueBuffRowsByGroupID(::System::UInt32 rogueBuffGroupID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::RogueBuffRow*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETROGUEBUFFROWSBYGROUPID_OFFSET))(this, rogueBuffGroupID);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void SaveEnterRogueTeam(::System::UInt32 worldIndex, ::System::Collections::Generic::List_1<::System::UInt32>* avatarIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_SAVEENTERROGUETEAM_OFFSET))(this, worldIndex, avatarIDs);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* TryGetRogueTeamByWorldIndex(::System::UInt32 worldIndex)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_TRYGETROGUETEAMBYWORLDINDEX_OFFSET))(this, worldIndex);
		}

		::System::Void ShowRogueMainPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_SHOWROGUEMAINPAGE_OFFSET))(this);
		}

		::System::Boolean ShouldShowMainPage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_SHOULDSHOWMAINPAGE_OFFSET))(this);
		}

		::System::Void SetAutoShowRogueSelectMainPage(::System::UInt32 autoShowAreaID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_SETAUTOSHOWROGUESELECTMAINPAGE_OFFSET))(this, autoShowAreaID);
		}

		::System::Void SetAutoShowRogueHandbookPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_SETAUTOSHOWROGUEHANDBOOKPAGE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnPlayScreenTransfer(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONPLAYSCREENTRANSFER_OFFSET))(this, arg);
		}

		::System::Void _OnUpdatePropExtraInfo(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONUPDATEPROPEXTRAINFO_OFFSET))(this, arg);
		}

		::System::Void _OnGetNewAvatarInRogue(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONGETNEWAVATARINROGUE_OFFSET))(this, arg);
		}

		::System::Void _RefreshRogueData(::Class_1_BDE0598EF34BE45E* rogueInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BDE0598EF34BE45E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__REFRESHROGUEDATA_OFFSET))(this, rogueInfo);
		}

		::System::Void _RefreshRogueVirtualItems(::Class_1_BDE0598EF34BE45E* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BDE0598EF34BE45E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__REFRESHROGUEVIRTUALITEMS_OFFSET))(this, info);
		}

		::System::Void _SetEnterRogueMapLoadingType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__SETENTERROGUEMAPLOADINGTYPE_OFFSET))(this);
		}

		::System::Void _SetExitRogueMapLoadingType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__SETEXITROGUEMAPLOADINGTYPE_OFFSET))(this);
		}

		::System::Void _TryShowAreaNameAfterTelepot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__TRYSHOWAREANAMEAFTERTELEPOT_OFFSET))(this);
		}

		::Class_1_FAB24B2D24758D65* _GetPropExtraInfo(::System::UInt32 propRuntimeID)
		{
			return ((::Class_1_FAB24B2D24758D65*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__GETPROPEXTRAINFO_OFFSET))(this, propRuntimeID);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* _GetRogueBuffTags(::System::UInt32 rogueBuffGroupID)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__GETROGUEBUFFTAGS_OFFSET))(this, rogueBuffGroupID);
		}

		::System::Void _AddRogueBuffTagsRecursive(::System::Collections::Generic::HashSet_1<::System::UInt32>* result, ::System::UInt32 rogueBuffGroupID, ::System::UInt32 recursiveTime, ::System::UInt32 maxRecursiveTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ADDROGUEBUFFTAGSRECURSIVE_OFFSET))(this, result, rogueBuffGroupID, recursiveTime, maxRecursiveTime);
		}

		::System::Void _TryAutoShowRogueLeave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__TRYAUTOSHOWROGUELEAVE_OFFSET))(this);
		}

		::System::Void _CheckShowRogueFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__CHECKSHOWROGUEFINISH_OFFSET))(this);
		}

		::System::Void _TrySetCacheRogueFinishInfo(::Class_1_FB0633E85BD6CF8E_15* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FB0633E85BD6CF8E_15*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__TRYSETCACHEROGUEFINISHINFO_OFFSET))(this, proto);
		}

		::System::Void _CheckShowTransferToRogue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__CHECKSHOWTRANSFERTOROGUE_OFFSET))(this);
		}

		::System::Void _CheckShowHandbookPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__CHECKSHOWHANDBOOKPAGE_OFFSET))(this);
		}

		::System::Boolean _IsInRogueLeaveMapEntrance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ISINROGUELEAVEMAPENTRANCE_OFFSET))(this);
		}

		::System::Boolean _IsSatisfyTransferSubMissionState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ISSATISFYTRANSFERSUBMISSIONSTATE_OFFSET))(this);
		}

		::System::Void _PrepareTransferSubMissionState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__PREPARETRANSFERSUBMISSIONSTATE_OFFSET))(this);
		}

		::System::Void TryShowBuffAeonFirstTalk(::System::UInt32 buffType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_TRYSHOWBUFFAEONFIRSTTALK_OFFSET))(this, buffType);
		}

		::System::UInt32 _GetAeonBuffDialogueGroupID(::System::UInt32 buffType)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__GETAEONBUFFDIALOGUEGROUPID_OFFSET))(this, buffType);
		}

		::System::Void _ShowBuffAeonFirstTalk(::System::UInt32 dialogueGroupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__SHOWBUFFAEONFIRSTTALK_OFFSET))(this, dialogueGroupID);
		}

		::System::Void StartRogue(::System::UInt32 areaID, ::System::Collections::Generic::List_1<::System::UInt32>* avatarIDList, ::System::Collections::Generic::List_1<::System::UInt32>* trialAvatarIDList, ::System::Collections::Generic::List_1<::System::UInt32>* banAeonIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_STARTROGUE_OFFSET))(this, areaID, avatarIDList, trialAvatarIDList, banAeonIDList);
		}

		::System::Void StartRogueWithAeon(::System::UInt32 areaID, ::System::Collections::Generic::List_1<::System::UInt32>* avatarIDList, ::System::Collections::Generic::List_1<::System::UInt32>* banAeonIDList, ::System::UInt32 buffAeonID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_STARTROGUEWITHAEON_OFFSET))(this, areaID, avatarIDList, banAeonIDList, buffAeonID);
		}

		::System::Void EnterRogue(::System::UInt32 areaID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_ENTERROGUE_OFFSET))(this, areaID);
		}

		::System::Void EnterRogueMapRoom(::System::UInt32 siteID, ::System::UInt32 roomID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_ENTERROGUEMAPROOM_OFFSET))(this, siteID, roomID);
		}

		::RPG::Client::Promises::Promise* LeaveRogue()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_LEAVEROGUE_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* QuitRogue(::System::UInt32 areaID)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_QUITROGUE_OFFSET))(this, areaID);
		}

		::RPG::Client::Promises::Promise* QuitCurrentRogue()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_QUITCURRENTROGUE_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdGetRogueInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDGETROGUEINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdSyncRogueVirtualItemInfoScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEVIRTUALITEMINFOSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdStartRogueScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDSTARTROGUESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdEnterRogueScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDENTERROGUESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdLeaveRogueScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDLEAVEROGUESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdQuitRogueScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDQUITROGUESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdSyncRogueAreaUnlockScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEAREAUNLOCKSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdSyncRogueStatusScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUESTATUSSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdEnterRogueMapRoomScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDENTERROGUEMAPROOMSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdSyncRogueMapRoomScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEMAPROOMSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdSyncRogueExploreWinScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEEXPLOREWINSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdSyncRogueFinishScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEFINISHSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Boolean _CanShowRogueFinishImmediately(::System::Boolean isWin)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__CANSHOWROGUEFINISHIMMEDIATELY_OFFSET))(this, isWin);
		}

		::System::Void _OnCmdSyncRogueSeasonFinishScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUESEASONFINISHSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdOpenRogueChestScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDOPENROGUECHESTSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdSyncRogueGetItemScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEGETITEMSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdSyncRogueAeonScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEAEONSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdGetRogueBuffEnhanceInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDGETROGUEBUFFENHANCEINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdEnhanceRogueBuffScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDENHANCEROGUEBUFFSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdPickRogueAvatarScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDPICKROGUEAVATARSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdReviveRogueAvatarScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDREVIVEROGUEAVATARSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdSyncRogueReviveInfoScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEREVIVEINFOSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdGetRogueAeonInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDGETROGUEAEONINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdFinishAeonDialogueGroupScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDFINISHAEONDIALOGUEGROUPSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdGetRogueTalentInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDGETROGUETALENTINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdEnableRogueTalentScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDENABLEROGUETALENTSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
