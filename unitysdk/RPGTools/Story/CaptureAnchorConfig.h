#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGTOOLS_STORY_CAPTUREANCHORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xE80B390)

namespace RPGTools::Story
{
	inline static constexpr unsigned int CaptureAnchorConfig_TypeDefinitionIndex = 49392;

	class CaptureAnchorConfig : public ::System::Object
	{
	public:
		::System::String* GroupID; // 0x10
		::System::String* AnchorID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_STORY_CAPTUREANCHORCONFIG__CTOR_OFFSET))(this);
		}
	};
}
