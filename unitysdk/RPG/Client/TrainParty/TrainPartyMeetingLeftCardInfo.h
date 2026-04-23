#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartyPassengerData; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGLEFTCARDINFO_GET_LEFTCNT_OFFSET UNITYSDK_OFFSET(0xB3580F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGLEFTCARDINFO_GET_PASSENGERDATA_OFFSET UNITYSDK_OFFSET(0xB3580D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGLEFTCARDINFO_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xB358110)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGLEFTCARDINFO_SET_LEFTCNT_OFFSET UNITYSDK_OFFSET(0xB358100)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGLEFTCARDINFO_SET_PASSENGERDATA_OFFSET UNITYSDK_OFFSET(0xB3580E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGLEFTCARDINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xB357DB0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGLEFTCARDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB3581D0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyMeetingLeftCardInfo_TypeDefinitionIndex = 68598;

	class TrainPartyMeetingLeftCardInfo : public ::System::Object
	{
	public:
		::RPG::Client::TrainParty::TrainPartyPassengerData* _PassengerData_k__BackingField; // 0x10
		::System::UInt32 _LeftCnt_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGLEFTCARDINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::RPG::Client::TrainParty::TrainPartyPassengerData* passengerData, ::System::UInt32 leftCnt)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyPassengerData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGLEFTCARDINFO_SYNC_OFFSET))(this, passengerData, leftCnt);
		}

		::RPG::Client::TrainParty::TrainPartyPassengerData* get_PassengerData()
		{
			return ((::RPG::Client::TrainParty::TrainPartyPassengerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGLEFTCARDINFO_GET_PASSENGERDATA_OFFSET))(this);
		}

		::System::Void set_PassengerData(::RPG::Client::TrainParty::TrainPartyPassengerData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyPassengerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGLEFTCARDINFO_SET_PASSENGERDATA_OFFSET))(this, value);
		}

		::System::UInt32 get_LeftCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGLEFTCARDINFO_GET_LEFTCNT_OFFSET))(this);
		}

		::System::Void set_LeftCnt(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGLEFTCARDINFO_SET_LEFTCNT_OFFSET))(this, value);
		}

		::System::UInt32 get_Value()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGLEFTCARDINFO_GET_VALUE_OFFSET))(this);
		}
	};
}
