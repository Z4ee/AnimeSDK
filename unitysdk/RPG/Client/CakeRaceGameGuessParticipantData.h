#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_302;
namespace RPG::Client { class CakeRaceParticipantData; }

#define RPG_CLIENT_CAKERACEGAMEGUESSPARTICIPANTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9F01430)
#define RPG_CLIENT_CAKERACEGAMEGUESSPARTICIPANTDATA_GET_GUESSCOIN_OFFSET UNITYSDK_OFFSET(0x9F02940)
#define RPG_CLIENT_CAKERACEGAMEGUESSPARTICIPANTDATA_GET_PARTICIPANTDATA_OFFSET UNITYSDK_OFFSET(0x9F028D0)
#define RPG_CLIENT_CAKERACEGAMEGUESSPARTICIPANTDATA_GET_PARTICIPANTID_OFFSET UNITYSDK_OFFSET(0x9F028F0)
#define RPG_CLIENT_CAKERACEGAMEGUESSPARTICIPANTDATA_SET_PARTICIPANTDATA_OFFSET UNITYSDK_OFFSET(0x9F028E0)
#define RPG_CLIENT_CAKERACEGAMEGUESSPARTICIPANTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9F02990)
#define RPG_CLIENT_CAKERACEGAMEGUESSPARTICIPANTDATA__INIT_OFFSET UNITYSDK_OFFSET(0x9F029A0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceGameGuessParticipantData_TypeDefinitionIndex = 58075;

	class CakeRaceGameGuessParticipantData : public ::System::Object
	{
	public:
		::Class_1_D17272E82AE804C2_302* _GuessPlayerData; // 0x10
		::RPG::Client::CakeRaceParticipantData* _ParticipantData_k__BackingField; // 0x18

		::System::Void _ctor(::Class_1_D17272E82AE804C2_302* guessPlayerData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_302*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSPARTICIPANTDATA__CTOR_OFFSET))(this, guessPlayerData);
		}

		::RPG::Client::CakeRaceParticipantData* get_ParticipantData()
		{
			return ((::RPG::Client::CakeRaceParticipantData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSPARTICIPANTDATA_GET_PARTICIPANTDATA_OFFSET))(this);
		}

		::System::Void set_ParticipantData(::RPG::Client::CakeRaceParticipantData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceParticipantData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSPARTICIPANTDATA_SET_PARTICIPANTDATA_OFFSET))(this, value);
		}

		::System::UInt32 get_ParticipantID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSPARTICIPANTDATA_GET_PARTICIPANTID_OFFSET))(this);
		}

		::System::UInt32 get_GuessCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSPARTICIPANTDATA_GET_GUESSCOIN_OFFSET))(this);
		}

		static ::RPG::Client::CakeRaceGameGuessParticipantData* Create(::Class_1_D17272E82AE804C2_302* guessPlayerData)
		{
			return ((::RPG::Client::CakeRaceGameGuessParticipantData*(*)(::Class_1_D17272E82AE804C2_302*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSPARTICIPANTDATA_CREATE_OFFSET))(guessPlayerData);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSPARTICIPANTDATA__INIT_OFFSET))(this);
		}
	};
}
