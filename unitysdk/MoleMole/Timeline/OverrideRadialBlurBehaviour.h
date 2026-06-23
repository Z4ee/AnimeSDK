#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_OVERRIDERADIALBLURBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x174077A0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int OverrideRadialBlurBehaviour_TypeDefinitionIndex = 50402;

	class OverrideRadialBlurBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::Timeline::TimelineClip* Clip; // 0x10
		::UnityEngine::Rendering::Volume* CorrectedVolume; // 0x18
		::UnityEngine::Transform* FollowTrans; // 0x20
		::System::Single TriggerDelay; // 0x28
		::System::Boolean AlwaysFollow; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OVERRIDERADIALBLURBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
