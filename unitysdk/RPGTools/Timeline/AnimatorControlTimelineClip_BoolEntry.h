#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINECLIP_BOOLENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xE810370)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int AnimatorControlTimelineClip_BoolEntry_TypeDefinitionIndex = 48261;

	class AnimatorControlTimelineClip_BoolEntry : public ::System::Object
	{
	public:
		::System::String* key; // 0x10
		::System::Boolean value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINECLIP_BOOLENTRY__CTOR_OFFSET))(this);
		}
	};
}
