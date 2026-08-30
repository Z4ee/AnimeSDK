#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CakeRaceChatEventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeRaceParticipantData; }

#define RPG_CLIENT_CAKERACERECEIVECHATEVENTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1C657760)
#define RPG_CLIENT_CAKERACERECEIVECHATEVENTDATA_GET_DATAID_OFFSET UNITYSDK_OFFSET(0x1C657850)
#define RPG_CLIENT_CAKERACERECEIVECHATEVENTDATA_GET_PARTICIPANTDATA_OFFSET UNITYSDK_OFFSET(0x1C657870)
#define RPG_CLIENT_CAKERACERECEIVECHATEVENTDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C657830)
#define RPG_CLIENT_CAKERACERECEIVECHATEVENTDATA_SET_DATAID_OFFSET UNITYSDK_OFFSET(0x1C657860)
#define RPG_CLIENT_CAKERACERECEIVECHATEVENTDATA_SET_PARTICIPANTDATA_OFFSET UNITYSDK_OFFSET(0x1C657880)
#define RPG_CLIENT_CAKERACERECEIVECHATEVENTDATA_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C657840)
#define RPG_CLIENT_CAKERACERECEIVECHATEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C657800)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceReceiveChatEventData_TypeDefinitionIndex = 63101;

	class CakeRaceReceiveChatEventData : public ::System::Object
	{
	public:
		::RPG::Client::CakeRaceParticipantData* _ParticipantData_k__BackingField; // 0x10
		::RPG::Client::CakeRaceChatEventType _Type_k__BackingField; // 0x18
		::System::UInt32 _DataID_k__BackingField; // 0x1C

		::System::Void _ctor(::RPG::Client::CakeRaceChatEventType a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceChatEventType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACERECEIVECHATEVENTDATA__CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::RPG::Client::CakeRaceReceiveChatEventData* Create(::RPG::Client::CakeRaceChatEventType a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::CakeRaceReceiveChatEventData*(*)(::RPG::Client::CakeRaceChatEventType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACERECEIVECHATEVENTDATA_CREATE_OFFSET))(a1, a2, a3);
		}

		::RPG::Client::CakeRaceChatEventType get_Type()
		{
			return ((::RPG::Client::CakeRaceChatEventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACERECEIVECHATEVENTDATA_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::Client::CakeRaceChatEventType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceChatEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACERECEIVECHATEVENTDATA_SET_TYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_DataID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACERECEIVECHATEVENTDATA_GET_DATAID_OFFSET))(this);
		}

		::System::Void set_DataID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACERECEIVECHATEVENTDATA_SET_DATAID_OFFSET))(this, a1);
		}

		::RPG::Client::CakeRaceParticipantData* get_ParticipantData()
		{
			return ((::RPG::Client::CakeRaceParticipantData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACERECEIVECHATEVENTDATA_GET_PARTICIPANTDATA_OFFSET))(this);
		}

		::System::Void set_ParticipantData(::RPG::Client::CakeRaceParticipantData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceParticipantData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACERECEIVECHATEVENTDATA_SET_PARTICIPANTDATA_OFFSET))(this, a1);
		}
	};
}
