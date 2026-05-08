#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeBase.h"

namespace MoleMole::GalGame { class AudioEventItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_GALPLAYPICTURESTORYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x14287960)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalPlayPictureStoryNode_TypeDefinitionIndex = 54383;

	class GalPlayPictureStoryNode : public ::MoleMole::GalGame::GalPlayableNodeBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* audioEventItems; // 0x20
		::System::String* avatarName; // 0x28
		::System::String* dialogueKey; // 0x30
		::System::String* soundKey; // 0x38
		::System::String* externalVoiceKey; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYPICTURESTORYNODE__CTOR_OFFSET))(this);
		}
	};
}
