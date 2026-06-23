#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class Class_1_2D5DADE6FF36AA79;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace MoleMole::GalGame { class MainCityChatBranchItem; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWCONFIRMPOPUPNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x13EDF9B0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWCONFIRMPOPUPNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x13EDF950)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShowConfirmPopupNode_TypeDefinitionIndex = 48196;

	class MainCityChatShowConfirmPopupNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::String* Description; // 0x18
		::System::String* DescriptionDetail; // 0x20
		::System::String* ConfirmBtnDesc; // 0x28
		::System::String* CancelBtnDesc; // 0x30
		::MoleMole::GalGame::MainCityChatBranchItem* OnConfirmNext; // 0x38
		::MoleMole::GalGame::MainCityChatBranchItem* OnCancelNext; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWCONFIRMPOPUPNODE__CTOR_OFFSET))(this);
		}

		::Class_1_2D5DADE6FF36AA79* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_2D5DADE6FF36AA79*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWCONFIRMPOPUPNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
