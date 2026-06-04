#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MissionWaypointInfo.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/RPG/GameCore/MissionActivePlaneType.h"
#include "unitysdk/RPG/GameCore/MissionWayPointType.h"
#include "unitysdk/RPG/GameCore/PlaneType.h"
#include "unitysdk/RPG/GameCore/SubMissionState.h"
#include "unitysdk/RPG/GameCore/SubmissionLogicType.h"
#include "unitysdk/RPG/GameCore/SubmissionOptionalTrackMode.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_668FE281FA72D3E8_17;
namespace RPG::GameCore { class SubMissionInfoConfig; }
namespace RPG::GameCore { class SubMissionRow; }
namespace System { class String; }

#define RPG_CLIENT_SUBMISSIONDATA_CHECKISFLOORCONNECTED_OFFSET UNITYSDK_OFFSET(0xC93CD20)
#define RPG_CLIENT_SUBMISSIONDATA_GETORIGINALWAYPOINTINFO_OFFSET UNITYSDK_OFFSET(0xC93C7B0)
#define RPG_CLIENT_SUBMISSIONDATA_GETWAYPOINTINFO_OFFSET UNITYSDK_OFFSET(0xC93B970)
#define RPG_CLIENT_SUBMISSIONDATA_GET_AUDIOEMOTIONSTATE_OFFSET UNITYSDK_OFFSET(0xC93DD10)
#define RPG_CLIENT_SUBMISSIONDATA_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0xC93E5F0)
#define RPG_CLIENT_SUBMISSIONDATA_GET_CURRENTPROGRESS_OFFSET UNITYSDK_OFFSET(0xC93DB50)
#define RPG_CLIENT_SUBMISSIONDATA_GET_FIXTRANSFERROTATION_OFFSET UNITYSDK_OFFSET(0xC93E870)
#define RPG_CLIENT_SUBMISSIONDATA_GET_FROCEMAPHINT_OFFSET UNITYSDK_OFFSET(0xC93DC60)
#define RPG_CLIENT_SUBMISSIONDATA_GET_HINTMAXDISTANCE_OFFSET UNITYSDK_OFFSET(0xC93E500)
#define RPG_CLIENT_SUBMISSIONDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xC93D7C0)
#define RPG_CLIENT_SUBMISSIONDATA_GET_ISALLFLOORMISSION_OFFSET UNITYSDK_OFFSET(0xC93E580)
#define RPG_CLIENT_SUBMISSIONDATA_GET_ISCONTROLHINTBYDISTANCE_OFFSET UNITYSDK_OFFSET(0xC93E390)
#define RPG_CLIENT_SUBMISSIONDATA_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xC93DB70)
#define RPG_CLIENT_SUBMISSIONDATA_GET_ISINMISSIONLEVELGRAPHTARGETFLOOR_OFFSET UNITYSDK_OFFSET(0xC93E0F0)
#define RPG_CLIENT_SUBMISSIONDATA_GET_ISINTARGETWAYPOINTFLOOR_OFFSET UNITYSDK_OFFSET(0xC93D040)
#define RPG_CLIENT_SUBMISSIONDATA_GET_ISMUTENAV_OFFSET UNITYSDK_OFFSET(0xC93E820)
#define RPG_CLIENT_SUBMISSIONDATA_GET_ISSHOWINMAP_OFFSET UNITYSDK_OFFSET(0xC93DBA0)
#define RPG_CLIENT_SUBMISSIONDATA_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xC93DCB0)
#define RPG_CLIENT_SUBMISSIONDATA_GET_ISSTART_OFFSET UNITYSDK_OFFSET(0xC93DB90)
#define RPG_CLIENT_SUBMISSIONDATA_GET_ISTAKENANDNOTSTARTED_OFFSET UNITYSDK_OFFSET(0xC93DB80)
#define RPG_CLIENT_SUBMISSIONDATA_GET_ISTRACKBYMESSAGE_OFFSET UNITYSDK_OFFSET(0xC93DEB0)
#define RPG_CLIENT_SUBMISSIONDATA_GET_ISUNKNOW_OFFSET UNITYSDK_OFFSET(0xC93DD00)
#define RPG_CLIENT_SUBMISSIONDATA_GET_LEVELFLOORID_OFFSET UNITYSDK_OFFSET(0xC93DAD0)
#define RPG_CLIENT_SUBMISSIONDATA_GET_LEVELPLANEID_OFFSET UNITYSDK_OFFSET(0xC93C9D0)
#define RPG_CLIENT_SUBMISSIONDATA_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0xC93D840)
#define RPG_CLIENT_SUBMISSIONDATA_GET_LOGICTYPE_OFFSET UNITYSDK_OFFSET(0xC93E780)
#define RPG_CLIENT_SUBMISSIONDATA_GET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xC93D7D0)
#define RPG_CLIENT_SUBMISSIONDATA_GET_MESSAGEGROUPID_OFFSET UNITYSDK_OFFSET(0xC93DF70)
#define RPG_CLIENT_SUBMISSIONDATA_GET_OPTIONALTRACKMODE_OFFSET UNITYSDK_OFFSET(0xC93E7A0)
#define RPG_CLIENT_SUBMISSIONDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xC93DB20)
#define RPG_CLIENT_SUBMISSIONDATA_GET_SOUNDEFFECTSTATE_OFFSET UNITYSDK_OFFSET(0xC93DDE0)
#define RPG_CLIENT_SUBMISSIONDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xC93DB30)
#define RPG_CLIENT_SUBMISSIONDATA_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0xC93E5A0)
#define RPG_CLIENT_SUBMISSIONDATA_GET_TOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0xC93E730)
#define RPG_CLIENT_SUBMISSIONDATA_GET_WAYPOINTFLOORID_OFFSET UNITYSDK_OFFSET(0xC93E340)
#define RPG_CLIENT_SUBMISSIONDATA_GET_WAYPOINTTYPE_OFFSET UNITYSDK_OFFSET(0xC93E030)
#define RPG_CLIENT_SUBMISSIONDATA_INITCONFIGINFO_OFFSET UNITYSDK_OFFSET(0xC93D360)
#define RPG_CLIENT_SUBMISSIONDATA_ISINCURRENTVERSE_OFFSET UNITYSDK_OFFSET(0xC93BB10)
#define RPG_CLIENT_SUBMISSIONDATA_SET_AUDIOEMOTIONSTATE_OFFSET UNITYSDK_OFFSET(0xC93DDD0)
#define RPG_CLIENT_SUBMISSIONDATA_SET_CURRENTPROGRESS_OFFSET UNITYSDK_OFFSET(0xC93DB60)
#define RPG_CLIENT_SUBMISSIONDATA_SET_ISALLFLOORMISSION_OFFSET UNITYSDK_OFFSET(0xC93E590)
#define RPG_CLIENT_SUBMISSIONDATA_SET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xC93E7C0)
#define RPG_CLIENT_SUBMISSIONDATA_SET_LOGICTYPE_OFFSET UNITYSDK_OFFSET(0xC93E790)
#define RPG_CLIENT_SUBMISSIONDATA_SET_OPTIONALTRACKMODE_OFFSET UNITYSDK_OFFSET(0xC93E7B0)
#define RPG_CLIENT_SUBMISSIONDATA_SET_SOUNDEFFECTSTATE_OFFSET UNITYSDK_OFFSET(0xC93DEA0)
#define RPG_CLIENT_SUBMISSIONDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xC93DB40)
#define RPG_CLIENT_SUBMISSIONDATA__CALCWAYPOINTINFO_OFFSET UNITYSDK_OFFSET(0xC93BC40)
#define RPG_CLIENT_SUBMISSIONDATA__CHECKDATAINIT_OFFSET UNITYSDK_OFFSET(0xC93D710)
#define RPG_CLIENT_SUBMISSIONDATA__CHECKISINSAMEWORLD_OFFSET UNITYSDK_OFFSET(0xC93CA20)
#define RPG_CLIENT_SUBMISSIONDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0xC93D560)
#define RPG_CLIENT_SUBMISSIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC93D200)
#define RPG_CLIENT_SUBMISSIONDATA__GETMISSIONWAYPOINTINFO_OFFSET UNITYSDK_OFFSET(0xC93C1C0)
#define RPG_CLIENT_SUBMISSIONDATA__INITSTORYLINEIDS_OFFSET UNITYSDK_OFFSET(0xC93D6B0)
#define RPG_CLIENT_SUBMISSIONDATA__ISINROGUEPLANE_OFFSET UNITYSDK_OFFSET(0xC93CC10)

namespace RPG::Client
{
	inline static constexpr unsigned int SubMissionData_TypeDefinitionIndex = 61893;

	class SubMissionData : public ::System::Object
	{
	public:
		::System::String* _AudioEmotionState; // 0x10
		::System::String* _SoundEffectState; // 0x18
		::RPG::GameCore::SubMissionRow* _Row; // 0x20
		::System::UInt32 _LevelPlaneID; // 0x28
		::RPG::GameCore::SubmissionLogicType _LogicType_k__BackingField; // 0x2C
		::RPG::GameCore::SubmissionOptionalTrackMode _OptionalTrackMode_k__BackingField; // 0x30
		::System::UInt32 _WayPointFloorID; // 0x34
		::RPG::GameCore::SubMissionState _Status; // 0x38
		::System::UInt32 _LevelFloorID; // 0x3C
		::System::UInt32 _StoryLineID; // 0x40
		::System::UInt32 _CurrentProgress; // 0x44
		::System::Nullable_1<::System::Boolean> _IsControlHintByDistance; // 0x48
		::System::Boolean _IsAllFloorMission_k__BackingField; // 0x4A
		::RPG::Client::MissionWaypointInfo _NoneMissionWaypointInfo; // 0x4C
		::RPG::GameCore::MissionActivePlaneType _MissionActivePlaneType; // 0x78
		::System::UInt32 _TotalProgress; // 0x7C
		::System::UInt32 _ID; // 0x80
		::System::Boolean _FroceMapHint; // 0x84
		::System::Boolean _IsConfigInfoInited; // 0x85
		::System::Boolean _IsShow; // 0x86
		::System::Boolean _IsMuteNav; // 0x87
		::System::Single _OverrideHintMaxDistance; // 0x88
		::RPG::Client::ReasonBool_1<::RPG::GameCore::PlaneType> _MissionActivePlane; // 0x90

		::System::Void _ctor(::Class_1_668FE281FA72D3E8_17* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_668FE281FA72D3E8_17*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA__CTOR_1_OFFSET))(this, a1);
		}

		::RPG::Client::MissionWaypointInfo GetWaypointInfo()
		{
			return ((::RPG::Client::MissionWaypointInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GETWAYPOINTINFO_OFFSET))(this);
		}

		::RPG::Client::MissionWaypointInfo GetOriginalWaypointInfo()
		{
			return ((::RPG::Client::MissionWaypointInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GETORIGINALWAYPOINTINFO_OFFSET))(this);
		}

		::System::Boolean _CalcWaypointInfo(::System::UInt32& a1, ::System::UInt32& a2, ::System::UInt32& a3, ::System::Boolean& a4, ::System::UInt32 a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&, ::System::Boolean&, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA__CALCWAYPOINTINFO_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean _CheckIsInSameWorld()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA__CHECKISINSAMEWORLD_OFFSET))(this);
		}

		::System::Boolean _IsInRoguePlane()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA__ISINROGUEPLANE_OFFSET))(this);
		}

		::RPG::Client::MissionWaypointInfo _GetMissionWayPointInfo(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::RPG::Client::MissionWaypointInfo(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA__GETMISSIONWAYPOINTINFO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean CheckIsFloorConnected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_CHECKISFLOORCONNECTED_OFFSET))(this);
		}

		::System::Void InitConfigInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_INITCONFIGINFO_OFFSET))(this);
		}

		::System::Boolean IsInCurrentVerse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_ISINCURRENTVERSE_OFFSET))(this);
		}

		::System::Void _CheckDataInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA__CHECKDATAINIT_OFFSET))(this);
		}

		::System::Void _InitStoryLineIDs(::RPG::GameCore::SubMissionInfoConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SubMissionInfoConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA__INITSTORYLINEIDS_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_MainMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_MAINMISSIONID_OFFSET))(this);
		}

		::System::String* get_Location()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_LOCATION_OFFSET))(this);
		}

		::RPG::GameCore::SubMissionRow* get_Row()
		{
			return ((::RPG::GameCore::SubMissionRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_ROW_OFFSET))(this);
		}

		::RPG::GameCore::SubMissionState get_Status()
		{
			return ((::RPG::GameCore::SubMissionState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::RPG::GameCore::SubMissionState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SubMissionState))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_SET_STATUS_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurrentProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_CURRENTPROGRESS_OFFSET))(this);
		}

		::System::Void set_CurrentProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_SET_CURRENTPROGRESS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_ISFINISH_OFFSET))(this);
		}

		::System::Boolean get_IsTakenAndNotstarted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_ISTAKENANDNOTSTARTED_OFFSET))(this);
		}

		::System::Boolean get_IsStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_ISSTART_OFFSET))(this);
		}

		::System::Boolean get_IsShowInMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_ISSHOWINMAP_OFFSET))(this);
		}

		::System::Boolean get_IsUnknow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_ISUNKNOW_OFFSET))(this);
		}

		::System::String* get_AudioEmotionState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_AUDIOEMOTIONSTATE_OFFSET))(this);
		}

		::System::Void set_AudioEmotionState(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_SET_AUDIOEMOTIONSTATE_OFFSET))(this, a1);
		}

		::System::String* get_SoundEffectState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_SOUNDEFFECTSTATE_OFFSET))(this);
		}

		::System::Void set_SoundEffectState(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_SET_SOUNDEFFECTSTATE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsTrackByMessage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_ISTRACKBYMESSAGE_OFFSET))(this);
		}

		::System::UInt32 get_MessageGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_MESSAGEGROUPID_OFFSET))(this);
		}

		::RPG::GameCore::MissionWayPointType get_WayPointType()
		{
			return ((::RPG::GameCore::MissionWayPointType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_WAYPOINTTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsInMissionLevelGraphTargetFloor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_ISINMISSIONLEVELGRAPHTARGETFLOOR_OFFSET))(this);
		}

		::System::Boolean get_IsInTargetWaypointFloor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_ISINTARGETWAYPOINTFLOOR_OFFSET))(this);
		}

		::System::UInt32 get_LevelPlaneID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_LEVELPLANEID_OFFSET))(this);
		}

		::System::UInt32 get_LevelFloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_LEVELFLOORID_OFFSET))(this);
		}

		::System::UInt32 get_WayPointFloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_WAYPOINTFLOORID_OFFSET))(this);
		}

		::System::Boolean get_FroceMapHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_FROCEMAPHINT_OFFSET))(this);
		}

		::System::Boolean get_IsControlHintByDistance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_ISCONTROLHINTBYDISTANCE_OFFSET))(this);
		}

		::System::Single get_HintMaxDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_HINTMAXDISTANCE_OFFSET))(this);
		}

		::System::Boolean get_IsAllFloorMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_ISALLFLOORMISSION_OFFSET))(this);
		}

		::System::Void set_IsAllFloorMission(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_SET_ISALLFLOORMISSION_OFFSET))(this, a1);
		}

		::System::UInt32 get_StoryLineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_STORYLINEID_OFFSET))(this);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_CONTENTID_OFFSET))(this);
		}

		::System::UInt32 get_TotalProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_TOTALPROGRESS_OFFSET))(this);
		}

		::RPG::GameCore::SubmissionLogicType get_LogicType()
		{
			return ((::RPG::GameCore::SubmissionLogicType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_LOGICTYPE_OFFSET))(this);
		}

		::System::Void set_LogicType(::RPG::GameCore::SubmissionLogicType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SubmissionLogicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_SET_LOGICTYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::SubmissionOptionalTrackMode get_OptionalTrackMode()
		{
			return ((::RPG::GameCore::SubmissionOptionalTrackMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_OPTIONALTRACKMODE_OFFSET))(this);
		}

		::System::Void set_OptionalTrackMode(::RPG::GameCore::SubmissionOptionalTrackMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SubmissionOptionalTrackMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_SET_OPTIONALTRACKMODE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_ISSHOW_OFFSET))(this);
		}

		::System::Void set_IsShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_SET_ISSHOW_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMuteNav()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_ISMUTENAV_OFFSET))(this);
		}

		::System::Boolean get_FixTransferRotation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBMISSIONDATA_GET_FIXTRANSFERROTATION_OFFSET))(this);
		}
	};
}
