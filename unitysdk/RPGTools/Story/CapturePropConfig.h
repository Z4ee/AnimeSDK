#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGTOOLS_STORY_CAPTUREPROPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xCFD24F0)

namespace RPGTools::Story
{
	inline static constexpr unsigned int CapturePropConfig_TypeDefinitionIndex = 46163;

	class CapturePropConfig : public ::System::Object
	{
	public:
		::System::String* GroupID; // 0x10
		::System::String* PropID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_STORY_CAPTUREPROPCONFIG__CTOR_OFFSET))(this);
		}
	};
}
