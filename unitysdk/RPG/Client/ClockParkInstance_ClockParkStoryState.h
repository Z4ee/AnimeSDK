#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseClockParkGameState.h"
#include "unitysdk/RPG/Client/ClockParkGameStateEnum.h"

#define RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKSTORYSTATE_FINISHROUND_OFFSET UNITYSDK_OFFSET(0x1BC14EB0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKSTORYSTATE_ISSHOWATTRIBUTEINFO_OFFSET UNITYSDK_OFFSET(0x1BC14FC0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKSTORYSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC13B70)
#define RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKSTORYSTATE__ONEXIT_OFFSET UNITYSDK_OFFSET(0x1BC14E10)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkInstance_ClockParkStoryState_TypeDefinitionIndex = 61568;

	class ClockParkInstance_ClockParkStoryState : public ::RPG::Client::BaseClockParkGameState
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKSTORYSTATE__CTOR_OFFSET))(this);
		}

		::System::Void _OnExit(::RPG::Client::ClockParkGameStateEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkGameStateEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKSTORYSTATE__ONEXIT_OFFSET))(this, a1);
		}

		::System::Boolean FinishRound()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKSTORYSTATE_FINISHROUND_OFFSET))(this);
		}

		::System::Boolean IsShowAttributeInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_CLOCKPARKSTORYSTATE_ISSHOWATTRIBUTEINFO_OFFSET))(this);
		}
	};
}
