#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChronicleStatus.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChronicleNodeType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EarlyAccessContent; }
namespace RPG::Client { class MainMissionData; }
namespace RPG::Client { class MissionChronicleBasePathData; }
namespace RPG::Client { class MissionChronicleMainPathData; }
namespace RPG::Client { class MissionChronicleSubPathData; }
namespace RPG::Client { class PenaconyEndmostChroniclePathData; }
namespace RPG::Client::MissionReplayData { class IMissionReplayData; }
namespace RPG::GameCore { class WorldDataConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_CHRONICLEWORLDPREDICTPATH_OFFSET UNITYSDK_OFFSET(0x98F7D20)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_CHRONICLEWORLDPROCESSINGPATH_OFFSET UNITYSDK_OFFSET(0x98F7DF0)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_CURRENTPROCESSINGMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x98F7CC0)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_EARLYACCESSCONTENTID_OFFSET UNITYSDK_OFFSET(0x98F7BD0)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_EARLYACCESSCONTENT_OFFSET UNITYSDK_OFFSET(0x98F7BF0)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x98F7A30)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x98F7B30)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_ISCANTAKEMISSION_OFFSET UNITYSDK_OFFSET(0x98F7B70)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_ISCONNECTMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0x98F7B90)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_ISLASTESTUPDATED_OFFSET UNITYSDK_OFFSET(0x98F7B50)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_ISMAINPATH_OFFSET UNITYSDK_OFFSET(0x98F79F0)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_ISONGOING_OFFSET UNITYSDK_OFFSET(0x98F7BB0)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x98F7A50)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_MISSIONCONCLUSION_OFFSET UNITYSDK_OFFSET(0x98F7AD0)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_MISSIONREPLAYDATA_OFFSET UNITYSDK_OFFSET(0x98F7CE0)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_MISSIONTYPECOLOR_OFFSET UNITYSDK_OFFSET(0x98F7B10)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_MISSIONTYPEICONPATH_OFFSET UNITYSDK_OFFSET(0x98F7AF0)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x98F7A10)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x98F7A70)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x98F7D00)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x98F7AB0)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_WORLDID_OFFSET UNITYSDK_OFFSET(0x98F7A90)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET__WORLDDATAROW_OFFSET UNITYSDK_OFFSET(0x98F7D90)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SETDATABYENDMOSTPATHDATA_OFFSET UNITYSDK_OFFSET(0x98F77C0)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SETDATABYMAINPATH_OFFSET UNITYSDK_OFFSET(0x98F7300)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SETDATABYSUBPATH_OFFSET UNITYSDK_OFFSET(0x98F7690)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_CURRENTPROCESSINGMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x98F7CD0)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_EARLYACCESSCONTENTID_OFFSET UNITYSDK_OFFSET(0x98F7BE0)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x98F7A40)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x98F7B40)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_ISCANTAKEMISSION_OFFSET UNITYSDK_OFFSET(0x98F7B80)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_ISCONNECTMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0x98F7BA0)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_ISLASTESTUPDATED_OFFSET UNITYSDK_OFFSET(0x98F7B60)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_ISMAINPATH_OFFSET UNITYSDK_OFFSET(0x98F7A00)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_ISONGOING_OFFSET UNITYSDK_OFFSET(0x98F7BC0)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x98F7A60)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_MISSIONCONCLUSION_OFFSET UNITYSDK_OFFSET(0x98F7AE0)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_MISSIONREPLAYDATA_OFFSET UNITYSDK_OFFSET(0x98F7CF0)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_MISSIONTYPECOLOR_OFFSET UNITYSDK_OFFSET(0x98F7B20)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_MISSIONTYPEICONPATH_OFFSET UNITYSDK_OFFSET(0x98F7B00)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x98F7A20)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x98F7A80)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x98F7D10)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x98F7AC0)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_WORLDID_OFFSET UNITYSDK_OFFSET(0x98F7AA0)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x98F72D0)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA__SETDATABYPATHDATA_OFFSET UNITYSDK_OFFSET(0x98F7580)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookChronicleDisplayData_TypeDefinitionIndex = 53279;

	class HandbookChronicleDisplayData : public ::System::Object
	{
	public:
		::System::String* _MissionTypeColor_k__BackingField; // 0x10
		::System::String* _ImagePath_k__BackingField; // 0x18
		::System::String* _MissionTypeIconPath_k__BackingField; // 0x20
		::RPG::Client::MainMissionData* _CurrentProcessingMissionData_k__BackingField; // 0x28
		::RPG::Client::MissionReplayData::IMissionReplayData* _MissionReplayData_k__BackingField; // 0x30
		::System::UInt32 _WorldID_k__BackingField; // 0x38
		::RPG::GameCore::ChronicleNodeType _NodeType_k__BackingField; // 0x3C
		::System::UInt32 _MainMissionID_k__BackingField; // 0x40
		::System::Boolean _IsLastestUpdated_k__BackingField; // 0x44
		::System::Boolean _IsCanTakeMission_k__BackingField; // 0x45
		::System::Boolean _IsConnectMissionFinish_k__BackingField; // 0x46
		::System::Boolean _IsMainPath_k__BackingField; // 0x47
		::System::UInt32 _EarlyAccessContentID_k__BackingField; // 0x48
		::System::Int32 _StoryLineID_k__BackingField; // 0x4C
		::RPG::Client::TextID _Title_k__BackingField; // 0x50
		::System::UInt32 _ID_k__BackingField; // 0x60
		::System::Boolean _IsOnGoing_k__BackingField; // 0x64
		::RPG::Client::TextID _MissionConclusion_k__BackingField; // 0x68
		::RPG::Client::ChronicleStatus _Status_k__BackingField; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA__CTOR_OFFSET))(this);
		}

		::System::Void SetDataByMainPath(::RPG::Client::MissionChronicleMainPathData* mainPathData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionChronicleMainPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SETDATABYMAINPATH_OFFSET))(this, mainPathData);
		}

		::System::Void SetDataBySubPath(::RPG::Client::MissionChronicleSubPathData* subPathData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionChronicleSubPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SETDATABYSUBPATH_OFFSET))(this, subPathData);
		}

		::System::Void SetDataByEndmostPathData(::RPG::Client::PenaconyEndmostChroniclePathData* endmostPathData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PenaconyEndmostChroniclePathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SETDATABYENDMOSTPATHDATA_OFFSET))(this, endmostPathData);
		}

		::System::Void _SetDataByPathData(::RPG::Client::MissionChronicleBasePathData* pathData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionChronicleBasePathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA__SETDATABYPATHDATA_OFFSET))(this, pathData);
		}

		::System::Boolean get_IsMainPath()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_ISMAINPATH_OFFSET))(this);
		}

		::System::Void set_IsMainPath(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_ISMAINPATH_OFFSET))(this, value);
		}

		::RPG::GameCore::ChronicleNodeType get_NodeType()
		{
			return ((::RPG::GameCore::ChronicleNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_NODETYPE_OFFSET))(this);
		}

		::System::Void set_NodeType(::RPG::GameCore::ChronicleNodeType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChronicleNodeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_NODETYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_ID_OFFSET))(this, value);
		}

		::System::UInt32 get_MainMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_MAINMISSIONID_OFFSET))(this);
		}

		::System::Void set_MainMissionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_MAINMISSIONID_OFFSET))(this, value);
		}

		::RPG::Client::ChronicleStatus get_Status()
		{
			return ((::RPG::Client::ChronicleStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::RPG::Client::ChronicleStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChronicleStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_STATUS_OFFSET))(this, value);
		}

		::System::UInt32 get_WorldID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_WORLDID_OFFSET))(this);
		}

		::System::Void set_WorldID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_WORLDID_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_TITLE_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_MissionConclusion()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_MISSIONCONCLUSION_OFFSET))(this);
		}

		::System::Void set_MissionConclusion(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_MISSIONCONCLUSION_OFFSET))(this, value);
		}

		::System::String* get_MissionTypeIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_MISSIONTYPEICONPATH_OFFSET))(this);
		}

		::System::Void set_MissionTypeIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_MISSIONTYPEICONPATH_OFFSET))(this, value);
		}

		::System::String* get_MissionTypeColor()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_MISSIONTYPECOLOR_OFFSET))(this);
		}

		::System::Void set_MissionTypeColor(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_MISSIONTYPECOLOR_OFFSET))(this, value);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::Void set_ImagePath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_IMAGEPATH_OFFSET))(this, value);
		}

		::System::Boolean get_IsLastestUpdated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_ISLASTESTUPDATED_OFFSET))(this);
		}

		::System::Void set_IsLastestUpdated(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_ISLASTESTUPDATED_OFFSET))(this, value);
		}

		::System::Boolean get_IsCanTakeMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_ISCANTAKEMISSION_OFFSET))(this);
		}

		::System::Void set_IsCanTakeMission(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_ISCANTAKEMISSION_OFFSET))(this, value);
		}

		::System::Boolean get_IsConnectMissionFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_ISCONNECTMISSIONFINISH_OFFSET))(this);
		}

		::System::Void set_IsConnectMissionFinish(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_ISCONNECTMISSIONFINISH_OFFSET))(this, value);
		}

		::System::Boolean get_IsOnGoing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_ISONGOING_OFFSET))(this);
		}

		::System::Void set_IsOnGoing(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_ISONGOING_OFFSET))(this, value);
		}

		::System::UInt32 get_EarlyAccessContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_EARLYACCESSCONTENTID_OFFSET))(this);
		}

		::System::Void set_EarlyAccessContentID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_EARLYACCESSCONTENTID_OFFSET))(this, value);
		}

		::RPG::Client::EarlyAccessContent* get_EarlyAccessContent()
		{
			return ((::RPG::Client::EarlyAccessContent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_EARLYACCESSCONTENT_OFFSET))(this);
		}

		::RPG::Client::MainMissionData* get_CurrentProcessingMissionData()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_CURRENTPROCESSINGMISSIONDATA_OFFSET))(this);
		}

		::System::Void set_CurrentProcessingMissionData(::RPG::Client::MainMissionData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_CURRENTPROCESSINGMISSIONDATA_OFFSET))(this, value);
		}

		::RPG::Client::MissionReplayData::IMissionReplayData* get_MissionReplayData()
		{
			return ((::RPG::Client::MissionReplayData::IMissionReplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_MISSIONREPLAYDATA_OFFSET))(this);
		}

		::System::Void set_MissionReplayData(::RPG::Client::MissionReplayData::IMissionReplayData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionReplayData::IMissionReplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_MISSIONREPLAYDATA_OFFSET))(this, value);
		}

		::System::Int32 get_StoryLineID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_STORYLINEID_OFFSET))(this);
		}

		::System::Void set_StoryLineID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_STORYLINEID_OFFSET))(this, value);
		}

		::System::String* get_ChronicleWorldPredictPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_CHRONICLEWORLDPREDICTPATH_OFFSET))(this);
		}

		::System::String* get_ChronicleWorldProcessingPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_CHRONICLEWORLDPROCESSINGPATH_OFFSET))(this);
		}

		::RPG::GameCore::WorldDataConfigRow* get__WorldDataRow()
		{
			return ((::RPG::GameCore::WorldDataConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET__WORLDDATAROW_OFFSET))(this);
		}
	};
}
