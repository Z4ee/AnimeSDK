#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPG::Client { class MonoEmoBlendShapesController; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPETIMELINEBEHAVIOURMIXER_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xB8CFAC0)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPETIMELINEBEHAVIOURMIXER__CTOR_OFFSET UNITYSDK_OFFSET(0xB8CFF10)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPETIMELINEBEHAVIOURMIXER___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xB8CFF20)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int EmoBlendShapeTimelineBehaviourMixer_TypeDefinitionIndex = 45437;

	class EmoBlendShapeTimelineBehaviourMixer : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPG::Client::MonoEmoBlendShapesController* Controller; // 0x10
		::System::Int32 ActiveBehaviourCount; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPETIMELINEBEHAVIOURMIXER__CTOR_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPETIMELINEBEHAVIOURMIXER_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPETIMELINEBEHAVIOURMIXER___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, P0, P1, P2);
		}
	};
}
