#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ClockParkGameStateEnum.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ClockParkInstance; }

#define RPG_CLIENT_BASECLOCKPARKGAMESTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9DD0200)
#define RPG_CLIENT_BASECLOCKPARKGAMESTATE_ENABLEDICEPLACEMENT_OFFSET UNITYSDK_OFFSET(0x9DD0050)
#define RPG_CLIENT_BASECLOCKPARKGAMESTATE_ENTER_OFFSET UNITYSDK_OFFSET(0x9DD00D0)
#define RPG_CLIENT_BASECLOCKPARKGAMESTATE_EXIT_OFFSET UNITYSDK_OFFSET(0x9DD0140)
#define RPG_CLIENT_BASECLOCKPARKGAMESTATE_FINISHROUND_OFFSET UNITYSDK_OFFSET(0x9DCFFD0)
#define RPG_CLIENT_BASECLOCKPARKGAMESTATE_ISSHOWATTRIBUTEINFO_OFFSET UNITYSDK_OFFSET(0x9DD0090)
#define RPG_CLIENT_BASECLOCKPARKGAMESTATE_ISSHOWDICEPLACEMENT_OFFSET UNITYSDK_OFFSET(0x9DD0010)
#define RPG_CLIENT_BASECLOCKPARKGAMESTATE_TICK_OFFSET UNITYSDK_OFFSET(0x9DD01B0)
#define RPG_CLIENT_BASECLOCKPARKGAMESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x9DD0250)
#define RPG_CLIENT_BASECLOCKPARKGAMESTATE__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x9DCFF90)
#define RPG_CLIENT_BASECLOCKPARKGAMESTATE__ONENTER_OFFSET UNITYSDK_OFFSET(0x9DCFEF0)
#define RPG_CLIENT_BASECLOCKPARKGAMESTATE__ONEXIT_OFFSET UNITYSDK_OFFSET(0x9DCFF40)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseClockParkGameState_TypeDefinitionIndex = 56717;

	class BaseClockParkGameState : public ::System::Object
	{
	public:
		::RPG::Client::ClockParkInstance* _OwnerInstanceRef; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECLOCKPARKGAMESTATE__CTOR_OFFSET))(this);
		}

		::System::Void _OnEnter(::RPG::Client::ClockParkGameStateEnum lastGameState)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkGameStateEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECLOCKPARKGAMESTATE__ONENTER_OFFSET))(this, lastGameState);
		}

		::System::Void _OnExit(::RPG::Client::ClockParkGameStateEnum nextGameState)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkGameStateEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECLOCKPARKGAMESTATE__ONEXIT_OFFSET))(this, nextGameState);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECLOCKPARKGAMESTATE__ONDISPOSE_OFFSET))(this);
		}

		::System::Boolean FinishRound()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECLOCKPARKGAMESTATE_FINISHROUND_OFFSET))(this);
		}

		::System::Boolean IsShowDicePlacement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECLOCKPARKGAMESTATE_ISSHOWDICEPLACEMENT_OFFSET))(this);
		}

		::System::Boolean EnableDicePlacement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECLOCKPARKGAMESTATE_ENABLEDICEPLACEMENT_OFFSET))(this);
		}

		::System::Boolean IsShowAttributeInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECLOCKPARKGAMESTATE_ISSHOWATTRIBUTEINFO_OFFSET))(this);
		}

		::System::Void Enter(::RPG::Client::ClockParkInstance* owner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECLOCKPARKGAMESTATE_ENTER_OFFSET))(this, owner);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECLOCKPARKGAMESTATE_EXIT_OFFSET))(this);
		}

		::System::Void Tick(::RPG::Client::ClockParkInstance* owner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECLOCKPARKGAMESTATE_TICK_OFFSET))(this, owner);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECLOCKPARKGAMESTATE_DISPOSE_OFFSET))(this);
		}
	};
}
