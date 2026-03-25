#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ParkourGame { class MonoParkourJoyStickProvider; }

#define RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_IGNOREPRESSSTATE_ENTER_OFFSET UNITYSDK_OFFSET(0x9ECCAE0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_IGNOREPRESSSTATE_EXIT_OFFSET UNITYSDK_OFFSET(0x9ECCBD0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_IGNOREPRESSSTATE_TICK_OFFSET UNITYSDK_OFFSET(0x9ECCB80)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_IGNOREPRESSSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x9ECCA80)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourJoyStickProvider_IgnorePressState_TypeDefinitionIndex = 60807;

	class MonoParkourJoyStickProvider_IgnorePressState : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_IGNOREPRESSSTATE__CTOR_OFFSET))(this);
		}

		::System::Void Enter(::RPG::Client::ParkourGame::MonoParkourJoyStickProvider* owner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourJoyStickProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_IGNOREPRESSSTATE_ENTER_OFFSET))(this, owner);
		}

		::System::Void Tick(::RPG::Client::ParkourGame::MonoParkourJoyStickProvider* owner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourJoyStickProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_IGNOREPRESSSTATE_TICK_OFFSET))(this, owner);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_IGNOREPRESSSTATE_EXIT_OFFSET))(this);
		}
	};
}
