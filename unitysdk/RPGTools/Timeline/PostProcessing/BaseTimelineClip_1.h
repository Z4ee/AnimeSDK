#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/BaseTimelineClip.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace UnityEngine { class GameObject; }

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int BaseTimelineClip_1_TypeDefinitionIndex = 46743;

	template <typename T>
	class BaseTimelineClip_1 : public ::RPGTools::Timeline::PostProcessing::BaseTimelineClip
	{
	public:
		T Template; // 0x0
	};
}
