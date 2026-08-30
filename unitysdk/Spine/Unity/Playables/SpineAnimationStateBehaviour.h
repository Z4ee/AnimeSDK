#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace Spine::Unity { class AnimationReferenceAsset; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E629DE0)

namespace Spine::Unity::Playables
{
	inline static constexpr unsigned int SpineAnimationStateBehaviour_TypeDefinitionIndex = 44768;

	class SpineAnimationStateBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::Timeline::TimelineClip* timelineClip; // 0x10
		::Spine::Unity::AnimationReferenceAsset* animationReference; // 0x18
		::System::Boolean loop; // 0x20
		::System::Boolean customDuration; // 0x21
		::System::Boolean useBlendDuration; // 0x22
		::System::Boolean isInitialized; // 0x23
		::System::Single mixDuration; // 0x24
		::System::Boolean holdPrevious; // 0x28
		::System::Boolean dontPauseWithDirector; // 0x29
		::System::Boolean dontEndWithClip; // 0x2A
		::System::Single endMixOutDuration; // 0x2C
		::System::Single attachmentThreshold; // 0x30
		::System::Single eventThreshold; // 0x34
		::System::Single drawOrderThreshold; // 0x38
		::System::Single alpha; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATEBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
