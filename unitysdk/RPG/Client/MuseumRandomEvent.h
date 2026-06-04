#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_46.h"
#include "unitysdk/System/Object.h"

class Class_1_53763D498DB8321D_3;
class Class_1_D1E0AD3915BCCF29_79;
namespace RPG::GameCore { class MuseumRandomEventConfigRow; }
namespace RPG::GameCore { class RandomEventChoiceRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MUSEUMRANDOMEVENT_CREATE_OFFSET UNITYSDK_OFFSET(0xC2199A0)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_GET_BEGINTURN_OFFSET UNITYSDK_OFFSET(0xC219980)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_GET_ID_OFFSET UNITYSDK_OFFSET(0xC2198C0)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_GET_RANDOMEVENTCHOICES_OFFSET UNITYSDK_OFFSET(0xC219900)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_GET_RANDOMEVENTCONFIG_OFFSET UNITYSDK_OFFSET(0xC2198E0)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_GET_REMAINOPENDAYCOUNT_OFFSET UNITYSDK_OFFSET(0xC219960)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_GET_SELECTEDCHOICE_OFFSET UNITYSDK_OFFSET(0xC219920)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_GET_STATE_OFFSET UNITYSDK_OFFSET(0xC219940)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_SET_BEGINTURN_OFFSET UNITYSDK_OFFSET(0xC219990)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_SET_ID_OFFSET UNITYSDK_OFFSET(0xC2198D0)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_SET_RANDOMEVENTCHOICES_OFFSET UNITYSDK_OFFSET(0xC219910)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_SET_RANDOMEVENTCONFIG_OFFSET UNITYSDK_OFFSET(0xC2198F0)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_SET_REMAINOPENDAYCOUNT_OFFSET UNITYSDK_OFFSET(0xC219970)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_SET_SELECTEDCHOICE_OFFSET UNITYSDK_OFFSET(0xC219930)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_SET_STATE_OFFSET UNITYSDK_OFFSET(0xC219950)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_SYNCSELECTRESULT_OFFSET UNITYSDK_OFFSET(0xC219D60)
#define RPG_CLIENT_MUSEUMRANDOMEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xC219D10)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumRandomEvent_TypeDefinitionIndex = 62036;

	class MuseumRandomEvent : public ::System::Object
	{
	public:
		::RPG::GameCore::RandomEventChoiceRow* _SelectedChoice_k__BackingField; // 0x10
		::RPG::GameCore::MuseumRandomEventConfigRow* _RandomEventConfig_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::RandomEventChoiceRow*>* _RandomEventChoices_k__BackingField; // 0x20
		::System::UInt32 _BeginTurn_k__BackingField; // 0x28
		::Enum_3_DB663931210BBC27_46 _State_k__BackingField; // 0x2C
		::System::UInt32 _ID_k__BackingField; // 0x30
		::System::UInt32 _RemainOpenDayCount_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::MuseumRandomEventConfigRow* get_RandomEventConfig()
		{
			return ((::RPG::GameCore::MuseumRandomEventConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_GET_RANDOMEVENTCONFIG_OFFSET))(this);
		}

		::System::Void set_RandomEventConfig(::RPG::GameCore::MuseumRandomEventConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MuseumRandomEventConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_SET_RANDOMEVENTCONFIG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::RandomEventChoiceRow*>* get_RandomEventChoices()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::RandomEventChoiceRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_GET_RANDOMEVENTCHOICES_OFFSET))(this);
		}

		::System::Void set_RandomEventChoices(::System::Collections::Generic::List_1<::RPG::GameCore::RandomEventChoiceRow*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::RandomEventChoiceRow*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_SET_RANDOMEVENTCHOICES_OFFSET))(this, a1);
		}

		::RPG::GameCore::RandomEventChoiceRow* get_SelectedChoice()
		{
			return ((::RPG::GameCore::RandomEventChoiceRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_GET_SELECTEDCHOICE_OFFSET))(this);
		}

		::System::Void set_SelectedChoice(::RPG::GameCore::RandomEventChoiceRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RandomEventChoiceRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_SET_SELECTEDCHOICE_OFFSET))(this, a1);
		}

		::Enum_3_DB663931210BBC27_46 get_State()
		{
			return ((::Enum_3_DB663931210BBC27_46(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::Enum_3_DB663931210BBC27_46 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_46))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_SET_STATE_OFFSET))(this, a1);
		}

		::System::UInt32 get_RemainOpenDayCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_GET_REMAINOPENDAYCOUNT_OFFSET))(this);
		}

		::System::Void set_RemainOpenDayCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_SET_REMAINOPENDAYCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_BeginTurn()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_GET_BEGINTURN_OFFSET))(this);
		}

		::System::Void set_BeginTurn(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_SET_BEGINTURN_OFFSET))(this, a1);
		}

		static ::RPG::Client::MuseumRandomEvent* Create(::Class_1_53763D498DB8321D_3* a1)
		{
			return ((::RPG::Client::MuseumRandomEvent*(*)(::Class_1_53763D498DB8321D_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_CREATE_OFFSET))(a1);
		}

		::System::Void SyncSelectResult(::Class_1_D1E0AD3915BCCF29_79* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_79*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_SYNCSELECTRESULT_OFFSET))(this, a1);
		}
	};
}
