#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E5C370BBC5B5E897_3;
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveDungeonAssistRewardHistoryData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTREWARDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1B925600)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTREWARDDATA_GET_HISTROYLIST_OFFSET UNITYSDK_OFFSET(0x1B926080)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTREWARDDATA_GET_TOTALREWARDLIST_OFFSET UNITYSDK_OFFSET(0x1B926060)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTREWARDDATA_SET_HISTROYLIST_OFFSET UNITYSDK_OFFSET(0x1B926090)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTREWARDDATA_SET_TOTALREWARDLIST_OFFSET UNITYSDK_OFFSET(0x1B926070)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTREWARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B926050)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveDungeonAssistRewardData_TypeDefinitionIndex = 74895;

	class IdleLiveDungeonAssistRewardData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonAssistRewardHistoryData*>* _HistroyList_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _TotalRewardList_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTREWARDDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveDungeonAssistRewardData* Create(::Class_1_E5C370BBC5B5E897_3* a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDungeonAssistRewardData*(*)(::Class_1_E5C370BBC5B5E897_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTREWARDDATA_CREATE_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_TotalRewardList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTREWARDDATA_GET_TOTALREWARDLIST_OFFSET))(this);
		}

		::System::Void set_TotalRewardList(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTREWARDDATA_SET_TOTALREWARDLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonAssistRewardHistoryData*>* get_HistroyList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonAssistRewardHistoryData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTREWARDDATA_GET_HISTROYLIST_OFFSET))(this);
		}

		::System::Void set_HistroyList(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonAssistRewardHistoryData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonAssistRewardHistoryData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTREWARDDATA_SET_HISTROYLIST_OFFSET))(this, a1);
		}
	};
}
