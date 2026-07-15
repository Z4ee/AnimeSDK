#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoJoyStickProvider; }

#define RPG_CLIENT_MONOJOYSTICKPROVIDER_OUTTERPRESSSTATE_ENTER_OFFSET UNITYSDK_OFFSET(0x18C57770)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_OUTTERPRESSSTATE_EXIT_OFFSET UNITYSDK_OFFSET(0x18C57A40)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_OUTTERPRESSSTATE_TICK_OFFSET UNITYSDK_OFFSET(0x18C578D0)
#define RPG_CLIENT_MONOJOYSTICKPROVIDER_OUTTERPRESSSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18C57430)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoJoyStickProvider_OutterPressState_TypeDefinitionIndex = 58582;

	class MonoJoyStickProvider_OutterPressState : public ::System::Object
	{
	public:
		// static const ::System::Single FORBID_WALK_DELTA_INCH; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_OUTTERPRESSSTATE__CTOR_OFFSET))(this);
		}

		::System::Void Enter(::RPG::Client::MonoJoyStickProvider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoJoyStickProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_OUTTERPRESSSTATE_ENTER_OFFSET))(this, a1);
		}

		::System::Void Tick(::RPG::Client::MonoJoyStickProvider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoJoyStickProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_OUTTERPRESSSTATE_TICK_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOJOYSTICKPROVIDER_OUTTERPRESSSTATE_EXIT_OFFSET))(this);
		}
	};
}
