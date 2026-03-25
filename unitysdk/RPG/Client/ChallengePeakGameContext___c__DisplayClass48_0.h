#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengePeakGameContext; }
namespace System { class Action; }

#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT___C__DISPLAYCLASS48_0__CTOR_OFFSET UNITYSDK_OFFSET(0x92E2880)
#define RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT___C__DISPLAYCLASS48_0___LEAVECHALLENGE_B__0_OFFSET UNITYSDK_OFFSET(0x92E2B00)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakGameContext___c__DisplayClass48_0_TypeDefinitionIndex = 51261;

	class ChallengePeakGameContext___c__DisplayClass48_0 : public ::System::Object
	{
	public:
		::RPG::Client::ChallengePeakGameContext* __4__this; // 0x10
		::System::Action* afterLeaveAction; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT___C__DISPLAYCLASS48_0__CTOR_OFFSET))(this);
		}

		::System::Void __LeaveChallenge_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMECONTEXT___C__DISPLAYCLASS48_0___LEAVECHALLENGE_B__0_OFFSET))(this);
		}
	};
}
