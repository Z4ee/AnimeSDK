#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class Class_1_328B10E9F3553A0D;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace MoleMole::GalGame { class MainCityChatSyncServerDataConfig; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSYNCSERVERDATANODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x16D49730)
#define MOLEMOLE_GALGAME_MAINCITYCHATSYNCSERVERDATANODE__CTOR_OFFSET UNITYSDK_OFFSET(0x16D49720)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatSyncServerDataNode_TypeDefinitionIndex = 65638;

	class MainCityChatSyncServerDataNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::MoleMole::GalGame::MainCityChatSyncServerDataConfig* Config; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSYNCSERVERDATANODE__CTOR_OFFSET))(this);
		}

		::Class_1_328B10E9F3553A0D* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_328B10E9F3553A0D*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSYNCSERVERDATANODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
