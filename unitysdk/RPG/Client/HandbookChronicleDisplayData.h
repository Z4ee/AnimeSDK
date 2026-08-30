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

#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_CHRONICLEWORLDPREDICTPATH_OFFSET UNITYSDK_OFFSET(0x1A04CDB0)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_CHRONICLEWORLDPROCESSINGPATH_OFFSET UNITYSDK_OFFSET(0x1A04CEB0)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_CURRENTPROCESSINGMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x1A04CD50)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_EARLYACCESSCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A04CC60)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_EARLYACCESSCONTENT_OFFSET UNITYSDK_OFFSET(0x1A04CC80)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A04CAC0)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1A04CBC0)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_ISCANTAKEMISSION_OFFSET UNITYSDK_OFFSET(0x1A04CC00)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_ISCONNECTMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0x1A04CC20)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_ISLASTESTUPDATED_OFFSET UNITYSDK_OFFSET(0x1A04CBE0)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_ISMAINPATH_OFFSET UNITYSDK_OFFSET(0x1A04CA80)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_ISONGOING_OFFSET UNITYSDK_OFFSET(0x1A04CC40)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x1A04CAE0)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_MISSIONCONCLUSION_OFFSET UNITYSDK_OFFSET(0x1A04CB60)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_MISSIONREPLAYDATA_OFFSET UNITYSDK_OFFSET(0x1A04CD70)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_MISSIONTYPECOLOR_OFFSET UNITYSDK_OFFSET(0x1A04CBA0)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_MISSIONTYPEICONPATH_OFFSET UNITYSDK_OFFSET(0x1A04CB80)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1A04CAA0)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1A04CB00)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x1A04CD90)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1A04CB40)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_WORLDID_OFFSET UNITYSDK_OFFSET(0x1A04CB20)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET__WORLDDATAROW_OFFSET UNITYSDK_OFFSET(0x1A04CE50)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SETDATABYENDMOSTPATHDATA_OFFSET UNITYSDK_OFFSET(0x1A04C730)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SETDATABYMAINPATH_OFFSET UNITYSDK_OFFSET(0x1A04C000)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SETDATABYSUBPATH_OFFSET UNITYSDK_OFFSET(0x1A04C5A0)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_CURRENTPROCESSINGMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x1A04CD60)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_EARLYACCESSCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A04CC70)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1A04CAD0)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1A04CBD0)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_ISCANTAKEMISSION_OFFSET UNITYSDK_OFFSET(0x1A04CC10)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_ISCONNECTMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0x1A04CC30)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_ISLASTESTUPDATED_OFFSET UNITYSDK_OFFSET(0x1A04CBF0)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_ISMAINPATH_OFFSET UNITYSDK_OFFSET(0x1A04CA90)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_ISONGOING_OFFSET UNITYSDK_OFFSET(0x1A04CC50)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x1A04CAF0)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_MISSIONCONCLUSION_OFFSET UNITYSDK_OFFSET(0x1A04CB70)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_MISSIONREPLAYDATA_OFFSET UNITYSDK_OFFSET(0x1A04CD80)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_MISSIONTYPECOLOR_OFFSET UNITYSDK_OFFSET(0x1A04CBB0)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_MISSIONTYPEICONPATH_OFFSET UNITYSDK_OFFSET(0x1A04CB90)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1A04CAB0)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x1A04CB10)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x1A04CDA0)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x1A04CB50)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_WORLDID_OFFSET UNITYSDK_OFFSET(0x1A04CB30)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A04BFD0)
#define RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA__SETDATABYPATHDATA_OFFSET UNITYSDK_OFFSET(0x1A04C280)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookChronicleDisplayData_TypeDefinitionIndex = 65676;

	class HandbookChronicleDisplayData : public ::System::Object
	{
	public:
		::System::String* _ImagePath_k__BackingField; // 0x10
		::RPG::Client::MissionReplayData::IMissionReplayData* _MissionReplayData_k__BackingField; // 0x18
		::System::String* _MissionTypeIconPath_k__BackingField; // 0x20
		::System::String* _MissionTypeColor_k__BackingField; // 0x28
		::RPG::Client::MainMissionData* _CurrentProcessingMissionData_k__BackingField; // 0x30
		::RPG::GameCore::ChronicleNodeType _NodeType_k__BackingField; // 0x38
		::System::UInt32 _EarlyAccessContentID_k__BackingField; // 0x3C
		::System::UInt32 _ID_k__BackingField; // 0x40
		::System::UInt32 _MainMissionID_k__BackingField; // 0x44
		::RPG::Client::TextID _MissionConclusion_k__BackingField; // 0x48
		::System::Boolean _IsOnGoing_k__BackingField; // 0x58
		::System::Boolean _IsMainPath_k__BackingField; // 0x59
		::System::Boolean _IsConnectMissionFinish_k__BackingField; // 0x5A
		::System::Boolean _IsCanTakeMission_k__BackingField; // 0x5B
		::System::Boolean _IsLastestUpdated_k__BackingField; // 0x5C
		::System::UInt32 _WorldID_k__BackingField; // 0x60
		::RPG::Client::TextID _Title_k__BackingField; // 0x68
		::RPG::Client::ChronicleStatus _Status_k__BackingField; // 0x78
		::System::Int32 _StoryLineID_k__BackingField; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA__CTOR_OFFSET))(this);
		}

		::System::Void SetDataByMainPath(::RPG::Client::MissionChronicleMainPathData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionChronicleMainPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SETDATABYMAINPATH_OFFSET))(this, a1);
		}

		::System::Void SetDataBySubPath(::RPG::Client::MissionChronicleSubPathData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionChronicleSubPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SETDATABYSUBPATH_OFFSET))(this, a1);
		}

		::System::Void SetDataByEndmostPathData(::RPG::Client::PenaconyEndmostChroniclePathData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PenaconyEndmostChroniclePathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SETDATABYENDMOSTPATHDATA_OFFSET))(this, a1);
		}

		::System::Void _SetDataByPathData(::RPG::Client::MissionChronicleBasePathData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionChronicleBasePathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA__SETDATABYPATHDATA_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMainPath()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_ISMAINPATH_OFFSET))(this);
		}

		::System::Void set_IsMainPath(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_ISMAINPATH_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChronicleNodeType get_NodeType()
		{
			return ((::RPG::GameCore::ChronicleNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_NODETYPE_OFFSET))(this);
		}

		::System::Void set_NodeType(::RPG::GameCore::ChronicleNodeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChronicleNodeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_NODETYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_MainMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_MAINMISSIONID_OFFSET))(this);
		}

		::System::Void set_MainMissionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_MAINMISSIONID_OFFSET))(this, a1);
		}

		::RPG::Client::ChronicleStatus get_Status()
		{
			return ((::RPG::Client::ChronicleStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::RPG::Client::ChronicleStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChronicleStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_STATUS_OFFSET))(this, a1);
		}

		::System::UInt32 get_WorldID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_WORLDID_OFFSET))(this);
		}

		::System::Void set_WorldID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_WORLDID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_TITLE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_MissionConclusion()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_MISSIONCONCLUSION_OFFSET))(this);
		}

		::System::Void set_MissionConclusion(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_MISSIONCONCLUSION_OFFSET))(this, a1);
		}

		::System::String* get_MissionTypeIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_MISSIONTYPEICONPATH_OFFSET))(this);
		}

		::System::Void set_MissionTypeIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_MISSIONTYPEICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_MissionTypeColor()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_MISSIONTYPECOLOR_OFFSET))(this);
		}

		::System::Void set_MissionTypeColor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_MISSIONTYPECOLOR_OFFSET))(this, a1);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::Void set_ImagePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_IMAGEPATH_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLastestUpdated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_ISLASTESTUPDATED_OFFSET))(this);
		}

		::System::Void set_IsLastestUpdated(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_ISLASTESTUPDATED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCanTakeMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_ISCANTAKEMISSION_OFFSET))(this);
		}

		::System::Void set_IsCanTakeMission(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_ISCANTAKEMISSION_OFFSET))(this, a1);
		}

		::System::Boolean get_IsConnectMissionFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_ISCONNECTMISSIONFINISH_OFFSET))(this);
		}

		::System::Void set_IsConnectMissionFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_ISCONNECTMISSIONFINISH_OFFSET))(this, a1);
		}

		::System::Boolean get_IsOnGoing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_ISONGOING_OFFSET))(this);
		}

		::System::Void set_IsOnGoing(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_ISONGOING_OFFSET))(this, a1);
		}

		::System::UInt32 get_EarlyAccessContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_EARLYACCESSCONTENTID_OFFSET))(this);
		}

		::System::Void set_EarlyAccessContentID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_EARLYACCESSCONTENTID_OFFSET))(this, a1);
		}

		::RPG::Client::EarlyAccessContent* get_EarlyAccessContent()
		{
			return ((::RPG::Client::EarlyAccessContent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_EARLYACCESSCONTENT_OFFSET))(this);
		}

		::RPG::Client::MainMissionData* get_CurrentProcessingMissionData()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_CURRENTPROCESSINGMISSIONDATA_OFFSET))(this);
		}

		::System::Void set_CurrentProcessingMissionData(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_CURRENTPROCESSINGMISSIONDATA_OFFSET))(this, a1);
		}

		::RPG::Client::MissionReplayData::IMissionReplayData* get_MissionReplayData()
		{
			return ((::RPG::Client::MissionReplayData::IMissionReplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_MISSIONREPLAYDATA_OFFSET))(this);
		}

		::System::Void set_MissionReplayData(::RPG::Client::MissionReplayData::IMissionReplayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionReplayData::IMissionReplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_MISSIONREPLAYDATA_OFFSET))(this, a1);
		}

		::System::Int32 get_StoryLineID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_GET_STORYLINEID_OFFSET))(this);
		}

		::System::Void set_StoryLineID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHRONICLEDISPLAYDATA_SET_STORYLINEID_OFFSET))(this, a1);
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
