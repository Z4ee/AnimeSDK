#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class Class_1_328B10E9F3553A0D;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace MoleMole::GalGame { class AttachEffectCfg; }

#define MOLEMOLE_GALGAME_CHATATTACHEFFECTNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x16D47EF0)
#define MOLEMOLE_GALGAME_CHATATTACHEFFECTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x16D47EE0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int ChatAttachEffectNode_TypeDefinitionIndex = 40359;

	class ChatAttachEffectNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::MoleMole::GalGame::AttachEffectCfg* Cfg; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_CHATATTACHEFFECTNODE__CTOR_OFFSET))(this);
		}

		::Class_1_328B10E9F3553A0D* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_328B10E9F3553A0D*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_CHATATTACHEFFECTNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
