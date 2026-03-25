#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_2_E8490E6B553B7C1E;
namespace RPGTools::Timeline { class NpcPossessionClip; }
namespace System { class Object; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_NPCPOSSESSIONBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xAB7BB60)
#define RPGTOOLS_TIMELINE_NPCPOSSESSIONBEHAVIOUR_GET_TRACKINSTANCEID_OFFSET UNITYSDK_OFFSET(0xAB7BB80)
#define RPGTOOLS_TIMELINE_NPCPOSSESSIONBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB7BBA0)
#define RPGTOOLS_TIMELINE_NPCPOSSESSIONBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB7BDC0)
#define RPGTOOLS_TIMELINE_NPCPOSSESSIONBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xAB7BB70)
#define RPGTOOLS_TIMELINE_NPCPOSSESSIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB7BFB0)
#define RPGTOOLS_TIMELINE_NPCPOSSESSIONBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB7BFC0)
#define RPGTOOLS_TIMELINE_NPCPOSSESSIONBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xAB7BFD0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int NpcPossessionBehaviour_TypeDefinitionIndex = 39052;

	class NpcPossessionBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::NpcPossessionClip* _Clip_k__BackingField; // 0x10
		::Class_2_E8490E6B553B7C1E* _PossessionCmpt; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCPOSSESSIONBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::NpcPossessionClip* get_Clip()
		{
			return ((::RPGTools::Timeline::NpcPossessionClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCPOSSESSIONBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::NpcPossessionClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::NpcPossessionClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCPOSSESSIONBEHAVIOUR_SET_CLIP_OFFSET))(this, value);
		}

		::System::String* get_TrackInstanceID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCPOSSESSIONBEHAVIOUR_GET_TRACKINSTANCEID_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCPOSSESSIONBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCPOSSESSIONBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCPOSSESSIONBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCPOSSESSIONBEHAVIOUR___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
		}
	};
}
