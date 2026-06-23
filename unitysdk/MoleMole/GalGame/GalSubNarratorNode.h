#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeBase.h"

namespace MoleMole::GalGame { class AudioEventItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_GALSUBNARRATORNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x161F2CE0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalSubNarratorNode_TypeDefinitionIndex = 83752;

	class GalSubNarratorNode : public ::MoleMole::GalGame::GalPlayableNodeBase
	{
	public:
		::System::String* audioKey; // 0x20
		::System::String* externalVoiceKey; // 0x28
		::System::String* dialogueKey; // 0x30
		::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* audioEventItems; // 0x38
		::System::Boolean isTypeWritter; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSUBNARRATORNODE__CTOR_OFFSET))(this);
		}
	};
}
