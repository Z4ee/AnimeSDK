#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_455008579EB95638_5;
namespace RPG::Client { class ActivityRewardCountItemData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::ObjectModel { template <typename T1, typename T2> class ReadOnlyDictionary_2; }

#define RPG_CLIENT_ACTIVITYREWARDCOUNTDATA_GETCOUNTBYITEMID_OFFSET UNITYSDK_OFFSET(0x9C572A0)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTDATA_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0x9C57360)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTDATA_GET_ITEMCOUNTS_OFFSET UNITYSDK_OFFSET(0x9C57370)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x9C567E0)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9C56F70)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityRewardCountData_TypeDefinitionIndex = 56988;

	class ActivityRewardCountData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityRewardCountItemData*>* _ItemCounts; // 0x10
		::System::Collections::ObjectModel::ReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::ActivityRewardCountItemData*>* _ItemCounts_ReadOnly; // 0x18
		::System::UInt32 _ActivityID; // 0x20

		::System::Void _ctor(::System::UInt32 activityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTDATA__CTOR_OFFSET))(this, activityID);
		}

		::System::Void Sync(::Class_1_455008579EB95638_5* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTDATA_SYNC_OFFSET))(this, proto);
		}

		::RPG::Client::ActivityRewardCountItemData* GetCountByItemID(::System::UInt32 itemID)
		{
			return ((::RPG::Client::ActivityRewardCountItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTDATA_GETCOUNTBYITEMID_OFFSET))(this, itemID);
		}

		::System::UInt32 get_ActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTDATA_GET_ACTIVITYID_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::ActivityRewardCountItemData*>* get_ItemCounts()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::ActivityRewardCountItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTDATA_GET_ITEMCOUNTS_OFFSET))(this);
		}
	};
}
