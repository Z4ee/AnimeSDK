#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class Class_1_328B10E9F3553A0D;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }

#define MOLEMOLE_GALGAME_MAINCITYCHATCUSTOMTRANSITIONNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x125CC4B0)
#define MOLEMOLE_GALGAME_MAINCITYCHATCUSTOMTRANSITIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x125CC4A0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatCustomTransitionNode_TypeDefinitionIndex = 66556;

	class MainCityChatCustomTransitionNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::Boolean showChatWindow; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCUSTOMTRANSITIONNODE__CTOR_OFFSET))(this);
		}

		::Class_1_328B10E9F3553A0D* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_328B10E9F3553A0D*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCUSTOMTRANSITIONNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
