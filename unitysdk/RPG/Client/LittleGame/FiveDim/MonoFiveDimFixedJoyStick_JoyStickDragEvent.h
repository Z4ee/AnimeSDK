#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK_JOYSTICKDRAGEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x9A1B770)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int MonoFiveDimFixedJoyStick_JoyStickDragEvent_TypeDefinitionIndex = 62900;

	class MonoFiveDimFixedJoyStick_JoyStickDragEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector2>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMFIXEDJOYSTICK_JOYSTICKDRAGEVENT__CTOR_OFFSET))(this);
		}
	};
}
