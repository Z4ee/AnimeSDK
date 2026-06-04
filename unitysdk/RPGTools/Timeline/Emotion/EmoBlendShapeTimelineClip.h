#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPG::Client { class MonoEmoBlendShapesController; }
namespace RPGTools::Timeline::Emotion { class EmoBlendShapeParam; }
namespace RPGTools::Timeline::Emotion { class EmoBlendShapeTimelineBehaviour; }
namespace System { template <typename T> class WeakReference_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPETIMELINECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xD012180)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPETIMELINECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xD012510)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPETIMELINECLIP_METHOD_4_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0xD0120E0)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPETIMELINECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xD012520)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int EmoBlendShapeTimelineClip_TypeDefinitionIndex = 46006;

	class EmoBlendShapeTimelineClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Collections::Generic::List_1<::RPGTools::Timeline::Emotion::EmoBlendShapeParam*>* emoParams; // 0x18
		::RPG::Client::MonoEmoBlendShapesController* MonoController; // 0x20
		::System::Double Start; // 0x28
		::System::Double End; // 0x30
		::System::WeakReference_1<::RPGTools::Timeline::Emotion::EmoBlendShapeTimelineBehaviour*>* Behaviour; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPETIMELINECLIP__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_E7EF6BC52B28648C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPETIMELINECLIP_METHOD_4_E7EF6BC52B28648C_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPETIMELINECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPETIMELINECLIP_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}
