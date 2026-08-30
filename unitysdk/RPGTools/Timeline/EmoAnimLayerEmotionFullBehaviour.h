#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPGTools::Timeline { class EmoAnimLayerEmotionFullClip; }

#define RPGTOOLS_TIMELINE_EMOANIMLAYEREMOTIONFULLBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x1B56F270)
#define RPGTOOLS_TIMELINE_EMOANIMLAYEREMOTIONFULLBEHAVIOUR_METHOD_2_C701845A47AEF344_OFFSET UNITYSDK_OFFSET(0x1B56F3A0)
#define RPGTOOLS_TIMELINE_EMOANIMLAYEREMOTIONFULLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1B56F290)
#define RPGTOOLS_TIMELINE_EMOANIMLAYEREMOTIONFULLBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x1B56F280)
#define RPGTOOLS_TIMELINE_EMOANIMLAYEREMOTIONFULLBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B56F690)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int EmoAnimLayerEmotionFullBehaviour_TypeDefinitionIndex = 48551;

	class EmoAnimLayerEmotionFullBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::EmoAnimLayerEmotionFullClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOANIMLAYEREMOTIONFULLBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::EmoAnimLayerEmotionFullClip* get_Clip()
		{
			return ((::RPGTools::Timeline::EmoAnimLayerEmotionFullClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOANIMLAYEREMOTIONFULLBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::EmoAnimLayerEmotionFullClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::EmoAnimLayerEmotionFullClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOANIMLAYEREMOTIONFULLBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOANIMLAYEREMOTIONFULLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_C701845A47AEF344(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOANIMLAYEREMOTIONFULLBEHAVIOUR_METHOD_2_C701845A47AEF344_OFFSET))(this, a1);
		}
	};
}
