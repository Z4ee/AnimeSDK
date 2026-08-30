#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartyPassengerData; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGLEFTCARDINFO_GET_LEFTCNT_OFFSET UNITYSDK_OFFSET(0x1BDF96D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGLEFTCARDINFO_GET_PASSENGERDATA_OFFSET UNITYSDK_OFFSET(0x1BDF96B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGLEFTCARDINFO_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1BDF96F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGLEFTCARDINFO_SET_LEFTCNT_OFFSET UNITYSDK_OFFSET(0x1BDF96E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGLEFTCARDINFO_SET_PASSENGERDATA_OFFSET UNITYSDK_OFFSET(0x1BDF96C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGLEFTCARDINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x1BDF9390)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGLEFTCARDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDF9770)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyMeetingLeftCardInfo_TypeDefinitionIndex = 74230;

	class TrainPartyMeetingLeftCardInfo : public ::System::Object
	{
	public:
		::RPG::Client::TrainParty::TrainPartyPassengerData* _PassengerData_k__BackingField; // 0x10
		::System::UInt32 _LeftCnt_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGLEFTCARDINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::RPG::Client::TrainParty::TrainPartyPassengerData* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyPassengerData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGLEFTCARDINFO_SYNC_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TrainParty::TrainPartyPassengerData* get_PassengerData()
		{
			return ((::RPG::Client::TrainParty::TrainPartyPassengerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGLEFTCARDINFO_GET_PASSENGERDATA_OFFSET))(this);
		}

		::System::Void set_PassengerData(::RPG::Client::TrainParty::TrainPartyPassengerData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyPassengerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGLEFTCARDINFO_SET_PASSENGERDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_LeftCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGLEFTCARDINFO_GET_LEFTCNT_OFFSET))(this);
		}

		::System::Void set_LeftCnt(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGLEFTCARDINFO_SET_LEFTCNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_Value()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGLEFTCARDINFO_GET_VALUE_OFFSET))(this);
		}
	};
}
