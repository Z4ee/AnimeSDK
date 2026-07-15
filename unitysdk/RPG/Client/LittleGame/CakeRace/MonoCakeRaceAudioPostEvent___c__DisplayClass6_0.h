#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/MonoCakeRaceAudioPostEvent_CakeRaceAnimatorAudioEvent.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::CakeRace { class MonoCakeRaceAudioPostEvent; }

#define RPG_CLIENT_LITTLEGAME_CAKERACE_MONOCAKERACEAUDIOPOSTEVENT___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19B83D10)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_MONOCAKERACEAUDIOPOSTEVENT___C__DISPLAYCLASS6_0___POSTAUDIOEVENT_B__0_OFFSET UNITYSDK_OFFSET(0x19B84020)

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int MonoCakeRaceAudioPostEvent___c__DisplayClass6_0_TypeDefinitionIndex = 74028;

	class MonoCakeRaceAudioPostEvent___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::CakeRace::MonoCakeRaceAudioPostEvent_CakeRaceAnimatorAudioEvent evt; // 0x10
		::RPG::Client::LittleGame::CakeRace::MonoCakeRaceAudioPostEvent* __4__this; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_MONOCAKERACEAUDIOPOSTEVENT___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void __PostAudioEvent_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_MONOCAKERACEAUDIOPOSTEVENT___C__DISPLAYCLASS6_0___POSTAUDIOEVENT_B__0_OFFSET))(this);
		}
	};
}
