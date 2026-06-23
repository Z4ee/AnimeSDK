#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatNPCLocation.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class Class_1_2D5DADE6FF36AA79;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace MoleMole::GalGame { class SpeakerActionCfg; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYSTORYNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x10D4BBB0)
#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYSTORYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x10D4BB90)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatPlayStoryNode_TypeDefinitionIndex = 43080;

	class MainCityChatPlayStoryNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::String* soundAction; // 0x18
		::System::String* avatarName; // 0x20
		::System::String* avatarShowingKey; // 0x28
		::System::String* dialogueKey; // 0x30
		::MoleMole::GalGame::SpeakerActionCfg* speakerCfg; // 0x38
		::System::String* soundEvent; // 0x40
		::System::String* externalVoiceKey; // 0x48
		::System::Int32 soundEventType; // 0x50
		::System::Single speakSpeed; // 0x54
		::System::Int32 actionDelay; // 0x58
		::MoleMole::GalGame::MainCityChatNPCLocation npcLocation; // 0x5C
		::System::Single time; // 0x60
		::System::Boolean hideAvatarName; // 0x64
		::System::Boolean showBlackMask; // 0x65
		::System::Boolean autoDoNext; // 0x66
		::System::Boolean triggerOnFinish; // 0x67
		::System::Int32 avatarId; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYSTORYNODE__CTOR_OFFSET))(this);
		}

		::Class_1_2D5DADE6FF36AA79* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_2D5DADE6FF36AA79*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYSTORYNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
