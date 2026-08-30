#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_65;
namespace RPG::Client { class MonopolyEventDataItem; }
namespace RPG::Client { class MonopolySelectFriendData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYEVENTINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD888DC0)
#define RPG_CLIENT_MONOPOLYEVENTINFO_GETCOUNTEDEVENTTOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xD889CE0)
#define RPG_CLIENT_MONOPOLYEVENTINFO_GETCOUNTEDEVENTTRIGGEREDCOUNT_OFFSET UNITYSDK_OFFSET(0xD889F30)
#define RPG_CLIENT_MONOPOLYEVENTINFO_GET_EVENTDICT_OFFSET UNITYSDK_OFFSET(0xD88A180)
#define RPG_CLIENT_MONOPOLYEVENTINFO_GET_EVENTTOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xD88A1E0)
#define RPG_CLIENT_MONOPOLYEVENTINFO_GET_EVENTTRIGGEREDCOUNT_OFFSET UNITYSDK_OFFSET(0xD88A230)
#define RPG_CLIENT_MONOPOLYEVENTINFO_GET_SELECTFRIENDDATA_OFFSET UNITYSDK_OFFSET(0xD88A1A0)
#define RPG_CLIENT_MONOPOLYEVENTINFO_GET_TRIGGEREDOPTIONLIST_OFFSET UNITYSDK_OFFSET(0xD88A1C0)
#define RPG_CLIENT_MONOPOLYEVENTINFO_INIT_OFFSET UNITYSDK_OFFSET(0xD888B10)
#define RPG_CLIENT_MONOPOLYEVENTINFO_ISOPTIONTRIGGERED_OFFSET UNITYSDK_OFFSET(0xD889B70)
#define RPG_CLIENT_MONOPOLYEVENTINFO_SET_EVENTDICT_OFFSET UNITYSDK_OFFSET(0xD88A190)
#define RPG_CLIENT_MONOPOLYEVENTINFO_SET_SELECTFRIENDDATA_OFFSET UNITYSDK_OFFSET(0xD88A1B0)
#define RPG_CLIENT_MONOPOLYEVENTINFO_SET_TRIGGEREDOPTIONLIST_OFFSET UNITYSDK_OFFSET(0xD88A1D0)
#define RPG_CLIENT_MONOPOLYEVENTINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xD888F40)
#define RPG_CLIENT_MONOPOLYEVENTINFO_TRYGETMONOPOLYEVENTDATAITEM_OFFSET UNITYSDK_OFFSET(0xD889C30)
#define RPG_CLIENT_MONOPOLYEVENTINFO_UPDATESELECTFRIENDDATA_OFFSET UNITYSDK_OFFSET(0xD888E60)
#define RPG_CLIENT_MONOPOLYEVENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xD88A420)
#define RPG_CLIENT_MONOPOLYEVENTINFO__INITEVENTS_OFFSET UNITYSDK_OFFSET(0xD888B60)
#define RPG_CLIENT_MONOPOLYEVENTINFO__SYNCFINISHEDEVENT_OFFSET UNITYSDK_OFFSET(0xD888FA0)
#define RPG_CLIENT_MONOPOLYEVENTINFO__SYNCTRIGGEREDOPTION_OFFSET UNITYSDK_OFFSET(0xD8894E0)
#define RPG_CLIENT_MONOPOLYEVENTINFO__UPDATEFINISHMBTIEVENT_OFFSET UNITYSDK_OFFSET(0xD889A30)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyEventInfo_TypeDefinitionIndex = 66292;

	class MonopolyEventInfo : public ::System::Object
	{
	public:
		::RPG::Client::MonopolySelectFriendData* _SelectFriendData_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _TriggeredOptionList_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyEventDataItem*>* _EventDict_k__BackingField; // 0x20
		::System::Int32 TotalMBTIEventCount; // 0x28
		::System::Int32 FinishMBTIEventCount; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTINFO_INIT_OFFSET))(this);
		}

		::System::Void _InitEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTINFO__INITEVENTS_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void UpdateSelectFriendData(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTINFO_UPDATESELECTFRIENDDATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Sync(::Class_1_45BB92167AED63A0_65* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_65*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Void _SyncFinishedEvent(::Class_1_45BB92167AED63A0_65* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_65*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTINFO__SYNCFINISHEDEVENT_OFFSET))(this, a1);
		}

		::System::Void _SyncTriggeredOption(::Class_1_45BB92167AED63A0_65* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_65*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTINFO__SYNCTRIGGEREDOPTION_OFFSET))(this, a1);
		}

		::RPG::Client::MonopolyEventDataItem* TryGetMonopolyEventDataItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::MonopolyEventDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTINFO_TRYGETMONOPOLYEVENTDATAITEM_OFFSET))(this, a1);
		}

		::System::Boolean IsOptionTriggered(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTINFO_ISOPTIONTRIGGERED_OFFSET))(this, a1);
		}

		::System::Int32 GetCountedEventTotalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTINFO_GETCOUNTEDEVENTTOTALCOUNT_OFFSET))(this);
		}

		::System::Int32 GetCountedEventTriggeredCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTINFO_GETCOUNTEDEVENTTRIGGEREDCOUNT_OFFSET))(this);
		}

		::System::Void _UpdateFinishMBTIEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTINFO__UPDATEFINISHMBTIEVENT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyEventDataItem*>* get_EventDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyEventDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTINFO_GET_EVENTDICT_OFFSET))(this);
		}

		::System::Void set_EventDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyEventDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyEventDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTINFO_SET_EVENTDICT_OFFSET))(this, a1);
		}

		::RPG::Client::MonopolySelectFriendData* get_SelectFriendData()
		{
			return ((::RPG::Client::MonopolySelectFriendData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTINFO_GET_SELECTFRIENDDATA_OFFSET))(this);
		}

		::System::Void set_SelectFriendData(::RPG::Client::MonopolySelectFriendData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonopolySelectFriendData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTINFO_SET_SELECTFRIENDDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_TriggeredOptionList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTINFO_GET_TRIGGEREDOPTIONLIST_OFFSET))(this);
		}

		::System::Void set_TriggeredOptionList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTINFO_SET_TRIGGEREDOPTIONLIST_OFFSET))(this, a1);
		}

		::System::Int32 get_EventTotalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTINFO_GET_EVENTTOTALCOUNT_OFFSET))(this);
		}

		::System::Int32 get_EventTriggeredCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEVENTINFO_GET_EVENTTRIGGEREDCOUNT_OFFSET))(this);
		}
	};
}
