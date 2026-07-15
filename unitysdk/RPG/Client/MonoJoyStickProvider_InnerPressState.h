#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoJoyStickProvider; }

#define RPG_CLIENT_MONOJOYSTICKPROVIDER_INNERPRESSSTATE_ENTER_OFFSET UNITYSDK_OFFSET(0x18C57490)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_INNERPRESSSTATE_EXIT_OFFSET UNITYSDK_OFFSET(0x18C57730)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_INNERPRESSSTATE_TICK_OFFSET UNITYSDK_OFFSET(0x18C575F0)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_INNERPRESSSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18C57440)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoJoyStickProvider_InnerPressState_TypeDefinitionIndex = 58583;

	class MonoJoyStickProvider_InnerPressState : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_INNERPRESSSTATE__CTOR_OFFSET))(this);
		}

		::System::Void Enter(::RPG::Client::MonoJoyStickProvider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoJoyStickProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_INNERPRESSSTATE_ENTER_OFFSET))(this, a1);
		}

		::System::Void Tick(::RPG::Client::MonoJoyStickProvider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoJoyStickProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_INNERPRESSSTATE_TICK_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_INNERPRESSSTATE_EXIT_OFFSET))(this);
		}
	};
}
