#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7FF19F6206AF6DD7_5;
namespace RPG::Client { class ActivityRewardCountData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_ACTIVITYREWARDCOUNTCOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B876A30)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTCOLLECTION_GETREWARDCOUNT_OFFSET UNITYSDK_OFFSET(0x1B876800)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTCOLLECTION_SYNCALLREWARDCOUNTS_OFFSET UNITYSDK_OFFSET(0x1B876AC0)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTCOLLECTION_SYNCONEREWARDCOUNT_OFFSET UNITYSDK_OFFSET(0x1B876FC0)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B876780)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTCOLLECTION__GETORCREATEREWARDCOUNT_OFFSET UNITYSDK_OFFSET(0x1B876850)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityRewardCountCollection_TypeDefinitionIndex = 61874;

	class ActivityRewardCountCollection : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityRewardCountData*>* _ActivityRewardCounts; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTCOLLECTION__CTOR_OFFSET))(this);
		}

		::RPG::Client::ActivityRewardCountData* GetRewardCount(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityRewardCountData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTCOLLECTION_GETREWARDCOUNT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTCOLLECTION_CLEAR_OFFSET))(this);
		}

		::System::Void SyncAllRewardCounts(::System::Collections::Generic::IEnumerable_1<::Class_1_7FF19F6206AF6DD7_5*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_7FF19F6206AF6DD7_5*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTCOLLECTION_SYNCALLREWARDCOUNTS_OFFSET))(this, a1);
		}

		::System::Void SyncOneRewardCount(::Class_1_7FF19F6206AF6DD7_5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTCOLLECTION_SYNCONEREWARDCOUNT_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityRewardCountData* _GetOrCreateRewardCount(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityRewardCountData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTCOLLECTION__GETORCREATEREWARDCOUNT_OFFSET))(this, a1);
		}
	};
}
