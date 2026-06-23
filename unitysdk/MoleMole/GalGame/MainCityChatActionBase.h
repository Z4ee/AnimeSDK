#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_GALGAME_MAINCITYCHATACTIONBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x191292B0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatActionBase_TypeDefinitionIndex = 72561;

	class MainCityChatActionBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATACTIONBASE__CTOR_OFFSET))(this);
		}
	};
}
