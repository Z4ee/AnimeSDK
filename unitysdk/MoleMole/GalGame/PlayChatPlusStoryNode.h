#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class Class_1_2D5DADE6FF36AA79;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace MoleMole::GalGame { class TagAniPair; }
namespace MoleMole::GalGame { class TagGroupAniPair; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_PLAYCHATPLUSSTORYNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x107E0F60)
#define MOLEMOLE_GALGAME_PLAYCHATPLUSSTORYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x107E0E60)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int PlayChatPlusStoryNode_TypeDefinitionIndex = 61813;

	class PlayChatPlusStoryNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::GalGame::TagAniPair*>* TagAniParams; // 0x18
		::System::String* avatarFacialKey; // 0x20
		::System::String* ExternalVoiceKey; // 0x28
		::System::Collections::Generic::List_1<::MoleMole::GalGame::TagGroupAniPair*>* GroupAniParams; // 0x30
		::System::String* DialogueKey; // 0x38
		::System::String* SoundEvent; // 0x40
		::System::String* SpeakerMember; // 0x48
		::System::String* NpcName; // 0x50
		::System::String* avatarPoseKey; // 0x58
		::System::Single AutoDoNextDelay; // 0x60
		::System::Single ClickTime; // 0x64
		::System::Int32 SpeakerNpcTag; // 0x68
		::System::Boolean AutoDoNext; // 0x6C
		::System::Int32 FacialActionID; // 0x70
		::System::Single SpeakSpeed; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_PLAYCHATPLUSSTORYNODE__CTOR_OFFSET))(this);
		}

		::Class_1_2D5DADE6FF36AA79* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_2D5DADE6FF36AA79*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_PLAYCHATPLUSSTORYNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
