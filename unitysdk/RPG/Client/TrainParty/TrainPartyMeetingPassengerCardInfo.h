#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartyPassengerData; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPASSENGERCARDINFO_COPYTO_OFFSET UNITYSDK_OFFSET(0xCAB1F80)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPASSENGERCARDINFO_GET_PASSENGERDATA_OFFSET UNITYSDK_OFFSET(0xCAB1FE0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPASSENGERCARDINFO_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xCAB2020)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPASSENGERCARDINFO_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xCAB2000)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPASSENGERCARDINFO_SETUNIQUEID_OFFSET UNITYSDK_OFFSET(0xCAB1B40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPASSENGERCARDINFO_SET_PASSENGERDATA_OFFSET UNITYSDK_OFFSET(0xCAB1FF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPASSENGERCARDINFO_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xCAB2030)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPASSENGERCARDINFO_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xCAB2010)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPASSENGERCARDINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xCAB1AE0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPASSENGERCARDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xCAB2040)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyMeetingPassengerCardInfo_TypeDefinitionIndex = 69411;

	class TrainPartyMeetingPassengerCardInfo : public ::System::Object
	{
	public:
		::RPG::Client::TrainParty::TrainPartyPassengerData* _PassengerData_k__BackingField; // 0x10
		::System::UInt32 _Value_k__BackingField; // 0x18
		::System::UInt32 _UniqueID_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPASSENGERCARDINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::RPG::Client::TrainParty::TrainPartyPassengerData* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyPassengerData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPASSENGERCARDINFO_SYNC_OFFSET))(this, a1, a2);
		}

		::System::Void SetUniqueID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPASSENGERCARDINFO_SETUNIQUEID_OFFSET))(this, a1);
		}

		::System::Void CopyTo(::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPASSENGERCARDINFO_COPYTO_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyPassengerData* get_PassengerData()
		{
			return ((::RPG::Client::TrainParty::TrainPartyPassengerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPASSENGERCARDINFO_GET_PASSENGERDATA_OFFSET))(this);
		}

		::System::Void set_PassengerData(::RPG::Client::TrainParty::TrainPartyPassengerData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyPassengerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPASSENGERCARDINFO_SET_PASSENGERDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_Value()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPASSENGERCARDINFO_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPASSENGERCARDINFO_SET_VALUE_OFFSET))(this, a1);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPASSENGERCARDINFO_GET_UNIQUEID_OFFSET))(this);
		}

		::System::Void set_UniqueID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPASSENGERCARDINFO_SET_UNIQUEID_OFFSET))(this, a1);
		}
	};
}
