#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_53763D498DB8321D_6;
class Class_1_6FC4D75D938BC053_10;
class Class_1_D1E0AD3915BCCF29_77;
namespace RPG::Client { class MuseumData; }
namespace RPG::Client { class MuseumRandomEvent; }
namespace RPG::GameCore { class MuseumRandomEventConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_CLEARIMMEDIATELYFINISHEDNEWEVENTCACHE_OFFSET UNITYSDK_OFFSET(0xAB0D710)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_GET_CURBUFFEVENT_OFFSET UNITYSDK_OFFSET(0xAB0D810)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_GET_CUREVENTS_OFFSET UNITYSDK_OFFSET(0xAB0D780)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_GET_HAVENEWEVENT_OFFSET UNITYSDK_OFFSET(0xAB0D7C0)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_GET_IMMEDIATELYFINISHEDNEWEVENTCACHE_OFFSET UNITYSDK_OFFSET(0xAB0D7D0)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_GET_NEWEVENT_OFFSET UNITYSDK_OFFSET(0xAB0D7A0)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_GET_ONTURNEVENTCACHE_OFFSET UNITYSDK_OFFSET(0xAB0D7F0)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_GET_OWNERMUSEUM_OFFSET UNITYSDK_OFFSET(0xAB0D760)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SET_CURBUFFEVENT_OFFSET UNITYSDK_OFFSET(0xAB0D820)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SET_CUREVENTS_OFFSET UNITYSDK_OFFSET(0xAB0D790)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SET_IMMEDIATELYFINISHEDNEWEVENTCACHE_OFFSET UNITYSDK_OFFSET(0xAB0D7E0)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SET_NEWEVENT_OFFSET UNITYSDK_OFFSET(0xAB0D7B0)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SET_ONTURNEVENTCACHE_OFFSET UNITYSDK_OFFSET(0xAB0D800)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SET_OWNERMUSEUM_OFFSET UNITYSDK_OFFSET(0xAB0D770)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SYNCEVENTSINFO_OFFSET UNITYSDK_OFFSET(0xAB0CF70)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SYNCNEWEVENTINFO_OFFSET UNITYSDK_OFFSET(0xAB0D410)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SYNCSELECTRESULT_OFFSET UNITYSDK_OFFSET(0xAB0D680)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA__ADDCUREVENT_OFFSET UNITYSDK_OFFSET(0xAB0D2C0)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA__CLEARDATA_OFFSET UNITYSDK_OFFSET(0xAB0D140)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAB0CF30)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA__ISIMMEDIATELYFINISHEVENT_OFFSET UNITYSDK_OFFSET(0xAB0D5C0)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA__ISONTURNEVENT_OFFSET UNITYSDK_OFFSET(0xAB0D620)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA__TRYCLEARIMMEDIATELYFINISHEDNEWEVENTCACHE_OFFSET UNITYSDK_OFFSET(0xAB0D1C0)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA__TRYCLEARONTURNEVENTCACHE_OFFSET UNITYSDK_OFFSET(0xAB0D250)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA__UPDATEBUFFDATA_OFFSET UNITYSDK_OFFSET(0xAB0D380)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumRandomEventData_TypeDefinitionIndex = 61111;

	class MuseumRandomEventData : public ::System::Object
	{
	public:
		::RPG::Client::MuseumRandomEvent* _ImmediatelyFinishedNewEventCache_k__BackingField; // 0x10
		::RPG::Client::MuseumRandomEvent* _NewEvent_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::MuseumRandomEvent*>* _CurEvents_k__BackingField; // 0x20
		::RPG::GameCore::MuseumRandomEventConfigRow* _OnTurnEventCache_k__BackingField; // 0x28
		::RPG::Client::MuseumRandomEvent* _CurBuffEvent_k__BackingField; // 0x30
		::RPG::Client::MuseumData* _OwnerMuseum_k__BackingField; // 0x38
		::System::UInt32 _OnTurnEventBeginTurn; // 0x40
		::System::UInt32 _CurBuffEventID; // 0x44

		::System::Void _ctor(::RPG::Client::MuseumData* ownerMuseum)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA__CTOR_OFFSET))(this, ownerMuseum);
		}

		::System::Void SyncEventsInfo(::Class_1_6FC4D75D938BC053_10* eventsInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6FC4D75D938BC053_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SYNCEVENTSINFO_OFFSET))(this, eventsInfo);
		}

		::System::Void SyncNewEventInfo(::Class_1_53763D498DB8321D_6* eventInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_53763D498DB8321D_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SYNCNEWEVENTINFO_OFFSET))(this, eventInfo);
		}

		::System::Void SyncSelectResult(::Class_1_D1E0AD3915BCCF29_77* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_77*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SYNCSELECTRESULT_OFFSET))(this, rsp);
		}

		::System::Void ClearImmediatelyFinishedNewEventCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_CLEARIMMEDIATELYFINISHEDNEWEVENTCACHE_OFFSET))(this);
		}

		::System::Void _ClearData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA__CLEARDATA_OFFSET))(this);
		}

		::System::Void _UpdateBuffData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA__UPDATEBUFFDATA_OFFSET))(this);
		}

		::System::Void _AddCurEvent(::RPG::Client::MuseumRandomEvent* curEvent)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumRandomEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA__ADDCUREVENT_OFFSET))(this, curEvent);
		}

		::System::Boolean _IsImmediatelyFinishEvent(::RPG::GameCore::MuseumRandomEventConfigRow* eventConfig)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MuseumRandomEventConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA__ISIMMEDIATELYFINISHEVENT_OFFSET))(this, eventConfig);
		}

		::System::Boolean _IsOnTurnEvent(::RPG::GameCore::MuseumRandomEventConfigRow* eventConfig)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MuseumRandomEventConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA__ISONTURNEVENT_OFFSET))(this, eventConfig);
		}

		::System::Void _TryClearImmediatelyFinishedNewEventCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA__TRYCLEARIMMEDIATELYFINISHEDNEWEVENTCACHE_OFFSET))(this);
		}

		::System::Void _TryClearOnTurnEventCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA__TRYCLEARONTURNEVENTCACHE_OFFSET))(this);
		}

		::RPG::Client::MuseumData* get_OwnerMuseum()
		{
			return ((::RPG::Client::MuseumData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_GET_OWNERMUSEUM_OFFSET))(this);
		}

		::System::Void set_OwnerMuseum(::RPG::Client::MuseumData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SET_OWNERMUSEUM_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MuseumRandomEvent*>* get_CurEvents()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MuseumRandomEvent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_GET_CUREVENTS_OFFSET))(this);
		}

		::System::Void set_CurEvents(::System::Collections::Generic::List_1<::RPG::Client::MuseumRandomEvent*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MuseumRandomEvent*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SET_CUREVENTS_OFFSET))(this, value);
		}

		::RPG::Client::MuseumRandomEvent* get_NewEvent()
		{
			return ((::RPG::Client::MuseumRandomEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_GET_NEWEVENT_OFFSET))(this);
		}

		::System::Void set_NewEvent(::RPG::Client::MuseumRandomEvent* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumRandomEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SET_NEWEVENT_OFFSET))(this, value);
		}

		::System::Boolean get_HaveNewEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_GET_HAVENEWEVENT_OFFSET))(this);
		}

		::RPG::Client::MuseumRandomEvent* get_ImmediatelyFinishedNewEventCache()
		{
			return ((::RPG::Client::MuseumRandomEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_GET_IMMEDIATELYFINISHEDNEWEVENTCACHE_OFFSET))(this);
		}

		::System::Void set_ImmediatelyFinishedNewEventCache(::RPG::Client::MuseumRandomEvent* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumRandomEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SET_IMMEDIATELYFINISHEDNEWEVENTCACHE_OFFSET))(this, value);
		}

		::RPG::GameCore::MuseumRandomEventConfigRow* get_OnTurnEventCache()
		{
			return ((::RPG::GameCore::MuseumRandomEventConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_GET_ONTURNEVENTCACHE_OFFSET))(this);
		}

		::System::Void set_OnTurnEventCache(::RPG::GameCore::MuseumRandomEventConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MuseumRandomEventConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SET_ONTURNEVENTCACHE_OFFSET))(this, value);
		}

		::RPG::Client::MuseumRandomEvent* get_CurBuffEvent()
		{
			return ((::RPG::Client::MuseumRandomEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_GET_CURBUFFEVENT_OFFSET))(this);
		}

		::System::Void set_CurBuffEvent(::RPG::Client::MuseumRandomEvent* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumRandomEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SET_CURBUFFEVENT_OFFSET))(this, value);
		}
	};
}
