#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPGTools::Timeline::CharacterStoryMove { class AvatarStoryMoveSequence; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVE_AVATARSTORYMOVESEQUENCECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xB8B0F60)

namespace RPGTools::Timeline::CharacterStoryMove
{
	inline static constexpr unsigned int AvatarStoryMoveSequenceConfig_TypeDefinitionIndex = 45397;

	class AvatarStoryMoveSequenceConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::String* UniqueName; // 0x18
		::Il2CppArray<::RPGTools::Timeline::CharacterStoryMove::AvatarStoryMoveSequence*>* Sequences; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVE_AVATARSTORYMOVESEQUENCECONFIG__CTOR_OFFSET))(this);
		}
	};
}
