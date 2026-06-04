#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/WaitForSpineAnimation.h"

namespace Spine { class TrackEntry; }

#define SPINE_UNITY_WAITFORSPINEANIMATIONEND_NOWWAITFOR_OFFSET UNITYSDK_OFFSET(0x1ACE1050)
#define SPINE_UNITY_WAITFORSPINEANIMATIONEND__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACE1040)

namespace Spine::Unity
{
	inline static constexpr unsigned int WaitForSpineAnimationEnd_TypeDefinitionIndex = 41490;

	class WaitForSpineAnimationEnd : public ::Spine::Unity::WaitForSpineAnimation
	{
	public:
		::System::Void _ctor(::Spine::TrackEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEANIMATIONEND__CTOR_OFFSET))(this, a1);
		}

		::Spine::Unity::WaitForSpineAnimationEnd* NowWaitFor(::Spine::TrackEntry* a1)
		{
			return ((::Spine::Unity::WaitForSpineAnimationEnd*(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEANIMATIONEND_NOWWAITFOR_OFFSET))(this, a1);
		}
	};
}
