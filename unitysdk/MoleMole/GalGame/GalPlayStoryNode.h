#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayStoryNode_SwitchContinuousShakeType.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeBase.h"

namespace MoleMole::GalGame { class ArgueStoryNodeConfig; }
namespace MoleMole::GalGame { class AudioEventItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_GALPLAYSTORYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0614A0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalPlayStoryNode_TypeDefinitionIndex = 59466;

	class GalPlayStoryNode : public ::MoleMole::GalGame::GalPlayableNodeBase
	{
	public:
		::System::String* avatarPoseKey; // 0x20
		::System::String* avatarShowingKey; // 0x28
		::System::String* whiteScreenShakeAudioEventID; // 0x30
		::MoleMole::GalGame::ArgueStoryNodeConfig* argueStoryNodeConfig; // 0x38
		::System::String* externalVoiceKey; // 0x40
		::System::String* avatarName; // 0x48
		::System::String* soundKey; // 0x50
		::System::String* dialogueKey; // 0x58
		::System::String* singleShakeKey; // 0x60
		::System::String* avatarFacialKey; // 0x68
		::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* audioEventItems; // 0x70
		::System::Single whiteScreenShakeDelay; // 0x78
		::System::Boolean isChangingShakeMode; // 0x7C
		::System::Boolean enableWhiteScreenShaking; // 0x7D
		::System::Int32 actorId; // 0x80
		::MoleMole::GalGame::GalPlayStoryNode_SwitchContinuousShakeType switchContinuousShakeType; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYSTORYNODE__CTOR_OFFSET))(this);
		}
	};
}
