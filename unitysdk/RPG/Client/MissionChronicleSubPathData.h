#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChronicleStatus.h"
#include "unitysdk/RPG/Client/MissionChronicleBasePathData.h"
#include "unitysdk/RPG/Client/SubChronicleConnectionWay.h"

namespace RPG::Client { class EarlyAccessContent; }
namespace RPG::Client { class MainMissionData; }
namespace RPG::Client { class MissionChronicleMainPathData; }
namespace RPG::GameCore { class ChronicleConnectionConfig; }
namespace RPG::GameCore { class ChronicleCustomUnlockConditionConfig; }
namespace RPG::GameCore { class ChronicleNodeConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_CHECKISCANTAKEMISSION_OFFSET UNITYSDK_OFFSET(0xD6CFCC0)
#define RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_CHECKISMIDDLEMISSIONSTATE_OFFSET UNITYSDK_OFFSET(0xD6DA770)
#define RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_CHECKISPREDICTION_OFFSET UNITYSDK_OFFSET(0xD6DA420)
#define RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD6D9490)
#define RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_GETCURPROCESSINGMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xD6D9B70)
#define RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_GETSTORYLINEID_OFFSET UNITYSDK_OFFSET(0xD6DAA40)
#define RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_GET_BELONGMAINPATHDATA_OFFSET UNITYSDK_OFFSET(0xD6D9730)
#define RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_GET_BELONGMAINPATHID_OFFSET UNITYSDK_OFFSET(0xD6DADC0)
#define RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_GET_CONNECTIONLIST_OFFSET UNITYSDK_OFFSET(0xD6DAF60)
#define RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_GET_CUSTOMUNLOCKCONDITIONCONFIGLIST_OFFSET UNITYSDK_OFFSET(0xD6DAEA0)
#define RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_GET_EARLYACCESSCONTENTID_OFFSET UNITYSDK_OFFSET(0xD6DAFC0)
#define RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_GET_EARLYACCESSCONTENT_OFFSET UNITYSDK_OFFSET(0xD6DB070)
#define RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_GET_ISSHOWBYFINISHCONTENT_OFFSET UNITYSDK_OFFSET(0xD6DB150)
#define RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_GET_LASTMISSIONID_OFFSET UNITYSDK_OFFSET(0xD6DADA0)
#define RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_GET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xD6DADE0)
#define RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_GET_PARENTLINETYPESUBPATHDATA_OFFSET UNITYSDK_OFFSET(0xD6DAFA0)
#define RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_GET_PARENTSUBPATHLIST_OFFSET UNITYSDK_OFFSET(0xD6DAF80)
#define RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_INIT_OFFSET UNITYSDK_OFFSET(0xD6D9510)
#define RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_ISANYPARENTPATHFINISH_OFFSET UNITYSDK_OFFSET(0xD6DA480)
#define RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_ISANYPARENTPATHPROCESSINGFINISH_OFFSET UNITYSDK_OFFSET(0xD6DA5E0)
#define RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_ISCANSTEPNEXTPATH_OFFSET UNITYSDK_OFFSET(0xD6CFD10)
#define RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_ISCONNECTMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0xD6D99C0)
#define RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_ISNEWLEGAL_OFFSET UNITYSDK_OFFSET(0xD6D3F70)
#define RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_ISNEW_OFFSET UNITYSDK_OFFSET(0xD6D9280)
#define RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_ISWORLDUNLOCK_OFFSET UNITYSDK_OFFSET(0xD6DAD60)
#define RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_REFRESHEARLYACCESSINFO_OFFSET UNITYSDK_OFFSET(0xD6CE8A0)
#define RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_SETDATA_OFFSET UNITYSDK_OFFSET(0xD6CF790)
#define RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_SETSEEN_OFFSET UNITYSDK_OFFSET(0xD6D9F50)
#define RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_SET_BELONGMAINPATHID_OFFSET UNITYSDK_OFFSET(0xD6DADD0)
#define RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_SET_CONNECTIONLIST_OFFSET UNITYSDK_OFFSET(0xD6DAF70)
#define RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_SET_LASTMISSIONID_OFFSET UNITYSDK_OFFSET(0xD6DADB0)
#define RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_SET_PARENTLINETYPESUBPATHDATA_OFFSET UNITYSDK_OFFSET(0xD6DAFB0)
#define RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_SET_PARENTSUBPATHLIST_OFFSET UNITYSDK_OFFSET(0xD6DAF90)
#define RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD6CF700)
#define RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA__GETCURCHRONICLESTATUSBYSELF_OFFSET UNITYSDK_OFFSET(0xD6DABB0)
#define RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA__GETCURCHRONICLESTATUS_OFFSET UNITYSDK_OFFSET(0xD6D9820)
#define RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA__GETSTORYLINEID_OFFSET UNITYSDK_OFFSET(0xD6DAAB0)
#define RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA__SETUPCONNECTIONLIST_OFFSET UNITYSDK_OFFSET(0xD6D9550)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionChronicleSubPathData_TypeDefinitionIndex = 66142;

	class MissionChronicleSubPathData : public ::RPG::Client::MissionChronicleBasePathData
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::SubChronicleConnectionWay>* _ConnectionList_k__BackingField; // 0xB0
		::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleSubPathData*>* _ParentSubPathList_k__BackingField; // 0xB8
		::RPG::Client::MissionChronicleSubPathData* _ParentLineTypeSubPathData_k__BackingField; // 0xC0
		::RPG::Client::ChronicleStatus _ParentLineStatus; // 0xC8
		::System::UInt32 _BelongMainPathID_k__BackingField; // 0xCC
		::System::UInt32 _LastMissionID_k__BackingField; // 0xD0

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_INIT_OFFSET))(this);
		}

		::System::Void SetData(::RPG::GameCore::ChronicleNodeConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChronicleNodeConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_SETDATA_OFFSET))(this, a1);
		}

		::System::Boolean IsCanStepNextPath()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_ISCANSTEPNEXTPATH_OFFSET))(this);
		}

		::System::Boolean IsConnectMissionFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_ISCONNECTMISSIONFINISH_OFFSET))(this);
		}

		::RPG::Client::MainMissionData* GetCurProcessingMissionData()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_GETCURPROCESSINGMISSIONDATA_OFFSET))(this);
		}

		::System::Boolean CheckIsCanTakeMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_CHECKISCANTAKEMISSION_OFFSET))(this);
		}

		::System::Boolean IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_ISNEW_OFFSET))(this);
		}

		::System::Boolean IsNewLegal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_ISNEWLEGAL_OFFSET))(this);
		}

		::System::Void SetSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_SETSEEN_OFFSET))(this);
		}

		::System::Boolean CheckIsPrediction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_CHECKISPREDICTION_OFFSET))(this);
		}

		::System::Boolean IsAnyParentPathFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_ISANYPARENTPATHFINISH_OFFSET))(this);
		}

		::System::Boolean IsAnyParentPathProcessingFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_ISANYPARENTPATHPROCESSINGFINISH_OFFSET))(this);
		}

		::System::Boolean CheckIsMiddleMissionState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_CHECKISMIDDLEMISSIONSTATE_OFFSET))(this);
		}

		::System::Int32 GetStoryLineID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_GETSTORYLINEID_OFFSET))(this);
		}

		::System::Void RefreshEarlyAccessInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_REFRESHEARLYACCESSINFO_OFFSET))(this);
		}

		::System::Boolean IsWorldUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_ISWORLDUNLOCK_OFFSET))(this);
		}

		::RPG::Client::ChronicleStatus _GetCurChronicleStatus()
		{
			return ((::RPG::Client::ChronicleStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA__GETCURCHRONICLESTATUS_OFFSET))(this);
		}

		::RPG::Client::ChronicleStatus _GetCurChronicleStatusBySelf()
		{
			return ((::RPG::Client::ChronicleStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA__GETCURCHRONICLESTATUSBYSELF_OFFSET))(this);
		}

		::System::Void _SetupConnectionList(::Il2CppArray<::RPG::GameCore::ChronicleConnectionConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ChronicleConnectionConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA__SETUPCONNECTIONLIST_OFFSET))(this, a1);
		}

		::System::Int32 _GetStoryLineID(::RPG::Client::MissionChronicleSubPathData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MissionChronicleSubPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA__GETSTORYLINEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_LastMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_GET_LASTMISSIONID_OFFSET))(this);
		}

		::System::Void set_LastMissionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_SET_LASTMISSIONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_BelongMainPathID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_GET_BELONGMAINPATHID_OFFSET))(this);
		}

		::System::Void set_BelongMainPathID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_SET_BELONGMAINPATHID_OFFSET))(this, a1);
		}

		::RPG::Client::MissionChronicleMainPathData* get_BelongMainPathData()
		{
			return ((::RPG::Client::MissionChronicleMainPathData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_GET_BELONGMAINPATHDATA_OFFSET))(this);
		}

		::System::UInt32 get_MainMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_GET_MAINMISSIONID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ChronicleCustomUnlockConditionConfig*>* get_CustomUnlockConditionConfigList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ChronicleCustomUnlockConditionConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_GET_CUSTOMUNLOCKCONDITIONCONFIGLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SubChronicleConnectionWay>* get_ConnectionList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SubChronicleConnectionWay>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_GET_CONNECTIONLIST_OFFSET))(this);
		}

		::System::Void set_ConnectionList(::System::Collections::Generic::List_1<::RPG::Client::SubChronicleConnectionWay>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SubChronicleConnectionWay>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_SET_CONNECTIONLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleSubPathData*>* get_ParentSubPathList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleSubPathData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_GET_PARENTSUBPATHLIST_OFFSET))(this);
		}

		::System::Void set_ParentSubPathList(::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleSubPathData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleSubPathData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_SET_PARENTSUBPATHLIST_OFFSET))(this, a1);
		}

		::RPG::Client::MissionChronicleSubPathData* get_ParentLineTypeSubPathData()
		{
			return ((::RPG::Client::MissionChronicleSubPathData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_GET_PARENTLINETYPESUBPATHDATA_OFFSET))(this);
		}

		::System::Void set_ParentLineTypeSubPathData(::RPG::Client::MissionChronicleSubPathData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionChronicleSubPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_SET_PARENTLINETYPESUBPATHDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_EarlyAccessContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_GET_EARLYACCESSCONTENTID_OFFSET))(this);
		}

		::RPG::Client::EarlyAccessContent* get_EarlyAccessContent()
		{
			return ((::RPG::Client::EarlyAccessContent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_GET_EARLYACCESSCONTENT_OFFSET))(this);
		}

		::System::Boolean get_IsShowByFinishContent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLESUBPATHDATA_GET_ISSHOWBYFINISHCONTENT_OFFSET))(this);
		}
	};
}
