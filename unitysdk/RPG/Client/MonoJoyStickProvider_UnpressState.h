#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoJoyStickProvider; }

#define RPG_CLIENT_MONOJOYSTICKPROVIDER_UNPRESSSTATE_ENTER_OFFSET UNITYSDK_OFFSET(0xA9D7EE0)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_UNPRESSSTATE_EXIT_OFFSET UNITYSDK_OFFSET(0xA9D7F80)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_UNPRESSSTATE_TICK_OFFSET UNITYSDK_OFFSET(0xA9D7F30)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_UNPRESSSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xA9D7810)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoJoyStickProvider_UnpressState_TypeDefinitionIndex = 56547;

	class MonoJoyStickProvider_UnpressState : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_UNPRESSSTATE__CTOR_OFFSET))(this);
		}

		::System::Void Enter(::RPG::Client::MonoJoyStickProvider* owner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoJoyStickProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_UNPRESSSTATE_ENTER_OFFSET))(this, owner);
		}

		::System::Void Tick(::RPG::Client::MonoJoyStickProvider* owner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoJoyStickProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_UNPRESSSTATE_TICK_OFFSET))(this, owner);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_UNPRESSSTATE_EXIT_OFFSET))(this);
		}
	};
}
