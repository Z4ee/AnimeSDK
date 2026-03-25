#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPGTools::Timeline { class CharacterTimeSlowClip; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_CHARACTERTIMESLOWBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xAB40C90)
#define RPGTOOLS_TIMELINE_CHARACTERTIMESLOWBEHAVIOUR_METHOD_2_20A391A342486B59_OFFSET UNITYSDK_OFFSET(0xAB40ED0)
#define RPGTOOLS_TIMELINE_CHARACTERTIMESLOWBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB40CB0)
#define RPGTOOLS_TIMELINE_CHARACTERTIMESLOWBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB40DF0)
#define RPGTOOLS_TIMELINE_CHARACTERTIMESLOWBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xAB40CA0)
#define RPGTOOLS_TIMELINE_CHARACTERTIMESLOWBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB40FB0)
#define RPGTOOLS_TIMELINE_CHARACTERTIMESLOWBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB40FC0)
#define RPGTOOLS_TIMELINE_CHARACTERTIMESLOWBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB40FD0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterTimeSlowBehaviour_TypeDefinitionIndex = 38877;

	class CharacterTimeSlowBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Single TimeScale; // 0x10
		::RPGTools::Timeline::CharacterTimeSlowClip* _Clip_k__BackingField; // 0x18
		::RPG::GameCore::GameEntity* _TargetEntity; // 0x20
		::System::Int32 _TimeScaleIndex; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERTIMESLOWBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::CharacterTimeSlowClip* get_Clip()
		{
			return ((::RPGTools::Timeline::CharacterTimeSlowClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERTIMESLOWBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::CharacterTimeSlowClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CharacterTimeSlowClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERTIMESLOWBEHAVIOUR_SET_CLIP_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERTIMESLOWBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERTIMESLOWBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_20A391A342486B59(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERTIMESLOWBEHAVIOUR_METHOD_2_20A391A342486B59_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERTIMESLOWBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERTIMESLOWBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
		}
	};
}
