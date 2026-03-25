#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimEnterType.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimExitType.h"
#include "unitysdk/RPG/Client/MissionWaypointInfo.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MainMissionSubType.h"
#include "unitysdk/RPG/GameCore/MainMissionType.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/System/Object.h"

class Class_1_09B5AE4A49F8C191;
class Class_1_32C09B38B00D2F10;
class Class_3_1A92845FAFA5EC77;
namespace RPG::Client { class ISubMissionGroupData; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::GameCore { class AssistWayPoint; }
namespace RPG::GameCore { class AssistWayPointCondition; }
namespace RPG::GameCore { class AssistWayPointConditionMain; }
namespace RPG::GameCore { class AssistWayPointConditionPack; }
namespace RPG::GameCore { class AssistWayPointDistanceCondition; }
namespace RPG::GameCore { class AssistWayPointFCVCondition; }
namespace RPG::GameCore { class AssistWayPointFastComplete; }
namespace RPG::GameCore { class AssistWayPointGroupPropertyCondition; }
namespace RPG::GameCore { class AssistWayPointPropEraFlipShowCondition; }
namespace RPG::GameCore { class AssistWayPointPropStateCondition; }
namespace RPG::GameCore { class AssistWayPointRegionEraFlipStateCondition; }
namespace RPG::GameCore { class AssistWayPointTimelineStateCondition; }
namespace RPG::GameCore { class MainMissionRow; }
namespace RPG::GameCore { class MainMissionTypeConfigRow; }
namespace RPG::GameCore { class MissionChapterConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define RPG_CLIENT_MAINMISSIONDATA_ADDSUBMISSION_OFFSET UNITYSDK_OFFSET(0x9ABAE70)
#define RPG_CLIENT_MAINMISSIONDATA_CHECKISACTIVEFASTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x9AB3450)
#define RPG_CLIENT_MAINMISSIONDATA_DELETESUBMISSION_OFFSET UNITYSDK_OFFSET(0x9ABB5F0)
#define RPG_CLIENT_MAINMISSIONDATA_GETACTIVITYENDDATETIME_OFFSET UNITYSDK_OFFSET(0x9ABBFD0)
#define RPG_CLIENT_MAINMISSIONDATA_GETASSISTWAYPOINTINFO_OFFSET UNITYSDK_OFFSET(0x9ABC850)
#define RPG_CLIENT_MAINMISSIONDATA_GETFIRSTSTARTANDSHOWINMAPSUBMISSIONWITHRELATION_OFFSET UNITYSDK_OFFSET(0x9ABD550)
#define RPG_CLIENT_MAINMISSIONDATA_GETFIRSTSTARTANDSHOWINMAPSUBMISSION_OFFSET UNITYSDK_OFFSET(0x9ABD3C0)
#define RPG_CLIENT_MAINMISSIONDATA_GETFIRSTSTARTANDSHOWSUBMISSION_OFFSET UNITYSDK_OFFSET(0x9ABD220)
#define RPG_CLIENT_MAINMISSIONDATA_GETSCHEDULEENDDATETIME_OFFSET UNITYSDK_OFFSET(0x9ABC360)
#define RPG_CLIENT_MAINMISSIONDATA_GETSUBMISSIONGROUPS_OFFSET UNITYSDK_OFFSET(0x9ABB390)
#define RPG_CLIENT_MAINMISSIONDATA_GET_ASSISTACTIVE_OFFSET UNITYSDK_OFFSET(0x9AB9430)
#define RPG_CLIENT_MAINMISSIONDATA_GET_CHAPTERDISPLAYPRIORITY_OFFSET UNITYSDK_OFFSET(0x9ABD940)
#define RPG_CLIENT_MAINMISSIONDATA_GET_CHAPTERID_OFFSET UNITYSDK_OFFSET(0x9ABD990)
#define RPG_CLIENT_MAINMISSIONDATA_GET_CHAPTERROW_OFFSET UNITYSDK_OFFSET(0x9ABDBB0)
#define RPG_CLIENT_MAINMISSIONDATA_GET_CHAPTERTYPECOLOR_OFFSET UNITYSDK_OFFSET(0x9ABD900)
#define RPG_CLIENT_MAINMISSIONDATA_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x9ABEA10)
#define RPG_CLIENT_MAINMISSIONDATA_GET_CURASSISTWAYPOINT_OFFSET UNITYSDK_OFFSET(0x9ABE950)
#define RPG_CLIENT_MAINMISSIONDATA_GET_DISPLAYPRIORITY_OFFSET UNITYSDK_OFFSET(0x9ABE9A0)
#define RPG_CLIENT_MAINMISSIONDATA_GET_ISCONFIGSHOW_OFFSET UNITYSDK_OFFSET(0x9ABE9C0)
#define RPG_CLIENT_MAINMISSIONDATA_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x9ABDBC0)
#define RPG_CLIENT_MAINMISSIONDATA_GET_ISFLOORCONNECTED_OFFSET UNITYSDK_OFFSET(0x9ABE730)
#define RPG_CLIENT_MAINMISSIONDATA_GET_ISHAVEFINISHEDSUBMISSION_OFFSET UNITYSDK_OFFSET(0x9ABE830)
#define RPG_CLIENT_MAINMISSIONDATA_GET_ISMUTENAV_OFFSET UNITYSDK_OFFSET(0x9ABDF30)
#define RPG_CLIENT_MAINMISSIONDATA_GET_ISSHOWINMAP_OFFSET UNITYSDK_OFFSET(0x9ABDDD0)
#define RPG_CLIENT_MAINMISSIONDATA_GET_ISSHOWREDDOT_OFFSET UNITYSDK_OFFSET(0x9ABDEC0)
#define RPG_CLIENT_MAINMISSIONDATA_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x9ABDCE0)
#define RPG_CLIENT_MAINMISSIONDATA_GET_ISSTART_OFFSET UNITYSDK_OFFSET(0x9ABE0D0)
#define RPG_CLIENT_MAINMISSIONDATA_GET_ISTAKENANDNOTSTARTED_OFFSET UNITYSDK_OFFSET(0x9ABE020)
#define RPG_CLIENT_MAINMISSIONDATA_GET_MAINMISSIONTYPE_OFFSET UNITYSDK_OFFSET(0x9ABE980)
#define RPG_CLIENT_MAINMISSIONDATA_GET_MISSIONTYPECOLOR_OFFSET UNITYSDK_OFFSET(0x9ABD8E0)
#define RPG_CLIENT_MAINMISSIONDATA_GET_MISSIONTYPEICONMINI_OFFSET UNITYSDK_OFFSET(0x9ABD920)
#define RPG_CLIENT_MAINMISSIONDATA_GET_MISSIONTYPENAME_OFFSET UNITYSDK_OFFSET(0x9ABD890)
#define RPG_CLIENT_MAINMISSIONDATA_GET_MISSIONTYPEPRIORITY_OFFSET UNITYSDK_OFFSET(0x9ABD8C0)
#define RPG_CLIENT_MAINMISSIONDATA_GET_NAMESTR_OFFSET UNITYSDK_OFFSET(0x9ABD800)
#define RPG_CLIENT_MAINMISSIONDATA_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x9ABD9D0)
#define RPG_CLIENT_MAINMISSIONDATA_GET_SUBMISSIONS_OFFSET UNITYSDK_OFFSET(0x9ABBF80)
#define RPG_CLIENT_MAINMISSIONDATA_GET_SUBTYPE_OFFSET UNITYSDK_OFFSET(0x9ABE960)
#define RPG_CLIENT_MAINMISSIONDATA_GET_TARGETLOCATION_OFFSET UNITYSDK_OFFSET(0x9ABE320)
#define RPG_CLIENT_MAINMISSIONDATA_GET_TRACKICONPATH_OFFSET UNITYSDK_OFFSET(0x9ABE450)
#define RPG_CLIENT_MAINMISSIONDATA_GET_TYPEICONPATH_OFFSET UNITYSDK_OFFSET(0x9ABE8C0)
#define RPG_CLIENT_MAINMISSIONDATA_GET_WORLDID_OFFSET UNITYSDK_OFFSET(0x9ABD9B0)
#define RPG_CLIENT_MAINMISSIONDATA_HASFASTCOMPLETECONFIG_OFFSET UNITYSDK_OFFSET(0x9AB32B0)
#define RPG_CLIENT_MAINMISSIONDATA_INITMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x9ABA8A0)
#define RPG_CLIENT_MAINMISSIONDATA_ISFINISHINVERSE_OFFSET UNITYSDK_OFFSET(0x9ABDBE0)
#define RPG_CLIENT_MAINMISSIONDATA_ISINEXPECTEDENTRANCE_OFFSET UNITYSDK_OFFSET(0x9ABC680)
#define RPG_CLIENT_MAINMISSIONDATA_ISINTARGETFLOOR_OFFSET UNITYSDK_OFFSET(0x9ABC710)
#define RPG_CLIENT_MAINMISSIONDATA_ISROGUEMISSION_OFFSET UNITYSDK_OFFSET(0x9ABBD50)
#define RPG_CLIENT_MAINMISSIONDATA_ISSTARTINVERSE_OFFSET UNITYSDK_OFFSET(0x9ABE160)
#define RPG_CLIENT_MAINMISSIONDATA_ONCHANGETRACKMISSION_OFFSET UNITYSDK_OFFSET(0x9AB2160)
#define RPG_CLIENT_MAINMISSIONDATA_ONCURRENTREGIONUPDATED_OFFSET UNITYSDK_OFFSET(0x9AB21F0)
#define RPG_CLIENT_MAINMISSIONDATA_ONENTERADVENTUREPHASE_OFFSET UNITYSDK_OFFSET(0x9AB1850)
#define RPG_CLIENT_MAINMISSIONDATA_ONERAFLIPEXITCONTROL_OFFSET UNITYSDK_OFFSET(0x9AB2780)
#define RPG_CLIENT_MAINMISSIONDATA_ONFCVCHANGE_OFFSET UNITYSDK_OFFSET(0x9AB2400)
#define RPG_CLIENT_MAINMISSIONDATA_ONFINISHSUBMISSION_OFFSET UNITYSDK_OFFSET(0x9AB2290)
#define RPG_CLIENT_MAINMISSIONDATA_ONFIVEDIMLEAVEGAME_OFFSET UNITYSDK_OFFSET(0x9AB3210)
#define RPG_CLIENT_MAINMISSIONDATA_ONFIVEDIMTELEPORTTOGAME_OFFSET UNITYSDK_OFFSET(0x9AB3160)
#define RPG_CLIENT_MAINMISSIONDATA_ONHIDEWHENINRANGEMINLEGACY_OFFSET UNITYSDK_OFFSET(0x9AB0B00)
#define RPG_CLIENT_MAINMISSIONDATA_ONHIDEWHENINRANGEMIN_OFFSET UNITYSDK_OFFSET(0x9AB0930)
#define RPG_CLIENT_MAINMISSIONDATA_ONHOYOGROUPACTIVECHANGE_OFFSET UNITYSDK_OFFSET(0x9AB2B00)
#define RPG_CLIENT_MAINMISSIONDATA_ONMAPCREATED_OFFSET UNITYSDK_OFFSET(0x9AB1530)
#define RPG_CLIENT_MAINMISSIONDATA_ONMAPPOSESWITCHENDLEGACY_OFFSET UNITYSDK_OFFSET(0x9AB1280)
#define RPG_CLIENT_MAINMISSIONDATA_ONMAPPOSESWITCHEND_OFFSET UNITYSDK_OFFSET(0x9AB10C0)
#define RPG_CLIENT_MAINMISSIONDATA_ONOUTOFRANGEMIN_OFFSET UNITYSDK_OFFSET(0x9AB0CD0)
#define RPG_CLIENT_MAINMISSIONDATA_ONPROPSTATECHANGELEGACY_OFFSET UNITYSDK_OFFSET(0x9AB0F80)
#define RPG_CLIENT_MAINMISSIONDATA_ONPROPSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x9AB0DA0)
#define RPG_CLIENT_MAINMISSIONDATA_ONPROPTIMELINESTATECHANGE_OFFSET UNITYSDK_OFFSET(0x9AB2940)
#define RPG_CLIENT_MAINMISSIONDATA_ONREGIONERASTATECHANGE_OFFSET UNITYSDK_OFFSET(0x9AB25C0)
#define RPG_CLIENT_MAINMISSIONDATA_ONTAKENMAINMISSION_OFFSET UNITYSDK_OFFSET(0x9AB2330)
#define RPG_CLIENT_MAINMISSIONDATA_SETCURFASTCOMPLETEFINISH_OFFSET UNITYSDK_OFFSET(0x9AB37E0)
#define RPG_CLIENT_MAINMISSIONDATA_SET_DISPLAYPRIORITY_OFFSET UNITYSDK_OFFSET(0x9ABE9B0)
#define RPG_CLIENT_MAINMISSIONDATA_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x9ABDBD0)
#define RPG_CLIENT_MAINMISSIONDATA_SET_MAINMISSIONTYPE_OFFSET UNITYSDK_OFFSET(0x9ABE990)
#define RPG_CLIENT_MAINMISSIONDATA_TRYGETFASTCOMPLETEANCHOR_OFFSET UNITYSDK_OFFSET(0x9AB3720)
#define RPG_CLIENT_MAINMISSIONDATA__BACKTRACE_OFFSET UNITYSDK_OFFSET(0x9AB5940)
#define RPG_CLIENT_MAINMISSIONDATA__CALLSTEPINENDOFFRAME_OFFSET UNITYSDK_OFFSET(0x9AB0BD0)
#define RPG_CLIENT_MAINMISSIONDATA__CHECKDATAINIT_OFFSET UNITYSDK_OFFSET(0x9ABD750)
#define RPG_CLIENT_MAINMISSIONDATA__CHECKFORWARDCONDITION_OFFSET UNITYSDK_OFFSET(0x9AB6310)
#define RPG_CLIENT_MAINMISSIONDATA__CLEARFASTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x9AB6F50)
#define RPG_CLIENT_MAINMISSIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9ABA4E0)
#define RPG_CLIENT_MAINMISSIONDATA__DISPLAY_OFFSET UNITYSDK_OFFSET(0x9AB5B90)
#define RPG_CLIENT_MAINMISSIONDATA__DOESBACKTRACECONDITIONMEET_OFFSET UNITYSDK_OFFSET(0x9AB62B0)
#define RPG_CLIENT_MAINMISSIONDATA__DOESCONDITIONMEET_1_OFFSET UNITYSDK_OFFSET(0x9AB71A0)
#define RPG_CLIENT_MAINMISSIONDATA__DOESCONDITIONMEET_2_OFFSET UNITYSDK_OFFSET(0x9AB7390)
#define RPG_CLIENT_MAINMISSIONDATA__DOESCONDITIONMEET_OFFSET UNITYSDK_OFFSET(0x9AB67F0)
#define RPG_CLIENT_MAINMISSIONDATA__DOESDISTANCECONDITIONMEET_OFFSET UNITYSDK_OFFSET(0x9AB6420)
#define RPG_CLIENT_MAINMISSIONDATA__DOESFCVCONDITIONMEET_OFFSET UNITYSDK_OFFSET(0x9AB8010)
#define RPG_CLIENT_MAINMISSIONDATA__DOESPOSECONDITIONMEET_OFFSET UNITYSDK_OFFSET(0x9AB64D0)
#define RPG_CLIENT_MAINMISSIONDATA__DOESPROPSTATECONDITIONMEET_OFFSET UNITYSDK_OFFSET(0x9AB7D10)
#define RPG_CLIENT_MAINMISSIONDATA__DOSEERAREGIONERAFLIPSTATECONDITIONMEET_OFFSET UNITYSDK_OFFSET(0x9AB8460)
#define RPG_CLIENT_MAINMISSIONDATA__DOSEGROUPPROPERTYCONDITIONMEET_OFFSET UNITYSDK_OFFSET(0x9AB8D60)
#define RPG_CLIENT_MAINMISSIONDATA__DOSEPROPERAFLIPSHOWCONDITIONMEET_OFFSET UNITYSDK_OFFSET(0x9AB8670)
#define RPG_CLIENT_MAINMISSIONDATA__DOSEPROPTIMELINESTATECONDITIONMEET_OFFSET UNITYSDK_OFFSET(0x9AB89C0)
#define RPG_CLIENT_MAINMISSIONDATA__EPILOGUE_OFFSET UNITYSDK_OFFSET(0x9AB5B30)
#define RPG_CLIENT_MAINMISSIONDATA__FORWARD_OFFSET UNITYSDK_OFFSET(0x9AB58A0)
#define RPG_CLIENT_MAINMISSIONDATA__GETASSISTWAYPOINTINDEX_OFFSET UNITYSDK_OFFSET(0x9AB54D0)
#define RPG_CLIENT_MAINMISSIONDATA__GETCURFIVEDIMSERVICES_OFFSET UNITYSDK_OFFSET(0x9AB39A0)
#define RPG_CLIENT_MAINMISSIONDATA__GETFASTCOMPLETECONFIG_OFFSET UNITYSDK_OFFSET(0x9AB3300)
#define RPG_CLIENT_MAINMISSIONDATA__GETFASTCOMPLETETRIGGERTIME_OFFSET UNITYSDK_OFFSET(0x9AB3D60)
#define RPG_CLIENT_MAINMISSIONDATA__HIDECURDISPLAYASSISTWAYPOINT_OFFSET UNITYSDK_OFFSET(0x9AB5090)
#define RPG_CLIENT_MAINMISSIONDATA__IFMAPROTATIONPOSECONDITIONFAILLEGACY_OFFSET UNITYSDK_OFFSET(0x9AB9440)
#define RPG_CLIENT_MAINMISSIONDATA__IFPROPSTATEBACKTRACELEGACY_OFFSET UNITYSDK_OFFSET(0x9AB9D80)
#define RPG_CLIENT_MAINMISSIONDATA__IFPROPSTATECONDITIONFAILLEGACY_OFFSET UNITYSDK_OFFSET(0x9AB9750)
#define RPG_CLIENT_MAINMISSIONDATA__IFPROPSTATECONDITIONMEETFORNOTIFYLEGACY_OFFSET UNITYSDK_OFFSET(0x9ABA1E0)
#define RPG_CLIENT_MAINMISSIONDATA__IFUSEASSISTWAYPOINT_OFFSET UNITYSDK_OFFSET(0x9AB3E70)
#define RPG_CLIENT_MAINMISSIONDATA__INITASSISTWAYPOINT_OFFSET UNITYSDK_OFFSET(0x9AB9140)
#define RPG_CLIENT_MAINMISSIONDATA__INITLISTENGROUPPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9AB4A10)
#define RPG_CLIENT_MAINMISSIONDATA__INIT_OFFSET UNITYSDK_OFFSET(0x9AB19E0)
#define RPG_CLIENT_MAINMISSIONDATA__ISACTIVEFASTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x9AB34C0)
#define RPG_CLIENT_MAINMISSIONDATA__ISALREADYINRANGEMINLEGACY_OFFSET UNITYSDK_OFFSET(0x9ABA140)
#define RPG_CLIENT_MAINMISSIONDATA__ISASSISTDATAPREPARED_OFFSET UNITYSDK_OFFSET(0x9AB1EA0)
#define RPG_CLIENT_MAINMISSIONDATA__ISFASTCOMPLETEDATACHANGE_OFFSET UNITYSDK_OFFSET(0x9AB6FD0)
#define RPG_CLIENT_MAINMISSIONDATA__NEEDSHOWASSISTWAYPOINT_OFFSET UNITYSDK_OFFSET(0x9AB69E0)
#define RPG_CLIENT_MAINMISSIONDATA__NOTIFYASSISTWAYPOINTLEGACY_OFFSET UNITYSDK_OFFSET(0x9AB9A90)
#define RPG_CLIENT_MAINMISSIONDATA__ONDISPLAYASSISTWAYPOINTCHANGE_OFFSET UNITYSDK_OFFSET(0x9AB5100)
#define RPG_CLIENT_MAINMISSIONDATA__ONFASTCOMPLETEACTIVECHANGE_OFFSET UNITYSDK_OFFSET(0x9AB3640)
#define RPG_CLIENT_MAINMISSIONDATA__ONGROUPPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x9AB48D0)
#define RPG_CLIENT_MAINMISSIONDATA__PROCESSCONDITIONINVERSE_OFFSET UNITYSDK_OFFSET(0x9AB8F90)
#define RPG_CLIENT_MAINMISSIONDATA__PROCESSFASTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x9AB4760)
#define RPG_CLIENT_MAINMISSIONDATA__PROLOGUE_OFFSET UNITYSDK_OFFSET(0x9AB56B0)
#define RPG_CLIENT_MAINMISSIONDATA__REFRESHASSISTWAYPOINTLEGACY_OFFSET UNITYSDK_OFFSET(0x9AB4F70)
#define RPG_CLIENT_MAINMISSIONDATA__REFRESHINUSEASSITWAYPOINT_OFFSET UNITYSDK_OFFSET(0x9AB5270)
#define RPG_CLIENT_MAINMISSIONDATA__REFRESH_OFFSET UNITYSDK_OFFSET(0x9AB1F00)
#define RPG_CLIENT_MAINMISSIONDATA__REGISTERGROUPPROPERTYCALLBACK_OFFSET UNITYSDK_OFFSET(0x9AB2DC0)
#define RPG_CLIENT_MAINMISSIONDATA__RESETASSISTWAYPOINTLOGIC_OFFSET UNITYSDK_OFFSET(0x9AB1580)
#define RPG_CLIENT_MAINMISSIONDATA__SETFASTCOMPLETEDATA_OFFSET UNITYSDK_OFFSET(0x9AB7050)
#define RPG_CLIENT_MAINMISSIONDATA__STEP_OFFSET UNITYSDK_OFFSET(0x9AB5510)
#define RPG_CLIENT_MAINMISSIONDATA__UNINITLISTENGROUPPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9AB4D90)
#define RPG_CLIENT_MAINMISSIONDATA__UNREGISTERALLGROUPPROPERTYCALLBACK_OFFSET UNITYSDK_OFFSET(0x9AB2F90)
#define RPG_CLIENT_MAINMISSIONDATA__UPDATEHASSISTWAYPOINTSERVERPREFS_OFFSET UNITYSDK_OFFSET(0x9AB6C10)
#define RPG_CLIENT_MAINMISSIONDATA__UPDATESERVERFASTCOMPLETEPREFS_OFFSET UNITYSDK_OFFSET(0x9AB3AD0)
#define RPG_CLIENT_MAINMISSIONDATA___CALLSTEPINENDOFFRAME_B__68_0_OFFSET UNITYSDK_OFFSET(0x9ABEAC0)
#define RPG_CLIENT_MAINMISSIONDATA___INITASSISTWAYPOINT_B__59_0_OFFSET UNITYSDK_OFFSET(0x9ABEAB0)

namespace RPG::Client
{
	inline static constexpr unsigned int MainMissionData_TypeDefinitionIndex = 53751;

	class MainMissionData : public ::System::Object
	{
	public:
		::RPG::GameCore::MissionChapterConfigRow* _ChapterCfg; // 0x10
		::RPG::GameCore::AssistWayPoint* _DisplayAssistWaypoint; // 0x18
		::RPG::GameCore::MainMissionTypeConfigRow* _TypeCfg; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ISubMissionGroupData*>* _SubMissionGroupList; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ISubMissionGroupData*>* _SubMissionGroupDict; // 0x30
		::RPG::GameCore::MainMissionRow* Row; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _TempIDs; // 0x40
		::System::Collections::Generic::List_1<::Class_1_09B5AE4A49F8C191*>* _AssistWayPointListenProperties; // 0x48
		::Class_1_32C09B38B00D2F10* _PiplelineData; // 0x50
		::System::Collections::Generic::List_1<::System::UInt32>* _AssistWaypointSubMissionIDList; // 0x58
		::UnityEngine::Coroutine* _StepCoroutine; // 0x60
		::Class_1_09B5AE4A49F8C191* _TempListenGroupProperty; // 0x68
		::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* _SubMissions; // 0x70
		::System::Int32 _Index; // 0x78
		::System::Int32 _InUseIndexLimit; // 0x7C
		::System::UInt32 _DisplayPriority_k__BackingField; // 0x80
		::System::Int32 _FastCompletePackIndex; // 0x84
		::System::UInt32 ID; // 0x88
		::System::Int32 _FastCompleteDisplayIndex; // 0x8C
		::System::Int32 _LastUsePackIndex; // 0x90
		::RPG::GameCore::MainMissionType _MainMissionType_k__BackingField; // 0x94
		::System::Int32 _InUsePackIndex; // 0x98
		::System::Boolean _FirstEnterAdventrueInited; // 0x9C
		::System::Boolean _IsMissionDataInited; // 0x9D
		::System::Boolean _IsConfigShow; // 0x9E
		::System::Int32 _FinishedFastCompleteEndIndex; // 0xA0
		::System::Boolean _AssistActive; // 0xA4
		::System::Boolean _AssistDataInited; // 0xA5
		::System::Boolean _ArealdyReachRangeMinLegacy; // 0xA6
		::System::Boolean _LastFastCompleteActive; // 0xA7
		::System::UInt32 _FastCompleteTimeStamp; // 0xA8
		::System::Int32 _DisplayIndex; // 0xAC
		::System::Int32 _InUseFastCompleteEndIndex; // 0xB0
		::System::Int32 _InUseFastCompleteIndex; // 0xB4
		::System::Boolean _IsFinish_k__BackingField; // 0xB8
		::System::Boolean _HasFastCompleteTimeStamp; // 0xB9
		::System::Int32 _FinishedFastCompleteIndex; // 0xBC

		::System::Void _ctor(::System::UInt32 mainMissionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__CTOR_OFFSET))(this, mainMissionID);
		}

		::System::Void OnHideWhenInRangeMin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_ONHIDEWHENINRANGEMIN_OFFSET))(this);
		}

		::System::Void OnOutOfRangeMin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_ONOUTOFRANGEMIN_OFFSET))(this);
		}

		::System::Void OnPropStateChange(::System::UInt32 groupID, ::System::UInt32 instanceID, ::RPG::GameCore::PropState propState)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::PropState))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_ONPROPSTATECHANGE_OFFSET))(this, groupID, instanceID, propState);
		}

		::System::Void OnMapPoseSwitchEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_ONMAPPOSESWITCHEND_OFFSET))(this);
		}

		::System::Void OnMapCreated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_ONMAPCREATED_OFFSET))(this);
		}

		::System::Void OnEnterAdventurePhase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_ONENTERADVENTUREPHASE_OFFSET))(this);
		}

		::System::Void OnChangeTrackMission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_ONCHANGETRACKMISSION_OFFSET))(this);
		}

		::System::Void OnCurrentRegionUpdated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_ONCURRENTREGIONUPDATED_OFFSET))(this);
		}

		::System::Void OnFinishSubMission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_ONFINISHSUBMISSION_OFFSET))(this);
		}

		::System::Void OnTakenMainMission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_ONTAKENMAINMISSION_OFFSET))(this);
		}

		::System::Void OnFcvChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_ONFCVCHANGE_OFFSET))(this);
		}

		::System::Void OnRegionEraStateChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_ONREGIONERASTATECHANGE_OFFSET))(this);
		}

		::System::Void OnEraFlipExitControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_ONERAFLIPEXITCONTROL_OFFSET))(this);
		}

		::System::Void OnPropTimelineStateChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_ONPROPTIMELINESTATECHANGE_OFFSET))(this);
		}

		::System::Void OnHoYoGroupActiveChange(::System::Boolean isGroupActive, ::System::UInt32 groupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_ONHOYOGROUPACTIVECHANGE_OFFSET))(this, isGroupActive, groupID);
		}

		::System::Void OnFiveDimTeleportToGame(::RPG::Client::LittleGame::FiveDim::FiveDimEnterType enterType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimEnterType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_ONFIVEDIMTELEPORTTOGAME_OFFSET))(this, enterType);
		}

		::System::Void OnFiveDimLeaveGame(::RPG::Client::LittleGame::FiveDim::FiveDimExitType exitType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimExitType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_ONFIVEDIMLEAVEGAME_OFFSET))(this, exitType);
		}

		::System::Boolean HasFastCompleteConfig()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_HASFASTCOMPLETECONFIG_OFFSET))(this);
		}

		::System::Boolean CheckIsActiveFastComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_CHECKISACTIVEFASTCOMPLETE_OFFSET))(this);
		}

		::System::Boolean TryGetFastCompleteAnchor(::System::UInt32& groupID, ::System::UInt32& instanceID, ::System::UInt32& entityID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_TRYGETFASTCOMPLETEANCHOR_OFFSET))(this, groupID, instanceID, entityID);
		}

		::System::Void SetCurFastCompleteFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_SETCURFASTCOMPLETEFINISH_OFFSET))(this);
		}

		::System::Single _GetFastCompleteTriggerTime(::RPG::GameCore::AssistWayPointFastComplete* fastCompleteConfig)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::AssistWayPointFastComplete*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__GETFASTCOMPLETETRIGGERTIME_OFFSET))(this, fastCompleteConfig);
		}

		::RPG::GameCore::AssistWayPointFastComplete* _GetFastCompleteConfig(::System::Int32 index)
		{
			return ((::RPG::GameCore::AssistWayPointFastComplete*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__GETFASTCOMPLETECONFIG_OFFSET))(this, index);
		}

		::System::Boolean _IsActiveFastComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__ISACTIVEFASTCOMPLETE_OFFSET))(this);
		}

		::System::Void _OnFastCompleteActiveChange(::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__ONFASTCOMPLETEACTIVECHANGE_OFFSET))(this, isActive);
		}

		::Class_3_1A92845FAFA5EC77* _GetCurFiveDimServices()
		{
			return ((::Class_3_1A92845FAFA5EC77*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__GETCURFIVEDIMSERVICES_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__INIT_OFFSET))(this);
		}

		::System::Void _OnGroupPropertyChanged(::System::UInt32 groupID, ::System::String* propertyName)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__ONGROUPPROPERTYCHANGED_OFFSET))(this, groupID, propertyName);
		}

		::System::Void _InitListenGroupProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__INITLISTENGROUPPROPERTIES_OFFSET))(this);
		}

		::System::Void _UnInitListenGroupProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__UNINITLISTENGROUPPROPERTIES_OFFSET))(this);
		}

		::System::Void _RegisterGroupPropertyCallback(::System::Boolean isAll, ::System::UInt32 filterGroupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__REGISTERGROUPPROPERTYCALLBACK_OFFSET))(this, isAll, filterGroupID);
		}

		::System::Void _UnRegisterAllGroupPropertyCallback(::System::Boolean isAll, ::System::UInt32 filterGroupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__UNREGISTERALLGROUPPROPERTYCALLBACK_OFFSET))(this, isAll, filterGroupID);
		}

		::System::Void _Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__REFRESH_OFFSET))(this);
		}

		::System::Void _Step()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__STEP_OFFSET))(this);
		}

		::System::Void _Backtrace()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__BACKTRACE_OFFSET))(this);
		}

		::System::Boolean _CheckForwardCondition(::RPG::GameCore::AssistWayPoint* assistWayPoint)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AssistWayPoint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__CHECKFORWARDCONDITION_OFFSET))(this, assistWayPoint);
		}

		::System::Void _Forward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__FORWARD_OFFSET))(this);
		}

		::System::Void _Prologue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__PROLOGUE_OFFSET))(this);
		}

		::System::Void _Epilogue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__EPILOGUE_OFFSET))(this);
		}

		::System::Void _ProcessFastComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__PROCESSFASTCOMPLETE_OFFSET))(this);
		}

		::System::Void _Display()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__DISPLAY_OFFSET))(this);
		}

		::System::Boolean _NeedShowAssistWaypoint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__NEEDSHOWASSISTWAYPOINT_OFFSET))(this);
		}

		::System::Void _ClearFastComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__CLEARFASTCOMPLETE_OFFSET))(this);
		}

		::System::Void _OnDisplayAssistWayPointChange(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__ONDISPLAYASSISTWAYPOINTCHANGE_OFFSET))(this, isShow);
		}

		::System::Boolean _IsFastCompleteDataChange(::System::Boolean hasFastComplete, ::System::Int32 packIndex, ::System::Int32 displayIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__ISFASTCOMPLETEDATACHANGE_OFFSET))(this, hasFastComplete, packIndex, displayIndex);
		}

		::System::Void _SetFastCompleteData(::System::Boolean hasFastCompleteTimeStamp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__SETFASTCOMPLETEDATA_OFFSET))(this, hasFastCompleteTimeStamp);
		}

		::System::Void _UpdateServerFastCompletePrefs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__UPDATESERVERFASTCOMPLETEPREFS_OFFSET))(this);
		}

		::System::Boolean _DoesBacktraceConditionMeet(::RPG::GameCore::AssistWayPointConditionMain* conditiomMain)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AssistWayPointConditionMain*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__DOESBACKTRACECONDITIONMEET_OFFSET))(this, conditiomMain);
		}

		::System::Boolean _DoesConditionMeet(::RPG::GameCore::AssistWayPointConditionMain* conditiomMain, ::System::Boolean onlyCheckBacktrace)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AssistWayPointConditionMain*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__DOESCONDITIONMEET_OFFSET))(this, conditiomMain, onlyCheckBacktrace);
		}

		::System::Boolean _DoesConditionMeet_1(::RPG::GameCore::AssistWayPointConditionPack* conditionPack, ::System::Boolean onlyCheckBacktrace)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AssistWayPointConditionPack*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__DOESCONDITIONMEET_1_OFFSET))(this, conditionPack, onlyCheckBacktrace);
		}

		::System::Boolean _DoesConditionMeet_2(::RPG::GameCore::AssistWayPointCondition* condition, ::System::Boolean onlyCheckBacktrace)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AssistWayPointCondition*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__DOESCONDITIONMEET_2_OFFSET))(this, condition, onlyCheckBacktrace);
		}

		::System::Boolean _DoesDistanceConditionMeet(::RPG::GameCore::AssistWayPointDistanceCondition* distanceCondition)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AssistWayPointDistanceCondition*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__DOESDISTANCECONDITIONMEET_OFFSET))(this, distanceCondition);
		}

		::System::Boolean _DoesPropStateConditionMeet(::RPG::GameCore::AssistWayPointPropStateCondition* propStateCondition, ::System::Boolean onlyCheckBacktrace)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AssistWayPointPropStateCondition*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__DOESPROPSTATECONDITIONMEET_OFFSET))(this, propStateCondition, onlyCheckBacktrace);
		}

		::System::Boolean _DoesFcvConditionMeet(::RPG::GameCore::AssistWayPointFCVCondition* fcvCondition, ::System::Boolean onlyCheckBacktrace)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AssistWayPointFCVCondition*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__DOESFCVCONDITIONMEET_OFFSET))(this, fcvCondition, onlyCheckBacktrace);
		}

		::System::Boolean _DoseEraRegionEraFlipStateConditionMeet(::RPG::GameCore::AssistWayPointRegionEraFlipStateCondition* condition, ::System::Boolean onlyCheckBacktrace)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AssistWayPointRegionEraFlipStateCondition*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__DOSEERAREGIONERAFLIPSTATECONDITIONMEET_OFFSET))(this, condition, onlyCheckBacktrace);
		}

		::System::Boolean _DosePropEraFlipShowConditionMeet(::RPG::GameCore::AssistWayPointPropEraFlipShowCondition* condition, ::System::Boolean onlyCheckBacktrace)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AssistWayPointPropEraFlipShowCondition*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__DOSEPROPERAFLIPSHOWCONDITIONMEET_OFFSET))(this, condition, onlyCheckBacktrace);
		}

		::System::Boolean _DosePropTimelineStateConditionMeet(::RPG::GameCore::AssistWayPointTimelineStateCondition* condition, ::System::Boolean onlyCheckBacktrace)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AssistWayPointTimelineStateCondition*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__DOSEPROPTIMELINESTATECONDITIONMEET_OFFSET))(this, condition, onlyCheckBacktrace);
		}

		::System::Boolean _DoseGroupPropertyConditionMeet(::RPG::GameCore::AssistWayPointGroupPropertyCondition* condition, ::System::Boolean onlyCheckBacktrace)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AssistWayPointGroupPropertyCondition*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__DOSEGROUPPROPERTYCONDITIONMEET_OFFSET))(this, condition, onlyCheckBacktrace);
		}

		::System::Boolean _DoesPoseConditionMeet(::RPG::GameCore::AssistWayPoint* assistWayPoint)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AssistWayPoint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__DOESPOSECONDITIONMEET_OFFSET))(this, assistWayPoint);
		}

		::System::Void _InitAssistWaypoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__INITASSISTWAYPOINT_OFFSET))(this);
		}

		::System::Boolean _IsAssistDataPrepared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__ISASSISTDATAPREPARED_OFFSET))(this);
		}

		::System::Void _RefreshInUseAssitWaypoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__REFRESHINUSEASSITWAYPOINT_OFFSET))(this);
		}

		::System::Boolean _IfUseAssistWaypoint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__IFUSEASSISTWAYPOINT_OFFSET))(this);
		}

		::System::Int32 _GetAssistWaypointIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__GETASSISTWAYPOINTINDEX_OFFSET))(this);
		}

		::System::Void _HideCurDisplayAssistWaypoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__HIDECURDISPLAYASSISTWAYPOINT_OFFSET))(this);
		}

		::System::Void _ResetAssistWaypointLogic(::System::Boolean complete)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__RESETASSISTWAYPOINTLOGIC_OFFSET))(this, complete);
		}

		::System::Void _UpdatehAssistWaypointServerPrefs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__UPDATEHASSISTWAYPOINTSERVERPREFS_OFFSET))(this);
		}

		::System::Boolean _ProcessConditionInverse(::RPG::GameCore::AssistWayPointCondition* condition, ::System::Boolean result)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AssistWayPointCondition*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__PROCESSCONDITIONINVERSE_OFFSET))(this, condition, result);
		}

		::System::Void _CallStepInEndOfFrame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__CALLSTEPINENDOFFRAME_OFFSET))(this);
		}

		::System::Boolean get_AssistActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_GET_ASSISTACTIVE_OFFSET))(this);
		}

		::System::Void OnHideWhenInRangeMinLegacy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_ONHIDEWHENINRANGEMINLEGACY_OFFSET))(this);
		}

		::System::Void OnPropStateChangeLegacy(::System::UInt32 groupID, ::System::UInt32 instanceID, ::RPG::GameCore::PropState propState)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::PropState))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_ONPROPSTATECHANGELEGACY_OFFSET))(this, groupID, instanceID, propState);
		}

		::System::Void OnMapPoseSwitchEndLegacy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_ONMAPPOSESWITCHENDLEGACY_OFFSET))(this);
		}

		::System::Boolean _IfPropStateConditionFailLegacy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__IFPROPSTATECONDITIONFAILLEGACY_OFFSET))(this);
		}

		::System::Boolean _IfPropStateBacktraceLegacy(::System::Int32& activeBacktraceIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__IFPROPSTATEBACKTRACELEGACY_OFFSET))(this, activeBacktraceIndex);
		}

		::System::Void _RefreshAssistWaypointLegacy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__REFRESHASSISTWAYPOINTLEGACY_OFFSET))(this);
		}

		::System::Void _NotifyAssistWaypointLegacy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__NOTIFYASSISTWAYPOINTLEGACY_OFFSET))(this);
		}

		::System::Boolean _IfPropStateConditionMeetForNotifyLegacy(::RPG::GameCore::AssistWayPoint* assistWaypoint)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AssistWayPoint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__IFPROPSTATECONDITIONMEETFORNOTIFYLEGACY_OFFSET))(this, assistWaypoint);
		}

		::System::Boolean _IfMapRotationPoseConditionFailLegacy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__IFMAPROTATIONPOSECONDITIONFAILLEGACY_OFFSET))(this);
		}

		::System::Boolean _IsAlreadyInRangeMinLegacy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__ISALREADYINRANGEMINLEGACY_OFFSET))(this);
		}

		::System::Boolean AddSubMission(::RPG::Client::SubMissionData* subMission)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_ADDSUBMISSION_OFFSET))(this, subMission);
		}

		::System::Void InitMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_INITMISSIONDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ISubMissionGroupData*>* GetSubMissionGroups()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ISubMissionGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_GETSUBMISSIONGROUPS_OFFSET))(this);
		}

		::System::Void DeleteSubMission(::RPG::Client::SubMissionData* subMissionData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_DELETESUBMISSION_OFFSET))(this, subMissionData);
		}

		::System::Boolean IsRogueMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_ISROGUEMISSION_OFFSET))(this);
		}

		::RPG::Client::DateTimePro GetActivityEndDateTime()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_GETACTIVITYENDDATETIME_OFFSET))(this);
		}

		::RPG::Client::DateTimePro GetScheduleEndDateTime()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_GETSCHEDULEENDDATETIME_OFFSET))(this);
		}

		::System::Boolean IsInExpectedEntrance(::System::UInt32 entranceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_ISINEXPECTEDENTRANCE_OFFSET))(this, entranceID);
		}

		::System::Boolean IsInTargetFloor(::System::UInt32 floorID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_ISINTARGETFLOOR_OFFSET))(this, floorID);
		}

		::RPG::Client::MissionWaypointInfo GetAssistWaypointInfo()
		{
			return ((::RPG::Client::MissionWaypointInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_GETASSISTWAYPOINTINFO_OFFSET))(this);
		}

		::RPG::Client::SubMissionData* GetFirstStartAndShowSubMission()
		{
			return ((::RPG::Client::SubMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_GETFIRSTSTARTANDSHOWSUBMISSION_OFFSET))(this);
		}

		::RPG::Client::SubMissionData* GetFirstStartAndShowInMapSubMission()
		{
			return ((::RPG::Client::SubMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_GETFIRSTSTARTANDSHOWINMAPSUBMISSION_OFFSET))(this);
		}

		::RPG::Client::SubMissionData* GetFirstStartAndShowInMapSubMissionWithRelation()
		{
			return ((::RPG::Client::SubMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_GETFIRSTSTARTANDSHOWINMAPSUBMISSIONWITHRELATION_OFFSET))(this);
		}

		::System::Void _CheckDataInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__CHECKDATAINIT_OFFSET))(this);
		}

		::System::String* get_NameStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_GET_NAMESTR_OFFSET))(this);
		}

		::RPG::Client::TextID get_MissionTypeName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_GET_MISSIONTYPENAME_OFFSET))(this);
		}

		::System::UInt32 get_MissionTypePriority()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_GET_MISSIONTYPEPRIORITY_OFFSET))(this);
		}

		::System::String* get_MissionTypeColor()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_GET_MISSIONTYPECOLOR_OFFSET))(this);
		}

		::System::String* get_ChapterTypeColor()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_GET_CHAPTERTYPECOLOR_OFFSET))(this);
		}

		::System::String* get_MissionTypeIconMini()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_GET_MISSIONTYPEICONMINI_OFFSET))(this);
		}

		::System::UInt32 get_ChapterDisplayPriority()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_GET_CHAPTERDISPLAYPRIORITY_OFFSET))(this);
		}

		::System::UInt32 get_ChapterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_GET_CHAPTERID_OFFSET))(this);
		}

		::System::UInt32 get_WorldID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_GET_WORLDID_OFFSET))(this);
		}

		::System::UInt32 get_StoryLineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_GET_STORYLINEID_OFFSET))(this);
		}

		::RPG::GameCore::MissionChapterConfigRow* get_ChapterRow()
		{
			return ((::RPG::GameCore::MissionChapterConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_GET_CHAPTERROW_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* get_SubMissions()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_GET_SUBMISSIONS_OFFSET))(this);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_GET_ISFINISH_OFFSET))(this);
		}

		::System::Void set_IsFinish(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_SET_ISFINISH_OFFSET))(this, value);
		}

		::System::Boolean IsFinishInVerse(::RPG::Client::MapDef* mapDef)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_ISFINISHINVERSE_OFFSET))(this, mapDef);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_GET_ISSHOW_OFFSET))(this);
		}

		::System::Boolean get_IsShowInMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_GET_ISSHOWINMAP_OFFSET))(this);
		}

		::System::Boolean get_IsShowRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_GET_ISSHOWREDDOT_OFFSET))(this);
		}

		::System::Boolean get_IsMuteNav()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_GET_ISMUTENAV_OFFSET))(this);
		}

		::System::Boolean get_IsTakenAndNotstarted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_GET_ISTAKENANDNOTSTARTED_OFFSET))(this);
		}

		::System::Boolean get_IsStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_GET_ISSTART_OFFSET))(this);
		}

		::System::Boolean IsStartInVerse(::RPG::Client::MapDef* mapDef)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_ISSTARTINVERSE_OFFSET))(this, mapDef);
		}

		::System::String* get_TargetLocation()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_GET_TARGETLOCATION_OFFSET))(this);
		}

		::System::String* get_TrackIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_GET_TRACKICONPATH_OFFSET))(this);
		}

		::System::Boolean get_IsFloorConnected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_GET_ISFLOORCONNECTED_OFFSET))(this);
		}

		::System::Boolean get_IsHaveFinishedSubMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_GET_ISHAVEFINISHEDSUBMISSION_OFFSET))(this);
		}

		::System::String* get_TypeIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_GET_TYPEICONPATH_OFFSET))(this);
		}

		::RPG::GameCore::AssistWayPoint* get_CurAssistWaypoint()
		{
			return ((::RPG::GameCore::AssistWayPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_GET_CURASSISTWAYPOINT_OFFSET))(this);
		}

		::RPG::GameCore::MainMissionSubType get_SubType()
		{
			return ((::RPG::GameCore::MainMissionSubType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_GET_SUBTYPE_OFFSET))(this);
		}

		::RPG::GameCore::MainMissionType get_MainMissionType()
		{
			return ((::RPG::GameCore::MainMissionType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_GET_MAINMISSIONTYPE_OFFSET))(this);
		}

		::System::Void set_MainMissionType(::RPG::GameCore::MainMissionType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MainMissionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_SET_MAINMISSIONTYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_DisplayPriority()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_GET_DISPLAYPRIORITY_OFFSET))(this);
		}

		::System::Void set_DisplayPriority(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_SET_DISPLAYPRIORITY_OFFSET))(this, value);
		}

		::System::Boolean get_IsConfigShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_GET_ISCONFIGSHOW_OFFSET))(this);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_GET_CONTENTID_OFFSET))(this);
		}

		::System::Void __InitAssistWaypoint_b__59_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA___INITASSISTWAYPOINT_B__59_0_OFFSET))(this);
		}

		::System::Void __CallStepInEndOfFrame_b__68_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA___CALLSTEPINENDOFFRAME_B__68_0_OFFSET))(this);
		}
	};
}
