#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PenaconyEndmostChroniclePathData; }
namespace RPG::Client::MissionReplayData { class IMissionReplayPerformanceData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9BEECD0)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA_GETCHAPTERICONPATH_OFFSET UNITYSDK_OFFSET(0x9BEF230)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA_GETCHAPTERNAME_OFFSET UNITYSDK_OFFSET(0x9BEF190)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA_GETMISSIONIDSET_OFFSET UNITYSDK_OFFSET(0x9BEF360)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA_GETMISSIONNAME_OFFSET UNITYSDK_OFFSET(0x9BEF120)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA_GETPERFORMANCEDATABYINDEX_OFFSET UNITYSDK_OFFSET(0x9BEF4D0)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA_GETPERFORMANCEDATALIST_OFFSET UNITYSDK_OFFSET(0x9BEF0E0)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA_GETRECORDPAGEID_OFFSET UNITYSDK_OFFSET(0x9BEF6C0)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA_GETSHOWIMGPATH_OFFSET UNITYSDK_OFFSET(0x9BEF2F0)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x9BEF720)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA_GET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x9BEE850)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA_ISCANREPLAY_OFFSET UNITYSDK_OFFSET(0x9BEF570)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA_ISREPLAYFEATURECLOSED_OFFSET UNITYSDK_OFFSET(0x9BEF1F0)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9BEEDC0)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA__INIT_OFFSET UNITYSDK_OFFSET(0x9BEEE20)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA__ISMISSIONHASPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x9BEF660)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA___INIT_B__2_0_OFFSET UNITYSDK_OFFSET(0x9BEF740)

namespace RPG::Client::MissionReplayData
{
	inline static constexpr unsigned int PenaconyEndmostReplayData_TypeDefinitionIndex = 61414;

	class PenaconyEndmostReplayData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MissionReplayData::IMissionReplayPerformanceData*>* _PerfromantDataList; // 0x10
		::RPG::Client::PenaconyEndmostChroniclePathData* _PathData; // 0x18
		::System::UInt32 _RecordTag; // 0x20
		::RPG::Client::TextID _ChapterName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MissionReplayData::PenaconyEndmostReplayData* Create(::RPG::Client::PenaconyEndmostChroniclePathData* data)
		{
			return ((::RPG::Client::MissionReplayData::PenaconyEndmostReplayData*(*)(::RPG::Client::PenaconyEndmostChroniclePathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA_CREATE_OFFSET))(data);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA__INIT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MissionReplayData::IMissionReplayPerformanceData*>* GetPerformanceDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MissionReplayData::IMissionReplayPerformanceData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA_GETPERFORMANCEDATALIST_OFFSET))(this);
		}

		::RPG::Client::TextID GetMissionName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA_GETMISSIONNAME_OFFSET))(this);
		}

		::RPG::Client::TextID GetChapterName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA_GETCHAPTERNAME_OFFSET))(this);
		}

		::System::Boolean IsReplayFeatureClosed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA_ISREPLAYFEATURECLOSED_OFFSET))(this);
		}

		::System::String* GetChapterIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA_GETCHAPTERICONPATH_OFFSET))(this);
		}

		::System::String* GetShowImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA_GETSHOWIMGPATH_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* GetMissionIDSet()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA_GETMISSIONIDSET_OFFSET))(this);
		}

		::RPG::Client::MissionReplayData::IMissionReplayPerformanceData* GetPerformanceDataByIndex(::System::Int32 index)
		{
			return ((::RPG::Client::MissionReplayData::IMissionReplayPerformanceData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA_GETPERFORMANCEDATABYINDEX_OFFSET))(this, index);
		}

		::System::Boolean IsCanReplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA_ISCANREPLAY_OFFSET))(this);
		}

		::System::Boolean _IsMissionHasPerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA__ISMISSIONHASPERFORMANCE_OFFSET))(this);
		}

		::System::UInt32 GetRecordPageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA_GETRECORDPAGEID_OFFSET))(this);
		}

		::System::UInt32 get_MainMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA_GET_MAINMISSIONID_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA_GET_ID_OFFSET))(this);
		}

		::System::Int32 __Init_b__2_0(::RPG::Client::MissionReplayData::IMissionReplayPerformanceData* a, ::RPG::Client::MissionReplayData::IMissionReplayPerformanceData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MissionReplayData::IMissionReplayPerformanceData*, ::RPG::Client::MissionReplayData::IMissionReplayPerformanceData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA___INIT_B__2_0_OFFSET))(this, a, b);
		}
	};
}
