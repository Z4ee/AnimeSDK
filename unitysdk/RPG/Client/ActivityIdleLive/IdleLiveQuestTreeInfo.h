#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_50;
class Class_1_FB302C8A51CD42D0;
namespace RPG::Client::ActivityIdleLive { class IdleLiveQuestTreeItemData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveQuestTreeTabData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEINFO_GETALLTABDATALIST_OFFSET UNITYSDK_OFFSET(0x9B6E7D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEINFO_HASANYIDLELIVEQUESTFINISH_OFFSET UNITYSDK_OFFSET(0x9B6E850)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEINFO_HASCHAPTERCANGETREWARDAFTER_OFFSET UNITYSDK_OFFSET(0x9B6ECC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEINFO_HASCHAPTERCANGETREWARDBEFORE_OFFSET UNITYSDK_OFFSET(0x9B6EB40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEINFO_INIT_OFFSET UNITYSDK_OFFSET(0x9B6E590)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEINFO_TAKEREWARD_OFFSET UNITYSDK_OFFSET(0x9B6EE70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEINFO_UPDATE_OFFSET UNITYSDK_OFFSET(0x9B6EF70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9B6EFF0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveQuestTreeInfo_TypeDefinitionIndex = 69432;

	class IdleLiveQuestTreeInfo : public ::System::Object
	{
	public:
		::Class_1_FB302C8A51CD42D0* _QuestTreeRewardService; // 0x10
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

		::System::Boolean HasChapterCanGetRewardBefore(::System::UInt32 tabID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEINFO_HASCHAPTERCANGETREWARDBEFORE_OFFSET))(this, tabID);
		}

		::System::Boolean HasChapterCanGetRewardAfter(::System::UInt32 tabID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEINFO_HASCHAPTERCANGETREWARDAFTER_OFFSET))(this, tabID);
		}

		::System::Void TakeReward(::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeItemData* questData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEINFO_TAKEREWARD_OFFSET))(this, questData);
		}

		::System::Void Update(::Class_1_21C7581DFE99F091_50* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_50*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREEINFO_UPDATE_OFFSET))(this, rsp);
		}
	};
}
