#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace Spine { class Skeleton; }
namespace Spine::Unity::Playables { class SpinePlayableHandleBase; }
namespace System { class Object; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPMIXERBEHAVIOUR_ONDIRECTORSTOPPED_OFFSET UNITYSDK_OFFSET(0x183EF690)
#define SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPMIXERBEHAVIOUR_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x183EF490)
#define SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPMIXERBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x183EF5D0)
#define SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPMIXERBEHAVIOUR_ONSTOP_OFFSET UNITYSDK_OFFSET(0x183EF6E0)
#define SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPMIXERBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x183EF730)
#define SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPMIXERBEHAVIOUR_SETSKELETONSCALEFROMFLIP_OFFSET UNITYSDK_OFFSET(0x183EFBD0)
#define SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPMIXERBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x183EFC30)

namespace Spine::Unity::Playables
{
	inline static constexpr unsigned int SpineSkeletonFlipMixerBehaviour_TypeDefinitionIndex = 35077;

	class SpineSkeletonFlipMixerBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::Spine::Unity::Playables::SpinePlayableHandleBase* playableHandle; // 0x10
		::UnityEngine::Playables::PlayableDirector* director; // 0x18
		::System::Single baseScaleX; // 0x20
		::System::Single originalScaleY; // 0x24
		::System::Boolean m_FirstFrameHappened; // 0x28
		::System::Single baseScaleY; // 0x2C
		::System::Single originalScaleX; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPMIXERBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPMIXERBEHAVIOUR_ONPLAYABLECREATE_OFFSET))(this, playable);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable playable)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPMIXERBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, playable);
		}

		::System::Void OnDirectorStopped(::UnityEngine::Playables::PlayableDirector* obj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPMIXERBEHAVIOUR_ONDIRECTORSTOPPED_OFFSET))(this, obj);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPMIXERBEHAVIOUR_PROCESSFRAME_OFFSET))(this, playable, info, playerData);
		}

		::System::Void SetSkeletonScaleFromFlip(::Spine::Skeleton* skeleton, ::System::Boolean flipX, ::System::Boolean flipY)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPMIXERBEHAVIOUR_SETSKELETONSCALEFROMFLIP_OFFSET))(this, skeleton, flipX, flipY);
		}

		::System::Void OnStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPMIXERBEHAVIOUR_ONSTOP_OFFSET))(this);
		}
	};
}
