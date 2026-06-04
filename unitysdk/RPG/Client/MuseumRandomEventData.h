#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_53763D498DB8321D_3;
class Class_1_766E1CF11E204F43_7;
class Class_1_D1E0AD3915BCCF29_79;
namespace RPG::Client { class MuseumData; }
namespace RPG::Client { class MuseumRandomEvent; }
namespace RPG::GameCore { class MuseumRandomEventConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_CLEARIMMEDIATELYFINISHEDNEWEVENTCACHE_OFFSET UNITYSDK_OFFSET(0xC211BD0)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_GET_CURBUFFEVENT_OFFSET UNITYSDK_OFFSET(0xC21A2B0)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_GET_CUREVENTS_OFFSET UNITYSDK_OFFSET(0xC21A230)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_GET_HAVENEWEVENT_OFFSET UNITYSDK_OFFSET(0xC211BC0)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_GET_IMMEDIATELYFINISHEDNEWEVENTCACHE_OFFSET UNITYSDK_OFFSET(0xC21A270)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_GET_NEWEVENT_OFFSET UNITYSDK_OFFSET(0xC21A250)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_GET_ONTURNEVENTCACHE_OFFSET UNITYSDK_OFFSET(0xC21A290)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_GET_OWNERMUSEUM_OFFSET UNITYSDK_OFFSET(0xC21A210)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SET_CURBUFFEVENT_OFFSET UNITYSDK_OFFSET(0xC21A2C0)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SET_CUREVENTS_OFFSET UNITYSDK_OFFSET(0xC21A240)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SET_IMMEDIATELYFINISHEDNEWEVENTCACHE_OFFSET UNITYSDK_OFFSET(0xC21A280)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SET_NEWEVENT_OFFSET UNITYSDK_OFFSET(0xC21A260)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SET_ONTURNEVENTCACHE_OFFSET UNITYSDK_OFFSET(0xC21A2A0)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SET_OWNERMUSEUM_OFFSET UNITYSDK_OFFSET(0xC21A220)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SYNCEVENTSINFO_OFFSET UNITYSDK_OFFSET(0xC20A820)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SYNCNEWEVENTINFO_OFFSET UNITYSDK_OFFSET(0xC2164E0)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SYNCSELECTRESULT_OFFSET UNITYSDK_OFFSET(0xC215570)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA__ADDCUREVENT_OFFSET UNITYSDK_OFFSET(0xC219F80)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA__CLEARDATA_OFFSET UNITYSDK_OFFSET(0xC219E00)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC209430)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA__ISIMMEDIATELYFINISHEVENT_OFFSET UNITYSDK_OFFSET(0xC21A150)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA__ISONTURNEVENT_OFFSET UNITYSDK_OFFSET(0xC21A1B0)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA__TRYCLEARIMMEDIATELYFINISHEDNEWEVENTCACHE_OFFSET UNITYSDK_OFFSET(0xC219E80)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA__TRYCLEARONTURNEVENTCACHE_OFFSET UNITYSDK_OFFSET(0xC219F10)
#define RPG_CLIENT_MUSEUMRANDOMEVENTDATA__UPDATEBUFFDATA_OFFSET UNITYSDK_OFFSET(0xC21A0A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumRandomEventData_TypeDefinitionIndex = 62035;

	class MuseumRandomEventData : public ::System::Object
	{
	public:
		::RPG::Client::MuseumRandomEvent* _CurBuffEvent_k__BackingField; // 0x10
		::RPG::GameCore::MuseumRandomEventConfigRow* _OnTurnEventCache_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::MuseumRandomEvent*>* _CurEvents_k__BackingField; // 0x20
		::RPG::Client::MuseumRandomEvent* _NewEvent_k__BackingField; // 0x28
		::RPG::Client::MuseumRandomEvent* _ImmediatelyFinishedNewEventCache_k__BackingField; // 0x30
		::RPG::Client::MuseumData* _OwnerMuseum_k__BackingField; // 0x38
		::System::UInt32 _OnTurnEventBeginTurn; // 0x40
		::System::UInt32 _CurBuffEventID; // 0x44

		::System::Void _ctor(::RPG::Client::MuseumData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void SyncEventsInfo(::Class_1_766E1CF11E204F43_7* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_766E1CF11E204F43_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SYNCEVENTSINFO_OFFSET))(this, a1);
		}

		::System::Void SyncNewEventInfo(::Class_1_53763D498DB8321D_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_53763D498DB8321D_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SYNCNEWEVENTINFO_OFFSET))(this, a1);
		}

		::System::Void SyncSelectResult(::Class_1_D1E0AD3915BCCF29_79* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_79*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SYNCSELECTRESULT_OFFSET))(this, a1);
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

		::System::Void _AddCurEvent(::RPG::Client::MuseumRandomEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumRandomEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA__ADDCUREVENT_OFFSET))(this, a1);
		}

		::System::Boolean _IsImmediatelyFinishEvent(::RPG::GameCore::MuseumRandomEventConfigRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MuseumRandomEventConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA__ISIMMEDIATELYFINISHEVENT_OFFSET))(this, a1);
		}

		::System::Boolean _IsOnTurnEvent(::RPG::GameCore::MuseumRandomEventConfigRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MuseumRandomEventConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA__ISONTURNEVENT_OFFSET))(this, a1);
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

		::System::Void set_OwnerMuseum(::RPG::Client::MuseumData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SET_OWNERMUSEUM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MuseumRandomEvent*>* get_CurEvents()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MuseumRandomEvent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_GET_CUREVENTS_OFFSET))(this);
		}

		::System::Void set_CurEvents(::System::Collections::Generic::List_1<::RPG::Client::MuseumRandomEvent*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MuseumRandomEvent*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SET_CUREVENTS_OFFSET))(this, a1);
		}

		::RPG::Client::MuseumRandomEvent* get_NewEvent()
		{
			return ((::RPG::Client::MuseumRandomEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_GET_NEWEVENT_OFFSET))(this);
		}

		::System::Void set_NewEvent(::RPG::Client::MuseumRandomEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumRandomEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SET_NEWEVENT_OFFSET))(this, a1);
		}

		::System::Boolean get_HaveNewEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_GET_HAVENEWEVENT_OFFSET))(this);
		}

		::RPG::Client::MuseumRandomEvent* get_ImmediatelyFinishedNewEventCache()
		{
			return ((::RPG::Client::MuseumRandomEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_GET_IMMEDIATELYFINISHEDNEWEVENTCACHE_OFFSET))(this);
		}

		::System::Void set_ImmediatelyFinishedNewEventCache(::RPG::Client::MuseumRandomEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumRandomEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SET_IMMEDIATELYFINISHEDNEWEVENTCACHE_OFFSET))(this, a1);
		}

		::RPG::GameCore::MuseumRandomEventConfigRow* get_OnTurnEventCache()
		{
			return ((::RPG::GameCore::MuseumRandomEventConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_GET_ONTURNEVENTCACHE_OFFSET))(this);
		}

		::System::Void set_OnTurnEventCache(::RPG::GameCore::MuseumRandomEventConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MuseumRandomEventConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SET_ONTURNEVENTCACHE_OFFSET))(this, a1);
		}

		::RPG::Client::MuseumRandomEvent* get_CurBuffEvent()
		{
			return ((::RPG::Client::MuseumRandomEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_GET_CURBUFFEVENT_OFFSET))(this);
		}

		::System::Void set_CurBuffEvent(::RPG::Client::MuseumRandomEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumRandomEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENTDATA_SET_CURBUFFEVENT_OFFSET))(this, a1);
		}
	};
}
