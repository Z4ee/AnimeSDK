#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MissionChronicleBasePathData; }
namespace RPG::Client::MissionReplayData { class IMissionReplayPerformanceData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MISSIONREPLAYDATA_CHRONICLEMISSIONREPLAYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x18051680)
#define RPG_CLIENT_MISSIONREPLAYDATA_CHRONICLEMISSIONREPLAYDATA_GETCHAPTERICONPATH_OFFSET UNITYSDK_OFFSET(0x18052580)
#define RPG_CLIENT_MISSIONREPLAYDATA_CHRONICLEMISSIONREPLAYDATA_GETCHAPTERNAME_OFFSET UNITYSDK_OFFSET(0x18052200)
#define RPG_CLIENT_MISSIONREPLAYDATA_CHRONICLEMISSIONREPLAYDATA_GETMISSIONIDSET_OFFSET UNITYSDK_OFFSET(0x18052710)
#define RPG_CLIENT_MISSIONREPLAYDATA_CHRONICLEMISSIONREPLAYDATA_GETMISSIONNAME_OFFSET UNITYSDK_OFFSET(0x18052080)
#define RPG_CLIENT_MISSIONREPLAYDATA_CHRONICLEMISSIONREPLAYDATA_GETPERFORMANCEDATABYINDEX_OFFSET UNITYSDK_OFFSET(0x180528E0)
#define RPG_CLIENT_MISSIONREPLAYDATA_CHRONICLEMISSIONREPLAYDATA_GETPERFORMANCEDATALIST_OFFSET UNITYSDK_OFFSET(0x18052040)
#define RPG_CLIENT_MISSIONREPLAYDATA_CHRONICLEMISSIONREPLAYDATA_GETRECORDPAGEID_OFFSET UNITYSDK_OFFSET(0x18052970)
#define RPG_CLIENT_MISSIONREPLAYDATA_CHRONICLEMISSIONREPLAYDATA_GETSHOWIMGPATH_OFFSET UNITYSDK_OFFSET(0x180526B0)
#define RPG_CLIENT_MISSIONREPLAYDATA_CHRONICLEMISSIONREPLAYDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x18052A40)
#define RPG_CLIENT_MISSIONREPLAYDATA_CHRONICLEMISSIONREPLAYDATA_ISCANREPLAY_OFFSET UNITYSDK_OFFSET(0x18051F60)
#define RPG_CLIENT_MISSIONREPLAYDATA_CHRONICLEMISSIONREPLAYDATA_ISREPLAYFEATURECLOSED_OFFSET UNITYSDK_OFFSET(0x18052400)
#define RPG_CLIENT_MISSIONREPLAYDATA_CHRONICLEMISSIONREPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18051720)
#define RPG_CLIENT_MISSIONREPLAYDATA_CHRONICLEMISSIONREPLAYDATA__INIT_OFFSET UNITYSDK_OFFSET(0x18051730)

namespace RPG::Client::MissionReplayData
{
	inline static constexpr unsigned int ChronicleMissionReplayData_TypeDefinitionIndex = 71249;

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
