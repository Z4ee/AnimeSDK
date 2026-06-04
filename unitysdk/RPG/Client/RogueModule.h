#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_0CF86E4F213706E6;
class Class_1_BDE0598EF34BE45E;
class Class_1_FAB24B2D24758D65;
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
namespace RPG::Client { class RogueTalentData; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class RogueBuffRow; }
namespace RPG::GameCore { class RogueRoomRow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC7CA000)
#define RPG_CLIENT_ROGUEMODULE_ENTERROGUEMAPROOM_OFFSET UNITYSDK_OFFSET(0xC7CBC70)
#define RPG_CLIENT_ROGUEMODULE_ENTERROGUE_OFFSET UNITYSDK_OFFSET(0xC7CBBE0)
#define RPG_CLIENT_ROGUEMODULE_GETACHIVEDBUFFLIST_OFFSET UNITYSDK_OFFSET(0xC7C7D80)
#define RPG_CLIENT_ROGUEMODULE_GETAREALOCKSTATUS_OFFSET UNITYSDK_OFFSET(0xC7C7680)
#define RPG_CLIENT_ROGUEMODULE_GETCURRENTAREAID_OFFSET UNITYSDK_OFFSET(0xC7C71D0)
#define RPG_CLIENT_ROGUEMODULE_GETCURRENTROGUEROOMROW_OFFSET UNITYSDK_OFFSET(0xC7C7360)
#define RPG_CLIENT_ROGUEMODULE_GETMAXDIFFUNLOCKAREADATA_OFFSET UNITYSDK_OFFSET(0xC7C73E0)
#define RPG_CLIENT_ROGUEMODULE_GETMAXPROGRESSUNLOCKAREADATA_OFFSET UNITYSDK_OFFSET(0xC7C7530)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEAEONDATA_OFFSET UNITYSDK_OFFSET(0xC7C72A0)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEBUFFCANUPNUMBYGROUPID_OFFSET UNITYSDK_OFFSET(0xC7C8A40)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEBUFFENHANCEITEM_OFFSET UNITYSDK_OFFSET(0xC7C8500)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEBUFFNUMBYGROUPID_OFFSET UNITYSDK_OFFSET(0xC7C86C0)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEBUFFROWSBYGROUPID_OFFSET UNITYSDK_OFFSET(0xC7C8CD0)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEDATA_OFFSET UNITYSDK_OFFSET(0xC7C7190)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEENDLESSAREADATALIST_OFFSET UNITYSDK_OFFSET(0xC7C4D70)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEENDLESSMEGABUFFIDS_OFFSET UNITYSDK_OFFSET(0xC7C5440)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEENTRANCEFLOORID_OFFSET UNITYSDK_OFFSET(0xC7C85A0)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEENTRANCEGROUPID_OFFSET UNITYSDK_OFFSET(0xC7C8600)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEENTRANCEINSTANCEID_OFFSET UNITYSDK_OFFSET(0xC7C8660)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEPICKAVATARMAXCOUNT_OFFSET UNITYSDK_OFFSET(0xC7C7FC0)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEPROPREWARDLEFTCOUNT_OFFSET UNITYSDK_OFFSET(0xC7C81F0)
#define RPG_CLIENT_ROGUEMODULE_GETROGUETALENTDATA_OFFSET UNITYSDK_OFFSET(0xC7C7260)
#define RPG_CLIENT_ROGUEMODULE_GET_AVAILABLEPOINTREWARDLEVELLIST_OFFSET UNITYSDK_OFFSET(0xC7C6F50)
#define RPG_CLIENT_ROGUEMODULE_GET_ENDLESSOVERBONUSREWARDTAKENTIME_OFFSET UNITYSDK_OFFSET(0xC7C6F10)
#define RPG_CLIENT_ROGUEMODULE_GET_ENDLESSPOINTREWARDTAKENLIST_OFFSET UNITYSDK_OFFSET(0xC7C6F30)
#define RPG_CLIENT_ROGUEMODULE_GET_ENDLESSPOINT_OFFSET UNITYSDK_OFFSET(0xC7C6EF0)
#define RPG_CLIENT_ROGUEMODULE_GET_HASAVAILABLEPOINTREWARD_OFFSET UNITYSDK_OFFSET(0xC7C6F70)
#define RPG_CLIENT_ROGUEMODULE_GET_ROGUEENDLESSAREADATAS_OFFSET UNITYSDK_OFFSET(0xC7C6ED0)
#define RPG_CLIENT_ROGUEMODULE_GET_ROGUEENDLESSCONSTVALUE_OFFSET UNITYSDK_OFFSET(0xC7C6FE0)
#define RPG_CLIENT_ROGUEMODULE_HASROGUECHESTREWARDLEFTCOUNT_OFFSET UNITYSDK_OFFSET(0xC7C8270)
#define RPG_CLIENT_ROGUEMODULE_HASROGUEENDLESSINDOING_OFFSET UNITYSDK_OFFSET(0xC7C6CB0)
#define RPG_CLIENT_ROGUEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xC7C9E80)
#define RPG_CLIENT_ROGUEMODULE_ISBUFFACHIVEDBUFF_OFFSET UNITYSDK_OFFSET(0xC7C7E20)
#define RPG_CLIENT_ROGUEMODULE_ISINROGUEENDLESSBATTLE_OFFSET UNITYSDK_OFFSET(0xC7C5270)
#define RPG_CLIENT_ROGUEMODULE_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0xC7C7B50)
#define RPG_CLIENT_ROGUEMODULE_ISROGUEENDLESSAREA_OFFSET UNITYSDK_OFFSET(0xC7C4A50)
#define RPG_CLIENT_ROGUEMODULE_ISROGUEENDLESSOPENING_OFFSET UNITYSDK_OFFSET(0xC7C6AF0)
#define RPG_CLIENT_ROGUEMODULE_ISROGUEENDLESSUNLOCK_OFFSET UNITYSDK_OFFSET(0xC7C6BE0)
#define RPG_CLIENT_ROGUEMODULE_LEAVEROGUE_OFFSET UNITYSDK_OFFSET(0xC7CBD10)
#define RPG_CLIENT_ROGUEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xC7CA1E0)
#define RPG_CLIENT_ROGUEMODULE_QUITCURRENTROGUE_OFFSET UNITYSDK_OFFSET(0xC7CBEF0)
#define RPG_CLIENT_ROGUEMODULE_QUITROGUE_OFFSET UNITYSDK_OFFSET(0xC7CBE40)
#define RPG_CLIENT_ROGUEMODULE_ROGUEENDLESSGETAREADATA_OFFSET UNITYSDK_OFFSET(0xC7C4C90)
#define RPG_CLIENT_ROGUEMODULE_ROGUEENDLESSGETSCORERANK_OFFSET UNITYSDK_OFFSET(0xC7C4EA0)
#define RPG_CLIENT_ROGUEMODULE_SAVEENTERROGUETEAM_OFFSET UNITYSDK_OFFSET(0xC7C9800)
#define RPG_CLIENT_ROGUEMODULE_SENDROGUEENDLESSMODULEINITREQUEST_OFFSET UNITYSDK_OFFSET(0xC7C4AC0)
#define RPG_CLIENT_ROGUEMODULE_SETAUTOSHOWROGUEHANDBOOKPAGE_OFFSET UNITYSDK_OFFSET(0xC7C9DF0)
#define RPG_CLIENT_ROGUEMODULE_SETAUTOSHOWROGUESELECTMAINPAGE_OFFSET UNITYSDK_OFFSET(0xC7C9D90)
#define RPG_CLIENT_ROGUEMODULE_SET_AVAILABLEPOINTREWARDLEVELLIST_OFFSET UNITYSDK_OFFSET(0xC7C6F60)
#define RPG_CLIENT_ROGUEMODULE_SET_ENDLESSOVERBONUSREWARDTAKENTIME_OFFSET UNITYSDK_OFFSET(0xC7C6F20)
#define RPG_CLIENT_ROGUEMODULE_SET_ENDLESSPOINTREWARDTAKENLIST_OFFSET UNITYSDK_OFFSET(0xC7C6F40)
#define RPG_CLIENT_ROGUEMODULE_SET_ENDLESSPOINT_OFFSET UNITYSDK_OFFSET(0xC7C6F00)
#define RPG_CLIENT_ROGUEMODULE_SET_ROGUEENDLESSAREADATAS_OFFSET UNITYSDK_OFFSET(0xC7C6EE0)
#define RPG_CLIENT_ROGUEMODULE_SET_ROGUEENDLESSCONSTVALUE_OFFSET UNITYSDK_OFFSET(0xC7C6FF0)
#define RPG_CLIENT_ROGUEMODULE_SHOULDSHOWMAINPAGE_OFFSET UNITYSDK_OFFSET(0xC7C9BE0)
#define RPG_CLIENT_ROGUEMODULE_SHOWROGUEMAINPAGE_OFFSET UNITYSDK_OFFSET(0xC7C9B70)
#define RPG_CLIENT_ROGUEMODULE_STARTROGUEWITHAEON_OFFSET UNITYSDK_OFFSET(0xC7CBB20)
#define RPG_CLIENT_ROGUEMODULE_STARTROGUE_OFFSET UNITYSDK_OFFSET(0xC7CBA60)
#define RPG_CLIENT_ROGUEMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xC7C8F60)
#define RPG_CLIENT_ROGUEMODULE_TRYGETROGUETEAMBYWORLDINDEX_OFFSET UNITYSDK_OFFSET(0xC7C9900)
#define RPG_CLIENT_ROGUEMODULE_TRYINITROGUETALENTDATA_OFFSET UNITYSDK_OFFSET(0xC7C7A10)
#define RPG_CLIENT_ROGUEMODULE_TRYSHOWBUFFAEONFIRSTTALK_OFFSET UNITYSDK_OFFSET(0xC7CB610)
#define RPG_CLIENT_ROGUEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC7CA270)
#define RPG_CLIENT_ROGUEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC7CBF40)
#define RPG_CLIENT_ROGUEMODULE__ADDROGUEBUFFTAGSRECURSIVE_OFFSET UNITYSDK_OFFSET(0xC7CAEF0)
#define RPG_CLIENT_ROGUEMODULE__CANSHOWROGUEFINISHIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xC7CE1B0)
#define RPG_CLIENT_ROGUEMODULE__CHECKSHOWHANDBOOKPAGE_OFFSET UNITYSDK_OFFSET(0xC7C9790)
#define RPG_CLIENT_ROGUEMODULE__CHECKSHOWROGUEFINISH_OFFSET UNITYSDK_OFFSET(0xC7C90A0)
#define RPG_CLIENT_ROGUEMODULE__CHECKSHOWTRANSFERTOROGUE_OFFSET UNITYSDK_OFFSET(0xC7C9420)
#define RPG_CLIENT_ROGUEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC7C7000)
#define RPG_CLIENT_ROGUEMODULE__ENDLESSTRYSHOWREWARDDISPLAY_OFFSET UNITYSDK_OFFSET(0xC7C5FB0)
#define RPG_CLIENT_ROGUEMODULE__GETAEONBUFFDIALOGUEGROUPID_OFFSET UNITYSDK_OFFSET(0xC7CB680)
#define RPG_CLIENT_ROGUEMODULE__GETPROPEXTRAINFO_OFFSET UNITYSDK_OFFSET(0xC7C8040)
#define RPG_CLIENT_ROGUEMODULE__GETROGUEBUFFTAGS_OFFSET UNITYSDK_OFFSET(0xC7C8860)
#define RPG_CLIENT_ROGUEMODULE__ISINROGUELEAVEMAPENTRANCE_OFFSET UNITYSDK_OFFSET(0xC7CB1D0)
#define RPG_CLIENT_ROGUEMODULE__ISSATISFYTRANSFERSUBMISSIONSTATE_OFFSET UNITYSDK_OFFSET(0xC7CB420)
#define RPG_CLIENT_ROGUEMODULE__NOTIFYROGUEENDLESSREWARD_OFFSET UNITYSDK_OFFSET(0xC7C5AB0)
#define RPG_CLIENT_ROGUEMODULE__ONBATTLERESULTBEFOREPHASE_OFFSET UNITYSDK_OFFSET(0xC7C6A30)
#define RPG_CLIENT_ROGUEMODULE__ONCMDENABLEROGUETALENTSCRSP_OFFSET UNITYSDK_OFFSET(0xC7CFEC0)
#define RPG_CLIENT_ROGUEMODULE__ONCMDENHANCEROGUEBUFFSCRSP_OFFSET UNITYSDK_OFFSET(0xC7CE940)
#define RPG_CLIENT_ROGUEMODULE__ONCMDENTERROGUEMAPROOMSCRSP_OFFSET UNITYSDK_OFFSET(0xC7CDAF0)
#define RPG_CLIENT_ROGUEMODULE__ONCMDENTERROGUESCRSP_OFFSET UNITYSDK_OFFSET(0xC7CD1B0)
#define RPG_CLIENT_ROGUEMODULE__ONCMDFINISHAEONDIALOGUEGROUPSCRSP_OFFSET UNITYSDK_OFFSET(0xC7CFA70)
#define RPG_CLIENT_ROGUEMODULE__ONCMDGETROGUEAEONINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xC7CF660)
#define RPG_CLIENT_ROGUEMODULE__ONCMDGETROGUEBUFFENHANCEINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xC7CE880)
#define RPG_CLIENT_ROGUEMODULE__ONCMDGETROGUEINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xC7CCE10)
#define RPG_CLIENT_ROGUEMODULE__ONCMDGETROGUETALENTINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xC7CFE40)
#define RPG_CLIENT_ROGUEMODULE__ONCMDLEAVEROGUESCRSP_OFFSET UNITYSDK_OFFSET(0xC7CD2E0)
#define RPG_CLIENT_ROGUEMODULE__ONCMDOPENROGUECHESTSCRSP_OFFSET UNITYSDK_OFFSET(0xC7CE3D0)
#define RPG_CLIENT_ROGUEMODULE__ONCMDPICKROGUEAVATARSCRSP_OFFSET UNITYSDK_OFFSET(0xC7CEA40)
#define RPG_CLIENT_ROGUEMODULE__ONCMDQUITROGUESCRSP_OFFSET UNITYSDK_OFFSET(0xC7CD550)
#define RPG_CLIENT_ROGUEMODULE__ONCMDREVIVEROGUEAVATARSCRSP_OFFSET UNITYSDK_OFFSET(0xC7CF340)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSTARTROGUESCRSP_OFFSET UNITYSDK_OFFSET(0xC7CCFF0)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEAEONSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xC7CE7E0)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEAREAUNLOCKSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xC7CD640)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEEXPLOREWINSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xC7CDF80)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEFINISHSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xC7CE020)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEGETITEMSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xC7CE680)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEMAPROOMSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xC7CDDD0)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEREVIVEINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xC7CF570)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUESEASONFINISHSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xC7CE210)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUESTATUSSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xC7CD7D0)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEVIRTUALITEMINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xC7CCE80)
#define RPG_CLIENT_ROGUEMODULE__ONGETNEWAVATARINROGUE_OFFSET UNITYSDK_OFFSET(0xC7CA8D0)
#define RPG_CLIENT_ROGUEMODULE__ONGETROGUEENDLESSACTIVITYDATASCRSP_OFFSET UNITYSDK_OFFSET(0xC7C63C0)
#define RPG_CLIENT_ROGUEMODULE__ONPLAYSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0xC7CA450)
#define RPG_CLIENT_ROGUEMODULE__ONROGUEENDLESSACTIVITYBATTLEENDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xC7C68C0)
#define RPG_CLIENT_ROGUEMODULE__ONTAKEROGUEENDLESSACTIVITYALLBONUSREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0xC7C6830)
#define RPG_CLIENT_ROGUEMODULE__ONTAKEROGUEENDLESSACTIVITYPOINTREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0xC7C67A0)
#define RPG_CLIENT_ROGUEMODULE__ONUPDATEPROPEXTRAINFO_OFFSET UNITYSDK_OFFSET(0xC7CA5A0)
#define RPG_CLIENT_ROGUEMODULE__PREPARETRANSFERSUBMISSIONSTATE_OFFSET UNITYSDK_OFFSET(0xC7CB4D0)
#define RPG_CLIENT_ROGUEMODULE__REFRESHAVAILABLELEVELREWARD_OFFSET UNITYSDK_OFFSET(0xC7C5C80)
#define RPG_CLIENT_ROGUEMODULE__REFRESHROGUEDATA_OFFSET UNITYSDK_OFFSET(0xC7CAA20)
#define RPG_CLIENT_ROGUEMODULE__REFRESHROGUEENDLESSDATA_OFFSET UNITYSDK_OFFSET(0xC7C5840)
#define RPG_CLIENT_ROGUEMODULE__REFRESHROGUEVIRTUALITEMS_OFFSET UNITYSDK_OFFSET(0xC7CAB00)
#define RPG_CLIENT_ROGUEMODULE__ROGUEENDLESSADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC7C6960)
#define RPG_CLIENT_ROGUEMODULE__ROGUEENDLESSADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC7C6100)
#define RPG_CLIENT_ROGUEMODULE__ROGUEENDLESSDISPOSE_OFFSET UNITYSDK_OFFSET(0xC7C5790)
#define RPG_CLIENT_ROGUEMODULE__ROGUEENDLESSINIT_OFFSET UNITYSDK_OFFSET(0xC7C5680)
#define RPG_CLIENT_ROGUEMODULE__ROGUEENDLESSUNINIT_OFFSET UNITYSDK_OFFSET(0xC7C56E0)
#define RPG_CLIENT_ROGUEMODULE__SETENTERROGUEMAPLOADINGTYPE_OFFSET UNITYSDK_OFFSET(0xC7CADF0)
#define RPG_CLIENT_ROGUEMODULE__SETEXITROGUEMAPLOADINGTYPE_OFFSET UNITYSDK_OFFSET(0xC7CAE70)
#define RPG_CLIENT_ROGUEMODULE__SHOWBUFFAEONFIRSTTALK_OFFSET UNITYSDK_OFFSET(0xC7CB7F0)
#define RPG_CLIENT_ROGUEMODULE__SYNCSCOREREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xC7C6700)
#define RPG_CLIENT_ROGUEMODULE__TRYAUTOSHOWROGUEENDLESSLEAVE_OFFSET UNITYSDK_OFFSET(0xC7C59D0)
#define RPG_CLIENT_ROGUEMODULE__TRYAUTOSHOWROGUELEAVE_OFFSET UNITYSDK_OFFSET(0xC7C9040)
#define RPG_CLIENT_ROGUEMODULE__TRYSETCACHEROGUEFINISHINFO_OFFSET UNITYSDK_OFFSET(0xC7CB020)
#define RPG_CLIENT_ROGUEMODULE__TRYSHOWAREANAMEAFTERTELEPOT_OFFSET UNITYSDK_OFFSET(0xC7CA4F0)
#define RPG_CLIENT_ROGUEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC7D0020)
#define RPG_CLIENT_ROGUEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xC7CFFA0)
#define RPG_CLIENT_ROGUEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xC7D0030)
#define RPG_CLIENT_ROGUEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC7D0090)
#define RPG_CLIENT_ROGUEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC7D00F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueModule_TypeDefinitionIndex = 63085;

	class RogueModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* _RogueBuffGroupID2Tags; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::AddNewAvatarInfo*>* _CacheRogueGetNewAvatarInfo; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _AvailablePointRewardLevelList_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _RogueEndlessMegaBuffIDs; // 0x28
		::RPG::Client::RogueEndlessConstValue* _RogueEndlessConstValue_k__BackingField; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueEndlessAreaData*>* _RogueEndlessAreaDatas_k__BackingField; // 0x38
		::RPG::Client::RogueData* _RogueData; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* _EndlessPointRewardTakenList_k__BackingField; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueAeonData*>* _RogueAeonDataDic; // 0x50
		::System::Collections::Generic::List_1<::System::UInt32>* _RogueEndlessScoreRank; // 0x58
		::RPG::Client::Promises::Promise* _LeaveRoguePromise; // 0x60
		::RPG::Client::RogueTalentData* _RogueTalentData; // 0x68
		::RPG::Client::Promises::Promise* _QuitRoguePromise; // 0x70
		::RPG::Client::RogueFinishInfo* _CacheRogueFinishInfo; // 0x78
		::RPG::Client::RogueEndlessProgressInfo* EndlessProgressInfo; // 0x80
		::System::UInt32 _AutoShowRogueAreaID; // 0x88
		::System::Boolean _IsWaitingAutoShowRogueHandbookPage; // 0x8C
		::System::Boolean HasAvailableOverBonusReward; // 0x8D
		::System::Boolean _NeedCheckRogueFinish; // 0x8E
		::System::Boolean _NeedCheckRogueLeave; // 0x8F
		::System::Boolean _IsWaitingAutoShowRogueSelectMainPage; // 0x90
		::System::Boolean _NeedShowAreaNameAfterTelepot; // 0x91
		::System::UInt32 _EndlessOverBonusRewardTakenTime_k__BackingField; // 0x94
		::System::UInt32 _EndlessPoint_k__BackingField; // 0x98
		::System::UInt32 _RogueLeaveMapEntranceID; // 0x9C
		::System::UInt32 _RogueEntranceInstanceID; // 0xA0
		::System::UInt32 _RogueEntranceFloorID; // 0xA4
		::System::UInt32 _RogueEntranceGroupID; // 0xA8
		::System::UInt32 _LastLeaveAreaID; // 0xAC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__CTOR_OFFSET))(this);
		}

		::System::Boolean IsRogueEndlessArea(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_ISROGUEENDLESSAREA_OFFSET))(this, a1);
		}

		::System::Void SendRogueEndlessModuleInitRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_SENDROGUEENDLESSMODULEINITREQUEST_OFFSET))(this);
		}

		::RPG::Client::RogueEndlessAreaData* RogueEndlessGetAreaData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueEndlessAreaData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_ROGUEENDLESSGETAREADATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueEndlessAreaData*>* GetRogueEndlessAreaDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueEndlessAreaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETROGUEENDLESSAREADATALIST_OFFSET))(this);
		}

		::System::Int32 RogueEndlessGetScoreRank(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_ROGUEENDLESSGETSCORERANK_OFFSET))(this, a1);
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

		::System::Void _RefreshRogueEndlessData(::Class_1_BDE0598EF34BE45E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BDE0598EF34BE45E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__REFRESHROGUEENDLESSDATA_OFFSET))(this, a1);
		}

		::System::Void _TryAutoShowRogueEndlessLeave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__TRYAUTOSHOWROGUEENDLESSLEAVE_OFFSET))(this);
		}

		::System::Void _NotifyRogueEndlessReward(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__NOTIFYROGUEENDLESSREWARD_OFFSET))(this, a1);
		}

		::System::Void _RefreshAvailableLevelReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__REFRESHAVAILABLELEVELREWARD_OFFSET))(this);
		}

		::System::Boolean _EndlessTryShowRewardDisplay(::Class_1_0CF86E4F213706E6* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_0CF86E4F213706E6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ENDLESSTRYSHOWREWARDDISPLAY_OFFSET))(this, a1);
		}

		::System::Void _RogueEndlessAddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ROGUEENDLESSADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetRogueEndlessActivityDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONGETROGUEENDLESSACTIVITYDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTakeRogueEndlessActivityPointRewardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONTAKEROGUEENDLESSACTIVITYPOINTREWARDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTakeRogueEndlessActivityAllBonusRewardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONTAKEROGUEENDLESSACTIVITYALLBONUSREWARDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _SyncScoreRewardTaken(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__SYNCSCOREREWARDTAKEN_OFFSET))(this, a1, a2);
		}

		::System::Void _OnRogueEndlessActivityBattleEndScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONROGUEENDLESSACTIVITYBATTLEENDSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _RogueEndlessAddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ROGUEENDLESSADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnBattleResultBeforePhase(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONBATTLERESULTBEFOREPHASE_OFFSET))(this, a1);
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

		::System::Void set_RogueEndlessAreaDatas(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueEndlessAreaData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueEndlessAreaData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_SET_ROGUEENDLESSAREADATAS_OFFSET))(this, a1);
		}

		::System::UInt32 get_EndlessPoint()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GET_ENDLESSPOINT_OFFSET))(this);
		}

		::System::Void set_EndlessPoint(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_SET_ENDLESSPOINT_OFFSET))(this, a1);
		}

		::System::UInt32 get_EndlessOverBonusRewardTakenTime()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GET_ENDLESSOVERBONUSREWARDTAKENTIME_OFFSET))(this);
		}

		::System::Void set_EndlessOverBonusRewardTakenTime(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_SET_ENDLESSOVERBONUSREWARDTAKENTIME_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_EndlessPointRewardTakenList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GET_ENDLESSPOINTREWARDTAKENLIST_OFFSET))(this);
		}

		::System::Void set_EndlessPointRewardTakenList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_SET_ENDLESSPOINTREWARDTAKENLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AvailablePointRewardLevelList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GET_AVAILABLEPOINTREWARDLEVELLIST_OFFSET))(this);
		}

		::System::Void set_AvailablePointRewardLevelList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_SET_AVAILABLEPOINTREWARDLEVELLIST_OFFSET))(this, a1);
		}

		::System::Boolean get_HasAvailablePointReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GET_HASAVAILABLEPOINTREWARD_OFFSET))(this);
		}

		::RPG::Client::RogueEndlessConstValue* get_RogueEndlessConstValue()
		{
			return ((::RPG::Client::RogueEndlessConstValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GET_ROGUEENDLESSCONSTVALUE_OFFSET))(this);
		}

		::System::Void set_RogueEndlessConstValue(::RPG::Client::RogueEndlessConstValue* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueEndlessConstValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_SET_ROGUEENDLESSCONSTVALUE_OFFSET))(this, a1);
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

		::RPG::Client::RogueAeonData* GetRogueAeonData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueAeonData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETROGUEAEONDATA_OFFSET))(this, a1);
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

		::System::Boolean GetAreaLockStatus(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETAREALOCKSTATUS_OFFSET))(this, a1);
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

		::System::Boolean IsBuffAchivedBuff(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_ISBUFFACHIVEDBUFF_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetRoguePickAvatarMaxCount(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETROGUEPICKAVATARMAXCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 GetRoguePropRewardLeftCount(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETROGUEPROPREWARDLEFTCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean HasRogueChestRewardLeftCount()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_HASROGUECHESTREWARDLEFTCOUNT_OFFSET))(this);
		}

		::RPG::Client::RogueBuffEnhanceItem* GetRogueBuffEnhanceItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueBuffEnhanceItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETROGUEBUFFENHANCEITEM_OFFSET))(this, a1);
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

		::System::UInt32 GetRogueBuffNumByGroupID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETROGUEBUFFNUMBYGROUPID_OFFSET))(this, a1);
		}

		::System::UInt32 GetRogueBuffCanUpNumByGroupID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETROGUEBUFFCANUPNUMBYGROUPID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::RogueBuffRow*>* GetRogueBuffRowsByGroupID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::RogueBuffRow*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETROGUEBUFFROWSBYGROUPID_OFFSET))(this, a1);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void SaveEnterRogueTeam(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_SAVEENTERROGUETEAM_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* TryGetRogueTeamByWorldIndex(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_TRYGETROGUETEAMBYWORLDINDEX_OFFSET))(this, a1);
		}

		::System::Void ShowRogueMainPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_SHOWROGUEMAINPAGE_OFFSET))(this);
		}

		::System::Boolean ShouldShowMainPage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_SHOULDSHOWMAINPAGE_OFFSET))(this);
		}

		::System::Void SetAutoShowRogueSelectMainPage(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_SETAUTOSHOWROGUESELECTMAINPAGE_OFFSET))(this, a1);
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

		::System::Void _OnPlayScreenTransfer(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONPLAYSCREENTRANSFER_OFFSET))(this, a1);
		}

		::System::Void _OnUpdatePropExtraInfo(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONUPDATEPROPEXTRAINFO_OFFSET))(this, a1);
		}

		::System::Void _OnGetNewAvatarInRogue(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONGETNEWAVATARINROGUE_OFFSET))(this, a1);
		}

		::System::Void _RefreshRogueData(::Class_1_BDE0598EF34BE45E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BDE0598EF34BE45E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__REFRESHROGUEDATA_OFFSET))(this, a1);
		}

		::System::Void _RefreshRogueVirtualItems(::Class_1_BDE0598EF34BE45E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BDE0598EF34BE45E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__REFRESHROGUEVIRTUALITEMS_OFFSET))(this, a1);
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

		::Class_1_FAB24B2D24758D65* _GetPropExtraInfo(::System::UInt32 a1)
		{
			return ((::Class_1_FAB24B2D24758D65*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__GETPROPEXTRAINFO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* _GetRogueBuffTags(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__GETROGUEBUFFTAGS_OFFSET))(this, a1);
		}

		::System::Void _AddRogueBuffTagsRecursive(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ADDROGUEBUFFTAGSRECURSIVE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _TryAutoShowRogueLeave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__TRYAUTOSHOWROGUELEAVE_OFFSET))(this);
		}

		::System::Void _CheckShowRogueFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__CHECKSHOWROGUEFINISH_OFFSET))(this);
		}

		::System::Void _TrySetCacheRogueFinishInfo(::Class_1_FB0633E85BD6CF8E_10* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FB0633E85BD6CF8E_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__TRYSETCACHEROGUEFINISHINFO_OFFSET))(this, a1);
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

		::System::Void TryShowBuffAeonFirstTalk(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_TRYSHOWBUFFAEONFIRSTTALK_OFFSET))(this, a1);
		}

		::System::UInt32 _GetAeonBuffDialogueGroupID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__GETAEONBUFFDIALOGUEGROUPID_OFFSET))(this, a1);
		}

		::System::Void _ShowBuffAeonFirstTalk(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__SHOWBUFFAEONFIRSTTALK_OFFSET))(this, a1);
		}

		::System::Void StartRogue(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_STARTROGUE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void StartRogueWithAeon(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_STARTROGUEWITHAEON_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EnterRogue(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_ENTERROGUE_OFFSET))(this, a1);
		}

		::System::Void EnterRogueMapRoom(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_ENTERROGUEMAPROOM_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::Promise* LeaveRogue()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_LEAVEROGUE_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* QuitRogue(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_QUITROGUE_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::Promise* QuitCurrentRogue()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_QUITCURRENTROGUE_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdGetRogueInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDGETROGUEINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdSyncRogueVirtualItemInfoScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEVIRTUALITEMINFOSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdStartRogueScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDSTARTROGUESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdEnterRogueScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDENTERROGUESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdLeaveRogueScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDLEAVEROGUESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdQuitRogueScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDQUITROGUESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdSyncRogueAreaUnlockScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEAREAUNLOCKSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdSyncRogueStatusScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUESTATUSSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdEnterRogueMapRoomScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDENTERROGUEMAPROOMSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdSyncRogueMapRoomScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEMAPROOMSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdSyncRogueExploreWinScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEEXPLOREWINSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdSyncRogueFinishScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEFINISHSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Boolean _CanShowRogueFinishImmediately(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__CANSHOWROGUEFINISHIMMEDIATELY_OFFSET))(this, a1);
		}

		::System::Void _OnCmdSyncRogueSeasonFinishScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUESEASONFINISHSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdOpenRogueChestScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDOPENROGUECHESTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdSyncRogueGetItemScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEGETITEMSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdSyncRogueAeonScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEAEONSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdGetRogueBuffEnhanceInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDGETROGUEBUFFENHANCEINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdEnhanceRogueBuffScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDENHANCEROGUEBUFFSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdPickRogueAvatarScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDPICKROGUEAVATARSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdReviveRogueAvatarScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDREVIVEROGUEAVATARSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdSyncRogueReviveInfoScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEREVIVEINFOSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdGetRogueAeonInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDGETROGUEAEONINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdFinishAeonDialogueGroupScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDFINISHAEONDIALOGUEGROUPSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdGetRogueTalentInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDGETROGUETALENTINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdEnableRogueTalentScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDENABLEROGUETALENTSCRSP_OFFSET))(this, a1, a2);
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
