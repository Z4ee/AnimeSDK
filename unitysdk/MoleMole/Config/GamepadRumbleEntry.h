#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_GAMEPADRUMBLEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x17544D60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int GamepadRumbleEntry_TypeDefinitionIndex = 38887;

	class GamepadRumbleEntry : public ::System::Object
	{
	public:
		::System::String* EventName; // 0x10
		::System::Single Amplitude; // 0x18
		::System::Single Duration; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPADRUMBLEENTRY__CTOR_OFFSET))(this);
		}
	};
}
