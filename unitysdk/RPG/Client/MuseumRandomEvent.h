#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_42.h"
#include "unitysdk/System/Object.h"

class Class_1_120319518E6F6581_70;
class Class_1_F1F83A16E5B8B459_2;
namespace RPG::GameCore { class MuseumRandomEventConfigRow; }
namespace RPG::GameCore { class RandomEventChoiceRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MUSEUMRANDOMEVENT_CREATE_OFFSET UNITYSDK_OFFSET(0x9DC5BF0)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_GET_BEGINTURN_OFFSET UNITYSDK_OFFSET(0x9DC5BD0)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_GET_ID_OFFSET UNITYSDK_OFFSET(0x9DC5B10)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_GET_RANDOMEVENTCHOICES_OFFSET UNITYSDK_OFFSET(0x9DC5B50)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_GET_RANDOMEVENTCONFIG_OFFSET UNITYSDK_OFFSET(0x9DC5B30)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_GET_REMAINOPENDAYCOUNT_OFFSET UNITYSDK_OFFSET(0x9DC5BB0)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_GET_SELECTEDCHOICE_OFFSET UNITYSDK_OFFSET(0x9DC5B70)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_GET_STATE_OFFSET UNITYSDK_OFFSET(0x9DC5B90)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_SET_BEGINTURN_OFFSET UNITYSDK_OFFSET(0x9DC5BE0)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_SET_ID_OFFSET UNITYSDK_OFFSET(0x9DC5B20)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_SET_RANDOMEVENTCHOICES_OFFSET UNITYSDK_OFFSET(0x9DC5B60)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_SET_RANDOMEVENTCONFIG_OFFSET UNITYSDK_OFFSET(0x9DC5B40)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_SET_REMAINOPENDAYCOUNT_OFFSET UNITYSDK_OFFSET(0x9DC5BC0)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_SET_SELECTEDCHOICE_OFFSET UNITYSDK_OFFSET(0x9DC5B80)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_SET_STATE_OFFSET UNITYSDK_OFFSET(0x9DC5BA0)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_SYNCSELECTRESULT_OFFSET UNITYSDK_OFFSET(0x9DC5F50)
#define RPG_CLIENT_MUSEUMRANDOMEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x9DC5F00)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumRandomEvent_TypeDefinitionIndex = 53967;

	class MuseumRandomEvent : public ::System::Object
	{
	public:
		::RPG::GameCore::MuseumRandomEventConfigRow* _RandomEventConfig_k__BackingField; // 0x10
		::RPG::GameCore::RandomEventChoiceRow* _SelectedChoice_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::RandomEventChoiceRow*>* _RandomEventChoices_k__BackingField; // 0x20
		::System::UInt32 _RemainOpenDayCount_k__BackingField; // 0x28
		::System::UInt32 _BeginTurn_k__BackingField; // 0x2C
		::System::UInt32 _ID_k__BackingField; // 0x30
		::Enum_3_DB663931210BBC27_42 _State_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_SET_ID_OFFSET))(this, value);
		}

		::RPG::GameCore::MuseumRandomEventConfigRow* get_RandomEventConfig()
		{
			return ((::RPG::GameCore::MuseumRandomEventConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_GET_RANDOMEVENTCONFIG_OFFSET))(this);
		}

		::System::Void set_RandomEventConfig(::RPG::GameCore::MuseumRandomEventConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MuseumRandomEventConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_SET_RANDOMEVENTCONFIG_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::RandomEventChoiceRow*>* get_RandomEventChoices()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::RandomEventChoiceRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_GET_RANDOMEVENTCHOICES_OFFSET))(this);
		}

		::System::Void set_RandomEventChoices(::System::Collections::Generic::List_1<::RPG::GameCore::RandomEventChoiceRow*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::RandomEventChoiceRow*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_SET_RANDOMEVENTCHOICES_OFFSET))(this, value);
		}

		::RPG::GameCore::RandomEventChoiceRow* get_SelectedChoice()
		{
			return ((::RPG::GameCore::RandomEventChoiceRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_GET_SELECTEDCHOICE_OFFSET))(this);
		}

		::System::Void set_SelectedChoice(::RPG::GameCore::RandomEventChoiceRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RandomEventChoiceRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_SET_SELECTEDCHOICE_OFFSET))(this, value);
		}

		::Enum_3_DB663931210BBC27_42 get_State()
		{
			return ((::Enum_3_DB663931210BBC27_42(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::Enum_3_DB663931210BBC27_42 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_42))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_SET_STATE_OFFSET))(this, value);
		}

		::System::UInt32 get_RemainOpenDayCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_GET_REMAINOPENDAYCOUNT_OFFSET))(this);
		}

		::System::Void set_RemainOpenDayCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_SET_REMAINOPENDAYCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_BeginTurn()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_GET_BEGINTURN_OFFSET))(this);
		}

		::System::Void set_BeginTurn(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_SET_BEGINTURN_OFFSET))(this, value);
		}

		static ::RPG::Client::MuseumRandomEvent* Create(::Class_1_F1F83A16E5B8B459_2* eventInfo)
		{
			return ((::RPG::Client::MuseumRandomEvent*(*)(::Class_1_F1F83A16E5B8B459_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_CREATE_OFFSET))(eventInfo);
		}

		::System::Void SyncSelectResult(::Class_1_120319518E6F6581_70* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_70*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_SYNCSELECTRESULT_OFFSET))(this, rsp);
		}
	};
}
