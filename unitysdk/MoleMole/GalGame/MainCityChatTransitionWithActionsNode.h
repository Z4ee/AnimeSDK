#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class Class_1_2D5DADE6FF36AA79;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace MoleMole::GalGame { class TransitionWithActionsCfg; }

#define MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONWITHACTIONSNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x136A72A0)
#define MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONWITHACTIONSNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x136A7290)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatTransitionWithActionsNode_TypeDefinitionIndex = 46489;

	class MainCityChatTransitionWithActionsNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::MoleMole::GalGame::TransitionWithActionsCfg* Cfg; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONWITHACTIONSNODE__CTOR_OFFSET))(this);
		}

		::Class_1_2D5DADE6FF36AA79* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_2D5DADE6FF36AA79*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONWITHACTIONSNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
