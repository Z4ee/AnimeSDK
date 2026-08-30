#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_09388B68BBD5FF59;
class Class_1_B302648C6979F380;
namespace RPG::Client { class MissionChronicleBasePathData; }
namespace RPG::Client { class MissionChronicleMainPathData; }
namespace RPG::Client { class MissionChronicleRedDotFilter; }
namespace RPG::Client { class MissionChronicleSubPathData; }
namespace RPG::Client { class PenaconyEndmostChronicleData; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MISSIONCHRONICLEMODULE_CHECKPREFSOVERFLOW_OFFSET UNITYSDK_OFFSET(0xD6D1EF0)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD6D3300)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_GETAVAILABLEMIDDLESINGLEPACKMISSION_OFFSET UNITYSDK_OFFSET(0xD6D0050)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_GETEMPTYMISSIONDATALIST_OFFSET UNITYSDK_OFFSET(0xD6D16D0)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_GETNEWPATHDATABYMISSIONID_OFFSET UNITYSDK_OFFSET(0xD6D1F30)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_GETPENACONYENDMOSTCHRONICLEDATA_OFFSET UNITYSDK_OFFSET(0xD6D3420)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_GET_CANTAKEMISSIONPATHIDLIST_OFFSET UNITYSDK_OFFSET(0xD6D4380)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_GET_CHRONICLEMAINPATHDICT_OFFSET UNITYSDK_OFFSET(0xD6D4340)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_GET_CHRONICLEMIDDLEMISSIONPACKDICT_OFFSET UNITYSDK_OFFSET(0xD6D43F0)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_GET_FIRSTPATHID_OFFSET UNITYSDK_OFFSET(0xD6D4360)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_GET_MISSIONCHRONICLEREDDOTFILTER_OFFSET UNITYSDK_OFFSET(0xD6D43D0)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_GET_WORLDPATHDICT_OFFSET UNITYSDK_OFFSET(0xD6D4410)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xD6D26C0)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0xD6D3250)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xD6D33B0)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_PREPARECHRONICLEMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xD6D0400)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_REFRESHEARLYACCESSINFO_OFFSET UNITYSDK_OFFSET(0xD6D21B0)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_REFRESHINFO_OFFSET UNITYSDK_OFFSET(0xD6D2160)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_REFRESHWORLDUNLOCK_OFFSET UNITYSDK_OFFSET(0xD6D23B0)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_SET_CHRONICLEMAINPATHDICT_OFFSET UNITYSDK_OFFSET(0xD6D4350)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_SET_CHRONICLEMIDDLEMISSIONPACKDICT_OFFSET UNITYSDK_OFFSET(0xD6D4400)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_SET_FIRSTPATHID_OFFSET UNITYSDK_OFFSET(0xD6D4370)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_SET_MISSIONCHRONICLEREDDOTFILTER_OFFSET UNITYSDK_OFFSET(0xD6D43E0)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_SET_WORLDPATHDICT_OFFSET UNITYSDK_OFFSET(0xD6D4420)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE__CHECKISMISSIONEMPTY_OFFSET UNITYSDK_OFFSET(0xD6D1B60)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE__CHECKISSUBMISSIONEMPTY_OFFSET UNITYSDK_OFFSET(0xD6D1DB0)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xD6D03D0)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE__GENERATECHRONICLEMIDDLEMISSIONPACK_OFFSET UNITYSDK_OFFSET(0xD6D2F20)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE__GENERATECHRONICLEPATH_OFFSET UNITYSDK_OFFSET(0xD6D2790)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE__GENERATEFILTER_OFFSET UNITYSDK_OFFSET(0xD6D2E10)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE__GETMISSIONNEEDPREPAREIDLIST_OFFSET UNITYSDK_OFFSET(0xD6D0580)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE__ONLOGINFINISH_B__10_0_OFFSET UNITYSDK_OFFSET(0xD6D4430)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE__SEARCHEARLYACCESSEFFECTED_OFFSET UNITYSDK_OFFSET(0xD6D24F0)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE__SEARCHNEWMAINPATHBYMISSIONID_OFFSET UNITYSDK_OFFSET(0xD6D1FD0)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE__SEARCHNEWSUBPATHBYMISSIONID_OFFSET UNITYSDK_OFFSET(0xD6D3E40)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE__SETASSISTPATHDATALISTEAEFFECTED_OFFSET UNITYSDK_OFFSET(0xD6D42A0)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE__SETCANTAKEMISSIONPATHIDLIST_OFFSET UNITYSDK_OFFSET(0xD6D3A90)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE__SETCONNECTIONWAYDATA_OFFSET UNITYSDK_OFFSET(0xD6D3480)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE__SETMAINPATHCANTAKEMISSIONLIST_OFFSET UNITYSDK_OFFSET(0xD6D3B90)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionChronicleModule_TypeDefinitionIndex = 66136;

	class MissionChronicleModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MissionChronicleMainPathData*>* _ChronicleMainPathDict_k__BackingField; // 0x10
		::System::String* ChronicleMainPathJsonFilePath; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _AllMissionIDList; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _CanTakeMissionPathIDList; // 0x28
		::System::String* ChronicleMiddleMissionPackJsonFilePath; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_B302648C6979F380*>* _ChronicleMiddleMissionPackDict_k__BackingField; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MissionChronicleMainPathData*>* _WorldPathDict_k__BackingField; // 0x40
		::RPG::Client::MissionChronicleRedDotFilter* _MissionChronicleRedDotFilter_k__BackingField; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* _AllSubMissionIDList; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleMainPathData*>* _AssistEAPathDataList; // 0x58
		::RPG::Client::PenaconyEndmostChronicleData* _PenaconyEndmostChronicleData; // 0x60
		::System::UInt32 _FirstPathID_k__BackingField; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* PrepareChronicleMissionData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_PREPARECHRONICLEMISSIONDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* GetEmptyMissionDataList()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_GETEMPTYMISSIONDATALIST_OFFSET))(this);
		}

		::System::Void CheckPrefsOverFlow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_CHECKPREFSOVERFLOW_OFFSET))(this);
		}

		::RPG::Client::MissionChronicleBasePathData* GetNewPathDataByMissionID(::System::UInt32 a1)
		{
			return ((::RPG::Client::MissionChronicleBasePathData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_GETNEWPATHDATABYMISSIONID_OFFSET))(this, a1);
		}

		::Class_1_09388B68BBD5FF59* GetAvailableMiddleSinglePackMission(::System::UInt32 a1)
		{
			return ((::Class_1_09388B68BBD5FF59*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_GETAVAILABLEMIDDLESINGLEPACKMISSION_OFFSET))(this, a1);
		}

		::System::Void RefreshInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_REFRESHINFO_OFFSET))(this);
		}

		::System::Void RefreshEarlyAccessInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_REFRESHEARLYACCESSINFO_OFFSET))(this);
		}

		::System::Void RefreshWorldUnlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_REFRESHWORLDUNLOCK_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_INIT_OFFSET))(this);
		}

		::System::Void OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_ONLOGINFINISH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_ONRECONNECT_OFFSET))(this);
		}

		::RPG::Client::PenaconyEndmostChronicleData* GetPenaconyEndmostChronicleData()
		{
			return ((::RPG::Client::PenaconyEndmostChronicleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_GETPENACONYENDMOSTCHRONICLEDATA_OFFSET))(this);
		}

		::System::Void _GenerateChroniclePath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE__GENERATECHRONICLEPATH_OFFSET))(this);
		}

		::System::Void _SetConnectionWayData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE__SETCONNECTIONWAYDATA_OFFSET))(this);
		}

		::System::Void _GenerateChronicleMiddleMissionPack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE__GENERATECHRONICLEMIDDLEMISSIONPACK_OFFSET))(this);
		}

		::System::Void _GetMissionNeedPrepareIDList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE__GETMISSIONNEEDPREPAREIDLIST_OFFSET))(this);
		}

		::System::Void _SetCanTakeMissionPathIDList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE__SETCANTAKEMISSIONPATHIDLIST_OFFSET))(this);
		}

		::System::Void _SetMainPathCanTakeMissionList(::RPG::Client::MissionChronicleMainPathData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionChronicleMainPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE__SETMAINPATHCANTAKEMISSIONLIST_OFFSET))(this, a1);
		}

		::RPG::Client::MissionChronicleBasePathData* _SearchNewMainPathByMissionID(::RPG::Client::MissionChronicleMainPathData* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::MissionChronicleBasePathData*(*)(::PVOID, ::RPG::Client::MissionChronicleMainPathData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE__SEARCHNEWMAINPATHBYMISSIONID_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MissionChronicleBasePathData* _SearchNewSubPathByMissionID(::RPG::Client::MissionChronicleSubPathData* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::MissionChronicleBasePathData*(*)(::PVOID, ::RPG::Client::MissionChronicleSubPathData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE__SEARCHNEWSUBPATHBYMISSIONID_OFFSET))(this, a1, a2);
		}

		::System::Void _GenerateFilter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE__GENERATEFILTER_OFFSET))(this);
		}

		::System::Boolean _CheckIsMissionEmpty(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE__CHECKISMISSIONEMPTY_OFFSET))(this, a1);
		}

		::System::Boolean _CheckIsSubMissionEmpty(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE__CHECKISSUBMISSIONEMPTY_OFFSET))(this, a1);
		}

		::System::Void _SearchEarlyAccessEffected(::RPG::Client::MissionChronicleMainPathData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionChronicleMainPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE__SEARCHEARLYACCESSEFFECTED_OFFSET))(this, a1);
		}

		::System::Void _SetAssistPathDataListEAEffected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE__SETASSISTPATHDATALISTEAEFFECTED_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MissionChronicleMainPathData*>* get_ChronicleMainPathDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MissionChronicleMainPathData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_GET_CHRONICLEMAINPATHDICT_OFFSET))(this);
		}

		::System::Void set_ChronicleMainPathDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MissionChronicleMainPathData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MissionChronicleMainPathData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_SET_CHRONICLEMAINPATHDICT_OFFSET))(this, a1);
		}

		::System::UInt32 get_FirstPathID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_GET_FIRSTPATHID_OFFSET))(this);
		}

		::System::Void set_FirstPathID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_SET_FIRSTPATHID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_CanTakeMissionPathIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_GET_CANTAKEMISSIONPATHIDLIST_OFFSET))(this);
		}

		::RPG::Client::MissionChronicleRedDotFilter* get_MissionChronicleRedDotFilter()
		{
			return ((::RPG::Client::MissionChronicleRedDotFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_GET_MISSIONCHRONICLEREDDOTFILTER_OFFSET))(this);
		}

		::System::Void set_MissionChronicleRedDotFilter(::RPG::Client::MissionChronicleRedDotFilter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionChronicleRedDotFilter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_SET_MISSIONCHRONICLEREDDOTFILTER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_B302648C6979F380*>* get_ChronicleMiddleMissionPackDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_B302648C6979F380*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_GET_CHRONICLEMIDDLEMISSIONPACKDICT_OFFSET))(this);
		}

		::System::Void set_ChronicleMiddleMissionPackDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_B302648C6979F380*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_B302648C6979F380*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_SET_CHRONICLEMIDDLEMISSIONPACKDICT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MissionChronicleMainPathData*>* get_WorldPathDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MissionChronicleMainPathData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_GET_WORLDPATHDICT_OFFSET))(this);
		}

		::System::Void set_WorldPathDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MissionChronicleMainPathData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MissionChronicleMainPathData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_SET_WORLDPATHDICT_OFFSET))(this, a1);
		}

		::System::Void _OnLoginFinish_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE__ONLOGINFINISH_B__10_0_OFFSET))(this);
		}
	};
}
