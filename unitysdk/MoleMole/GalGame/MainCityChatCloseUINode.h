#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class Class_1_328B10E9F3553A0D;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }

#define MOLEMOLE_GALGAME_MAINCITYCHATCLOSEUINODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x16B8E940)
#define MOLEMOLE_GALGAME_MAINCITYCHATCLOSEUINODE__CTOR_OFFSET UNITYSDK_OFFSET(0x16B8E930)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatCloseUINode_TypeDefinitionIndex = 38320;

	class MainCityChatCloseUINode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCLOSEUINODE__CTOR_OFFSET))(this);
		}

		::Class_1_328B10E9F3553A0D* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_328B10E9F3553A0D*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCLOSEUINODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
