#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPG::Client { class MonoEmoBlendShapesController; }
namespace RPGTools::Timeline::Emotion { class EmoBlendShapeParam; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPETIMELINEBEHAVIOUR_METHOD_2_A3827D797821B8FD_OFFSET UNITYSDK_OFFSET(0xAB5A8B0)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPETIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB5AB60)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int EmoBlendShapeTimelineBehaviour_TypeDefinitionIndex = 39512;

	class EmoBlendShapeTimelineBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Double Start; // 0x10
		::System::Double End; // 0x18
		::System::Collections::Generic::List_1<::RPGTools::Timeline::Emotion::EmoBlendShapeParam*>* EmoParams; // 0x20
		::RPG::Client::MonoEmoBlendShapesController* Controller; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* CurrentEmoParam; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPETIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_A3827D797821B8FD(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPETIMELINEBEHAVIOUR_METHOD_2_A3827D797821B8FD_OFFSET))(this, a1, a2, a3);
		}
	};
}
