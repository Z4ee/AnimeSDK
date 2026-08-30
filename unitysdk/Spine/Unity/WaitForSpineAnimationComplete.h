#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/WaitForSpineAnimation.h"

namespace Spine { class TrackEntry; }

#define SPINE_UNITY_WAITFORSPINEANIMATIONCOMPLETE_NOWWAITFOR_OFFSET UNITYSDK_OFFSET(0x18342C70)
#define SPINE_UNITY_WAITFORSPINEANIMATIONCOMPLETE__CTOR_OFFSET UNITYSDK_OFFSET(0x18342C40)

namespace Spine::Unity
{
	inline static constexpr unsigned int WaitForSpineAnimationComplete_TypeDefinitionIndex = 43915;

	class WaitForSpineAnimationComplete : public ::Spine::Unity::WaitForSpineAnimation
	{
	public:
		::System::Void _ctor(::Spine::TrackEntry* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEANIMATIONCOMPLETE__CTOR_OFFSET))(this, a1, a2);
		}

		::Spine::Unity::WaitForSpineAnimationComplete* NowWaitFor(::Spine::TrackEntry* a1, ::System::Boolean a2)
		{
			return ((::Spine::Unity::WaitForSpineAnimationComplete*(*)(::PVOID, ::Spine::TrackEntry*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEANIMATIONCOMPLETE_NOWWAITFOR_OFFSET))(this, a1, a2);
		}
	};
}
