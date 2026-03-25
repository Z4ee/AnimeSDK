#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define RPGTOOLS_STORY_DISCUSSIONAUTOGENERATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xAB19CF0)

namespace RPGTools::Story
{
	inline static constexpr unsigned int DiscussionAutoGenerateConfig_TypeDefinitionIndex = 39668;

	class DiscussionAutoGenerateConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Single LookAtRandomDelay; // 0x18
		::System::Single MotionSimpleTalkInterval; // 0x1C
		::System::Single MotionCharInterval; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_STORY_DISCUSSIONAUTOGENERATECONFIG__CTOR_OFFSET))(this);
		}
	};
}
