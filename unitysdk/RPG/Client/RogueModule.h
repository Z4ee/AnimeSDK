#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_533CCF93B9B1AD29;
class Class_1_84BF80250A9F5C6A;
class Class_1_D1DBD2412C18D396;
class Class_1_FB0633E85BD6CF8E_10;
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
namespace RPG::Client { class RogueScoreRewardData; }
namespace RPG::Client { class RogueTalentData; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class RogueBuffRow; }
namespace RPG::GameCore { class RogueRoomRow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA341E30)
#define RPG_CLIENT_ROGUEMODULE_ENTERROGUEMAPROOM_OFFSET UNITYSDK_OFFSET(0xA343C00)
#define RPG_CLIENT_ROGUEMODULE_ENTERROGUE_OFFSET UNITYSDK_OFFSET(0xA343B70)
#define RPG_CLIENT_ROGUEMODULE_GETACHIVEDBUFFLIST_OFFSET UNITYSDK_OFFSET(0xA33FC10)
#define RPG_CLIENT_ROGUEMODULE_GETAREALOCKSTATUS_OFFSET UNITYSDK_OFFSET(0xA33F480)
#define RPG_CLIENT_ROGUEMODULE_GETCURRENTAREAID_OFFSET UNITYSDK_OFFSET(0xA33F030)
#define RPG_CLIENT_ROGUEMODULE_GETCURRENTROGUEROOMROW_OFFSET UNITYSDK_OFFSET(0xA33F1D0)
#define RPG_CLIENT_ROGUEMODULE_GETMAXDIFFUNLOCKAREADATA_OFFSET UNITYSDK_OFFSET(0xA33F220)
#define RPG_CLIENT_ROGUEMODULE_GETMAXPROGRESSUNLOCKAREADATA_OFFSET UNITYSDK_OFFSET(0xA33F350)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEAEONDATA_OFFSET UNITYSDK_OFFSET(0xA33F140)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEBUFFCANUPNUMBYGROUPID_OFFSET UNITYSDK_OFFSET(0xA3407F0)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEBUFFENHANCEITEM_OFFSET UNITYSDK_OFFSET(0xA340300)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEBUFFNUMBYGROUPID_OFFSET UNITYSDK_OFFSET(0xA3404C0)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEBUFFROWSBYGROUPID_OFFSET UNITYSDK_OFFSET(0xA340A30)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEDATA_OFFSET UNITYSDK_OFFSET(0xA33EFF0)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEENDLESSAREADATALIST_OFFSET UNITYSDK_OFFSET(0xA33D090)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEENDLESSMEGABUFFIDS_OFFSET UNITYSDK_OFFSET(0xA33D5F0)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEENTRANCEFLOORID_OFFSET UNITYSDK_OFFSET(0xA3403A0)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEENTRANCEGROUPID_OFFSET UNITYSDK_OFFSET(0xA340400)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEENTRANCEINSTANCEID_OFFSET UNITYSDK_OFFSET(0xA340460)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEPICKAVATARMAXCOUNT_OFFSET UNITYSDK_OFFSET(0xA33FE30)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEPROPREWARDLEFTCOUNT_OFFSET UNITYSDK_OFFSET(0xA340040)
#define RPG_CLIENT_ROGUEMODULE_GETROGUESCOREREWARDDATA_OFFSET UNITYSDK_OFFSET(0xA33F100)
#define RPG_CLIENT_ROGUEMODULE_GETROGUETALENTDATA_OFFSET UNITYSDK_OFFSET(0xA33F0C0)
#define RPG_CLIENT_ROGUEMODULE_GET_AVAILABLEPOINTREWARDLEVELLIST_OFFSET UNITYSDK_OFFSET(0xA33ED50)
#define RPG_CLIENT_ROGUEMODULE_GET_ENDLESSOVERBONUSREWARDTAKENTIME_OFFSET UNITYSDK_OFFSET(0xA33ED10)
#define RPG_CLIENT_ROGUEMODULE_GET_ENDLESSPOINTREWARDTAKENLIST_OFFSET UNITYSDK_OFFSET(0xA33ED30)
#define RPG_CLIENT_ROGUEMODULE_GET_ENDLESSPOINT_OFFSET UNITYSDK_OFFSET(0xA33ECF0)
#define RPG_CLIENT_ROGUEMODULE_GET_HASAVAILABLEPOINTREWARD_OFFSET UNITYSDK_OFFSET(0xA33ED70)
#define RPG_CLIENT_ROGUEMODULE_GET_ROGUEENDLESSAREADATAS_OFFSET UNITYSDK_OFFSET(0xA33ECD0)
#define RPG_CLIENT_ROGUEMODULE_GET_ROGUEENDLESSCONSTVALUE_OFFSET UNITYSDK_OFFSET(0xA33EDE0)
#define RPG_CLIENT_ROGUEMODULE_HASROGUECHESTREWARDLEFTCOUNT_OFFSET UNITYSDK_OFFSET(0xA3400C0)
#define RPG_CLIENT_ROGUEMODULE_HASROGUEENDLESSINDOING_OFFSET UNITYSDK_OFFSET(0xA33EB80)
#define RPG_CLIENT_ROGUEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA341C30)
#define RPG_CLIENT_ROGUEMODULE_ISBUFFACHIVEDBUFF_OFFSET UNITYSDK_OFFSET(0xA33FCB0)
#define RPG_CLIENT_ROGUEMODULE_ISINROGUEENDLESSBATTLE_OFFSET UNITYSDK_OFFSET(0xA33D430)
#define RPG_CLIENT_ROGUEMODULE_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0xA33FA20)
#define RPG_CLIENT_ROGUEMODULE_ISROGUEENDLESSAREA_OFFSET UNITYSDK_OFFSET(0xA33CD50)
#define RPG_CLIENT_ROGUEMODULE_ISROGUEENDLESSOPENING_OFFSET UNITYSDK_OFFSET(0xA33E960)
#define RPG_CLIENT_ROGUEMODULE_ISROGUEENDLESSUNLOCK_OFFSET UNITYSDK_OFFSET(0xA33EA50)
#define RPG_CLIENT_ROGUEMODULE_LEAVEROGUE_OFFSET UNITYSDK_OFFSET(0xA343CA0)
#define RPG_CLIENT_ROGUEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA342180)
#define RPG_CLIENT_ROGUEMODULE_QUITCURRENTROGUE_OFFSET UNITYSDK_OFFSET(0xA343E90)
#define RPG_CLIENT_ROGUEMODULE_QUITROGUE_OFFSET UNITYSDK_OFFSET(0xA343DE0)
#define RPG_CLIENT_ROGUEMODULE_ROGUEENDLESSGETAREADATA_OFFSET UNITYSDK_OFFSET(0xA33CF70)
#define RPG_CLIENT_ROGUEMODULE_ROGUEENDLESSGETSCORERANK_OFFSET UNITYSDK_OFFSET(0xA33D120)
#define RPG_CLIENT_ROGUEMODULE_SAVEENTERROGUETEAM_OFFSET UNITYSDK_OFFSET(0xA341530)
#define RPG_CLIENT_ROGUEMODULE_SENDROGUEENDLESSMODULEINITREQUEST_OFFSET UNITYSDK_OFFSET(0xA33CDC0)
#define RPG_CLIENT_ROGUEMODULE_SETAUTOSHOWROGUEHANDBOOKPAGE_OFFSET UNITYSDK_OFFSET(0xA341BA0)
#define RPG_CLIENT_ROGUEMODULE_SETAUTOSHOWROGUESELECTMAINPAGE_OFFSET UNITYSDK_OFFSET(0xA341B40)
#define RPG_CLIENT_ROGUEMODULE_SET_AVAILABLEPOINTREWARDLEVELLIST_OFFSET UNITYSDK_OFFSET(0xA33ED60)
#define RPG_CLIENT_ROGUEMODULE_SET_ENDLESSOVERBONUSREWARDTAKENTIME_OFFSET UNITYSDK_OFFSET(0xA33ED20)
#define RPG_CLIENT_ROGUEMODULE_SET_ENDLESSPOINTREWARDTAKENLIST_OFFSET UNITYSDK_OFFSET(0xA33ED40)
#define RPG_CLIENT_ROGUEMODULE_SET_ENDLESSPOINT_OFFSET UNITYSDK_OFFSET(0xA33ED00)
#define RPG_CLIENT_ROGUEMODULE_SET_ROGUEENDLESSAREADATAS_OFFSET UNITYSDK_OFFSET(0xA33ECE0)
#define RPG_CLIENT_ROGUEMODULE_SET_ROGUEENDLESSCONSTVALUE_OFFSET UNITYSDK_OFFSET(0xA33EDF0)
#define RPG_CLIENT_ROGUEMODULE_SHOULDSHOWMAINPAGE_OFFSET UNITYSDK_OFFSET(0xA3419A0)
#define RPG_CLIENT_ROGUEMODULE_SHOWROGUEMAINPAGE_OFFSET UNITYSDK_OFFSET(0xA341930)
#define RPG_CLIENT_ROGUEMODULE_STARTROGUEWITHAEON_OFFSET UNITYSDK_OFFSET(0xA343AB0)
#define RPG_CLIENT_ROGUEMODULE_STARTROGUE_OFFSET UNITYSDK_OFFSET(0xA3439F0)
#define RPG_CLIENT_ROGUEMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xA340C30)
#define RPG_CLIENT_ROGUEMODULE_TRYGETROGUETEAMBYWORLDINDEX_OFFSET UNITYSDK_OFFSET(0xA341630)
#define RPG_CLIENT_ROGUEMODULE_TRYINITROGUETALENTDATA_OFFSET UNITYSDK_OFFSET(0xA33F890)
#define RPG_CLIENT_ROGUEMODULE_TRYSHOWBUFFAEONFIRSTTALK_OFFSET UNITYSDK_OFFSET(0xA343620)
#define RPG_CLIENT_ROGUEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA342210)
#define RPG_CLIENT_ROGUEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA343EE0)
#define RPG_CLIENT_ROGUEMODULE__ADDROGUEBUFFTAGSRECURSIVE_OFFSET UNITYSDK_OFFSET(0xA342E80)
#define RPG_CLIENT_ROGUEMODULE__CANSHOWROGUEFINISHIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xA3471E0)
#define RPG_CLIENT_ROGUEMODULE__CHECKSHOWHANDBOOKPAGE_OFFSET UNITYSDK_OFFSET(0xA3414C0)
#define RPG_CLIENT_ROGUEMODULE__CHECKSHOWROGUEFINISH_OFFSET UNITYSDK_OFFSET(0xA340D70)
#define RPG_CLIENT_ROGUEMODULE__CHECKSHOWTRANSFERTOROGUE_OFFSET UNITYSDK_OFFSET(0xA341100)
#define RPG_CLIENT_ROGUEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA33EE00)
#define RPG_CLIENT_ROGUEMODULE__ENDLESSTRYSHOWREWARDDISPLAY_OFFSET UNITYSDK_OFFSET(0xA33DFF0)
#define RPG_CLIENT_ROGUEMODULE__GETAEONBUFFDIALOGUEGROUPID_OFFSET UNITYSDK_OFFSET(0xA343690)
#define RPG_CLIENT_ROGUEMODULE__GETPROPEXTRAINFO_OFFSET UNITYSDK_OFFSET(0xA33FEB0)
#define RPG_CLIENT_ROGUEMODULE__GETROGUEBUFFTAGS_OFFSET UNITYSDK_OFFSET(0xA340630)
#define RPG_CLIENT_ROGUEMODULE__ISINROGUELEAVEMAPENTRANCE_OFFSET UNITYSDK_OFFSET(0xA343150)
#define RPG_CLIENT_ROGUEMODULE__ISSATISFYTRANSFERSUBMISSIONSTATE_OFFSET UNITYSDK_OFFSET(0xA343390)
#define RPG_CLIENT_ROGUEMODULE__NOTIFYROGUEENDLESSREWARD_OFFSET UNITYSDK_OFFSET(0xA33DC70)
#define RPG_CLIENT_ROGUEMODULE__ONBATTLERESULTBEFOREPHASE_OFFSET UNITYSDK_OFFSET(0xA33E8A0)
#define RPG_CLIENT_ROGUEMODULE__ONCMDENABLEROGUETALENTSCRSP_OFFSET UNITYSDK_OFFSET(0xA3492A0)
#define RPG_CLIENT_ROGUEMODULE__ONCMDENHANCEROGUEBUFFSCRSP_OFFSET UNITYSDK_OFFSET(0xA347A70)
#define RPG_CLIENT_ROGUEMODULE__ONCMDENTERROGUEMAPROOMSCRSP_OFFSET UNITYSDK_OFFSET(0xA345380)
#define RPG_CLIENT_ROGUEMODULE__ONCMDENTERROGUESCRSP_OFFSET UNITYSDK_OFFSET(0xA344AB0)
#define RPG_CLIENT_ROGUEMODULE__ONCMDFINISHAEONDIALOGUEGROUPSCRSP_OFFSET UNITYSDK_OFFSET(0xA348AD0)
#define RPG_CLIENT_ROGUEMODULE__ONCMDGETROGUEAEONINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xA3486C0)
#define RPG_CLIENT_ROGUEMODULE__ONCMDGETROGUEBUFFENHANCEINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xA3479B0)
#define RPG_CLIENT_ROGUEMODULE__ONCMDGETROGUEINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xA344530)
#define RPG_CLIENT_ROGUEMODULE__ONCMDGETROGUEINITIALSCORESCRSP_OFFSET UNITYSDK_OFFSET(0xA349100)
#define RPG_CLIENT_ROGUEMODULE__ONCMDGETROGUESCOREREWARDINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xA348E10)
#define RPG_CLIENT_ROGUEMODULE__ONCMDGETROGUETALENTINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xA3491A0)
#define RPG_CLIENT_ROGUEMODULE__ONCMDLEAVEROGUESCRSP_OFFSET UNITYSDK_OFFSET(0xA344BE0)
#define RPG_CLIENT_ROGUEMODULE__ONCMDOPENROGUECHESTSCRSP_OFFSET UNITYSDK_OFFSET(0xA347590)
#define RPG_CLIENT_ROGUEMODULE__ONCMDPICKROGUEAVATARSCRSP_OFFSET UNITYSDK_OFFSET(0xA347B70)
#define RPG_CLIENT_ROGUEMODULE__ONCMDQUITROGUESCRSP_OFFSET UNITYSDK_OFFSET(0xA344E50)
#define RPG_CLIENT_ROGUEMODULE__ONCMDREVIVEROGUEAVATARSCRSP_OFFSET UNITYSDK_OFFSET(0xA3483A0)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSTARTROGUESCRSP_OFFSET UNITYSDK_OFFSET(0xA344710)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEAEONSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA347910)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEAREAUNLOCKSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA344F40)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEEXPLOREWINSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA346CC0)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEFINISHSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA346E10)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEGETITEMSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA3477B0)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEMAPROOMSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA346B10)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEREVIVEINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA3485D0)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEREWARDINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA348EA0)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUESEASONFINISHSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA347390)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUESTATUSSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA3450B0)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEVIRTUALITEMINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA3445A0)
#define RPG_CLIENT_ROGUEMODULE__ONCMDTAKEROGUESCOREREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0xA349040)
#define RPG_CLIENT_ROGUEMODULE__ONGETNEWAVATARINROGUE_OFFSET UNITYSDK_OFFSET(0xA3428C0)
#define RPG_CLIENT_ROGUEMODULE__ONGETROGUEENDLESSACTIVITYDATASCRSP_OFFSET UNITYSDK_OFFSET(0xA33E230)
#define RPG_CLIENT_ROGUEMODULE__ONPLAYSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0xA342450)
#define RPG_CLIENT_ROGUEMODULE__ONROGUEENDLESSACTIVITYBATTLEENDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA33E760)
#define RPG_CLIENT_ROGUEMODULE__ONTAKEROGUEENDLESSACTIVITYALLBONUSREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0xA33E6D0)
#define RPG_CLIENT_ROGUEMODULE__ONTAKEROGUEENDLESSACTIVITYPOINTREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0xA33E640)
#define RPG_CLIENT_ROGUEMODULE__ONUPDATEPROPEXTRAINFO_OFFSET UNITYSDK_OFFSET(0xA342590)
#define RPG_CLIENT_ROGUEMODULE__PREPARETRANSFERSUBMISSIONSTATE_OFFSET UNITYSDK_OFFSET(0xA343510)
#define RPG_CLIENT_ROGUEMODULE__REFRESHAVAILABLELEVELREWARD_OFFSET UNITYSDK_OFFSET(0xA33DDC0)
#define RPG_CLIENT_ROGUEMODULE__REFRESHROGUEDATA_OFFSET UNITYSDK_OFFSET(0xA3429C0)
#define RPG_CLIENT_ROGUEMODULE__REFRESHROGUEENDLESSDATA_OFFSET UNITYSDK_OFFSET(0xA33DA00)
#define RPG_CLIENT_ROGUEMODULE__REFRESHROGUEVIRTUALITEMS_OFFSET UNITYSDK_OFFSET(0xA342AA0)
#define RPG_CLIENT_ROGUEMODULE__ROGUEENDLESSADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA33E7F0)
#define RPG_CLIENT_ROGUEMODULE__ROGUEENDLESSADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA33E110)
#define RPG_CLIENT_ROGUEMODULE__ROGUEENDLESSDISPOSE_OFFSET UNITYSDK_OFFSET(0xA33D930)
#define RPG_CLIENT_ROGUEMODULE__ROGUEENDLESSINIT_OFFSET UNITYSDK_OFFSET(0xA33D810)
#define RPG_CLIENT_ROGUEMODULE__ROGUEENDLESSUNINIT_OFFSET UNITYSDK_OFFSET(0xA33D870)
#define RPG_CLIENT_ROGUEMODULE__SETENTERROGUEMAPLOADINGTYPE_OFFSET UNITYSDK_OFFSET(0xA342D80)
#define RPG_CLIENT_ROGUEMODULE__SETEXITROGUEMAPLOADINGTYPE_OFFSET UNITYSDK_OFFSET(0xA342E00)
#define RPG_CLIENT_ROGUEMODULE__SHOWBUFFAEONFIRSTTALK_OFFSET UNITYSDK_OFFSET(0xA3437A0)
#define RPG_CLIENT_ROGUEMODULE__SYNCSCOREREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xA33E570)
#define RPG_CLIENT_ROGUEMODULE__TRYAUTOSHOWROGUEENDLESSLEAVE_OFFSET UNITYSDK_OFFSET(0xA33DB90)
#define RPG_CLIENT_ROGUEMODULE__TRYAUTOSHOWROGUELEAVE_OFFSET UNITYSDK_OFFSET(0xA340D10)
#define RPG_CLIENT_ROGUEMODULE__TRYSETCACHEROGUEFINISHINFO_OFFSET UNITYSDK_OFFSET(0xA342FB0)
#define RPG_CLIENT_ROGUEMODULE__TRYSHOWAREANAMEAFTERTELEPOT_OFFSET UNITYSDK_OFFSET(0xA3424E0)
#define RPG_CLIENT_ROGUEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA349480)
#define RPG_CLIENT_ROGUEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA3493F0)
#define RPG_CLIENT_ROGUEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA349490)
#define RPG_CLIENT_ROGUEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA3494F0)
#define RPG_CLIENT_ROGUEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA349550)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueModule_TypeDefinitionIndex = 54964;

	class RogueModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::RogueEndlessConstValue* _RogueEndlessConstValue_k__BackingField; // 0x10
		::RPG::Client::RogueData* _RogueData; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueEndlessAreaData*>* _RogueEndlessAreaDatas_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueAeonData*>* _RogueAeonDataDic; // 0x28
		::RPG::Client::RogueTalentData* _RogueTalentData; // 0x30
		::RPG::Client::RogueFinishInfo* _CacheRogueFinishInfo; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* _RogueBuffGroupID2Tags; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::AddNewAvatarInfo*>* _CacheRogueGetNewAvatarInfo; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* _AvailablePointRewardLevelList_k__BackingField; // 0x50
		::RPG::Client::Promises::Promise* _QuitRoguePromise; // 0x58
		::System::Collections::Generic::List_1<::System::UInt32>* _EndlessPointRewardTakenList_k__BackingField; // 0x60
		::RPG::Client::RogueScoreRewardData* _RogueScoreRewardData; // 0x68
		::System::Collections::Generic::List_1<::System::UInt32>* _RogueEndlessMegaBuffIDs; // 0x70
		::RPG::Client::RogueEndlessProgressInfo* EndlessProgressInfo; // 0x78
		::RPG::Client::Promises::Promise* _LeaveRoguePromise; // 0x80
		::System::Collections::Generic::List_1<::System::UInt32>* _RogueEndlessScoreRank; // 0x88
		::System::UInt32 _AutoShowRogueAreaID; // 0x90
		::System::UInt32 _RogueEntranceFloorID; // 0x94
		::System::UInt32 _RogueLeaveMapEntranceID; // 0x98
		::System::Boolean _NeedCheckRogueLeave; // 0x9C
		::System::Boolean _IsWaitingAutoShowRogueHandbookPage; // 0x9D
		::System::UInt32 _LastLeaveAreaID; // 0xA0
		::System::UInt32 _RogueEntranceInstanceID; // 0xA4
		::System::UInt32 _EndlessPoint_k__BackingField; // 0xA8
		::System::UInt32 _RogueEntranceGroupID; // 0xAC
		::System::UInt32 _EndlessOverBonusRewardTakenTime_k__BackingField; // 0xB0
		::System::Boolean _NeedShowAreaNameAfterTelepot; // 0xB4
		::System::Boolean _NeedCheckRogueFinish; // 0xB5
		::System::Boolean _IsWaitingAutoShowRogueSelectMainPage; // 0xB6
		::System::Boolean HasAvailableOverBonusReward; // 0xB7

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

		::System::Void _RefreshRogueEndlessData(::Class_1_84BF80250A9F5C6A* rogueInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_84BF80250A9F5C6A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__REFRESHROGUEENDLESSDATA_OFFSET))(this, rogueInfo);
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

		::System::Boolean _EndlessTryShowRewardDisplay(::Class_1_D1DBD2412C18D396* rsp)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_D1DBD2412C18D396*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ENDLESSTRYSHOWREWARDDISPLAY_OFFSET))(this, rsp);
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

		::RPG::Client::RogueScoreRewardData* GetRogueScoreRewardData()
		{
			return ((::RPG::Client::RogueScoreRewardData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETROGUESCOREREWARDDATA_OFFSET))(this);
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

		::System::Void _RefreshRogueData(::Class_1_84BF80250A9F5C6A* rogueInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_84BF80250A9F5C6A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__REFRESHROGUEDATA_OFFSET))(this, rogueInfo);
		}

		::System::Void _RefreshRogueVirtualItems(::Class_1_84BF80250A9F5C6A* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_84BF80250A9F5C6A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__REFRESHROGUEVIRTUALITEMS_OFFSET))(this, info);
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

		::Class_1_533CCF93B9B1AD29* _GetPropExtraInfo(::System::UInt32 propRuntimeID)
		{
			return ((::Class_1_533CCF93B9B1AD29*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__GETPROPEXTRAINFO_OFFSET))(this, propRuntimeID);
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

		::System::Void _TrySetCacheRogueFinishInfo(::Class_1_FB0633E85BD6CF8E_10* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FB0633E85BD6CF8E_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__TRYSETCACHEROGUEFINISHINFO_OFFSET))(this, proto);
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

		::System::Void _OnCmdGetRogueScoreRewardInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDGETROGUESCOREREWARDINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdSyncRogueRewardInfoScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEREWARDINFOSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdTakeRogueScoreRewardScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDTAKEROGUESCOREREWARDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdGetRogueInitialScoreScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDGETROGUEINITIALSCORESCRSP_OFFSET))(this, cmd, rspObject);
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
