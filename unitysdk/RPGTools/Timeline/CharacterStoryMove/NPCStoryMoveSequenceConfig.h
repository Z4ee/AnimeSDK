#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPGTools::Timeline::CharacterStoryMove { class NPCStoryMoveSequence; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVE_NPCSTORYMOVESEQUENCECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xB8B1270)

namespace RPGTools::Timeline::CharacterStoryMove
{
	inline static constexpr unsigned int NPCStoryMoveSequenceConfig_TypeDefinitionIndex = 45401;

	class NPCStoryMoveSequenceConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::String* UniqueName; // 0x18
		::Il2CppArray<::RPGTools::Timeline::CharacterStoryMove::NPCStoryMoveSequence*>* Sequences; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVE_NPCSTORYMOVESEQUENCECONFIG__CTOR_OFFSET))(this);
		}
	};
}
