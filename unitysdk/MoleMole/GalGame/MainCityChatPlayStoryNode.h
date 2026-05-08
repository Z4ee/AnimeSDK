#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatNPCLocation.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class Class_1_328B10E9F3553A0D;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYSTORYNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x16E578C0)
#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYSTORYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x16E578A0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatPlayStoryNode_TypeDefinitionIndex = 62158;

	class MainCityChatPlayStoryNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::String* dialogueKey; // 0x18
		::System::String* externalVoiceKey; // 0x20
		::System::String* avatarName; // 0x28
		::System::String* avatarShowingKey; // 0x30
		::System::String* soundEvent; // 0x38
		::System::Int32 avatarId; // 0x40
		::System::Single speakSpeed; // 0x44
		::System::Single time; // 0x48
		::System::Int32 actionDelay; // 0x4C
		::MoleMole::GalGame::MainCityChatNPCLocation npcLocation; // 0x50
		::System::Boolean autoDoNext; // 0x54
		::System::Boolean showBlackMask; // 0x55
		::System::Boolean triggerOnFinish; // 0x56
		::System::Boolean hideAvatarName; // 0x57

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYSTORYNODE__CTOR_OFFSET))(this);
		}

		::Class_1_328B10E9F3553A0D* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_328B10E9F3553A0D*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYSTORYNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
