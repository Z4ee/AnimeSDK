#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class Class_1_328B10E9F3553A0D;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace MoleMole::GalGame { class MainCityChatQuestTrackItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATQUESTTRACKNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x10E1B730)
#define MOLEMOLE_GALGAME_MAINCITYCHATQUESTTRACKNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x10E1B720)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatQuestTrackNode_TypeDefinitionIndex = 58306;

	class MainCityChatQuestTrackNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::GalGame::MainCityChatQuestTrackItem*>* questList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATQUESTTRACKNODE__CTOR_OFFSET))(this);
		}

		::Class_1_328B10E9F3553A0D* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_328B10E9F3553A0D*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATQUESTTRACKNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
