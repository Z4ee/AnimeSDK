#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BodySize.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPGTools::Timeline::CharacterStoryMove { class AvatarStoryMoveSequence; }
namespace RPGTools::Timeline::CharacterStoryMove { class AvatarStoryMoveSequenceConfig; }
namespace RPGTools::Timeline::CharacterStoryMove { class NPCStoryMoveSequence; }
namespace RPGTools::Timeline::CharacterStoryMove { class NPCStoryMoveSequenceConfig; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVE_CHARACTERSTORYMOVESEQUENCECONFIG_METHOD_3_20D49EF32D4513D5_OFFSET UNITYSDK_OFFSET(0xE830480)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVE_CHARACTERSTORYMOVESEQUENCECONFIG_METHOD_3_736C85A2248DC1F8_OFFSET UNITYSDK_OFFSET(0xE830310)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVE_CHARACTERSTORYMOVESEQUENCECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xE8305F0)

namespace RPGTools::Timeline::CharacterStoryMove
{
	inline static constexpr unsigned int CharacterStoryMoveSequenceConfig_TypeDefinitionIndex = 49167;

	class CharacterStoryMoveSequenceConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::Il2CppArray<::RPGTools::Timeline::CharacterStoryMove::AvatarStoryMoveSequenceConfig*>* AvatarSequences; // 0x18
		::Il2CppArray<::RPGTools::Timeline::CharacterStoryMove::NPCStoryMoveSequenceConfig*>* NPCSequences; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVE_CHARACTERSTORYMOVESEQUENCECONFIG__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::CharacterStoryMove::AvatarStoryMoveSequence* Method_3_736C85A2248DC1F8(::System::String* a1, ::RPG::GameCore::BodySize a2)
		{
			return ((::RPGTools::Timeline::CharacterStoryMove::AvatarStoryMoveSequence*(*)(::PVOID, ::System::String*, ::RPG::GameCore::BodySize))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVE_CHARACTERSTORYMOVESEQUENCECONFIG_METHOD_3_736C85A2248DC1F8_OFFSET))(this, a1, a2);
		}

		::RPGTools::Timeline::CharacterStoryMove::NPCStoryMoveSequence* Method_3_20D49EF32D4513D5(::System::String* a1, ::RPG::GameCore::NPCBodySize a2)
		{
			return ((::RPGTools::Timeline::CharacterStoryMove::NPCStoryMoveSequence*(*)(::PVOID, ::System::String*, ::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVE_CHARACTERSTORYMOVESEQUENCECONFIG_METHOD_3_20D49EF32D4513D5_OFFSET))(this, a1, a2);
		}
	};
}
