#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ParkourGame { class MonoParkourJoyStickProvider; }

#define RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_UNPRESSSTATE_ENTER_OFFSET UNITYSDK_OFFSET(0x9F017D0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_UNPRESSSTATE_EXIT_OFFSET UNITYSDK_OFFSET(0x9F018C0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_UNPRESSSTATE_TICK_OFFSET UNITYSDK_OFFSET(0x9F01870)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_UNPRESSSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x9F01900)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourJoyStickProvider_UnpressState_TypeDefinitionIndex = 60808;

	class MonoParkourJoyStickProvider_UnpressState : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_UNPRESSSTATE__CTOR_OFFSET))(this);
		}

		::System::Void Enter(::RPG::Client::ParkourGame::MonoParkourJoyStickProvider* owner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourJoyStickProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_UNPRESSSTATE_ENTER_OFFSET))(this, owner);
		}

		::System::Void Tick(::RPG::Client::ParkourGame::MonoParkourJoyStickProvider* owner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourJoyStickProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_UNPRESSSTATE_TICK_OFFSET))(this, owner);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_UNPRESSSTATE_EXIT_OFFSET))(this);
		}
	};
}
