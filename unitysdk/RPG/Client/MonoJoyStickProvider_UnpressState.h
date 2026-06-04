#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoJoyStickProvider; }

#define RPG_CLIENT_MONOJOYSTICKPROVIDER_UNPRESSSTATE_ENTER_OFFSET UNITYSDK_OFFSET(0xC125EB0)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_UNPRESSSTATE_EXIT_OFFSET UNITYSDK_OFFSET(0xC125F50)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_UNPRESSSTATE_TICK_OFFSET UNITYSDK_OFFSET(0xC125F00)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_UNPRESSSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xC125750)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoJoyStickProvider_UnpressState_TypeDefinitionIndex = 57324;

	class MonoJoyStickProvider_UnpressState : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_UNPRESSSTATE__CTOR_OFFSET))(this);
		}

		::System::Void Enter(::RPG::Client::MonoJoyStickProvider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoJoyStickProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_UNPRESSSTATE_ENTER_OFFSET))(this, a1);
		}

		::System::Void Tick(::RPG::Client::MonoJoyStickProvider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoJoyStickProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_UNPRESSSTATE_TICK_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_UNPRESSSTATE_EXIT_OFFSET))(this);
		}
	};
}
