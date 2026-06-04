#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPGTools::Timeline { class BPCharacterTimeSlowClip; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_BPCHARACTERTIMESLOWBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xCFDC170)
#define RPGTOOLS_TIMELINE_BPCHARACTERTIMESLOWBEHAVIOUR_METHOD_2_487F31113A7365D2_OFFSET UNITYSDK_OFFSET(0xCFDC3B0)
#define RPGTOOLS_TIMELINE_BPCHARACTERTIMESLOWBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xCFDC190)
#define RPGTOOLS_TIMELINE_BPCHARACTERTIMESLOWBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xCFDC2D0)
#define RPGTOOLS_TIMELINE_BPCHARACTERTIMESLOWBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xCFDC180)
#define RPGTOOLS_TIMELINE_BPCHARACTERTIMESLOWBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xCFDC490)
#define RPGTOOLS_TIMELINE_BPCHARACTERTIMESLOWBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xCFDC4A0)
#define RPGTOOLS_TIMELINE_BPCHARACTERTIMESLOWBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xCFDC4B0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int BPCharacterTimeSlowBehaviour_TypeDefinitionIndex = 45122;

	class BPCharacterTimeSlowBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Single TimeScale; // 0x10
		::RPGTools::Timeline::BPCharacterTimeSlowClip* _Clip_k__BackingField; // 0x18
		::RPG::GameCore::GameEntity* _TargetEntity; // 0x20
		::System::Int32 _TimeScaleIndex; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BPCHARACTERTIMESLOWBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::BPCharacterTimeSlowClip* get_Clip()
		{
			return ((::RPGTools::Timeline::BPCharacterTimeSlowClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BPCHARACTERTIMESLOWBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::BPCharacterTimeSlowClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::BPCharacterTimeSlowClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BPCHARACTERTIMESLOWBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BPCHARACTERTIMESLOWBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BPCHARACTERTIMESLOWBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_487F31113A7365D2(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BPCHARACTERTIMESLOWBEHAVIOUR_METHOD_2_487F31113A7365D2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BPCHARACTERTIMESLOWBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BPCHARACTERTIMESLOWBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}
	};
}
