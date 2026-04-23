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

#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_CHECKISCANTAKEMISSION_OFFSET UNITYSDK_OFFSET(0xA8B0BF0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_CHECKISMIDDLEMISSIONSTATE_OFFSET UNITYSDK_OFFSET(0xA8B1840)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_CHECKISPREDICTION_OFFSET UNITYSDK_OFFSET(0xA8B1430)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA8AEA80)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GETALLSUBGRAPHMISSIONID_OFFSET UNITYSDK_OFFSET(0xA8AFDC0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GETCURPROCESSINGMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xA8B0960)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GETSTORYLINEID_OFFSET UNITYSDK_OFFSET(0xA8B1A30)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GET_CANTAKEMISSIONPATHIDLIST_OFFSET UNITYSDK_OFFSET(0xA8B0C80)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GET_CHRONICLESUBPATHDICT_OFFSET UNITYSDK_OFFSET(0xA8B3680)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GET_CONNECTIONLIST_OFFSET UNITYSDK_OFFSET(0xA8B3620)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GET_CUSTOMUNLOCKCONDITIONCONFIGLIST_OFFSET UNITYSDK_OFFSET(0xA8B3980)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GET_FINISHMISSIONID_OFFSET UNITYSDK_OFFSET(0xA8B35C0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GET_FIRSTSUBPATHID_OFFSET UNITYSDK_OFFSET(0xA8B3600)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GET_ISWORLDUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA8B3A40)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xA8B36A0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GET_PARENTLINETYPEMAINPATHDATA_OFFSET UNITYSDK_OFFSET(0xA8B3660)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GET_PARENTMAINPATHLIST_OFFSET UNITYSDK_OFFSET(0xA8B3640)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GET_SUBGRAPHPATH_OFFSET UNITYSDK_OFFSET(0xA8B35E0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GET_WORLDPATHDATA_OFFSET UNITYSDK_OFFSET(0xA8B2BE0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_INIT_OFFSET UNITYSDK_OFFSET(0xA8AEB70)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_ISANYPARENTPATHFINISH_OFFSET UNITYSDK_OFFSET(0xA8B1510)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_ISANYPARENTPATHPROCESSINGFINISH_OFFSET UNITYSDK_OFFSET(0xA8B1690)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_ISCANSTEPNEXTPATH_OFFSET UNITYSDK_OFFSET(0xA8AFAD0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_ISCONNECTMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0xA8B0830)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_ISNEWLEGAL_OFFSET UNITYSDK_OFFSET(0xA8B0DB0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_ISNEW_OFFSET UNITYSDK_OFFSET(0xA8B0CD0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_ISWORLDUNLOCK_OFFSET UNITYSDK_OFFSET(0xA8B2B80)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_REFRESHEARLYACCESSINFO_OFFSET UNITYSDK_OFFSET(0xA8B1BA0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_REFRESHWORLDUNLOCK_OFFSET UNITYSDK_OFFSET(0xA8B2D20)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_SETDATA_OFFSET UNITYSDK_OFFSET(0xA8AEBB0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_SETMOCKFINISHNODEDATA_OFFSET UNITYSDK_OFFSET(0xA8AF9C0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_SETSEEN_OFFSET UNITYSDK_OFFSET(0xA8B0F40)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_SET_CHRONICLESUBPATHDICT_OFFSET UNITYSDK_OFFSET(0xA8B3690)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_SET_CONNECTIONLIST_OFFSET UNITYSDK_OFFSET(0xA8B3630)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_SET_FINISHMISSIONID_OFFSET UNITYSDK_OFFSET(0xA8B35D0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_SET_FIRSTSUBPATHID_OFFSET UNITYSDK_OFFSET(0xA8B3610)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_SET_ISWORLDUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA8B3A50)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_SET_PARENTLINETYPEMAINPATHDATA_OFFSET UNITYSDK_OFFSET(0xA8B3670)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_SET_PARENTMAINPATHLIST_OFFSET UNITYSDK_OFFSET(0xA8B3650)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_SET_SUBGRAPHPATH_OFFSET UNITYSDK_OFFSET(0xA8B35F0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__CHECKISWORLDUNLOCK_OFFSET UNITYSDK_OFFSET(0xA8B2D80)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA8AEA00)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__GENERATECHRONICLESUBPATH_OFFSET UNITYSDK_OFFSET(0xA8AEE30)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__GETCURCHRONICLESTATUSBYSELF_OFFSET UNITYSDK_OFFSET(0xA8B2830)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__GETCURCHRONICLESTATUS_OFFSET UNITYSDK_OFFSET(0xA8AFBF0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__GETSTORYLINEID_OFFSET UNITYSDK_OFFSET(0xA8B1A90)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__ISFORCENOTASPREDICTION_OFFSET UNITYSDK_OFFSET(0xA8B14A0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__ISNOTHAVESUBPATHTYPE_OFFSET UNITYSDK_OFFSET(0xA8B2B30)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__ISSUBPATHACTIVE_OFFSET UNITYSDK_OFFSET(0xA8B2A30)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__SEARCHEARLYACCESSEFFECTED_OFFSET UNITYSDK_OFFSET(0xA8B26D0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__SETASSISTPATHDATALISTEAEFFECTED_OFFSET UNITYSDK_OFFSET(0xA8B3510)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__SETCANTAKEMISSIONPATHIDLIST_OFFSET UNITYSDK_OFFSET(0xA8B3070)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__SETCONNECTIONWAYDATA_OFFSET UNITYSDK_OFFSET(0xA8AF490)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__SETSUBPATHCANTAKEMISSIONLIST_OFFSET UNITYSDK_OFFSET(0xA8B3250)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__SETUPCONNECTIONLIST_OFFSET UNITYSDK_OFFSET(0xA8AECA0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA___IFIXBASEPROXY_CHECKISCANTAKEMISSION_OFFSET UNITYSDK_OFFSET(0xA8B3B90)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA___IFIXBASEPROXY_CHECKISMIDDLEMISSIONSTATE_OFFSET UNITYSDK_OFFSET(0xA8B3BA0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA8B3A60)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA___IFIXBASEPROXY_GETCURPROCESSINGMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xA8B3B50)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA___IFIXBASEPROXY_GETSTORYLINEID_OFFSET UNITYSDK_OFFSET(0xA8B3BE0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA___IFIXBASEPROXY_GET_CUSTOMUNLOCKCONDITIONCONFIGLIST_OFFSET UNITYSDK_OFFSET(0xA8B3CB0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA___IFIXBASEPROXY_GET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xA8B3CA0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA___IFIXBASEPROXY_GET_WORLDPATHDATA_OFFSET UNITYSDK_OFFSET(0xA8B3CC0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA___IFIXBASEPROXY_ISCANSTEPNEXTPATH_OFFSET UNITYSDK_OFFSET(0xA8B3AD0)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA___IFIXBASEPROXY_ISCONNECTMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0xA8B3B10)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA___IFIXBASEPROXY_ISWORLDUNLOCK_OFFSET UNITYSDK_OFFSET(0xA8B3C20)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA___IFIXBASEPROXY_SETDATA_OFFSET UNITYSDK_OFFSET(0xA8B3A70)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA___IFIXBASEPROXY_SETMOCKFINISHNODEDATA_OFFSET UNITYSDK_OFFSET(0xA8B3A80)
#define RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA___IFIXBASEPROXY__GETCURCHRONICLESTATUS_OFFSET UNITYSDK_OFFSET(0xA8B3C60)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionChronicleMainPathData_TypeDefinitionIndex = 60850;

	class MissionChronicleMainPathData : public ::RPG::Client::MissionChronicleBasePathData
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleMainPathData*>* _ParentMainPathList_k__BackingField; // 0xB0
		::RPG::Client::MissionChronicleMainPathData* _ParentLineTypeMainPathData_k__BackingField; // 0xB8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MissionChronicleSubPathData*>* _ChronicleSubPathDict_k__BackingField; // 0xC0
		::System::Collections::Generic::List_1<::System::UInt32>* _CanTakeMissionPathIDList; // 0xC8
		::System::String* _SubGraphPath_k__BackingField; // 0xD0
		::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleSubPathData*>* _AssistEAPathDataList; // 0xD8
		::System::Collections::Generic::List_1<::RPG::Client::MainChronicleConnectionWay>* _ConnectionList_k__BackingField; // 0xE0
		::System::Boolean _IsWorldUnlocked_k__BackingField; // 0xE8
		::System::UInt32 _FinishMissionID_k__BackingField; // 0xEC
		::System::UInt32 _FirstSubPathID_k__BackingField; // 0xF0

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

		::System::Void SetData(::RPG::GameCore::ChronicleNodeConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChronicleNodeConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_SETDATA_OFFSET))(this, config);
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

		::System::Void RefreshWorldUnlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_REFRESHWORLDUNLOCK_OFFSET))(this);
		}

		::System::Boolean _CheckIsWorldUnlock(::RPG::Client::MissionChronicleMainPathData* pathData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MissionChronicleMainPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__CHECKISWORLDUNLOCK_OFFSET))(this, pathData);
		}

		::RPG::Client::ChronicleStatus _GetCurChronicleStatus()
		{
			return ((::RPG::Client::ChronicleStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__GETCURCHRONICLESTATUS_OFFSET))(this);
		}

		::RPG::Client::ChronicleStatus _GetCurChronicleStatusBySelf()
		{
			return ((::RPG::Client::ChronicleStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__GETCURCHRONICLESTATUSBYSELF_OFFSET))(this);
		}

		::System::Void _SetupConnectionList(::Il2CppArray<::RPG::GameCore::ChronicleConnectionConfig*>* connectionConfigs)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ChronicleConnectionConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__SETUPCONNECTIONLIST_OFFSET))(this, connectionConfigs);
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

		::System::Void _SetSubPathCanTakeMissionList(::RPG::Client::MissionChronicleSubPathData* subPathData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionChronicleSubPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__SETSUBPATHCANTAKEMISSIONLIST_OFFSET))(this, subPathData);
		}

		::System::Int32 _GetStoryLineID(::RPG::Client::MissionChronicleMainPathData* mainPathData)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MissionChronicleMainPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__GETSTORYLINEID_OFFSET))(this, mainPathData);
		}

		::System::Void _SearchEarlyAccessEffected(::RPG::Client::MissionChronicleSubPathData* pathData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionChronicleSubPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA__SEARCHEARLYACCESSEFFECTED_OFFSET))(this, pathData);
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

		::System::Void set_FinishMissionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_SET_FINISHMISSIONID_OFFSET))(this, value);
		}

		::System::String* get_SubGraphPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GET_SUBGRAPHPATH_OFFSET))(this);
		}

		::System::Void set_SubGraphPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_SET_SUBGRAPHPATH_OFFSET))(this, value);
		}

		::System::UInt32 get_FirstSubPathID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GET_FIRSTSUBPATHID_OFFSET))(this);
		}

		::System::Void set_FirstSubPathID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_SET_FIRSTSUBPATHID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MainChronicleConnectionWay>* get_ConnectionList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MainChronicleConnectionWay>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GET_CONNECTIONLIST_OFFSET))(this);
		}

		::System::Void set_ConnectionList(::System::Collections::Generic::List_1<::RPG::Client::MainChronicleConnectionWay>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainChronicleConnectionWay>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_SET_CONNECTIONLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleMainPathData*>* get_ParentMainPathList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleMainPathData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GET_PARENTMAINPATHLIST_OFFSET))(this);
		}

		::System::Void set_ParentMainPathList(::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleMainPathData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleMainPathData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_SET_PARENTMAINPATHLIST_OFFSET))(this, value);
		}

		::RPG::Client::MissionChronicleMainPathData* get_ParentLineTypeMainPathData()
		{
			return ((::RPG::Client::MissionChronicleMainPathData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GET_PARENTLINETYPEMAINPATHDATA_OFFSET))(this);
		}

		::System::Void set_ParentLineTypeMainPathData(::RPG::Client::MissionChronicleMainPathData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionChronicleMainPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_SET_PARENTLINETYPEMAINPATHDATA_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MissionChronicleSubPathData*>* get_ChronicleSubPathDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MissionChronicleSubPathData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_GET_CHRONICLESUBPATHDICT_OFFSET))(this);
		}

		::System::Void set_ChronicleSubPathDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MissionChronicleSubPathData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MissionChronicleSubPathData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_SET_CHRONICLESUBPATHDICT_OFFSET))(this, value);
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

		::System::Void set_IsWorldUnlocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA_SET_ISWORLDUNLOCKED_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_SetData(::RPG::GameCore::ChronicleNodeConfig* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChronicleNodeConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA___IFIXBASEPROXY_SETDATA_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_SetMockFinishNodeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA___IFIXBASEPROXY_SETMOCKFINISHNODEDATA_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsCanStepNextPath()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA___IFIXBASEPROXY_ISCANSTEPNEXTPATH_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsConnectMissionFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA___IFIXBASEPROXY_ISCONNECTMISSIONFINISH_OFFSET))(this);
		}

		::RPG::Client::MainMissionData* __iFixBaseProxy_GetCurProcessingMissionData()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA___IFIXBASEPROXY_GETCURPROCESSINGMISSIONDATA_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_CheckIsCanTakeMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA___IFIXBASEPROXY_CHECKISCANTAKEMISSION_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_CheckIsMiddleMissionState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA___IFIXBASEPROXY_CHECKISMIDDLEMISSIONSTATE_OFFSET))(this);
		}

		::System::Int32 __iFixBaseProxy_GetStoryLineID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA___IFIXBASEPROXY_GETSTORYLINEID_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsWorldUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA___IFIXBASEPROXY_ISWORLDUNLOCK_OFFSET))(this);
		}

		::RPG::Client::ChronicleStatus __iFixBaseProxy__GetCurChronicleStatus()
		{
			return ((::RPG::Client::ChronicleStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA___IFIXBASEPROXY__GETCURCHRONICLESTATUS_OFFSET))(this);
		}

		::System::UInt32 __iFixBaseProxy_get_MainMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA___IFIXBASEPROXY_GET_MAINMISSIONID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ChronicleCustomUnlockConditionConfig*>* __iFixBaseProxy_get_CustomUnlockConditionConfigList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ChronicleCustomUnlockConditionConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA___IFIXBASEPROXY_GET_CUSTOMUNLOCKCONDITIONCONFIGLIST_OFFSET))(this);
		}

		::RPG::Client::MissionChronicleMainPathData* __iFixBaseProxy_get_WorldPathData()
		{
			return ((::RPG::Client::MissionChronicleMainPathData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMAINPATHDATA___IFIXBASEPROXY_GET_WORLDPATHDATA_OFFSET))(this);
		}
	};
}
