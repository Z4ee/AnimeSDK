#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/System/Object.h"

namespace RPGTools::Timeline::CharacterStoryMove { class StoryMoveSequenceClip; }

#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVE_NPCSTORYMOVESEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0xAB3C4F0)

namespace RPGTools::Timeline::CharacterStoryMove
{
	inline static constexpr unsigned int NPCStoryMoveSequence_TypeDefinitionIndex = 39493;

	class NPCStoryMoveSequence : public ::System::Object
	{
	public:
		::RPG::GameCore::NPCBodySize BodySize; // 0x10
		::Il2CppArray<::RPGTools::Timeline::CharacterStoryMove::StoryMoveSequenceClip*>* Clips; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVE_NPCSTORYMOVESEQUENCE__CTOR_OFFSET))(this);
		}
	};
}
