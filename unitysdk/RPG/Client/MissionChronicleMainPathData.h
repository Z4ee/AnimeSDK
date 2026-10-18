#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChronicleStatus.h"
#include "unitysdk/RPG/Client/MainChronicleConnectionWay.h"
#include "unitysdk/RPG/Client/MissionChronicleBasePathData.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client { class MainMissionData; }
namespace RPG::Client { class MissionChronicleSubPathData; }
namespace RPG::GameCore { class ChronicleConnectionConfig; }
namespace RPG::GameCore { class ChronicleCustomUnlockConditionConfig; }
namespace RPG::GameCore { class ChronicleNodeConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_CHECKISCANTAKEMISSION_OFFSET UNITYSDK_OFFSET(0xD6CAFD0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_CHECKISMIDDLEMISSIONSTATE_OFFSET UNITYSDK_OFFSET(0xD6CBBB0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_CHECKISPREDICTION_OFFSET UNITYSDK_OFFSET(0xD6CB7E0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD6C9140)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GETALLSUBGRAPHMISSIONID_OFFSET UNITYSDK_OFFSET(0xD6CA320)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GETCURPROCESSINGMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xD6CABF0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GETFINALMAINMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xD6CD270)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GETSTORYLINEID_OFFSET UNITYSDK_OFFSET(0xD6CBE80)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GET_CANTAKEMISSIONPATHIDLIST_OFFSET UNITYSDK_OFFSET(0xD6CB060)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GET_CHRONICLESUBPATHDICT_OFFSET UNITYSDK_OFFSET(0xD6CDE20)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GET_CONNECTIONLIST_OFFSET UNITYSDK_OFFSET(0xD6CDDC0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GET_CUSTOMUNLOCKCONDITIONCONFIGLIST_OFFSET UNITYSDK_OFFSET(0xD6CE170)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GET_FINISHMISSIONID_OFFSET UNITYSDK_OFFSET(0xD6CDD60)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GET_FIRSTSUBPATHID_OFFSET UNITYSDK_OFFSET(0xD6CDDA0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GET_ISWORLDUNLOCKED_OFFSET UNITYSDK_OFFSET(0xD6CE230)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xD6CDE40)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GET_PARENTLINETYPEMAINPATHDATA_OFFSET UNITYSDK_OFFSET(0xD6CDE00)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GET_PARENTMAINPATHLIST_OFFSET UNITYSDK_OFFSET(0xD6CDDE0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GET_SUBGRAPHPATH_OFFSET UNITYSDK_OFFSET(0xD6CDD80)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GET_WORLDPATHDATA_OFFSET UNITYSDK_OFFSET(0xD6CD170)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_INIT_OFFSET UNITYSDK_OFFSET(0xD6C9220)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_ISANYPARENTPATHFINISH_OFFSET UNITYSDK_OFFSET(0xD6CB8C0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_ISANYPARENTPATHPROCESSINGFINISH_OFFSET UNITYSDK_OFFSET(0xD6CBA20)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_ISCANSTEPNEXTPATH_OFFSET UNITYSDK_OFFSET(0xD6CA060)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_ISCONNECTMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0xD6CAA40)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_ISNEWLEGAL_OFFSET UNITYSDK_OFFSET(0xD6CB190)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_ISNEW_OFFSET UNITYSDK_OFFSET(0xD6CB0B0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_ISWORLDUNLOCK_OFFSET UNITYSDK_OFFSET(0xD6CD110)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_REFRESHEARLYACCESSINFO_OFFSET UNITYSDK_OFFSET(0xD6CBFF0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_REFRESHWORLDUNLOCK_OFFSET UNITYSDK_OFFSET(0xD6CD3D0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_SETDATA_OFFSET UNITYSDK_OFFSET(0xD6C9260)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_SETMOCKFINISHNODEDATA_OFFSET UNITYSDK_OFFSET(0xD6C9F50)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_SETSEEN_OFFSET UNITYSDK_OFFSET(0xD6CB2E0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_SET_CHRONICLESUBPATHDICT_OFFSET UNITYSDK_OFFSET(0xD6CDE30)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_SET_CONNECTIONLIST_OFFSET UNITYSDK_OFFSET(0xD6CDDD0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_SET_FINISHMISSIONID_OFFSET UNITYSDK_OFFSET(0xD6CDD70)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_SET_FIRSTSUBPATHID_OFFSET UNITYSDK_OFFSET(0xD6CDDB0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_SET_ISWORLDUNLOCKED_OFFSET UNITYSDK_OFFSET(0xD6CE240)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_SET_PARENTLINETYPEMAINPATHDATA_OFFSET UNITYSDK_OFFSET(0xD6CDE10)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_SET_PARENTMAINPATHLIST_OFFSET UNITYSDK_OFFSET(0xD6CDDF0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_SET_SUBGRAPHPATH_OFFSET UNITYSDK_OFFSET(0xD6CDD90)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__CHECKISWORLDUNLOCK_OFFSET UNITYSDK_OFFSET(0xD6CD430)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD6C90C0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__GENERATECHRONICLESUBPATH_OFFSET UNITYSDK_OFFSET(0xD6C9530)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__GETCURCHRONICLESTATUSBYSELF_OFFSET UNITYSDK_OFFSET(0xD6CCE60)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__GETCURCHRONICLESTATUS_OFFSET UNITYSDK_OFFSET(0xD6CA160)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__GETSTORYLINEID_OFFSET UNITYSDK_OFFSET(0xD6CBEF0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__ISFORCENOTASPREDICTION_OFFSET UNITYSDK_OFFSET(0xD6CB840)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__ISNOTHAVESUBPATHTYPE_OFFSET UNITYSDK_OFFSET(0xD6CD0C0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__ISSUBPATHACTIVE_OFFSET UNITYSDK_OFFSET(0xD6CD010)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__SEARCHEARLYACCESSEFFECTED_OFFSET UNITYSDK_OFFSET(0xD6CCC80)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__SETASSISTPATHDATALISTEAEFFECTED_OFFSET UNITYSDK_OFFSET(0xD6CDCC0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__SETCANTAKEMISSIONPATHIDLIST_OFFSET UNITYSDK_OFFSET(0xD6CD730)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__SETCONNECTIONWAYDATA_OFFSET UNITYSDK_OFFSET(0xD6C9AA0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__SETSUBPATHCANTAKEMISSIONLIST_OFFSET UNITYSDK_OFFSET(0xD6CD960)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__SETUPCONNECTIONLIST_OFFSET UNITYSDK_OFFSET(0xD6C9350)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionChronicleMainPathData_TypeDefinitionIndex = 66085;

	class MissionChronicleMainPathData : public ::RPG::Client::MissionChronicleBasePathData
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _CanTakeMissionPathIDList; // 0xB0
		::RPG::Client::MissionChronicleMainPathData* _ParentLineTypeMainPathData_k__BackingField; // 0xB8
		::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleMainPathData*>* _ParentMainPathList_k__BackingField; // 0xC0
		::System::Collections::Generic::List_1<::RPG::Client::MainChronicleConnectionWay>* _ConnectionList_k__BackingField; // 0xC8
		::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleSubPathData*>* _AssistEAPathDataList; // 0xD0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MissionChronicleSubPathData*>* _ChronicleSubPathDict_k__BackingField; // 0xD8
		::System::String* _SubGraphPath_k__BackingField; // 0xE0
		::System::UInt32 _FinishMissionID_k__BackingField; // 0xE8
		::System::UInt32 _FirstSubPathID_k__BackingField; // 0xEC
		::System::Boolean _IsWorldUnlocked_k__BackingField; // 0xF0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_INIT_OFFSET))(this);
		}

		::System::Void SetData(::RPG::GameCore::ChronicleNodeConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChronicleNodeConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_SETDATA_OFFSET))(this, a1);
		}

		::System::Void SetMockFinishNodeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_SETMOCKFINISHNODEDATA_OFFSET))(this);
		}

		::System::Boolean IsCanStepNextPath()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_ISCANSTEPNEXTPATH_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*> GetAllSubGraphMissionID()
		{
			return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GETALLSUBGRAPHMISSIONID_OFFSET))(this);
		}

		::System::Boolean IsConnectMissionFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_ISCONNECTMISSIONFINISH_OFFSET))(this);
		}

		::RPG::Client::MainMissionData* GetCurProcessingMissionData()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GETCURPROCESSINGMISSIONDATA_OFFSET))(this);
		}

		::System::Boolean CheckIsCanTakeMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_CHECKISCANTAKEMISSION_OFFSET))(this);
		}

		::System::Boolean IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_ISNEW_OFFSET))(this);
		}

		::System::Boolean IsNewLegal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_ISNEWLEGAL_OFFSET))(this);
		}

		::System::Void SetSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_SETSEEN_OFFSET))(this);
		}

		::System::Boolean CheckIsPrediction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_CHECKISPREDICTION_OFFSET))(this);
		}

		::System::Boolean IsAnyParentPathFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_ISANYPARENTPATHFINISH_OFFSET))(this);
		}

		::System::Boolean IsAnyParentPathProcessingFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_ISANYPARENTPATHPROCESSINGFINISH_OFFSET))(this);
		}

		::System::Boolean CheckIsMiddleMissionState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_CHECKISMIDDLEMISSIONSTATE_OFFSET))(this);
		}

		::System::Int32 GetStoryLineID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GETSTORYLINEID_OFFSET))(this);
		}

		::System::Void RefreshEarlyAccessInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_REFRESHEARLYACCESSINFO_OFFSET))(this);
		}

		::System::Boolean IsWorldUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_ISWORLDUNLOCK_OFFSET))(this);
		}

		::RPG::Client::MainMissionData* GetFinalMainMissionData()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GETFINALMAINMISSIONDATA_OFFSET))(this);
		}

		::System::Void RefreshWorldUnlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_REFRESHWORLDUNLOCK_OFFSET))(this);
		}

		::System::Boolean _CheckIsWorldUnlock(::RPG::Client::MissionChronicleMainPathData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MissionChronicleMainPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__CHECKISWORLDUNLOCK_OFFSET))(this, a1);
		}

		::RPG::Client::ChronicleStatus _GetCurChronicleStatus()
		{
			return ((::RPG::Client::ChronicleStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__GETCURCHRONICLESTATUS_OFFSET))(this);
		}

		::RPG::Client::ChronicleStatus _GetCurChronicleStatusBySelf()
		{
			return ((::RPG::Client::ChronicleStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__GETCURCHRONICLESTATUSBYSELF_OFFSET))(this);
		}

		::System::Void _SetupConnectionList(::Il2CppArray<::RPG::GameCore::ChronicleConnectionConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ChronicleConnectionConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__SETUPCONNECTIONLIST_OFFSET))(this, a1);
		}

		::System::Void _GenerateChronicleSubPath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__GENERATECHRONICLESUBPATH_OFFSET))(this);
		}

		::System::Void _SetConnectionWayData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__SETCONNECTIONWAYDATA_OFFSET))(this);
		}

		::System::Void _SetCanTakeMissionPathIDList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__SETCANTAKEMISSIONPATHIDLIST_OFFSET))(this);
		}

		::System::Void _SetSubPathCanTakeMissionList(::RPG::Client::MissionChronicleSubPathData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionChronicleSubPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__SETSUBPATHCANTAKEMISSIONLIST_OFFSET))(this, a1);
		}

		::System::Int32 _GetStoryLineID(::RPG::Client::MissionChronicleMainPathData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MissionChronicleMainPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__GETSTORYLINEID_OFFSET))(this, a1);
		}

		::System::Void _SearchEarlyAccessEffected(::RPG::Client::MissionChronicleSubPathData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionChronicleSubPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__SEARCHEARLYACCESSEFFECTED_OFFSET))(this, a1);
		}

		::System::Void _SetAssistPathDataListEAEffected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__SETASSISTPATHDATALISTEAEFFECTED_OFFSET))(this);
		}

		::System::Boolean _IsSubPathActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__ISSUBPATHACTIVE_OFFSET))(this);
		}

		::System::Boolean _IsNotHaveSubPathType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__ISNOTHAVESUBPATHTYPE_OFFSET))(this);
		}

		::System::Boolean _IsForceNotAsPrediction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__ISFORCENOTASPREDICTION_OFFSET))(this);
		}

		::System::UInt32 get_FinishMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GET_FINISHMISSIONID_OFFSET))(this);
		}

		::System::Void set_FinishMissionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_SET_FINISHMISSIONID_OFFSET))(this, a1);
		}

		::System::String* get_SubGraphPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GET_SUBGRAPHPATH_OFFSET))(this);
		}

		::System::Void set_SubGraphPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_SET_SUBGRAPHPATH_OFFSET))(this, a1);
		}

		::System::UInt32 get_FirstSubPathID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GET_FIRSTSUBPATHID_OFFSET))(this);
		}

		::System::Void set_FirstSubPathID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_SET_FIRSTSUBPATHID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MainChronicleConnectionWay>* get_ConnectionList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MainChronicleConnectionWay>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GET_CONNECTIONLIST_OFFSET))(this);
		}

		::System::Void set_ConnectionList(::System::Collections::Generic::List_1<::RPG::Client::MainChronicleConnectionWay>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainChronicleConnectionWay>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_SET_CONNECTIONLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleMainPathData*>* get_ParentMainPathList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleMainPathData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GET_PARENTMAINPATHLIST_OFFSET))(this);
		}

		::System::Void set_ParentMainPathList(::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleMainPathData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleMainPathData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_SET_PARENTMAINPATHLIST_OFFSET))(this, a1);
		}

		::RPG::Client::MissionChronicleMainPathData* get_ParentLineTypeMainPathData()
		{
			return ((::RPG::Client::MissionChronicleMainPathData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GET_PARENTLINETYPEMAINPATHDATA_OFFSET))(this);
		}

		::System::Void set_ParentLineTypeMainPathData(::RPG::Client::MissionChronicleMainPathData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionChronicleMainPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_SET_PARENTLINETYPEMAINPATHDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MissionChronicleSubPathData*>* get_ChronicleSubPathDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MissionChronicleSubPathData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GET_CHRONICLESUBPATHDICT_OFFSET))(this);
		}

		::System::Void set_ChronicleSubPathDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MissionChronicleSubPathData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MissionChronicleSubPathData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_SET_CHRONICLESUBPATHDICT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_CanTakeMissionPathIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GET_CANTAKEMISSIONPATHIDLIST_OFFSET))(this);
		}

		::System::UInt32 get_MainMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GET_MAINMISSIONID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ChronicleCustomUnlockConditionConfig*>* get_CustomUnlockConditionConfigList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ChronicleCustomUnlockConditionConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GET_CUSTOMUNLOCKCONDITIONCONFIGLIST_OFFSET))(this);
		}

		::RPG::Client::MissionChronicleMainPathData* get_WorldPathData()
		{
			return ((::RPG::Client::MissionChronicleMainPathData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GET_WORLDPATHDATA_OFFSET))(this);
		}

		::System::Boolean get_IsWorldUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GET_ISWORLDUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsWorldUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_SET_ISWORLDUNLOCKED_OFFSET))(this, a1);
		}
	};
}
