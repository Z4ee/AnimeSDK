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

#define RPG_CLIENT_HANDBOOKCHAPTERDATA_GETINDEXSTRING_OFFSET UNITYSDK_OFFSET(0x1A04BE80)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_CANEARLYACCESS_OFFSET UNITYSDK_OFFSET(0x1A049800)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_FINISHEDMISSIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1A04A3F0)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_ISEARLYUNLOCKDOING_OFFSET UNITYSDK_OFFSET(0x1A049AF0)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_ISLATESTUPDATE_OFFSET UNITYSDK_OFFSET(0x1A049D40)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_ISOVERRIDINGFINISHSTATUS_OFFSET UNITYSDK_OFFSET(0x1A049700)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1A049740)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_OVERRIDEFINISHSTATUS_OFFSET UNITYSDK_OFFSET(0x1A049720)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_SORTID_OFFSET UNITYSDK_OFFSET(0x1A0496C0)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_TOTALMISSIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1A04A3A0)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_WORLDBANNERPATH_OFFSET UNITYSDK_OFFSET(0x1A0496E0)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_WORLDDESC_OFFSET UNITYSDK_OFFSET(0x1A04A1A0)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_WORLDEARLYUNLOCKDATA_OFFSET UNITYSDK_OFFSET(0x1A04A760)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_WORLDICONBIG_OFFSET UNITYSDK_OFFSET(0x1A04A260)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_WORLDICONSMALL_OFFSET UNITYSDK_OFFSET(0x1A04A300)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_WORLDNAME_OFFSET UNITYSDK_OFFSET(0x1A04A080)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_GET__WORLDDATAROW_OFFSET UNITYSDK_OFFSET(0x1A04A140)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_GET__WORLDEARLYUNLOCKDATA_OFFSET UNITYSDK_OFFSET(0x1A049A20)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1A04BA40)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_ISONGOING_OFFSET UNITYSDK_OFFSET(0x1A04BB00)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_ISPROCESSING_OFFSET UNITYSDK_OFFSET(0x1A04B8E0)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_SETMAINPATHLIST_OFFSET UNITYSDK_OFFSET(0x1A04AC60)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_SET_ISOVERRIDINGFINISHSTATUS_OFFSET UNITYSDK_OFFSET(0x1A049710)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_SET_OVERRIDEFINISHSTATUS_OFFSET UNITYSDK_OFFSET(0x1A049730)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_SET_SORTID_OFFSET UNITYSDK_OFFSET(0x1A0496D0)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA_SET_WORLDBANNERPATH_OFFSET UNITYSDK_OFFSET(0x1A0496F0)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A04A850)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA__GETFINISHEDMISSIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1A04A440)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA__ISLATESTUPDATE_OFFSET UNITYSDK_OFFSET(0x1A049D90)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA__PREPAREINDEXSTRING_OFFSET UNITYSDK_OFFSET(0x1A04AFE0)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookChapterData_TypeDefinitionIndex = 65674;

	class HandbookChapterData : public ::System::Object
	{
	public:
		::System::String* _WorldBannerPath_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TextID>* _IndexLiteralDict; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleMainPathData*>* MainPathList; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* _IndexStringDict; // 0x28
		::System::UInt32 _SortID_k__BackingField; // 0x30
		::System::UInt32 ChapterID; // 0x34
		::RPG::Client::TextID ChapterName; // 0x38
		::System::Boolean _IsOverridingFinishStatus_k__BackingField; // 0x48
		::System::Boolean _OverrideFinishStatus_k__BackingField; // 0x49

		::System::Void _ctor(::RPG::GameCore::MainStoryActViewRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MainStoryActViewRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_SortID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_SORTID_OFFSET))(this);
		}

		::System::Void set_SortID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA_SET_SORTID_OFFSET))(this, a1);
		}

		::System::String* get_WorldBannerPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_WORLDBANNERPATH_OFFSET))(this);
		}

		::System::Void set_WorldBannerPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA_SET_WORLDBANNERPATH_OFFSET))(this, a1);
		}

		::System::Boolean get_IsOverridingFinishStatus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_ISOVERRIDINGFINISHSTATUS_OFFSET))(this);
		}

		::System::Void set_IsOverridingFinishStatus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA_SET_ISOVERRIDINGFINISHSTATUS_OFFSET))(this, a1);
		}

		::System::Boolean get_OverrideFinishStatus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA_GET_OVERRIDEFINISHSTATUS_OFFSET))(this);
		}

		::System::Void set_OverrideFinishStatus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA_SET_OVERRIDEFINISHSTATUS_OFFSET))(this, a1);
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

		::System::Void SetMainPathList(::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleMainPathData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleMainPathData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA_SETMAINPATHLIST_OFFSET))(this, a1);
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

		::System::String* GetIndexString(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA_GETINDEXSTRING_OFFSET))(this, a1);
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
