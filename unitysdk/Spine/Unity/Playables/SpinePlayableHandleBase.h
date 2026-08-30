#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { class SkeletonData; }
namespace Spine { template <typename T> class ExposedList_1; }
namespace Spine::Unity::Playables { class SpineEventDelegate; }

#define SPINE_UNITY_PLAYABLES_SPINEPLAYABLEHANDLEBASE_ADD_ANIMATIONEVENTS_OFFSET UNITYSDK_OFFSET(0x1EFC1630)
#define SPINE_UNITY_PLAYABLES_SPINEPLAYABLEHANDLEBASE_HANDLEEVENTS_OFFSET UNITYSDK_OFFSET(0x1EFC1730)
#define SPINE_UNITY_PLAYABLES_SPINEPLAYABLEHANDLEBASE_REMOVE_ANIMATIONEVENTS_OFFSET UNITYSDK_OFFSET(0x1EFC16B0)
#define SPINE_UNITY_PLAYABLES_SPINEPLAYABLEHANDLEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFBD450)

namespace Spine::Unity::Playables
{
	inline static constexpr unsigned int SpinePlayableHandleBase_TypeDefinitionIndex = 44767;

	class SpinePlayableHandleBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Spine::Unity::Playables::SpineEventDelegate* AnimationEvents; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEPLAYABLEHANDLEBASE__CTOR_OFFSET))(this);
		}

		::System::Void add_AnimationEvents(::Spine::Unity::Playables::SpineEventDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::Playables::SpineEventDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEPLAYABLEHANDLEBASE_ADD_ANIMATIONEVENTS_OFFSET))(this, a1);
		}

		::System::Void remove_AnimationEvents(::Spine::Unity::Playables::SpineEventDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::Playables::SpineEventDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEPLAYABLEHANDLEBASE_REMOVE_ANIMATIONEVENTS_OFFSET))(this, a1);
		}

		::System::Void HandleEvents(::Spine::ExposedList_1<::Spine::Event*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::ExposedList_1<::Spine::Event*>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEPLAYABLEHANDLEBASE_HANDLEEVENTS_OFFSET))(this, a1);
		}
	};
}
