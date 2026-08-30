#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class BlockSetVisibilityClip; }

#define RPGTOOLS_TIMELINE_BLOCKSETVISIBILITYBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x1D1305E0)
#define RPGTOOLS_TIMELINE_BLOCKSETVISIBILITYBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1D130600)
#define RPGTOOLS_TIMELINE_BLOCKSETVISIBILITYBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x1D1305F0)
#define RPGTOOLS_TIMELINE_BLOCKSETVISIBILITYBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D130AB0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int BlockSetVisibilityBehaviour_TypeDefinitionIndex = 48333;

	class BlockSetVisibilityBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::BlockSetVisibilityClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BLOCKSETVISIBILITYBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::BlockSetVisibilityClip* get_Clip()
		{
			return ((::RPGTools::Timeline::BlockSetVisibilityClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BLOCKSETVISIBILITYBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::BlockSetVisibilityClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::BlockSetVisibilityClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BLOCKSETVISIBILITYBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BLOCKSETVISIBILITYBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}
