#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace MoleMole::Timeline { class RuntimeMaterialBehavior; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class AnimationTrack; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x18719BE0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALPLAYABLEASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x18719BD0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALPLAYABLEASSET_METHOD_4_19A05AA5B9E9DB20_OFFSET UNITYSDK_OFFSET(0x18719B50)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALPLAYABLEASSET_METHOD_4_C433AF37CE9D6E5B_OFFSET UNITYSDK_OFFSET(0x18719E50)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALPLAYABLEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x18719D30)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RuntimeMaterialPlayableAsset_TypeDefinitionIndex = 40508;

	class RuntimeMaterialPlayableAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::RuntimeMaterialBehavior* Recorder; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALPLAYABLEASSET__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_19A05AA5B9E9DB20(::UnityEngine::GameObject* a1, ::UnityEngine::Timeline::AnimationTrack* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::AnimationTrack*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALPLAYABLEASSET_METHOD_4_19A05AA5B9E9DB20_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALPLAYABLEASSET_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_C433AF37CE9D6E5B(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALPLAYABLEASSET_METHOD_4_C433AF37CE9D6E5B_OFFSET))(this, a1);
		}
	};
}
