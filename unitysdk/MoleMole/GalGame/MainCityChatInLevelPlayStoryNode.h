#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/InLevelChatEntitySlot.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class Class_1_2D5DADE6FF36AA79;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace MoleMole::Battle { class AnimatorParamControl; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYCHATINLEVELPLAYSTORYNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x129A4BA0)
#define MOLEMOLE_GALGAME_MAINCITYCHATINLEVELPLAYSTORYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x129A4B90)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatInLevelPlayStoryNode_TypeDefinitionIndex = 55248;

	class MainCityChatInLevelPlayStoryNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::String* showName; // 0x18
		::MoleMole::Battle::AnimatorParamControl* animatorParamControl; // 0x20
		::System::String* dialogueKey; // 0x28
		::System::Boolean triggerOnFinish; // 0x30
		::MoleMole::GalGame::InLevelChatEntitySlot ChatEntitySlot; // 0x34
		::System::Single speakSpeed; // 0x38
		::System::Int32 actionDelay; // 0x3C
		::System::Single time; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATINLEVELPLAYSTORYNODE__CTOR_OFFSET))(this);
		}

		::Class_1_2D5DADE6FF36AA79* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_2D5DADE6FF36AA79*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATINLEVELPLAYSTORYNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
