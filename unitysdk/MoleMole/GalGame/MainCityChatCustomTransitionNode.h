#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class Class_1_2D5DADE6FF36AA79;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }

#define MOLEMOLE_GALGAME_MAINCITYCHATCUSTOMTRANSITIONNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x130208A0)
#define MOLEMOLE_GALGAME_MAINCITYCHATCUSTOMTRANSITIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x13020890)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatCustomTransitionNode_TypeDefinitionIndex = 77238;

	class MainCityChatCustomTransitionNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::Boolean showChatWindow; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCUSTOMTRANSITIONNODE__CTOR_OFFSET))(this);
		}

		::Class_1_2D5DADE6FF36AA79* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_2D5DADE6FF36AA79*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCUSTOMTRANSITIONNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
