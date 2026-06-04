#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVE_STORYMOVESEQUENCECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xCFF4080)

namespace RPGTools::Timeline::CharacterStoryMove
{
	inline static constexpr unsigned int StoryMoveSequenceClip_TypeDefinitionIndex = 45983;

	class StoryMoveSequenceClip : public ::System::Object
	{
	public:
		::System::Boolean IsMove; // 0x10
		::RPG::GameCore::CharacterMotionFlag MotionFlag; // 0x14
		::System::String* AnimStateName; // 0x18
		::System::Single AnimNormalizedStartTime; // 0x20
		::System::Single AnimNormalizedTransitionTime; // 0x24
		::System::Single AnimNormalizedPlayTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVE_STORYMOVESEQUENCECLIP__CTOR_OFFSET))(this);
		}
	};
}
