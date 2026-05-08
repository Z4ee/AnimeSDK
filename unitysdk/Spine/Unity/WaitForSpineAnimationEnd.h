#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/WaitForSpineAnimation.h"

namespace Spine { class TrackEntry; }

#define SPINE_UNITY_WAITFORSPINEANIMATIONEND_NOWWAITFOR_OFFSET UNITYSDK_OFFSET(0x18B757C0)
#define SPINE_UNITY_WAITFORSPINEANIMATIONEND__CTOR_OFFSET UNITYSDK_OFFSET(0x18B757B0)

namespace Spine::Unity
{
	inline static constexpr unsigned int WaitForSpineAnimationEnd_TypeDefinitionIndex = 37905;

	class WaitForSpineAnimationEnd : public ::Spine::Unity::WaitForSpineAnimation
	{
	public:
		::System::Void _ctor(::Spine::TrackEntry* trackEntry)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEANIMATIONEND__CTOR_OFFSET))(this, trackEntry);
		}

		::Spine::Unity::WaitForSpineAnimationEnd* NowWaitFor(::Spine::TrackEntry* trackEntry)
		{
			return ((::Spine::Unity::WaitForSpineAnimationEnd*(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEANIMATIONEND_NOWWAITFOR_OFFSET))(this, trackEntry);
		}
	};
}
