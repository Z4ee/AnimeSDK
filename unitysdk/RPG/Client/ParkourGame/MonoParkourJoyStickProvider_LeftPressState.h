#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ParkourGame { class MonoParkourJoyStickProvider; }

#define RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_LEFTPRESSSTATE_ENTER_OFFSET UNITYSDK_OFFSET(0x9ECCC10)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_LEFTPRESSSTATE_EXIT_OFFSET UNITYSDK_OFFSET(0x9ECCDD0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_LEFTPRESSSTATE_TICK_OFFSET UNITYSDK_OFFSET(0x9ECCD80)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_LEFTPRESSSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x9ECCA90)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourJoyStickProvider_LeftPressState_TypeDefinitionIndex = 60806;

	class MonoParkourJoyStickProvider_LeftPressState : public ::System::Object
	{
	public:
		// static const ::System::Single _LeftUIAngle; // 0x0
		::RPG::Client::ParkourGame::MonoParkourJoyStickProvider* _Owner; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_LEFTPRESSSTATE__CTOR_OFFSET))(this);
		}

		::System::Void Enter(::RPG::Client::ParkourGame::MonoParkourJoyStickProvider* owner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourJoyStickProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_LEFTPRESSSTATE_ENTER_OFFSET))(this, owner);
		}

		::System::Void Tick(::RPG::Client::ParkourGame::MonoParkourJoyStickProvider* owner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourJoyStickProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_LEFTPRESSSTATE_TICK_OFFSET))(this, owner);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_LEFTPRESSSTATE_EXIT_OFFSET))(this);
		}
	};
}
