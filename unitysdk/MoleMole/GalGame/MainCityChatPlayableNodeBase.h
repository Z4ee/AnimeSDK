#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/System/Object.h"

class Class_1_328B10E9F3553A0D;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }

#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYABLENODEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x13834E20)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatPlayableNodeBase_TypeDefinitionIndex = 75365;

	class MainCityChatPlayableNodeBase : public ::System::Object
	{
	public:
		::System::Boolean allowSkip; // 0x10
		::MoleMole::GalGame::MainCityChatPlayableNodeType nodeType; // 0x14

		::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeType nodeType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeType))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYABLENODEBASE__CTOR_OFFSET))(this, nodeType);
		}
	};
}
