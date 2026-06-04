#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomUniqueNameTrack.h"

#define RPGTOOLS_TIMELINE_EMOTION_BASEEMOTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xD00D700)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int BaseEmoTrack_TypeDefinitionIndex = 45986;

	class BaseEmoTrack : public ::RPGTools::Timeline::CustomUniqueNameTrack
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_BASEEMOTRACK__CTOR_OFFSET))(this);
		}
	};
}
