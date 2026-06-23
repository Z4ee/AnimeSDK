#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class Class_1_2D5DADE6FF36AA79;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace MoleMole::GalGame { class AttachEffectCfg; }

#define MOLEMOLE_GALGAME_CHATATTACHEFFECTNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x1261C8D0)
#define MOLEMOLE_GALGAME_CHATATTACHEFFECTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1261C8C0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int ChatAttachEffectNode_TypeDefinitionIndex = 43872;

	class ChatAttachEffectNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::MoleMole::GalGame::AttachEffectCfg* Cfg; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_CHATATTACHEFFECTNODE__CTOR_OFFSET))(this);
		}

		::Class_1_2D5DADE6FF36AA79* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_2D5DADE6FF36AA79*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_CHATATTACHEFFECTNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
