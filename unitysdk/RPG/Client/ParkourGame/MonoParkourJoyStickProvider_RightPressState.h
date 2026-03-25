#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ParkourGame { class MonoParkourJoyStickProvider; }

#define RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_RIGHTPRESSSTATE_ENTER_OFFSET UNITYSDK_OFFSET(0x9ECCE30)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_RIGHTPRESSSTATE_EXIT_OFFSET UNITYSDK_OFFSET(0x9F01750)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_RIGHTPRESSSTATE_TICK_OFFSET UNITYSDK_OFFSET(0x9F01700)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_RIGHTPRESSSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x9F017C0)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourJoyStickProvider_RightPressState_TypeDefinitionIndex = 60805;

	class MonoParkourJoyStickProvider_RightPressState : public ::System::Object
	{
	public:
		// static const ::System::Single _RightUIAngle; // 0x0
		::RPG::Client::ParkourGame::MonoParkourJoyStickProvider* _Owner; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_RIGHTPRESSSTATE__CTOR_OFFSET))(this);
		}

		::System::Void Enter(::RPG::Client::ParkourGame::MonoParkourJoyStickProvider* owner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourJoyStickProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_RIGHTPRESSSTATE_ENTER_OFFSET))(this, owner);
		}

		::System::Void Tick(::RPG::Client::ParkourGame::MonoParkourJoyStickProvider* owner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourJoyStickProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_RIGHTPRESSSTATE_TICK_OFFSET))(this, owner);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_RIGHTPRESSSTATE_EXIT_OFFSET))(this);
		}
	};
}
