#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPGTools::Timeline { class StoryPropMoveClip; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPGTOOLS_TIMELINE_STORYPROPMOVEBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xD05C870)
#define RPGTOOLS_TIMELINE_STORYPROPMOVEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xD05CCA0)
#define RPGTOOLS_TIMELINE_STORYPROPMOVEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xD05C890)
#define RPGTOOLS_TIMELINE_STORYPROPMOVEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xD05CF40)
#define RPGTOOLS_TIMELINE_STORYPROPMOVEBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xD05C880)
#define RPGTOOLS_TIMELINE_STORYPROPMOVEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xD05D420)
#define RPGTOOLS_TIMELINE_STORYPROPMOVEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xD05D490)
#define RPGTOOLS_TIMELINE_STORYPROPMOVEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xD05D480)
#define RPGTOOLS_TIMELINE_STORYPROPMOVEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xD05D4A0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int StoryPropMoveBehaviour_TypeDefinitionIndex = 45632;

	class StoryPropMoveBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::StoryPropMoveClip* _Clip_k__BackingField; // 0x10
		::System::Boolean _IsPlaying; // 0x18
		::RPG::GameCore::GameEntity* _Entity; // 0x20
		::UnityEngine::Vector3 _StartPosition; // 0x28
		::UnityEngine::Vector3 _StartScale; // 0x34
		::UnityEngine::Quaternion _StartRotation; // 0x40
		::UnityEngine::Vector3 _EndPosition; // 0x50
		::UnityEngine::Vector3 _EndScale; // 0x5C
		::UnityEngine::Quaternion _EndRotation; // 0x68
		::System::Single _Duration; // 0x78
		::System::Single _Timer; // 0x7C
		::System::Single _PathTotalLength; // 0x80
		::System::Boolean _UseBezierPath; // 0x84
		::System::Collections::Generic::List_1<::System::Single>* _BezierSegmentLengths; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPMOVEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::StoryPropMoveClip* get_Clip()
		{
			return ((::RPGTools::Timeline::StoryPropMoveClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPMOVEBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::StoryPropMoveClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::StoryPropMoveClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPMOVEBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPMOVEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPMOVEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPMOVEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPMOVEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPMOVEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPMOVEBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}
	};
}
