#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class EyeBloomData; }

#define RPGTOOLS_TIMELINE_EMOEYEBLOOMTIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xD005A90)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int EmoEyeBloomTimelineBehaviour_TypeDefinitionIndex = 45410;

	class EmoEyeBloomTimelineBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::EyeBloomData* EyeBloomData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYEBLOOMTIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
