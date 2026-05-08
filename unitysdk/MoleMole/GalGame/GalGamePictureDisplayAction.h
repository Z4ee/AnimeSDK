#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalGameActionBase.h"

namespace System { class String; }

#define MOLEMOLE_GALGAME_GALGAMEPICTUREDISPLAYACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x14287950)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalGamePictureDisplayAction_TypeDefinitionIndex = 71342;

	class GalGamePictureDisplayAction : public ::MoleMole::GalGame::GalGameActionBase
	{
	public:
		::System::String* backgroundKey; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMEPICTUREDISPLAYACTION__CTOR_OFFSET))(this);
		}
	};
}
