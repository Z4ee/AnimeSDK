#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveDungeonRankData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONRANKINFO_GETRANKDATASSORTED_OFFSET UNITYSDK_OFFSET(0x9B4DF00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONRANKINFO_GETSELFRANKDATA_OFFSET UNITYSDK_OFFSET(0x9B4B000)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONRANKINFO_UPDATEFRIENDINFO_OFFSET UNITYSDK_OFFSET(0x9B4B170)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONRANKINFO_UPDATESELFASSISTCOUNT_OFFSET UNITYSDK_OFFSET(0x9B4D370)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONRANKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9B47E90)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveDungeonRankInfo_TypeDefinitionIndex = 69276;

	class IdleLiveDungeonRankInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankData*>* _CachedRankDatas; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankData*>* _RankDatas; // 0x18
		::System::Boolean _IsDirty; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONRANKINFO__CTOR_OFFSET))(this);
		}

		::System::Void UpdateFriendInfo(::System::UInt32 uid, ::System::UInt32 totalProgress, ::System::UInt32 assistCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONRANKINFO_UPDATEFRIENDINFO_OFFSET))(this, uid, totalProgress, assistCount);
		}

		::System::Void UpdateSelfAssistCount(::System::UInt32 assistCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONRANKINFO_UPDATESELFASSISTCOUNT_OFFSET))(this, assistCount);
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
