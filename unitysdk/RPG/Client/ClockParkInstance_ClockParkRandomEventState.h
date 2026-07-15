#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseClockParkGameState.h"

#define RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKRANDOMEVENTSTATE_ENABLEDICEPLACEMENT_OFFSET UNITYSDK_OFFSET(0x1AE0ADF0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKRANDOMEVENTSTATE_FINISHROUND_OFFSET UNITYSDK_OFFSET(0x1AE0ABF0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKRANDOMEVENTSTATE_ISSHOWDICEPLACEMENT_OFFSET UNITYSDK_OFFSET(0x1AE0ADB0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKRANDOMEVENTSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE09C80)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkInstance_ClockParkRandomEventState_TypeDefinitionIndex = 58736;

	class ClockParkInstance_ClockParkRandomEventState : public ::RPG::Client::BaseClockParkGameState
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKRANDOMEVENTSTATE__CTOR_OFFSET))(this);
		}

		::System::Boolean FinishRound()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKRANDOMEVENTSTATE_FINISHROUND_OFFSET))(this);
		}

		::System::Boolean IsShowDicePlacement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKRANDOMEVENTSTATE_ISSHOWDICEPLACEMENT_OFFSET))(this);
		}

		::System::Boolean EnableDicePlacement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKRANDOMEVENTSTATE_ENABLEDICEPLACEMENT_OFFSET))(this);
		}
	};
}
