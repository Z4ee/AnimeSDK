#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class Class_1_328B10E9F3553A0D;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace MoleMole::GalGame { class MainCityChatBranchItem; }
namespace MoleMole::GalGame { class MainCityChatShowUIConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUINODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x12336D40)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUINODE__CTOR_OFFSET UNITYSDK_OFFSET(0x12336D30)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShowUINode_TypeDefinitionIndex = 61370;

	class MainCityChatShowUINode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::MoleMole::GalGame::MainCityChatShowUIConfig* Config; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::GalGame::MainCityChatBranchItem*>* transitionList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUINODE__CTOR_OFFSET))(this);
		}

		::Class_1_328B10E9F3553A0D* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_328B10E9F3553A0D*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUINODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
