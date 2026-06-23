#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalNPCLocation.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeBase.h"

namespace MoleMole::GalGame { class AudioEventItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_GALPLAYSUBSTORYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1261D430)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalPlaySubStoryNode_TypeDefinitionIndex = 41453;

	class GalPlaySubStoryNode : public ::MoleMole::GalGame::GalPlayableNodeBase
	{
	public:
		::System::String* soundKey; // 0x20
		::System::String* avatarFacialKey; // 0x28
		::System::String* avatarShowingKey; // 0x30
		::System::String* whiteScreenShakeAudioEventID; // 0x38
		::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* audioEventItems; // 0x40
		::System::String* avatarPoseKey; // 0x48
		::System::Boolean enableWhiteScreenShaking; // 0x50
		::MoleMole::GalGame::GalNPCLocation npcLocation; // 0x54
		::System::Int32 actorId; // 0x58
		::System::Single whiteScreenShakeDelay; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYSUBSTORYNODE__CTOR_OFFSET))(this);
		}
	};
}
