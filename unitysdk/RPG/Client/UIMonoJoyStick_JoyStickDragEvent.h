#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define RPG_CLIENT_UIMONOJOYSTICK_JOYSTICKDRAGEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xB40ECE0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIMonoJoyStick_JoyStickDragEvent_TypeDefinitionIndex = 67097;

	class UIMonoJoyStick_JoyStickDragEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector2>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMONOJOYSTICK_JOYSTICKDRAGEVENT__CTOR_OFFSET))(this);
		}
	};
}
