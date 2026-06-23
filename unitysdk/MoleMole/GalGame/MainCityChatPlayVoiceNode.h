#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class Class_1_2D5DADE6FF36AA79;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYVOICENODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x1261E010)
#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYVOICENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1261E000)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatPlayVoiceNode_TypeDefinitionIndex = 48120;

	class MainCityChatPlayVoiceNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::String* voiceKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYVOICENODE__CTOR_OFFSET))(this);
		}

		::Class_1_2D5DADE6FF36AA79* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_2D5DADE6FF36AA79*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYVOICENODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
