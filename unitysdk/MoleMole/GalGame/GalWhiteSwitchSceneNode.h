#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeBase.h"
#include "unitysdk/MoleMole/GalGame/GalSwitchSceneNode_AnimLength.h"

namespace MoleMole::GalGame { class AudioEventItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_GALWHITESWITCHSCENENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A061510)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalWhiteSwitchSceneNode_TypeDefinitionIndex = 78319;

	class GalWhiteSwitchSceneNode : public ::MoleMole::GalGame::GalPlayableNodeBase
	{
	public:
		::System::String* dialogueKey; // 0x20
		::System::String* voiceKey; // 0x28
		::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* audioEventItems; // 0x30
		::System::String* audioKey; // 0x38
		::MoleMole::GalGame::GalSwitchSceneNode_AnimLength fadeAnimLength; // 0x40
		::System::Boolean isTypeWritter; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALWHITESWITCHSCENENODE__CTOR_OFFSET))(this);
		}
	};
}
