#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FBC6D4A7BD3E337F;
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveDungeonAssistRewardHistoryData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTREWARDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9B42EB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTREWARDDATA_GET_HISTROYLIST_OFFSET UNITYSDK_OFFSET(0x9B43620)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTREWARDDATA_GET_TOTALREWARDLIST_OFFSET UNITYSDK_OFFSET(0x9B43600)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTREWARDDATA_SET_HISTROYLIST_OFFSET UNITYSDK_OFFSET(0x9B43630)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTREWARDDATA_SET_TOTALREWARDLIST_OFFSET UNITYSDK_OFFSET(0x9B43610)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTREWARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9B435F0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveDungeonAssistRewardData_TypeDefinitionIndex = 69254;

	class IdleLiveDungeonAssistRewardData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonAssistRewardHistoryData*>* _HistroyList_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _TotalRewardList_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTREWARDDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveDungeonAssistRewardData* Create(::Class_1_FBC6D4A7BD3E337F* rsp)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDungeonAssistRewardData*(*)(::Class_1_FBC6D4A7BD3E337F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTREWARDDATA_CREATE_OFFSET))(rsp);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_TotalRewardList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTREWARDDATA_GET_TOTALREWARDLIST_OFFSET))(this);
		}

		::System::Void set_TotalRewardList(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTREWARDDATA_SET_TOTALREWARDLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonAssistRewardHistoryData*>* get_HistroyList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonAssistRewardHistoryData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTREWARDDATA_GET_HISTROYLIST_OFFSET))(this);
		}

		::System::Void set_HistroyList(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonAssistRewardHistoryData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonAssistRewardHistoryData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONASSISTREWARDDATA_SET_HISTROYLIST_OFFSET))(this, value);
		}
	};
}
