#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace Spine { class Skeleton; }
namespace Spine::Unity::Playables { class SpinePlayableHandleBase; }
namespace System { class Object; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPMIXERBEHAVIOUR_ONDIRECTORSTOPPED_OFFSET UNITYSDK_OFFSET(0x1E62E170)
#define SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPMIXERBEHAVIOUR_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x1E62DF50)
#define SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPMIXERBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1E62E0A0)
#define SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPMIXERBEHAVIOUR_ONSTOP_OFFSET UNITYSDK_OFFSET(0x1E62E180)
#define SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPMIXERBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1E62E230)
#define SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPMIXERBEHAVIOUR_SETSKELETONSCALEFROMFLIP_OFFSET UNITYSDK_OFFSET(0x1E62E6E0)
#define SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPMIXERBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E62E740)

namespace Spine::Unity::Playables
{
	inline static constexpr unsigned int SpineSkeletonFlipMixerBehaviour_TypeDefinitionIndex = 44773;

	class SpineSkeletonFlipMixerBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::Spine::Unity::Playables::SpinePlayableHandleBase* playableHandle; // 0x10
		::UnityEngine::Playables::PlayableDirector* director; // 0x18
		::System::Single originalScaleX; // 0x20
		::System::Single baseScaleX; // 0x24
		::System::Single baseScaleY; // 0x28
		::System::Single originalScaleY; // 0x2C
		::System::Boolean m_FirstFrameHappened; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPMIXERBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPMIXERBEHAVIOUR_ONPLAYABLECREATE_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPMIXERBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void OnDirectorStopped(::UnityEngine::Playables::PlayableDirector* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPMIXERBEHAVIOUR_ONDIRECTORSTOPPED_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPMIXERBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetSkeletonScaleFromFlip(::Spine::Skeleton* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPMIXERBEHAVIOUR_SETSKELETONSCALEFROMFLIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPMIXERBEHAVIOUR_ONSTOP_OFFSET))(this);
		}
	};
}
