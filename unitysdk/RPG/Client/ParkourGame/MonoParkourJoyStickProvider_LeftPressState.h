#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ParkourGame { class MonoParkourJoyStickProvider; }

#define RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_LEFTPRESSSTATE_ENTER_OFFSET UNITYSDK_OFFSET(0xC336120)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_LEFTPRESSSTATE_EXIT_OFFSET UNITYSDK_OFFSET(0xC3362E0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_LEFTPRESSSTATE_TICK_OFFSET UNITYSDK_OFFSET(0xC336290)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_LEFTPRESSSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xC335FC0)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourJoyStickProvider_LeftPressState_TypeDefinitionIndex = 69229;

	class MonoParkourJoyStickProvider_LeftPressState : public ::System::Object
	{
	public:
		// static const ::System::Single _LeftUIAngle; // 0x0
		::RPG::Client::ParkourGame::MonoParkourJoyStickProvider* _Owner; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_LEFTPRESSSTATE__CTOR_OFFSET))(this);
		}

		::System::Void Enter(::RPG::Client::ParkourGame::MonoParkourJoyStickProvider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourJoyStickProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_LEFTPRESSSTATE_ENTER_OFFSET))(this, a1);
		}

		::System::Void Tick(::RPG::Client::ParkourGame::MonoParkourJoyStickProvider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourJoyStickProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_LEFTPRESSSTATE_TICK_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_LEFTPRESSSTATE_EXIT_OFFSET))(this);
		}
	};
}
