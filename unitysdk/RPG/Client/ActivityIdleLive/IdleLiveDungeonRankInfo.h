#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveDungeonRankData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONRANKINFO_GETRANKDATASSORTED_OFFSET UNITYSDK_OFFSET(0x1A6575F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONRANKINFO_GETSELFRANKDATA_OFFSET UNITYSDK_OFFSET(0x1A653F50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONRANKINFO_UPDATEFRIENDINFO_OFFSET UNITYSDK_OFFSET(0x1A654090)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONRANKINFO_UPDATESELFASSISTCOUNT_OFFSET UNITYSDK_OFFSET(0x1A6569B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONRANKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A650930)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveDungeonRankInfo_TypeDefinitionIndex = 71611;

	class IdleLiveDungeonRankInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankData*>* _RankDatas; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankData*>* _CachedRankDatas; // 0x18
		::System::Boolean _IsDirty; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONRANKINFO__CTOR_OFFSET))(this);
		}

		::System::Void UpdateFriendInfo(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONRANKINFO_UPDATEFRIENDINFO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UpdateSelfAssistCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONRANKINFO_UPDATESELFASSISTCOUNT_OFFSET))(this, a1);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankData*>* GetRankDatasSorted()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONRANKINFO_GETRANKDATASSORTED_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankData* GetSelfRankData()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONRANKINFO_GETSELFRANKDATA_OFFSET))(this);
		}
	};
}
