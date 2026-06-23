#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

class Class_2_131DE1F45D6E8DCF;
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class IPropertyCollector; }

#define MOLEMOLE_TIMELINE_EFFECTSIMLUATETRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x181805E0)
#define MOLEMOLE_TIMELINE_EFFECTSIMLUATETRACK_GATHERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x18180C80)
#define MOLEMOLE_TIMELINE_EFFECTSIMLUATETRACK_METHOD_5_064D173F66ED9F75_OFFSET UNITYSDK_OFFSET(0x181814B0)
#define MOLEMOLE_TIMELINE_EFFECTSIMLUATETRACK_METHOD_5_B1CEB44F8026DA0D_OFFSET UNITYSDK_OFFSET(0x18181470)
#define MOLEMOLE_TIMELINE_EFFECTSIMLUATETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x18181400)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int EffectSimluateTrack_TypeDefinitionIndex = 42667;

	class EffectSimluateTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::Class_2_131DE1F45D6E8DCF* template_; // 0xB0
		::System::Boolean editorPreview; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EFFECTSIMLUATETRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EFFECTSIMLUATETRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GatherProperties(::UnityEngine::Playables::PlayableDirector* a1, ::UnityEngine::Timeline::IPropertyCollector* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EFFECTSIMLUATETRACK_GATHERPROPERTIES_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Playables::Playable Method_5_B1CEB44F8026DA0D(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EFFECTSIMLUATETRACK_METHOD_5_B1CEB44F8026DA0D_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_064D173F66ED9F75(::UnityEngine::Playables::PlayableDirector* a1, ::UnityEngine::Timeline::IPropertyCollector* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EFFECTSIMLUATETRACK_METHOD_5_064D173F66ED9F75_OFFSET))(this, a1, a2);
		}
	};
}
