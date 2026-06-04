#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PenaconyEndmostChroniclePathData; }
namespace RPG::Client::MissionReplayData { class IMissionReplayPerformanceData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC038100)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA_GETCHAPTERICONPATH_OFFSET UNITYSDK_OFFSET(0xC038910)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA_GETCHAPTERNAME_OFFSET UNITYSDK_OFFSET(0xC038870)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA_GETMISSIONIDSET_OFFSET UNITYSDK_OFFSET(0xC038A40)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA_GETMISSIONNAME_OFFSET UNITYSDK_OFFSET(0xC038800)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA_GETPERFORMANCEDATABYINDEX_OFFSET UNITYSDK_OFFSET(0xC038B70)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA_GETPERFORMANCEDATALIST_OFFSET UNITYSDK_OFFSET(0xC0387C0)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA_GETRECORDPAGEID_OFFSET UNITYSDK_OFFSET(0xC038D50)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA_GETSHOWIMGPATH_OFFSET UNITYSDK_OFFSET(0xC0389D0)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xC038DB0)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA_GET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xC037CA0)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA_ISCANREPLAY_OFFSET UNITYSDK_OFFSET(0xC038C00)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA_ISREPLAYFEATURECLOSED_OFFSET UNITYSDK_OFFSET(0xC0388D0)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC0381F0)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA__INIT_OFFSET UNITYSDK_OFFSET(0xC038250)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA__ISMISSIONHASPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xC038CF0)
#define RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA___INIT_B__2_0_OFFSET UNITYSDK_OFFSET(0xC038DD0)

namespace RPG::Client::MissionReplayData
{
	inline static constexpr unsigned int PenaconyEndmostReplayData_TypeDefinitionIndex = 69732;

	class PenaconyEndmostReplayData : public ::System::Object
	{
	public:
		::RPG::Client::PenaconyEndmostChroniclePathData* _PathData; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::MissionReplayData::IMissionReplayPerformanceData*>* _PerfromantDataList; // 0x18
		::RPG::Client::TextID _ChapterName; // 0x20
		::System::UInt32 _RecordTag; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MissionReplayData::PenaconyEndmostReplayData* Create(::RPG::Client::PenaconyEndmostChroniclePathData* a1)
		{
			return ((::RPG::Client::MissionReplayData::PenaconyEndmostReplayData*(*)(::RPG::Client::PenaconyEndmostChroniclePathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA_CREATE_OFFSET))(a1);
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

		::RPG::Client::MissionReplayData::IMissionReplayPerformanceData* GetPerformanceDataByIndex(::System::Int32 a1)
		{
			return ((::RPG::Client::MissionReplayData::IMissionReplayPerformanceData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA_GETPERFORMANCEDATABYINDEX_OFFSET))(this, a1);
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

		::System::Int32 __Init_b__2_0(::RPG::Client::MissionReplayData::IMissionReplayPerformanceData* a1, ::RPG::Client::MissionReplayData::IMissionReplayPerformanceData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MissionReplayData::IMissionReplayPerformanceData*, ::RPG::Client::MissionReplayData::IMissionReplayPerformanceData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_PENACONYENDMOSTREPLAYDATA___INIT_B__2_0_OFFSET))(this, a1, a2);
		}
	};
}
