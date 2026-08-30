#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SwordTrainingEndingDataItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWORDTRAININGENDINGINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE129BE0)
#define RPG_CLIENT_SWORDTRAININGENDINGINFO_GETDATABYENDINGID_OFFSET UNITYSDK_OFFSET(0xE129EC0)
#define RPG_CLIENT_SWORDTRAININGENDINGINFO_GETDATABYSTORYID_OFFSET UNITYSDK_OFFSET(0xE129D00)
#define RPG_CLIENT_SWORDTRAININGENDINGINFO_GETENDINGFINISHEDCOUNT_OFFSET UNITYSDK_OFFSET(0xE12A2C0)
#define RPG_CLIENT_SWORDTRAININGENDINGINFO_GET_DATALIST_OFFSET UNITYSDK_OFFSET(0xE12A430)
#define RPG_CLIENT_SWORDTRAININGENDINGINFO_INIT_OFFSET UNITYSDK_OFFSET(0xE129960)
#define RPG_CLIENT_SWORDTRAININGENDINGINFO_ISALLFINISHED_OFFSET UNITYSDK_OFFSET(0xE129FC0)
#define RPG_CLIENT_SWORDTRAININGENDINGINFO_ISANYENDINGFINISHED_OFFSET UNITYSDK_OFFSET(0xE12A140)
#define RPG_CLIENT_SWORDTRAININGENDINGINFO_SET_DATALIST_OFFSET UNITYSDK_OFFSET(0xE12A440)
#define RPG_CLIENT_SWORDTRAININGENDINGINFO_SYNCFINISHEDENDING_OFFSET UNITYSDK_OFFSET(0xE129E30)
#define RPG_CLIENT_SWORDTRAININGENDINGINFO_SYNCFINISHSTORY_OFFSET UNITYSDK_OFFSET(0xE129C70)
#define RPG_CLIENT_SWORDTRAININGENDINGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xE12A450)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingEndingInfo_TypeDefinitionIndex = 62021;

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

		::System::Void SyncFinishStory(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGINFO_SYNCFINISHSTORY_OFFSET))(this, a1);
		}

		::System::Void SyncFinishedEnding(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGINFO_SYNCFINISHEDENDING_OFFSET))(this, a1);
		}

		::RPG::Client::SwordTrainingEndingDataItem* GetDataByStoryID(::System::UInt32 a1)
		{
			return ((::RPG::Client::SwordTrainingEndingDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGINFO_GETDATABYSTORYID_OFFSET))(this, a1);
		}

		::RPG::Client::SwordTrainingEndingDataItem* GetDataByEndingID(::System::UInt32 a1)
		{
			return ((::RPG::Client::SwordTrainingEndingDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGINFO_GETDATABYENDINGID_OFFSET))(this, a1);
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

		::System::Void set_DataList(::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingEndingDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingEndingDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGENDINGINFO_SET_DATALIST_OFFSET))(this, a1);
		}
	};
}
