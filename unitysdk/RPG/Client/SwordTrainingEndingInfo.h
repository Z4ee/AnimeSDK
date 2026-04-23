#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SwordTrainingEndingDataItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWORDTRAININGENDINGINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB24E2A0)
#define RPG_CLIENT_SWORDTRAININGENDINGINFO_GETDATABYENDINGID_OFFSET UNITYSDK_OFFSET(0xB24E5C0)
#define RPG_CLIENT_SWORDTRAININGENDINGINFO_GETDATABYSTORYID_OFFSET UNITYSDK_OFFSET(0xB24E3A0)
#define RPG_CLIENT_SWORDTRAININGENDINGINFO_GETENDINGFINISHEDCOUNT_OFFSET UNITYSDK_OFFSET(0xB24E980)
#define RPG_CLIENT_SWORDTRAININGENDINGINFO_GET_DATALIST_OFFSET UNITYSDK_OFFSET(0xB24EAD0)
#define RPG_CLIENT_SWORDTRAININGENDINGINFO_INIT_OFFSET UNITYSDK_OFFSET(0xB24E110)
#define RPG_CLIENT_SWORDTRAININGENDINGINFO_ISALLFINISHED_OFFSET UNITYSDK_OFFSET(0xB24E6E0)
#define RPG_CLIENT_SWORDTRAININGENDINGINFO_ISANYENDINGFINISHED_OFFSET UNITYSDK_OFFSET(0xB24E830)
#define RPG_CLIENT_SWORDTRAININGENDINGINFO_SET_DATALIST_OFFSET UNITYSDK_OFFSET(0xB24EAE0)
#define RPG_CLIENT_SWORDTRAININGENDINGINFO_SYNCFINISHEDENDING_OFFSET UNITYSDK_OFFSET(0xB24E530)
#define RPG_CLIENT_SWORDTRAININGENDINGINFO_SYNCFINISHSTORY_OFFSET UNITYSDK_OFFSET(0xB24E310)
#define RPG_CLIENT_SWORDTRAININGENDINGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB24EAF0)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingEndingInfo_TypeDefinitionIndex = 57130;

	class SwordTrainingEndingInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingEndingDataItem*>* _DataList_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncFinishStory(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGINFO_SYNCFINISHSTORY_OFFSET))(this, id);
		}

		::System::Void SyncFinishedEnding(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGINFO_SYNCFINISHEDENDING_OFFSET))(this, id);
		}

		::RPG::Client::SwordTrainingEndingDataItem* GetDataByStoryID(::System::UInt32 storyID)
		{
			return ((::RPG::Client::SwordTrainingEndingDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGINFO_GETDATABYSTORYID_OFFSET))(this, storyID);
		}

		::RPG::Client::SwordTrainingEndingDataItem* GetDataByEndingID(::System::UInt32 endingID)
		{
			return ((::RPG::Client::SwordTrainingEndingDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGINFO_GETDATABYENDINGID_OFFSET))(this, endingID);
		}

		::System::Boolean IsAllFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGINFO_ISALLFINISHED_OFFSET))(this);
		}

		::System::Boolean IsAnyEndingFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGINFO_ISANYENDINGFINISHED_OFFSET))(this);
		}

		::System::Int32 GetEndingFinishedCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGINFO_GETENDINGFINISHEDCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingEndingDataItem*>* get_DataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingEndingDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGINFO_GET_DATALIST_OFFSET))(this);
		}

		::System::Void set_DataList(::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingEndingDataItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingEndingDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGINFO_SET_DATALIST_OFFSET))(this, value);
		}
	};
}
