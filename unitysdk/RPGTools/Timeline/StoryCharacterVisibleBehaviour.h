#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_2_5FF2340E88CFFA8C;
namespace RPGTools::Timeline { class StoryCharacterVisibleClip; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_STORYCHARACTERVISIBLEBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x1B0C5A20)
#define RPGTOOLS_TIMELINE_STORYCHARACTERVISIBLEBEHAVIOUR_METHOD_2_029E448E640E83D4_OFFSET UNITYSDK_OFFSET(0x1B0C5B10)
#define RPGTOOLS_TIMELINE_STORYCHARACTERVISIBLEBEHAVIOUR_METHOD_2_4DAE53B8419F40B2_OFFSET UNITYSDK_OFFSET(0x1B0C5F10)
#define RPGTOOLS_TIMELINE_STORYCHARACTERVISIBLEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1B0C5A40)
#define RPGTOOLS_TIMELINE_STORYCHARACTERVISIBLEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1B0C5D90)
#define RPGTOOLS_TIMELINE_STORYCHARACTERVISIBLEBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x1B0C5A30)
#define RPGTOOLS_TIMELINE_STORYCHARACTERVISIBLEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0C5FE0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int StoryCharacterVisibleBehaviour_TypeDefinitionIndex = 48784;

	class StoryCharacterVisibleBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::StoryCharacterVisibleClip* _Clip_k__BackingField; // 0x10
		::System::Single DirectlyDitherValue; // 0x18
		::Class_2_5FF2340E88CFFA8C* _VisibleCmpt; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYCHARACTERVISIBLEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::StoryCharacterVisibleClip* get_Clip()
		{
			return ((::RPGTools::Timeline::StoryCharacterVisibleClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYCHARACTERVISIBLEBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::StoryCharacterVisibleClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::StoryCharacterVisibleClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYCHARACTERVISIBLEBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYCHARACTERVISIBLEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYCHARACTERVISIBLEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_029E448E640E83D4(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYCHARACTERVISIBLEBEHAVIOUR_METHOD_2_029E448E640E83D4_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_4DAE53B8419F40B2(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYCHARACTERVISIBLEBEHAVIOUR_METHOD_2_4DAE53B8419F40B2_OFFSET))(this, a1, a2, a3);
		}
	};
}
