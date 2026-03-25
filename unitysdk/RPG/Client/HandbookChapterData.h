#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MissionChronicleMainPathData; }
namespace RPG::Client { class WorldEarlyUnlockData; }
namespace RPG::GameCore { class MainStoryActViewRow; }
namespace RPG::GameCore { class WorldDataConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HANDBOOKCHAPTERDATA_GETINDEXSTRING_OFFSET UNITYSDK_OFFSET(0x98F7150)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_CANEARLYACCESS_OFFSET UNITYSDK_OFFSET(0x98F50C0)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_FINISHEDMISSIONCOUNT_OFFSET UNITYSDK_OFFSET(0x98F5A40)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_ISEARLYUNLOCKDOING_OFFSET UNITYSDK_OFFSET(0x98F5310)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_ISLATESTUPDATE_OFFSET UNITYSDK_OFFSET(0x98F54C0)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_ISOVERRIDINGFINISHSTATUS_OFFSET UNITYSDK_OFFSET(0x98F4FB0)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x98F4FF0)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_OVERRIDEFINISHSTATUS_OFFSET UNITYSDK_OFFSET(0x98F4FD0)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_SORTID_OFFSET UNITYSDK_OFFSET(0x98F4F70)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_TOTALMISSIONCOUNT_OFFSET UNITYSDK_OFFSET(0x98F59F0)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_WORLDBANNERPATH_OFFSET UNITYSDK_OFFSET(0x98F4F90)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_WORLDDESC_OFFSET UNITYSDK_OFFSET(0x98F5890)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_WORLDEARLYUNLOCKDATA_OFFSET UNITYSDK_OFFSET(0x98F5D30)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_WORLDICONBIG_OFFSET UNITYSDK_OFFSET(0x98F5910)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_WORLDICONSMALL_OFFSET UNITYSDK_OFFSET(0x98F5980)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_WORLDNAME_OFFSET UNITYSDK_OFFSET(0x98F57B0)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_GET__WORLDDATAROW_OFFSET UNITYSDK_OFFSET(0x98F5830)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_GET__WORLDEARLYUNLOCKDATA_OFFSET UNITYSDK_OFFSET(0x98F5270)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x98F6F00)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_ISONGOING_OFFSET UNITYSDK_OFFSET(0x98F6F90)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_ISPROCESSING_OFFSET UNITYSDK_OFFSET(0x98F6DD0)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_SETMAINPATHLIST_OFFSET UNITYSDK_OFFSET(0x98F6180)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_SET_ISOVERRIDINGFINISHSTATUS_OFFSET UNITYSDK_OFFSET(0x98F4FC0)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_SET_OVERRIDEFINISHSTATUS_OFFSET UNITYSDK_OFFSET(0x98F4FE0)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_SET_SORTID_OFFSET UNITYSDK_OFFSET(0x98F4F80)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_SET_WORLDBANNERPATH_OFFSET UNITYSDK_OFFSET(0x98F4FA0)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x98F5DD0)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA__GETFINISHEDMISSIONCOUNT_OFFSET UNITYSDK_OFFSET(0x98F5A50)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA__ISLATESTUPDATE_OFFSET UNITYSDK_OFFSET(0x98F54D0)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA__PREPAREINDEXSTRING_OFFSET UNITYSDK_OFFSET(0x98F6460)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookChapterData_TypeDefinitionIndex = 53277;

	class HandbookChapterData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TextID>* _IndexLiteralDict; // 0x10
		::System::String* _WorldBannerPath_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleMainPathData*>* MainPathList; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* _IndexStringDict; // 0x28
		::RPG::Client::TextID ChapterName; // 0x30
		::System::UInt32 _SortID_k__BackingField; // 0x40
		::System::Boolean _IsOverridingFinishStatus_k__BackingField; // 0x44
		::System::Boolean _OverrideFinishStatus_k__BackingField; // 0x45
		::System::UInt32 ChapterID; // 0x48

		::System::Void _ctor(::RPG::GameCore::MainStoryActViewRow* chapterData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MainStoryActViewRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA__CTOR_OFFSET))(this, chapterData);
		}

		::System::UInt32 get_SortID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_SORTID_OFFSET))(this);
		}

		::System::Void set_SortID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA_SET_SORTID_OFFSET))(this, value);
		}

		::System::String* get_WorldBannerPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_WORLDBANNERPATH_OFFSET))(this);
		}

		::System::Void set_WorldBannerPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA_SET_WORLDBANNERPATH_OFFSET))(this, value);
		}

		::System::Boolean get_IsOverridingFinishStatus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_ISOVERRIDINGFINISHSTATUS_OFFSET))(this);
		}

		::System::Void set_IsOverridingFinishStatus(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA_SET_ISOVERRIDINGFINISHSTATUS_OFFSET))(this, value);
		}

		::System::Boolean get_OverrideFinishStatus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_OVERRIDEFINISHSTATUS_OFFSET))(this);
		}

		::System::Void set_OverrideFinishStatus(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA_SET_OVERRIDEFINISHSTATUS_OFFSET))(this, value);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_CanEarlyAccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_CANEARLYACCESS_OFFSET))(this);
		}

		::System::Boolean get_IsEarlyUnlockDoing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_ISEARLYUNLOCKDOING_OFFSET))(this);
		}

		::System::Boolean get_IsLatestUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_ISLATESTUPDATE_OFFSET))(this);
		}

		::RPG::Client::TextID get_WorldName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_WORLDNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_WorldDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_WORLDDESC_OFFSET))(this);
		}

		::System::String* get_WorldIconBig()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_WORLDICONBIG_OFFSET))(this);
		}

		::System::String* get_WorldIconSmall()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_WORLDICONSMALL_OFFSET))(this);
		}

		::System::UInt32 get_TotalMissionCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_TOTALMISSIONCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_FinishedMissionCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_FINISHEDMISSIONCOUNT_OFFSET))(this);
		}

		::RPG::Client::WorldEarlyUnlockData* get_WorldEarlyUnlockData()
		{
			return ((::RPG::Client::WorldEarlyUnlockData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_WORLDEARLYUNLOCKDATA_OFFSET))(this);
		}

		::RPG::Client::WorldEarlyUnlockData* get__WorldEarlyUnlockData()
		{
			return ((::RPG::Client::WorldEarlyUnlockData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA_GET__WORLDEARLYUNLOCKDATA_OFFSET))(this);
		}

		::RPG::GameCore::WorldDataConfigRow* get__WorldDataRow()
		{
			return ((::RPG::GameCore::WorldDataConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA_GET__WORLDDATAROW_OFFSET))(this);
		}

		::System::Void SetMainPathList(::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleMainPathData*>* mainPathList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleMainPathData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA_SETMAINPATHLIST_OFFSET))(this, mainPathList);
		}

		::System::Boolean IsProcessing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA_ISPROCESSING_OFFSET))(this);
		}

		::System::Boolean IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA_ISFINISHED_OFFSET))(this);
		}

		::System::Boolean IsOnGoing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA_ISONGOING_OFFSET))(this);
		}

		::System::String* GetIndexString(::System::UInt32 ID)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA_GETINDEXSTRING_OFFSET))(this, ID);
		}

		::System::Void _PrepareIndexString()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA__PREPAREINDEXSTRING_OFFSET))(this);
		}

		::System::UInt32 _GetFinishedMissionCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA__GETFINISHEDMISSIONCOUNT_OFFSET))(this);
		}

		::System::Boolean _IsLatestUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA__ISLATESTUPDATE_OFFSET))(this);
		}
	};
}
