#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class Class_1_328B10E9F3553A0D;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace MoleMole::GalGame { class TransitionWithActionsCfg; }

#define MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONWITHACTIONSNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x12336E00)
#define MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONWITHACTIONSNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x12336DF0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatTransitionWithActionsNode_TypeDefinitionIndex = 44683;

	class MainCityChatTransitionWithActionsNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::MoleMole::GalGame::TransitionWithActionsCfg* Cfg; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONWITHACTIONSNODE__CTOR_OFFSET))(this);
		}

		::Class_1_328B10E9F3553A0D* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_328B10E9F3553A0D*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONWITHACTIONSNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
