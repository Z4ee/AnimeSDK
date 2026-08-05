#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatNPCLocation.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class Class_1_2D5DADE6FF36AA79;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace MoleMole::GalGame { class SpeakerActionCfg; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYSTORYNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x168560D0)
#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYSTORYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x168560B0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatPlayStoryNode_TypeDefinitionIndex = 61251;

	class MainCityChatPlayStoryNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::String* avatarShowingKey; // 0x18
		::System::String* soundAction; // 0x20
		::System::String* avatarName; // 0x28
		::MoleMole::GalGame::SpeakerActionCfg* speakerCfg; // 0x30
		::System::String* dialogueKey; // 0x38
		::System::String* externalVoiceKey; // 0x40
		::System::String* soundEvent; // 0x48
		::System::Single time; // 0x50
		::System::Int32 avatarId; // 0x54
		::System::Int32 actionDelay; // 0x58
		::System::Single speakSpeed; // 0x5C
		::MoleMole::GalGame::MainCityChatNPCLocation npcLocation; // 0x60
		::System::Int32 soundEventType; // 0x64
		::System::Boolean showBlackMask; // 0x68
		::System::Boolean hideAvatarName; // 0x69
		::System::Boolean triggerOnFinish; // 0x6A
		::System::Boolean autoDoNext; // 0x6B

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
