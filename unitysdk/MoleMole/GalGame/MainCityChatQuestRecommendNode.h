#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class Class_1_2D5DADE6FF36AA79;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }

#define MOLEMOLE_GALGAME_MAINCITYCHATQUESTRECOMMENDNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x12BC0B40)
#define MOLEMOLE_GALGAME_MAINCITYCHATQUESTRECOMMENDNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x12BC0B30)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatQuestRecommendNode_TypeDefinitionIndex = 75205;

	class MainCityChatQuestRecommendNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATQUESTRECOMMENDNODE__CTOR_OFFSET))(this);
		}

		::Class_1_2D5DADE6FF36AA79* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_2D5DADE6FF36AA79*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATQUESTRECOMMENDNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
