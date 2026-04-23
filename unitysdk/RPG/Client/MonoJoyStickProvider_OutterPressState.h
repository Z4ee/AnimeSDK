#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoJoyStickProvider; }

#define RPG_CLIENT_MONOJOYSTICKPROVIDER_OUTTERPRESSSTATE_ENTER_OFFSET UNITYSDK_OFFSET(0xA9D7BA0)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_OUTTERPRESSSTATE_EXIT_OFFSET UNITYSDK_OFFSET(0xA9D7EA0)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_OUTTERPRESSSTATE_TICK_OFFSET UNITYSDK_OFFSET(0xA9D7CD0)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_OUTTERPRESSSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xA9D7820)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoJoyStickProvider_OutterPressState_TypeDefinitionIndex = 56545;

	class MonoJoyStickProvider_OutterPressState : public ::System::Object
	{
	public:
		// static const ::System::Single FORBID_WALK_DELTA_INCH; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_OUTTERPRESSSTATE__CTOR_OFFSET))(this);
		}

		::System::Void Enter(::RPG::Client::MonoJoyStickProvider* owner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoJoyStickProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_OUTTERPRESSSTATE_ENTER_OFFSET))(this, owner);
		}

		::System::Void Tick(::RPG::Client::MonoJoyStickProvider* owner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoJoyStickProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_OUTTERPRESSSTATE_TICK_OFFSET))(this, owner);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_OUTTERPRESSSTATE_EXIT_OFFSET))(this);
		}
	};
}
