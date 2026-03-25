#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class CharacterFollowPlatformMoveClip; }

#define RPGTOOLS_TIMELINE_CHARACTERFOLLOWPLATFORMMOVEBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xAB36070)
#define RPGTOOLS_TIMELINE_CHARACTERFOLLOWPLATFORMMOVEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB36090)
#define RPGTOOLS_TIMELINE_CHARACTERFOLLOWPLATFORMMOVEBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xAB36080)
#define RPGTOOLS_TIMELINE_CHARACTERFOLLOWPLATFORMMOVEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB36150)
#define RPGTOOLS_TIMELINE_CHARACTERFOLLOWPLATFORMMOVEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB36160)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterFollowPlatformMoveBehaviour_TypeDefinitionIndex = 38808;

	class CharacterFollowPlatformMoveBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::CharacterFollowPlatformMoveClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERFOLLOWPLATFORMMOVEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::CharacterFollowPlatformMoveClip* get_Clip()
		{
			return ((::RPGTools::Timeline::CharacterFollowPlatformMoveClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERFOLLOWPLATFORMMOVEBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::CharacterFollowPlatformMoveClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CharacterFollowPlatformMoveClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERFOLLOWPLATFORMMOVEBEHAVIOUR_SET_CLIP_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERFOLLOWPLATFORMMOVEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERFOLLOWPLATFORMMOVEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}
	};
}
