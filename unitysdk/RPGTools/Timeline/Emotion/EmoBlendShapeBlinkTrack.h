#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/Emotion/BaseEmoTrack.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace RPG::Client { class MonoEmoBlendShapesController; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEBLINKTRACK_COMPILETRACKS_OFFSET UNITYSDK_OFFSET(0x19A48ED0)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEBLINKTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x19A491C0)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEBLINKTRACK_GET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0x19A48DE0)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEBLINKTRACK_GET_USEUNIQUECHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x19A48DD0)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEBLINKTRACK_METHOD_7_8BFD1173A5F6D827_OFFSET UNITYSDK_OFFSET(0x19A48FD0)
#define RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEBLINKTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x19A492E0)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int EmoBlendShapeBlinkTrack_TypeDefinitionIndex = 46956;

	class EmoBlendShapeBlinkTrack : public ::RPGTools::Timeline::Emotion::BaseEmoTrack
	{
	public:
		::RPG::Client::MonoEmoBlendShapesController* _controller; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEBLINKTRACK__CTOR_OFFSET))(this);
		}

		::System::Boolean get_UseUniqueCharacterName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEBLINKTRACK_GET_USEUNIQUECHARACTERNAME_OFFSET))(this);
		}

		::RPG::Client::MonoEmoBlendShapesController* get_Controller()
		{
			return ((::RPG::Client::MonoEmoBlendShapesController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEBLINKTRACK_GET_CONTROLLER_OFFSET))(this);
		}

		::System::Void CompileTracks(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Playables::Playable a2, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* a3, ::UnityEngine::GameObject* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::Playable, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEBLINKTRACK_COMPILETRACKS_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEBLINKTRACK_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_7_8BFD1173A5F6D827(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOBLENDSHAPEBLINKTRACK_METHOD_7_8BFD1173A5F6D827_OFFSET))(this, a1);
		}
	};
}
