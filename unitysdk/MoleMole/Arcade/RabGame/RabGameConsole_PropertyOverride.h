#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_ARCADE_RABGAME_RABGAMECONSOLE_PROPERTYOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB78F30)

namespace MoleMole::Arcade::RabGame
{
	inline static constexpr unsigned int RabGameConsole_PropertyOverride_TypeDefinitionIndex = 89447;

	class RabGameConsole_PropertyOverride : public ::System::Object
	{
	public:
		::System::Int32 PropertyId; // 0x10
		::System::Int32 Value; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_RABGAME_RABGAMECONSOLE_PROPERTYOVERRIDE__CTOR_OFFSET))(this);
		}
	};
}
