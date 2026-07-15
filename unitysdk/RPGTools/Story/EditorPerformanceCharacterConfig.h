#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGTOOLS_STORY_EDITORPERFORMANCECHARACTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19D6A170)

namespace RPGTools::Story
{
	inline static constexpr unsigned int EditorPerformanceCharacterConfig_TypeDefinitionIndex = 47126;

	class EditorPerformanceCharacterConfig : public ::System::Object
	{
	public:
		::System::String* CharacterUniqueName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_STORY_EDITORPERFORMANCECHARACTERCONFIG__CTOR_OFFSET))(this);
		}
	};
}
