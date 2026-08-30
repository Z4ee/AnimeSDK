#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengePeakGameContext; }
namespace System { class Action; }

#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT___C__DISPLAYCLASS47_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCAA5B60)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT___C__DISPLAYCLASS47_0___RESTARTCHALLENGE_B__0_OFFSET UNITYSDK_OFFSET(0xCAA5E00)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakGameContext___c__DisplayClass47_0_TypeDefinitionIndex = 63237;

	class ChallengePeakGameContext___c__DisplayClass47_0 : public ::System::Object
	{
	public:
		::System::Action* afterRestartAction; // 0x10
		::RPG::Client::ChallengePeakGameContext* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT___C__DISPLAYCLASS47_0__CTOR_OFFSET))(this);
		}

		::System::Void __RestartChallenge_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT___C__DISPLAYCLASS47_0___RESTARTCHALLENGE_B__0_OFFSET))(this);
		}
	};
}
