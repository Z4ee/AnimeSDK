#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_64322AA2C64044C0;
class Class_1_6BD41257D23618B4_12;
namespace RPG::Client::ActivityIdleLive { class IdleLiveQuestTreeItemData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveQuestTreeTabData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEINFO_GETALLTABDATALIST_OFFSET UNITYSDK_OFFSET(0xB156A40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEINFO_HASANYIDLELIVEQUESTFINISH_OFFSET UNITYSDK_OFFSET(0xB156B40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEINFO_HASCHAPTERCANGETREWARDAFTER_OFFSET UNITYSDK_OFFSET(0xB156FB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEINFO_HASCHAPTERCANGETREWARDBEFORE_OFFSET UNITYSDK_OFFSET(0xB156E20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEINFO_INIT_OFFSET UNITYSDK_OFFSET(0xB156760)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEINFO_TAKEREWARD_OFFSET UNITYSDK_OFFSET(0xB157120)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEINFO_UPDATE_OFFSET UNITYSDK_OFFSET(0xB157220)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB1572A0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveQuestTreeInfo_TypeDefinitionIndex = 70244;

	class IdleLiveQuestTreeInfo : public ::System::Object
	{
	public:
		::Class_1_64322AA2C64044C0* _QuestTreeRewardService; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeTabData*>* _tabList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEINFO_INIT_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeTabData*>* GetAllTabDataList()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeTabData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEINFO_GETALLTABDATALIST_OFFSET))(this);
		}

		::System::Boolean HasAnyIdleLiveQuestFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEINFO_HASANYIDLELIVEQUESTFINISH_OFFSET))(this);
		}

		::System::Boolean HasChapterCanGetRewardBefore(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEINFO_HASCHAPTERCANGETREWARDBEFORE_OFFSET))(this, a1);
		}

		::System::Boolean HasChapterCanGetRewardAfter(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEINFO_HASCHAPTERCANGETREWARDAFTER_OFFSET))(this, a1);
		}

		::System::Void TakeReward(::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEINFO_TAKEREWARD_OFFSET))(this, a1);
		}

		::System::Void Update(::Class_1_6BD41257D23618B4_12* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6BD41257D23618B4_12*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEINFO_UPDATE_OFFSET))(this, a1);
		}
	};
}
