#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MissionChronicleBasePathData; }
namespace RPG::Client::MissionReplayData { class IMissionReplayPerformanceData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MISSIONREPLAYDATA_CHRONICLEMISSIONREPLAYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC036700)
#define RPG_CLIENT_MISSIONREPLAYDATA_CHRONICLEMISSIONREPLAYDATA_GETCHAPTERICONPATH_OFFSET UNITYSDK_OFFSET(0xC037450)
#define RPG_CLIENT_MISSIONREPLAYDATA_CHRONICLEMISSIONREPLAYDATA_GETCHAPTERNAME_OFFSET UNITYSDK_OFFSET(0xC0371C0)
#define RPG_CLIENT_MISSIONREPLAYDATA_CHRONICLEMISSIONREPLAYDATA_GETMISSIONIDSET_OFFSET UNITYSDK_OFFSET(0xC037580)
#define RPG_CLIENT_MISSIONREPLAYDATA_CHRONICLEMISSIONREPLAYDATA_GETMISSIONNAME_OFFSET UNITYSDK_OFFSET(0xC0370B0)
#define RPG_CLIENT_MISSIONREPLAYDATA_CHRONICLEMISSIONREPLAYDATA_GETPERFORMANCEDATABYINDEX_OFFSET UNITYSDK_OFFSET(0xC0376F0)
#define RPG_CLIENT_MISSIONREPLAYDATA_CHRONICLEMISSIONREPLAYDATA_GETPERFORMANCEDATALIST_OFFSET UNITYSDK_OFFSET(0xC037070)
#define RPG_CLIENT_MISSIONREPLAYDATA_CHRONICLEMISSIONREPLAYDATA_GETRECORDPAGEID_OFFSET UNITYSDK_OFFSET(0xC037780)
#define RPG_CLIENT_MISSIONREPLAYDATA_CHRONICLEMISSIONREPLAYDATA_GETSHOWIMGPATH_OFFSET UNITYSDK_OFFSET(0xC037520)
#define RPG_CLIENT_MISSIONREPLAYDATA_CHRONICLEMISSIONREPLAYDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xC0377E0)
#define RPG_CLIENT_MISSIONREPLAYDATA_CHRONICLEMISSIONREPLAYDATA_ISCANREPLAY_OFFSET UNITYSDK_OFFSET(0xC036F80)
#define RPG_CLIENT_MISSIONREPLAYDATA_CHRONICLEMISSIONREPLAYDATA_ISREPLAYFEATURECLOSED_OFFSET UNITYSDK_OFFSET(0xC037350)
#define RPG_CLIENT_MISSIONREPLAYDATA_CHRONICLEMISSIONREPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC0367A0)
#define RPG_CLIENT_MISSIONREPLAYDATA_CHRONICLEMISSIONREPLAYDATA__INIT_OFFSET UNITYSDK_OFFSET(0xC0367B0)

namespace RPG::Client::MissionReplayData
{
	inline static constexpr unsigned int ChronicleMissionReplayData_TypeDefinitionIndex = 69726;

	class ChronicleMissionReplayData : public ::System::Object
	{
	public:
		::RPG::Client::MissionChronicleBasePathData* _CurPathData; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::MissionReplayData::IMissionReplayPerformanceData*>* _PerfromantDataList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_CHRONICLEMISSIONREPLAYDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MissionReplayData::ChronicleMissionReplayData* Create(::RPG::Client::MissionChronicleBasePathData* a1)
		{
			return ((::RPG::Client::MissionReplayData::ChronicleMissionReplayData*(*)(::RPG::Client::MissionChronicleBasePathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_CHRONICLEMISSIONREPLAYDATA_CREATE_OFFSET))(a1);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_CHRONICLEMISSIONREPLAYDATA__INIT_OFFSET))(this);
		}

		::System::Boolean IsCanReplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_CHRONICLEMISSIONREPLAYDATA_ISCANREPLAY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MissionReplayData::IMissionReplayPerformanceData*>* GetPerformanceDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MissionReplayData::IMissionReplayPerformanceData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_CHRONICLEMISSIONREPLAYDATA_GETPERFORMANCEDATALIST_OFFSET))(this);
		}

		::RPG::Client::TextID GetMissionName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_CHRONICLEMISSIONREPLAYDATA_GETMISSIONNAME_OFFSET))(this);
		}

		::RPG::Client::TextID GetChapterName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_CHRONICLEMISSIONREPLAYDATA_GETCHAPTERNAME_OFFSET))(this);
		}

		::System::Boolean IsReplayFeatureClosed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_CHRONICLEMISSIONREPLAYDATA_ISREPLAYFEATURECLOSED_OFFSET))(this);
		}

		::System::String* GetChapterIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_CHRONICLEMISSIONREPLAYDATA_GETCHAPTERICONPATH_OFFSET))(this);
		}

		::System::String* GetShowImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_CHRONICLEMISSIONREPLAYDATA_GETSHOWIMGPATH_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* GetMissionIDSet()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_CHRONICLEMISSIONREPLAYDATA_GETMISSIONIDSET_OFFSET))(this);
		}

		::RPG::Client::MissionReplayData::IMissionReplayPerformanceData* GetPerformanceDataByIndex(::System::Int32 a1)
		{
			return ((::RPG::Client::MissionReplayData::IMissionReplayPerformanceData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_CHRONICLEMISSIONREPLAYDATA_GETPERFORMANCEDATABYINDEX_OFFSET))(this, a1);
		}

		::System::UInt32 GetRecordPageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_CHRONICLEMISSIONREPLAYDATA_GETRECORDPAGEID_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONREPLAYDATA_CHRONICLEMISSIONREPLAYDATA_GET_ID_OFFSET))(this);
		}
	};
}
