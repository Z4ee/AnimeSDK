#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class Class_1_328B10E9F3553A0D;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace MoleMole::GalGame { class MainCityChatBranchItem; }

#define MOLEMOLE_GALGAME_MAINCITYCHATBANGKOVHANDINNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x16D48B10)
#define MOLEMOLE_GALGAME_MAINCITYCHATBANGKOVHANDINNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x16D48AB0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatBangkovHandInNode_TypeDefinitionIndex = 59604;

	class MainCityChatBangkovHandInNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::Int32 QuestId; // 0x18
		::MoleMole::GalGame::MainCityChatBranchItem* OnSubmitNext; // 0x20
		::MoleMole::GalGame::MainCityChatBranchItem* OnCancelNext; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBANGKOVHANDINNODE__CTOR_OFFSET))(this);
		}

		::Class_1_328B10E9F3553A0D* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_328B10E9F3553A0D*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBANGKOVHANDINNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
