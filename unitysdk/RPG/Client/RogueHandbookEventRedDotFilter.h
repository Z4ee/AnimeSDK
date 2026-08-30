#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDEC0450)
#define RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_GET_EVENTREWARDAVAILABLEIDS_OFFSET UNITYSDK_OFFSET(0xDEC0A80)
#define RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_GET_EVENTREWARDAVAILABLETABIDS_OFFSET UNITYSDK_OFFSET(0xDEC0AA0)
#define RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_INIT_OFFSET UNITYSDK_OFFSET(0xDEC0340)
#define RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_SET_EVENTREWARDAVAILABLEIDS_OFFSET UNITYSDK_OFFSET(0xDEC0A90)
#define RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_SET_EVENTREWARDAVAILABLETABIDS_OFFSET UNITYSDK_OFFSET(0xDEC0AB0)
#define RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_UPDATEREDDOTS_OFFSET UNITYSDK_OFFSET(0xDEC0530)
#define RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0xDEC0AC0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueHandbookEventRedDotFilter_TypeDefinitionIndex = 66847;

	class RogueHandbookEventRedDotFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		// static const ::System::UInt32 _AllTabID = 0x1; // 0x0
		::System::Collections::Generic::List_1<::System::UInt32>* _EventRewardAvailableTabIDs_k__BackingField; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UniqueEventRewardAvailableTabIDs; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _EventRewardAvailableIDs_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_DISPOSE_OFFSET))(this);
		}

		::System::Void UpdateRedDots()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_UPDATEREDDOTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_EventRewardAvailableIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_GET_EVENTREWARDAVAILABLEIDS_OFFSET))(this);
		}

		::System::Void set_EventRewardAvailableIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_SET_EVENTREWARDAVAILABLEIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_EventRewardAvailableTabIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_GET_EVENTREWARDAVAILABLETABIDS_OFFSET))(this);
		}

		::System::Void set_EventRewardAvailableTabIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_SET_EVENTREWARDAVAILABLETABIDS_OFFSET))(this, a1);
		}
	};
}
