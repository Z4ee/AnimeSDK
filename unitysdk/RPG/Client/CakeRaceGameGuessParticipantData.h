#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_293;
namespace RPG::Client { class CakeRaceParticipantData; }

#define RPG_CLIENT_CAKERACEGAMEGUESSPARTICIPANTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x923DE60)
#define RPG_CLIENT_CAKERACEGAMEGUESSPARTICIPANTDATA_GET_GUESSCOIN_OFFSET UNITYSDK_OFFSET(0x923F350)
#define RPG_CLIENT_CAKERACEGAMEGUESSPARTICIPANTDATA_GET_PARTICIPANTDATA_OFFSET UNITYSDK_OFFSET(0x923F2E0)
#define RPG_CLIENT_CAKERACEGAMEGUESSPARTICIPANTDATA_GET_PARTICIPANTID_OFFSET UNITYSDK_OFFSET(0x923F300)
#define RPG_CLIENT_CAKERACEGAMEGUESSPARTICIPANTDATA_SET_PARTICIPANTDATA_OFFSET UNITYSDK_OFFSET(0x923F2F0)
#define RPG_CLIENT_CAKERACEGAMEGUESSPARTICIPANTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x923F3A0)
#define RPG_CLIENT_CAKERACEGAMEGUESSPARTICIPANTDATA__INIT_OFFSET UNITYSDK_OFFSET(0x923F3B0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceGameGuessParticipantData_TypeDefinitionIndex = 51155;

	class CakeRaceGameGuessParticipantData : public ::System::Object
	{
	public:
		::RPG::Client::CakeRaceParticipantData* _ParticipantData_k__BackingField; // 0x10
		::Class_1_FA4F4A67B1C04320_293* _GuessPlayerData; // 0x18

		::System::Void _ctor(::Class_1_FA4F4A67B1C04320_293* guessPlayerData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_293*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSPARTICIPANTDATA__CTOR_OFFSET))(this, guessPlayerData);
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

		static ::RPG::Client::CakeRaceGameGuessParticipantData* Create(::Class_1_FA4F4A67B1C04320_293* guessPlayerData)
		{
			return ((::RPG::Client::CakeRaceGameGuessParticipantData*(*)(::Class_1_FA4F4A67B1C04320_293*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSPARTICIPANTDATA_CREATE_OFFSET))(guessPlayerData);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSPARTICIPANTDATA__INIT_OFFSET))(this);
		}
	};
}
