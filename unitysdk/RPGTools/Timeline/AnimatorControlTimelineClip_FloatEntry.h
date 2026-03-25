#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINECLIP_FLOATENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xAB1E880)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int AnimatorControlTimelineClip_FloatEntry_TypeDefinitionIndex = 38672;

	class AnimatorControlTimelineClip_FloatEntry : public ::System::Object
	{
	public:
		::System::String* key; // 0x10
		::System::Single value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORCONTROLTIMELINECLIP_FLOATENTRY__CTOR_OFFSET))(this);
		}
	};
}
