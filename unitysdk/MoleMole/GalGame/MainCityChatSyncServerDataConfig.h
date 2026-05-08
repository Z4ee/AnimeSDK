#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_81A3942BCC6E42B5.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSYNCSERVERDATACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x13834F60)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatSyncServerDataConfig_TypeDefinitionIndex = 53592;

	class MainCityChatSyncServerDataConfig : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSYNCSERVERDATACONFIG__CTOR_OFFSET))(this);
		}
	};
}
