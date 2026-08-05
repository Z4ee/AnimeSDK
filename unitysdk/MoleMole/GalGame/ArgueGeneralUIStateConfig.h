#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/ArgueGeneralUIState.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_GALGAME_ARGUEGENERALUISTATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16853400)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int ArgueGeneralUIStateConfig_TypeDefinitionIndex = 66174;

	class ArgueGeneralUIStateConfig : public ::System::Object
	{
	public:
		::System::Int32 ActorID; // 0x10
		::MoleMole::GalGame::ArgueGeneralUIState SpeedLineState; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_ARGUEGENERALUISTATECONFIG__CTOR_OFFSET))(this);
		}
	};
}
