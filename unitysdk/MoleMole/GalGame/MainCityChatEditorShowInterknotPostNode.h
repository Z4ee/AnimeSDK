#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class Class_1_2D5DADE6FF36AA79;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }

#define MOLEMOLE_GALGAME_MAINCITYCHATEDITORSHOWINTERKNOTPOSTNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x129A4A90)
#define MOLEMOLE_GALGAME_MAINCITYCHATEDITORSHOWINTERKNOTPOSTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x129A4A80)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatEditorShowInterknotPostNode_TypeDefinitionIndex = 52788;

	class MainCityChatEditorShowInterknotPostNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::Int32 interknotpost; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATEDITORSHOWINTERKNOTPOSTNODE__CTOR_OFFSET))(this);
		}

		::Class_1_2D5DADE6FF36AA79* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_2D5DADE6FF36AA79*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATEDITORSHOWINTERKNOTPOSTNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
