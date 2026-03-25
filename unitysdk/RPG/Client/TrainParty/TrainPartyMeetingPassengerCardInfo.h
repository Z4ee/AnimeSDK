#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartyPassengerData; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPASSENGERCARDINFO_COPYTO_OFFSET UNITYSDK_OFFSET(0xA601EF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPASSENGERCARDINFO_GET_PASSENGERDATA_OFFSET UNITYSDK_OFFSET(0xA601F50)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPASSENGERCARDINFO_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xA601F90)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPASSENGERCARDINFO_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA601F70)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPASSENGERCARDINFO_SETUNIQUEID_OFFSET UNITYSDK_OFFSET(0xA601EA0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPASSENGERCARDINFO_SET_PASSENGERDATA_OFFSET UNITYSDK_OFFSET(0xA601F60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPASSENGERCARDINFO_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xA601FA0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPASSENGERCARDINFO_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xA601F80)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPASSENGERCARDINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xA601E40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPASSENGERCARDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA601FB0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyMeetingPassengerCardInfo_TypeDefinitionIndex = 61112;

	class TrainPartyMeetingPassengerCardInfo : public ::System::Object
	{
	public:
		::RPG::Client::TrainParty::TrainPartyPassengerData* _PassengerData_k__BackingField; // 0x10
		::System::UInt32 _UniqueID_k__BackingField; // 0x18
		::System::UInt32 _Value_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPASSENGERCARDINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::RPG::Client::TrainParty::TrainPartyPassengerData* passengerData, ::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyPassengerData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPASSENGERCARDINFO_SYNC_OFFSET))(this, passengerData, value);
		}

		::System::Void SetUniqueID(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPASSENGERCARDINFO_SETUNIQUEID_OFFSET))(this, id);
		}

		::System::Void CopyTo(::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo* other)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPASSENGERCARDINFO_COPYTO_OFFSET))(this, other);
		}

		::RPG::Client::TrainParty::TrainPartyPassengerData* get_PassengerData()
		{
			return ((::RPG::Client::TrainParty::TrainPartyPassengerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPASSENGERCARDINFO_GET_PASSENGERDATA_OFFSET))(this);
		}

		::System::Void set_PassengerData(::RPG::Client::TrainParty::TrainPartyPassengerData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyPassengerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPASSENGERCARDINFO_SET_PASSENGERDATA_OFFSET))(this, value);
		}

		::System::UInt32 get_Value()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPASSENGERCARDINFO_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPASSENGERCARDINFO_SET_VALUE_OFFSET))(this, value);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPASSENGERCARDINFO_GET_UNIQUEID_OFFSET))(this);
		}

		::System::Void set_UniqueID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPASSENGERCARDINFO_SET_UNIQUEID_OFFSET))(this, value);
		}
	};
}
