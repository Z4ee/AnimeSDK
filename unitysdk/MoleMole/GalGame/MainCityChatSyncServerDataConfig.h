#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DBF2701137F18AA6.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSYNCSERVERDATACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x13A91490)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatSyncServerDataConfig_TypeDefinitionIndex = 91494;

	class MainCityChatSyncServerDataConfig : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSYNCSERVERDATACONFIG__CTOR_OFFSET))(this);
		}
	};
}
