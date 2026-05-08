#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class Class_1_328B10E9F3553A0D;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace MoleMole::GalGame { class TagAniPair; }
namespace MoleMole::GalGame { class TagGroupAniPair; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_PLAYCHATPLUSSTORYNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x149A6F80)
#define MOLEMOLE_GALGAME_PLAYCHATPLUSSTORYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x149A6E80)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int PlayChatPlusStoryNode_TypeDefinitionIndex = 64340;

	class PlayChatPlusStoryNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::String* ExternalVoiceKey; // 0x18
		::System::String* avatarPoseKey; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::GalGame::TagAniPair*>* TagAniParams; // 0x28
		::System::Collections::Generic::List_1<::MoleMole::GalGame::TagGroupAniPair*>* GroupAniParams; // 0x30
		::System::String* NpcName; // 0x38
		::System::String* DialogueKey; // 0x40
		::System::String* SoundEvent; // 0x48
		::System::String* SpeakerMember; // 0x50
		::System::String* avatarFacialKey; // 0x58
		::System::Boolean AutoDoNext; // 0x60
		::System::Single AutoDoNextDelay; // 0x64
		::System::Single ClickTime; // 0x68
		::System::Single SpeakSpeed; // 0x6C
		::System::Int32 SpeakerNpcTag; // 0x70
		::System::Int32 FacialActionID; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_PLAYCHATPLUSSTORYNODE__CTOR_OFFSET))(this);
		}

		::Class_1_328B10E9F3553A0D* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_328B10E9F3553A0D*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_PLAYCHATPLUSSTORYNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
