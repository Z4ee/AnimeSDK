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
class Class_3_1E4F9B0ED3BF21DE;
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
namespace RPG::GameCore { class SubMissionRelationConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define RPG_CLIENT_MAINMISSIONDATA_ADDSUBMISSION_OFFSET UNITYSDK_OFFSET(0x174A2DD0)
#define RPG_CLIENT_MAINMISSIONDATA_CHECKISACTIVEFASTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1749B5C0)
#define RPG_CLIENT_MAINMISSIONDATA_DELETESUBMISSION_OFFSET UNITYSDK_OFFSET(0x174A3870)
#define RPG_CLIENT_MAINMISSIONDATA_GETACTIVITYENDDATETIME_OFFSET UNITYSDK_OFFSET(0x174A45E0)
#define RPG_CLIENT_MAINMISSIONDATA_GETASSISTWAYPOINTINFO_OFFSET UNITYSDK_OFFSET(0x174A4EC0)
#define RPG_CLIENT_MAINMISSIONDATA_GETFIRSTSTARTANDSHOWINMAPSUBMISSION_OFFSET UNITYSDK_OFFSET(0x174A5A30)
#define RPG_CLIENT_MAINMISSIONDATA_GETFIRSTSTARTANDSHOWSUBMISSION_OFFSET UNITYSDK_OFFSET(0x174A5840)
#define RPG_CLIENT_MAINMISSIONDATA_GETSCHEDULEENDDATETIME_OFFSET UNITYSDK_OFFSET(0x174A4970)
#define RPG_CLIENT_MAINMISSIONDATA_GETSUBMISSIONGROUPS_OFFSET UNITYSDK_OFFSET(0x174A35D0)
#define RPG_CLIENT_MAINMISSIONDATA_GET_ASSISTACTIVE_OFFSET UNITYSDK_OFFSET(0x174A1250)
#define RPG_CLIENT_MAINMISSIONDATA_GET_CHAPTERDISPLAYPRIORITY_OFFSET UNITYSDK_OFFSET(0x174A62C0)
#define RPG_CLIENT_MAINMISSIONDATA_GET_CHAPTERID_OFFSET UNITYSDK_OFFSET(0x174A6310)
#define RPG_CLIENT_MAINMISSIONDATA_GET_CHAPTERROW_OFFSET UNITYSDK_OFFSET(0x174A65D0)
#define RPG_CLIENT_MAINMISSIONDATA_GET_CHAPTERSEQUENCE_OFFSET UNITYSDK_OFFSET(0x174A7A10)
#define RPG_CLIENT_MAINMISSIONDATA_GET_CHAPTERTYPECOLOR_OFFSET UNITYSDK_OFFSET(0x174A6220)
#define RPG_CLIENT_MAINMISSIONDATA_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x174A7C30)
#define RPG_CLIENT_MAINMISSIONDATA_GET_CURASSISTWAYPOINT_OFFSET UNITYSDK_OFFSET(0x174A7B10)
#define RPG_CLIENT_MAINMISSIONDATA_GET_DISPLAYPRIORITY_OFFSET UNITYSDK_OFFSET(0x174A7BC0)
#define RPG_CLIENT_MAINMISSIONDATA_GET_ISCONFIGSHOW_OFFSET UNITYSDK_OFFSET(0x174A7BE0)
#define RPG_CLIENT_MAINMISSIONDATA_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x174A6610)
#define RPG_CLIENT_MAINMISSIONDATA_GET_ISFLOORCONNECTED_OFFSET UNITYSDK_OFFSET(0x174A76D0)
#define RPG_CLIENT_MAINMISSIONDATA_GET_ISHAVEFINISHEDSUBMISSION_OFFSET UNITYSDK_OFFSET(0x174A7880)
#define RPG_CLIENT_MAINMISSIONDATA_GET_ISMUTENAV_OFFSET UNITYSDK_OFFSET(0x174A6A90)
#define RPG_CLIENT_MAINMISSIONDATA_GET_ISSHOWINMAP_OFFSET UNITYSDK_OFFSET(0x174A68C0)
#define RPG_CLIENT_MAINMISSIONDATA_GET_ISSHOWREDDOT_OFFSET UNITYSDK_OFFSET(0x174A6A20)
#define RPG_CLIENT_MAINMISSIONDATA_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x174A6730)
#define RPG_CLIENT_MAINMISSIONDATA_GET_ISSTART_OFFSET UNITYSDK_OFFSET(0x174A6DC0)
#define RPG_CLIENT_MAINMISSIONDATA_GET_ISSUBTITLEVALID_OFFSET UNITYSDK_OFFSET(0x174A7980)
#define RPG_CLIENT_MAINMISSIONDATA_GET_ISTAKENANDNOTSTARTED_OFFSET UNITYSDK_OFFSET(0x174A6C20)
#define RPG_CLIENT_MAINMISSIONDATA_GET_MAINMISSIONTYPE_OFFSET UNITYSDK_OFFSET(0x174A7BA0)
#define RPG_CLIENT_MAINMISSIONDATA_GET_MISSIONTYPECOLOR_OFFSET UNITYSDK_OFFSET(0x174A61D0)
#define RPG_CLIENT_MAINMISSIONDATA_GET_MISSIONTYPEICONMINI_OFFSET UNITYSDK_OFFSET(0x174A6270)
#define RPG_CLIENT_MAINMISSIONDATA_GET_MISSIONTYPENAME_OFFSET UNITYSDK_OFFSET(0x174A6110)
#define RPG_CLIENT_MAINMISSIONDATA_GET_MISSIONTYPEPRIORITY_OFFSET UNITYSDK_OFFSET(0x174A6180)
#define RPG_CLIENT_MAINMISSIONDATA_GET_NAMESTR_OFFSET UNITYSDK_OFFSET(0x174A6080)
#define RPG_CLIENT_MAINMISSIONDATA_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x174A63B0)
#define RPG_CLIENT_MAINMISSIONDATA_GET_SUBMISSIONS_OFFSET UNITYSDK_OFFSET(0x174A4590)
#define RPG_CLIENT_MAINMISSIONDATA_GET_SUBTYPE_OFFSET UNITYSDK_OFFSET(0x174A7B50)
#define RPG_CLIENT_MAINMISSIONDATA_GET_TARGETLOCATION_OFFSET UNITYSDK_OFFSET(0x174A7160)
#define RPG_CLIENT_MAINMISSIONDATA_GET_TRACKICONPATH_OFFSET UNITYSDK_OFFSET(0x174A7350)
#define RPG_CLIENT_MAINMISSIONDATA_GET_TYPEICONPATH_OFFSET UNITYSDK_OFFSET(0x174A7A80)
#define RPG_CLIENT_MAINMISSIONDATA_GET_WORLDID_OFFSET UNITYSDK_OFFSET(0x174A6360)
#define RPG_CLIENT_MAINMISSIONDATA_HASFASTCOMPLETECONFIG_OFFSET UNITYSDK_OFFSET(0x1749B440)
#define RPG_CLIENT_MAINMISSIONDATA_INITMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x174A2670)
#define RPG_CLIENT_MAINMISSIONDATA_ISFINISHINVERSE_OFFSET UNITYSDK_OFFSET(0x174A6630)
#define RPG_CLIENT_MAINMISSIONDATA_ISINEXPECTEDENTRANCE_OFFSET UNITYSDK_OFFSET(0x174A4C90)
#define RPG_CLIENT_MAINMISSIONDATA_ISINTARGETFLOOR_OFFSET UNITYSDK_OFFSET(0x174A4D20)
#define RPG_CLIENT_MAINMISSIONDATA_ISROGUEMISSION_OFFSET UNITYSDK_OFFSET(0x174A42C0)
#define RPG_CLIENT_MAINMISSIONDATA_ISSTARTINVERSE_OFFSET UNITYSDK_OFFSET(0x174A6ED0)
#define RPG_CLIENT_MAINMISSIONDATA_ONCHANGETRACKMISSION_OFFSET UNITYSDK_OFFSET(0x1749A700)
#define RPG_CLIENT_MAINMISSIONDATA_ONCURRENTREGIONUPDATED_OFFSET UNITYSDK_OFFSET(0x1749A790)
#define RPG_CLIENT_MAINMISSIONDATA_ONENTERADVENTUREPHASE_OFFSET UNITYSDK_OFFSET(0x17499D10)
#define RPG_CLIENT_MAINMISSIONDATA_ONERAFLIPEXITCONTROL_OFFSET UNITYSDK_OFFSET(0x1749AB40)
#define RPG_CLIENT_MAINMISSIONDATA_ONFCVCHANGE_OFFSET UNITYSDK_OFFSET(0x1749A9A0)
#define RPG_CLIENT_MAINMISSIONDATA_ONFINISHSUBMISSION_OFFSET UNITYSDK_OFFSET(0x1749A830)
#define RPG_CLIENT_MAINMISSIONDATA_ONFIVEDIMLEAVEGAME_OFFSET UNITYSDK_OFFSET(0x1749B3A0)
#define RPG_CLIENT_MAINMISSIONDATA_ONFIVEDIMTELEPORTTOGAME_OFFSET UNITYSDK_OFFSET(0x1749B2F0)
#define RPG_CLIENT_MAINMISSIONDATA_ONHIDEWHENINRANGEMINLEGACY_OFFSET UNITYSDK_OFFSET(0x17499250)
#define RPG_CLIENT_MAINMISSIONDATA_ONHIDEWHENINRANGEMIN_OFFSET UNITYSDK_OFFSET(0x17499160)
#define RPG_CLIENT_MAINMISSIONDATA_ONHOYOGROUPACTIVECHANGE_OFFSET UNITYSDK_OFFSET(0x1749ACE0)
#define RPG_CLIENT_MAINMISSIONDATA_ONMAPCREATED_OFFSET UNITYSDK_OFFSET(0x17499A60)
#define RPG_CLIENT_MAINMISSIONDATA_ONMAPPOSESWITCHENDLEGACY_OFFSET UNITYSDK_OFFSET(0x17499820)
#define RPG_CLIENT_MAINMISSIONDATA_ONMAPPOSESWITCHEND_OFFSET UNITYSDK_OFFSET(0x17499750)
#define RPG_CLIENT_MAINMISSIONDATA_ONOUTOFRANGEMIN_OFFSET UNITYSDK_OFFSET(0x17499430)
#define RPG_CLIENT_MAINMISSIONDATA_ONPROPSTATECHANGELEGACY_OFFSET UNITYSDK_OFFSET(0x17499610)
#define RPG_CLIENT_MAINMISSIONDATA_ONPROPSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x17499500)
#define RPG_CLIENT_MAINMISSIONDATA_ONPROPTIMELINESTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1749AC10)
#define RPG_CLIENT_MAINMISSIONDATA_ONREGIONERASTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1749AA70)
#define RPG_CLIENT_MAINMISSIONDATA_ONTAKENMAINMISSION_OFFSET UNITYSDK_OFFSET(0x1749A8D0)
#define RPG_CLIENT_MAINMISSIONDATA_SETCURFASTCOMPLETEFINISH_OFFSET UNITYSDK_OFFSET(0x1749B930)
#define RPG_CLIENT_MAINMISSIONDATA_SET_DISPLAYPRIORITY_OFFSET UNITYSDK_OFFSET(0x174A7BD0)
#define RPG_CLIENT_MAINMISSIONDATA_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x174A6620)
#define RPG_CLIENT_MAINMISSIONDATA_SET_MAINMISSIONTYPE_OFFSET UNITYSDK_OFFSET(0x174A7BB0)
#define RPG_CLIENT_MAINMISSIONDATA_TRYGETFASTCOMPLETEANCHOR_OFFSET UNITYSDK_OFFSET(0x1749B870)
#define RPG_CLIENT_MAINMISSIONDATA__BACKTRACE_OFFSET UNITYSDK_OFFSET(0x1749D9B0)
#define RPG_CLIENT_MAINMISSIONDATA__BUILDMONITORSUBMISSIONRELATIONLOOKUP_OFFSET UNITYSDK_OFFSET(0x174A5DA0)
#define RPG_CLIENT_MAINMISSIONDATA__CALLSTEPINENDOFFRAME_OFFSET UNITYSDK_OFFSET(0x17499320)
#define RPG_CLIENT_MAINMISSIONDATA__CHECKDATAINIT_OFFSET UNITYSDK_OFFSET(0x174A5FD0)
#define RPG_CLIENT_MAINMISSIONDATA__CHECKFORWARDCONDITION_OFFSET UNITYSDK_OFFSET(0x1749E2F0)
#define RPG_CLIENT_MAINMISSIONDATA__CLEARFASTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1749EEE0)
#define RPG_CLIENT_MAINMISSIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x174A22B0)
#define RPG_CLIENT_MAINMISSIONDATA__DISPLAY_OFFSET UNITYSDK_OFFSET(0x1749DC00)
#define RPG_CLIENT_MAINMISSIONDATA__DOESBACKTRACECONDITIONMEET_OFFSET UNITYSDK_OFFSET(0x1749E290)
#define RPG_CLIENT_MAINMISSIONDATA__DOESCONDITIONMEET_1_OFFSET UNITYSDK_OFFSET(0x1749F130)
#define RPG_CLIENT_MAINMISSIONDATA__DOESCONDITIONMEET_2_OFFSET UNITYSDK_OFFSET(0x1749F310)
#define RPG_CLIENT_MAINMISSIONDATA__DOESCONDITIONMEET_OFFSET UNITYSDK_OFFSET(0x1749E750)
#define RPG_CLIENT_MAINMISSIONDATA__DOESDISTANCECONDITIONMEET_OFFSET UNITYSDK_OFFSET(0x1749E400)
#define RPG_CLIENT_MAINMISSIONDATA__DOESFCVCONDITIONMEET_OFFSET UNITYSDK_OFFSET(0x1749FDE0)
#define RPG_CLIENT_MAINMISSIONDATA__DOESPOSECONDITIONMEET_OFFSET UNITYSDK_OFFSET(0x1749E4B0)
#define RPG_CLIENT_MAINMISSIONDATA__DOESPROPSTATECONDITIONMEET_OFFSET UNITYSDK_OFFSET(0x1749FAE0)
#define RPG_CLIENT_MAINMISSIONDATA__DOSEERAREGIONERAFLIPSTATECONDITIONMEET_OFFSET UNITYSDK_OFFSET(0x174A0240)
#define RPG_CLIENT_MAINMISSIONDATA__DOSEGROUPPROPERTYCONDITIONMEET_OFFSET UNITYSDK_OFFSET(0x174A0B50)
#define RPG_CLIENT_MAINMISSIONDATA__DOSEPROPERAFLIPSHOWCONDITIONMEET_OFFSET UNITYSDK_OFFSET(0x174A0450)
#define RPG_CLIENT_MAINMISSIONDATA__DOSEPROPTIMELINESTATECONDITIONMEET_OFFSET UNITYSDK_OFFSET(0x174A07B0)
#define RPG_CLIENT_MAINMISSIONDATA__EPILOGUE_OFFSET UNITYSDK_OFFSET(0x1749DBA0)
#define RPG_CLIENT_MAINMISSIONDATA__FORWARD_OFFSET UNITYSDK_OFFSET(0x1749D910)
#define RPG_CLIENT_MAINMISSIONDATA__GETASSISTWAYPOINTINDEX_OFFSET UNITYSDK_OFFSET(0x1749D570)
#define RPG_CLIENT_MAINMISSIONDATA__GETCURFIVEDIMSERVICES_OFFSET UNITYSDK_OFFSET(0x1749BA20)
#define RPG_CLIENT_MAINMISSIONDATA__GETFASTCOMPLETECONFIG_OFFSET UNITYSDK_OFFSET(0x1749B490)
#define RPG_CLIENT_MAINMISSIONDATA__GETFASTCOMPLETETRIGGERTIME_OFFSET UNITYSDK_OFFSET(0x1749BEE0)
#define RPG_CLIENT_MAINMISSIONDATA__HIDECURDISPLAYASSISTWAYPOINT_OFFSET UNITYSDK_OFFSET(0x1749D160)
#define RPG_CLIENT_MAINMISSIONDATA__IFMAPROTATIONPOSECONDITIONFAILLEGACY_OFFSET UNITYSDK_OFFSET(0x174A12A0)
#define RPG_CLIENT_MAINMISSIONDATA__IFPROPSTATEBACKTRACELEGACY_OFFSET UNITYSDK_OFFSET(0x174A1B60)
#define RPG_CLIENT_MAINMISSIONDATA__IFPROPSTATECONDITIONFAILLEGACY_OFFSET UNITYSDK_OFFSET(0x174A1540)
#define RPG_CLIENT_MAINMISSIONDATA__IFPROPSTATECONDITIONMEETFORNOTIFYLEGACY_OFFSET UNITYSDK_OFFSET(0x174A1FB0)
#define RPG_CLIENT_MAINMISSIONDATA__IFUSEASSISTWAYPOINT_OFFSET UNITYSDK_OFFSET(0x1749C000)
#define RPG_CLIENT_MAINMISSIONDATA__INITASSISTWAYPOINT_OFFSET UNITYSDK_OFFSET(0x174A0EE0)
#define RPG_CLIENT_MAINMISSIONDATA__INITLISTENGROUPPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1749CBF0)
#define RPG_CLIENT_MAINMISSIONDATA__INIT_OFFSET UNITYSDK_OFFSET(0x17499EA0)
#define RPG_CLIENT_MAINMISSIONDATA__ISACTIVEFASTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1749B630)
#define RPG_CLIENT_MAINMISSIONDATA__ISALREADYINRANGEMINLEGACY_OFFSET UNITYSDK_OFFSET(0x174A1F10)
#define RPG_CLIENT_MAINMISSIONDATA__ISASSISTDATAPREPARED_OFFSET UNITYSDK_OFFSET(0x1749A480)
#define RPG_CLIENT_MAINMISSIONDATA__ISFASTCOMPLETEDATACHANGE_OFFSET UNITYSDK_OFFSET(0x1749EF60)
#define RPG_CLIENT_MAINMISSIONDATA__NEEDSHOWASSISTWAYPOINT_OFFSET UNITYSDK_OFFSET(0x1749E930)
#define RPG_CLIENT_MAINMISSIONDATA__NOTIFYASSISTWAYPOINTLEGACY_OFFSET UNITYSDK_OFFSET(0x174A1880)
#define RPG_CLIENT_MAINMISSIONDATA__ONDISPLAYASSISTWAYPOINTCHANGE_OFFSET UNITYSDK_OFFSET(0x1749D1D0)
#define RPG_CLIENT_MAINMISSIONDATA__ONFASTCOMPLETEACTIVECHANGE_OFFSET UNITYSDK_OFFSET(0x1749B7A0)
#define RPG_CLIENT_MAINMISSIONDATA__ONGROUPPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1749CB90)
#define RPG_CLIENT_MAINMISSIONDATA__PROCESSCONDITIONINVERSE_OFFSET UNITYSDK_OFFSET(0x174A0D90)
#define RPG_CLIENT_MAINMISSIONDATA__PROCESSFASTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1749CA20)
#define RPG_CLIENT_MAINMISSIONDATA__PROLOGUE_OFFSET UNITYSDK_OFFSET(0x1749D750)
#define RPG_CLIENT_MAINMISSIONDATA__REFRESHASSISTWAYPOINTLEGACY_OFFSET UNITYSDK_OFFSET(0x1749D030)
#define RPG_CLIENT_MAINMISSIONDATA__REFRESHINUSEASSITWAYPOINT_OFFSET UNITYSDK_OFFSET(0x1749D320)
#define RPG_CLIENT_MAINMISSIONDATA__REFRESH_OFFSET UNITYSDK_OFFSET(0x1749A4E0)
#define RPG_CLIENT_MAINMISSIONDATA__REGISTERGROUPPROPERTYCALLBACK_OFFSET UNITYSDK_OFFSET(0x1749AED0)
#define RPG_CLIENT_MAINMISSIONDATA__RESETASSISTWAYPOINTLOGIC_OFFSET UNITYSDK_OFFSET(0x17499AB0)
#define RPG_CLIENT_MAINMISSIONDATA__SETFASTCOMPLETEDATA_OFFSET UNITYSDK_OFFSET(0x1749EFE0)
#define RPG_CLIENT_MAINMISSIONDATA__STEP_OFFSET UNITYSDK_OFFSET(0x1749D5B0)
#define RPG_CLIENT_MAINMISSIONDATA__UNINITLISTENGROUPPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1749CFB0)
#define RPG_CLIENT_MAINMISSIONDATA__UNREGISTERALLGROUPPROPERTYCALLBACK_OFFSET UNITYSDK_OFFSET(0x1749B0E0)
#define RPG_CLIENT_MAINMISSIONDATA__UPDATEHASSISTWAYPOINTSERVERPREFS_OFFSET UNITYSDK_OFFSET(0x1749EB40)
#define RPG_CLIENT_MAINMISSIONDATA__UPDATESERVERFASTCOMPLETEPREFS_OFFSET UNITYSDK_OFFSET(0x1749BB90)
#define RPG_CLIENT_MAINMISSIONDATA___CALLSTEPINENDOFFRAME_B__68_0_OFFSET UNITYSDK_OFFSET(0x174A7D10)
#define RPG_CLIENT_MAINMISSIONDATA___INITASSISTWAYPOINT_B__59_0_OFFSET UNITYSDK_OFFSET(0x174A7D00)

namespace RPG::Client
{
	inline static constexpr unsigned int MainMissionData_TypeDefinitionIndex = 66176;

	class MainMissionData : public ::System::Object
	{
	public:
		::RPG::GameCore::MainMissionRow* Row; // 0x10
		::RPG::GameCore::AssistWayPoint* _DisplayAssistWaypoint; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ISubMissionGroupData*>* _SubMissionGroupList; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _TempIDs; // 0x28
		::RPG::GameCore::MissionChapterConfigRow* _ChapterCfg; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _AssistWaypointSubMissionIDList; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* _SubMissions; // 0x40
		::Class_1_32C09B38B00D2F10* _PiplelineData; // 0x48
		::System::Collections::Generic::List_1<::Class_1_09B5AE4A49F8C191*>* _AssistWayPointListenProperties; // 0x50
		::Class_1_09B5AE4A49F8C191* _TempListenGroupProperty; // 0x58
		::RPG::GameCore::MainMissionTypeConfigRow* _TypeCfg; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ISubMissionGroupData*>* _SubMissionGroupDict; // 0x68
		::UnityEngine::Coroutine* _StepCoroutine; // 0x70
		::System::Int32 _InUseFastCompleteIndex; // 0x78
		::System::Int32 _Index; // 0x7C
		::System::Int32 _LastUsePackIndex; // 0x80
		::System::Int32 _FastCompleteDisplayIndex; // 0x84
		::System::Int32 _InUseIndexLimit; // 0x88
		::System::UInt32 _DisplayPriority_k__BackingField; // 0x8C
		::RPG::GameCore::MainMissionType _MainMissionType_k__BackingField; // 0x90
		::System::Int32 _FinishedFastCompleteEndIndex; // 0x94
		::System::UInt32 _FastCompleteTimeStamp; // 0x98
		::System::Boolean _IsConfigShow; // 0x9C
		::System::Boolean _IsMissionDataInited; // 0x9D
		::System::Int32 _InUsePackIndex; // 0xA0
		::System::Boolean _FirstEnterAdventrueInited; // 0xA4
		::System::Boolean _LastFastCompleteActive; // 0xA5
		::System::Boolean _IsFinish_k__BackingField; // 0xA6
		::System::Boolean _AssistDataInited; // 0xA7
		::System::Int32 _FastCompletePackIndex; // 0xA8
		::System::Boolean _ArealdyReachRangeMinLegacy; // 0xAC
		::System::Boolean _HasFastCompleteTimeStamp; // 0xAD
		::System::Boolean _AssistActive; // 0xAE
		::System::Int32 _FinishedFastCompleteIndex; // 0xB0
		::System::Int32 _InUseFastCompleteEndIndex; // 0xB4
		::System::Int32 _DisplayIndex; // 0xB8
		::System::UInt32 ID; // 0xBC

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void OnHideWhenInRangeMin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_ONHIDEWHENINRANGEMIN_OFFSET))(this);
		}

		::System::Void OnOutOfRangeMin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_ONOUTOFRANGEMIN_OFFSET))(this);
		}

		::System::Void OnPropStateChange(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::PropState a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::PropState))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_ONPROPSTATECHANGE_OFFSET))(this, a1, a2, a3);
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

		::System::Void OnHoYoGroupActiveChange(::System::Boolean a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_ONHOYOGROUPACTIVECHANGE_OFFSET))(this, a1, a2);
		}

		::System::Void OnFiveDimTeleportToGame(::RPG::Client::LittleGame::FiveDim::FiveDimEnterType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimEnterType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_ONFIVEDIMTELEPORTTOGAME_OFFSET))(this, a1);
		}

		::System::Void OnFiveDimLeaveGame(::RPG::Client::LittleGame::FiveDim::FiveDimExitType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimExitType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_ONFIVEDIMLEAVEGAME_OFFSET))(this, a1);
		}

		::System::Boolean HasFastCompleteConfig()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_HASFASTCOMPLETECONFIG_OFFSET))(this);
		}

		::System::Boolean CheckIsActiveFastComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_CHECKISACTIVEFASTCOMPLETE_OFFSET))(this);
		}

		::System::Boolean TryGetFastCompleteAnchor(::System::UInt32& a1, ::System::UInt32& a2, ::System::UInt32& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_TRYGETFASTCOMPLETEANCHOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetCurFastCompleteFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_SETCURFASTCOMPLETEFINISH_OFFSET))(this);
		}

		::System::Single _GetFastCompleteTriggerTime(::RPG::GameCore::AssistWayPointFastComplete* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::AssistWayPointFastComplete*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__GETFASTCOMPLETETRIGGERTIME_OFFSET))(this, a1);
		}

		::RPG::GameCore::AssistWayPointFastComplete* _GetFastCompleteConfig(::System::Int32 a1)
		{
			return ((::RPG::GameCore::AssistWayPointFastComplete*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__GETFASTCOMPLETECONFIG_OFFSET))(this, a1);
		}

		::System::Boolean _IsActiveFastComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__ISACTIVEFASTCOMPLETE_OFFSET))(this);
		}

		::System::Void _OnFastCompleteActiveChange(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__ONFASTCOMPLETEACTIVECHANGE_OFFSET))(this, a1);
		}

		::Class_3_1E4F9B0ED3BF21DE* _GetCurFiveDimServices()
		{
			return ((::Class_3_1E4F9B0ED3BF21DE*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__GETCURFIVEDIMSERVICES_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__INIT_OFFSET))(this);
		}

		::System::Void _OnGroupPropertyChanged(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__ONGROUPPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _InitListenGroupProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__INITLISTENGROUPPROPERTIES_OFFSET))(this);
		}

		::System::Void _UnInitListenGroupProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__UNINITLISTENGROUPPROPERTIES_OFFSET))(this);
		}

		::System::Void _RegisterGroupPropertyCallback(::System::Boolean a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__REGISTERGROUPPROPERTYCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void _UnRegisterAllGroupPropertyCallback(::System::Boolean a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__UNREGISTERALLGROUPPROPERTYCALLBACK_OFFSET))(this, a1, a2);
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

		::System::Boolean _CheckForwardCondition(::RPG::GameCore::AssistWayPoint* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AssistWayPoint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__CHECKFORWARDCONDITION_OFFSET))(this, a1);
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

		::System::Void _OnDisplayAssistWayPointChange(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__ONDISPLAYASSISTWAYPOINTCHANGE_OFFSET))(this, a1);
		}

		::System::Boolean _IsFastCompleteDataChange(::System::Boolean a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__ISFASTCOMPLETEDATACHANGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _SetFastCompleteData(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__SETFASTCOMPLETEDATA_OFFSET))(this, a1);
		}

		::System::Void _UpdateServerFastCompletePrefs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__UPDATESERVERFASTCOMPLETEPREFS_OFFSET))(this);
		}

		::System::Boolean _DoesBacktraceConditionMeet(::RPG::GameCore::AssistWayPointConditionMain* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AssistWayPointConditionMain*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__DOESBACKTRACECONDITIONMEET_OFFSET))(this, a1);
		}

		::System::Boolean _DoesConditionMeet(::RPG::GameCore::AssistWayPointConditionMain* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AssistWayPointConditionMain*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__DOESCONDITIONMEET_OFFSET))(this, a1, a2);
		}

		::System::Boolean _DoesConditionMeet_1(::RPG::GameCore::AssistWayPointConditionPack* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AssistWayPointConditionPack*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__DOESCONDITIONMEET_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean _DoesConditionMeet_2(::RPG::GameCore::AssistWayPointCondition* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AssistWayPointCondition*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__DOESCONDITIONMEET_2_OFFSET))(this, a1, a2);
		}

		::System::Boolean _DoesDistanceConditionMeet(::RPG::GameCore::AssistWayPointDistanceCondition* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AssistWayPointDistanceCondition*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__DOESDISTANCECONDITIONMEET_OFFSET))(this, a1);
		}

		::System::Boolean _DoesPropStateConditionMeet(::RPG::GameCore::AssistWayPointPropStateCondition* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AssistWayPointPropStateCondition*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__DOESPROPSTATECONDITIONMEET_OFFSET))(this, a1, a2);
		}

		::System::Boolean _DoesFcvConditionMeet(::RPG::GameCore::AssistWayPointFCVCondition* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AssistWayPointFCVCondition*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__DOESFCVCONDITIONMEET_OFFSET))(this, a1, a2);
		}

		::System::Boolean _DoseEraRegionEraFlipStateConditionMeet(::RPG::GameCore::AssistWayPointRegionEraFlipStateCondition* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AssistWayPointRegionEraFlipStateCondition*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__DOSEERAREGIONERAFLIPSTATECONDITIONMEET_OFFSET))(this, a1, a2);
		}

		::System::Boolean _DosePropEraFlipShowConditionMeet(::RPG::GameCore::AssistWayPointPropEraFlipShowCondition* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AssistWayPointPropEraFlipShowCondition*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__DOSEPROPERAFLIPSHOWCONDITIONMEET_OFFSET))(this, a1, a2);
		}

		::System::Boolean _DosePropTimelineStateConditionMeet(::RPG::GameCore::AssistWayPointTimelineStateCondition* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AssistWayPointTimelineStateCondition*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__DOSEPROPTIMELINESTATECONDITIONMEET_OFFSET))(this, a1, a2);
		}

		::System::Boolean _DoseGroupPropertyConditionMeet(::RPG::GameCore::AssistWayPointGroupPropertyCondition* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AssistWayPointGroupPropertyCondition*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__DOSEGROUPPROPERTYCONDITIONMEET_OFFSET))(this, a1, a2);
		}

		::System::Boolean _DoesPoseConditionMeet(::RPG::GameCore::AssistWayPoint* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AssistWayPoint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__DOESPOSECONDITIONMEET_OFFSET))(this, a1);
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

		::System::Void _ResetAssistWaypointLogic(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__RESETASSISTWAYPOINTLOGIC_OFFSET))(this, a1);
		}

		::System::Void _UpdatehAssistWaypointServerPrefs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__UPDATEHASSISTWAYPOINTSERVERPREFS_OFFSET))(this);
		}

		::System::Boolean _ProcessConditionInverse(::RPG::GameCore::AssistWayPointCondition* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AssistWayPointCondition*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__PROCESSCONDITIONINVERSE_OFFSET))(this, a1, a2);
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

		::System::Void OnPropStateChangeLegacy(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::PropState a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::PropState))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_ONPROPSTATECHANGELEGACY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnMapPoseSwitchEndLegacy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_ONMAPPOSESWITCHENDLEGACY_OFFSET))(this);
		}

		::System::Boolean _IfPropStateConditionFailLegacy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__IFPROPSTATECONDITIONFAILLEGACY_OFFSET))(this);
		}

		::System::Boolean _IfPropStateBacktraceLegacy(::System::Int32& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__IFPROPSTATEBACKTRACELEGACY_OFFSET))(this, a1);
		}

		::System::Void _RefreshAssistWaypointLegacy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__REFRESHASSISTWAYPOINTLEGACY_OFFSET))(this);
		}

		::System::Void _NotifyAssistWaypointLegacy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__NOTIFYASSISTWAYPOINTLEGACY_OFFSET))(this);
		}

		::System::Boolean _IfPropStateConditionMeetForNotifyLegacy(::RPG::GameCore::AssistWayPoint* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AssistWayPoint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__IFPROPSTATECONDITIONMEETFORNOTIFYLEGACY_OFFSET))(this, a1);
		}

		::System::Boolean _IfMapRotationPoseConditionFailLegacy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__IFMAPROTATIONPOSECONDITIONFAILLEGACY_OFFSET))(this);
		}

		::System::Boolean _IsAlreadyInRangeMinLegacy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__ISALREADYINRANGEMINLEGACY_OFFSET))(this);
		}

		::System::Boolean AddSubMission(::RPG::Client::SubMissionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_ADDSUBMISSION_OFFSET))(this, a1);
		}

		::System::Void InitMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_INITMISSIONDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ISubMissionGroupData*>* GetSubMissionGroups()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ISubMissionGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_GETSUBMISSIONGROUPS_OFFSET))(this);
		}

		::System::Void DeleteSubMission(::RPG::Client::SubMissionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_DELETESUBMISSION_OFFSET))(this, a1);
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

		::System::Boolean IsInExpectedEntrance(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_ISINEXPECTEDENTRANCE_OFFSET))(this, a1);
		}

		::System::Boolean IsInTargetFloor(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_ISINTARGETFLOOR_OFFSET))(this, a1);
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

		::System::Void _CheckDataInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__CHECKDATAINIT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::SubMissionRelationConfig*>* _BuildMonitorSubMissionRelationLookup()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::SubMissionRelationConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA__BUILDMONITORSUBMISSIONRELATIONLOOKUP_OFFSET))(this);
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

		::System::Void set_IsFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_SET_ISFINISH_OFFSET))(this, a1);
		}

		::System::Boolean IsFinishInVerse(::RPG::Client::MapDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_ISFINISHINVERSE_OFFSET))(this, a1);
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

		::System::Boolean IsStartInVerse(::RPG::Client::MapDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_ISSTARTINVERSE_OFFSET))(this, a1);
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

		::System::Boolean get_IsSubtitleValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_GET_ISSUBTITLEVALID_OFFSET))(this);
		}

		::RPG::Client::TextID get_ChapterSequence()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_GET_CHAPTERSEQUENCE_OFFSET))(this);
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

		::System::Void set_MainMissionType(::RPG::GameCore::MainMissionType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MainMissionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_SET_MAINMISSIONTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_DisplayPriority()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_GET_DISPLAYPRIORITY_OFFSET))(this);
		}

		::System::Void set_DisplayPriority(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAINMISSIONDATA_SET_DISPLAYPRIORITY_OFFSET))(this, a1);
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
