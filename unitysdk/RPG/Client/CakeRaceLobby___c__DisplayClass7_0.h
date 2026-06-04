#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeRaceParticipantData; }
namespace RPG::Client { class LobbyMemberData; }

#define RPG_CLIENT_CAKERACELOBBY___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB4A5360)
#define RPG_CLIENT_CAKERACELOBBY___C__DISPLAYCLASS7_0___SYNCPARTICIPANTS_B__0_OFFSET UNITYSDK_OFFSET(0xB4A59C0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceLobby___c__DisplayClass7_0_TypeDefinitionIndex = 59001;

	class CakeRaceLobby___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::RPG::Client::CakeRaceParticipantData* participant; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __SyncParticipants_b__0(::RPG::Client::LobbyMemberData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY___C__DISPLAYCLASS7_0___SYNCPARTICIPANTS_B__0_OFFSET))(this, a1);
		}
	};
}
