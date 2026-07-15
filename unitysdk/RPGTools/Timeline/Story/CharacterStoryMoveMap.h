#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPGTools::Timeline::Story { class AvatarStoryMoveRunData; }
namespace RPGTools::Timeline::Story { class AvatarStoryMoveWalkData; }
namespace RPGTools::Timeline::Story { class NpcStoryMoveRunData; }
namespace RPGTools::Timeline::Story { class NpcStoryMoveWalkData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPGTOOLS_TIMELINE_STORY_CHARACTERSTORYMOVEMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x199B88A0)

namespace RPGTools::Timeline::Story
{
	inline static constexpr unsigned int CharacterStoryMoveMap_TypeDefinitionIndex = 46910;

	class CharacterStoryMoveMap : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::RPGTools::Timeline::Story::AvatarStoryMoveWalkData*>* AvatarWalkMap; // 0x18
		::System::Collections::Generic::List_1<::RPGTools::Timeline::Story::AvatarStoryMoveRunData*>* AvatarRunMap; // 0x20
		::System::Collections::Generic::List_1<::RPGTools::Timeline::Story::NpcStoryMoveWalkData*>* NpcWalkMap; // 0x28
		::System::Collections::Generic::List_1<::RPGTools::Timeline::Story::NpcStoryMoveRunData*>* NpcRunMap; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORY_CHARACTERSTORYMOVEMAP__CTOR_OFFSET))(this);
		}
	};
}
