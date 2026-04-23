#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CakeRaceChatEventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeRaceParticipantData; }

#define RPG_CLIENT_CAKERACERECEIVECHATEVENTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9F10AB0)
#define RPG_CLIENT_CAKERACERECEIVECHATEVENTDATA_GET_DATAID_OFFSET UNITYSDK_OFFSET(0x9F10BF0)
#define RPG_CLIENT_CAKERACERECEIVECHATEVENTDATA_GET_PARTICIPANTDATA_OFFSET UNITYSDK_OFFSET(0x9F10C10)
#define RPG_CLIENT_CAKERACERECEIVECHATEVENTDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F10BD0)
#define RPG_CLIENT_CAKERACERECEIVECHATEVENTDATA_SET_DATAID_OFFSET UNITYSDK_OFFSET(0x9F10C00)
#define RPG_CLIENT_CAKERACERECEIVECHATEVENTDATA_SET_PARTICIPANTDATA_OFFSET UNITYSDK_OFFSET(0x9F10C20)
#define RPG_CLIENT_CAKERACERECEIVECHATEVENTDATA_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F10BE0)
#define RPG_CLIENT_CAKERACERECEIVECHATEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9F10B50)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceReceiveChatEventData_TypeDefinitionIndex = 58066;

	class CakeRaceReceiveChatEventData : public ::System::Object
	{
	public:
		::RPG::Client::CakeRaceParticipantData* _ParticipantData_k__BackingField; // 0x10
		::RPG::Client::CakeRaceChatEventType _Type_k__BackingField; // 0x18
		::System::UInt32 _DataID_k__BackingField; // 0x1C

		::System::Void _ctor(::RPG::Client::CakeRaceChatEventType type, ::System::UInt32 dataID, ::System::UInt32 playerID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceChatEventType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACERECEIVECHATEVENTDATA__CTOR_OFFSET))(this, type, dataID, playerID);
		}

		static ::RPG::Client::CakeRaceReceiveChatEventData* Create(::RPG::Client::CakeRaceChatEventType type, ::System::UInt32 dataID, ::System::UInt32 playerID)
		{
			return ((::RPG::Client::CakeRaceReceiveChatEventData*(*)(::RPG::Client::CakeRaceChatEventType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACERECEIVECHATEVENTDATA_CREATE_OFFSET))(type, dataID, playerID);
		}

		::RPG::Client::CakeRaceChatEventType get_Type()
		{
			return ((::RPG::Client::CakeRaceChatEventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACERECEIVECHATEVENTDATA_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::Client::CakeRaceChatEventType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceChatEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACERECEIVECHATEVENTDATA_SET_TYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_DataID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACERECEIVECHATEVENTDATA_GET_DATAID_OFFSET))(this);
		}

		::System::Void set_DataID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACERECEIVECHATEVENTDATA_SET_DATAID_OFFSET))(this, value);
		}

		::RPG::Client::CakeRaceParticipantData* get_ParticipantData()
		{
			return ((::RPG::Client::CakeRaceParticipantData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACERECEIVECHATEVENTDATA_GET_PARTICIPANTDATA_OFFSET))(this);
		}

		::System::Void set_ParticipantData(::RPG::Client::CakeRaceParticipantData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceParticipantData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACERECEIVECHATEVENTDATA_SET_PARTICIPANTDATA_OFFSET))(this, value);
		}
	};
}
