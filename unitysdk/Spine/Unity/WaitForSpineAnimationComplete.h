#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/WaitForSpineAnimation.h"

namespace Spine { class TrackEntry; }

#define SPINE_UNITY_WAITFORSPINEANIMATIONCOMPLETE_NOWWAITFOR_OFFSET UNITYSDK_OFFSET(0x1AD525C0)
#define SPINE_UNITY_WAITFORSPINEANIMATIONCOMPLETE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD52590)

namespace Spine::Unity
{
	inline static constexpr unsigned int WaitForSpineAnimationComplete_TypeDefinitionIndex = 39532;

	class WaitForSpineAnimationComplete : public ::Spine::Unity::WaitForSpineAnimation
	{
	public:
		::System::Void _ctor(::Spine::TrackEntry* trackEntry, ::System::Boolean includeEndEvent)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEANIMATIONCOMPLETE__CTOR_OFFSET))(this, trackEntry, includeEndEvent);
		}

		::Spine::Unity::WaitForSpineAnimationComplete* NowWaitFor(::Spine::TrackEntry* trackEntry, ::System::Boolean includeEndEvent)
		{
			return ((::Spine::Unity::WaitForSpineAnimationComplete*(*)(::PVOID, ::Spine::TrackEntry*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEANIMATIONCOMPLETE_NOWWAITFOR_OFFSET))(this, trackEntry, includeEndEvent);
		}
	};
}
