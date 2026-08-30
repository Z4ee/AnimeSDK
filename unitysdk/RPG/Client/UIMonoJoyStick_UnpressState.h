#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIMonoJoyStick; }

#define RPG_CLIENT_UIMONOJOYSTICK_UNPRESSSTATE_ENTER_OFFSET UNITYSDK_OFFSET(0x17B64E40)
#define RPG_CLIENT_UIMONOJOYSTICK_UNPRESSSTATE_EXIT_OFFSET UNITYSDK_OFFSET(0x17B64EE0)
#define RPG_CLIENT_UIMONOJOYSTICK_UNPRESSSTATE_TICK_OFFSET UNITYSDK_OFFSET(0x17B64E90)
#define RPG_CLIENT_UIMONOJOYSTICK_UNPRESSSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x17B64C80)

namespace RPG::Client
{
	inline static constexpr unsigned int UIMonoJoyStick_UnpressState_TypeDefinitionIndex = 72752;

	class UIMonoJoyStick_UnpressState : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMONOJOYSTICK_UNPRESSSTATE__CTOR_OFFSET))(this);
		}

		::System::Void Enter(::RPG::Client::UIMonoJoyStick* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIMonoJoyStick*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMONOJOYSTICK_UNPRESSSTATE_ENTER_OFFSET))(this, a1);
		}

		::System::Void Tick(::RPG::Client::UIMonoJoyStick* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIMonoJoyStick*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMONOJOYSTICK_UNPRESSSTATE_TICK_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMONOJOYSTICK_UNPRESSSTATE_EXIT_OFFSET))(this);
		}
	};
}
