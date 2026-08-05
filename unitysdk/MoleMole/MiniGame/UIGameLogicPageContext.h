#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_469466241042B140;
namespace MoleMole::MiniGame { class MiniGameWorldBase; }

#define MOLEMOLE_MINIGAME_UIGAMELOGICPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x107FDB30)

namespace MoleMole::MiniGame
{
	inline static constexpr unsigned int UIGameLogicPageContext_TypeDefinitionIndex = 68755;

	class UIGameLogicPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::MiniGame::MiniGameWorldBase* miniGameWorld; // 0x28
		::Class_1_469466241042B140* gameLogic; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_UIGAMELOGICPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
