#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class Class_1_2D5DADE6FF36AA79;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYTIMELINENODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x19DBE880)
#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYTIMELINENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19DBE870)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatPlayTimelineNode_TypeDefinitionIndex = 41268;

	class MainCityChatPlayTimelineNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::String* TimelineKey; // 0x18
		::System::Boolean IsStop; // 0x20
		::System::Boolean WaitFinish; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYTIMELINENODE__CTOR_OFFSET))(this);
		}

		::Class_1_2D5DADE6FF36AA79* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_2D5DADE6FF36AA79*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYTIMELINENODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
