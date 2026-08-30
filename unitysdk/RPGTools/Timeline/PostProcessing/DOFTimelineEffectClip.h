#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/TimelineExposedReference.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPGTools::Timeline::PostProcessing { class DOFTimelineEffectBehaviour; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE8CCBF0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE8CCBE0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTCLIP_GET_TARGETFAR_OFFSET UNITYSDK_OFFSET(0xE8CCBC0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTCLIP_GET_TARGET_OFFSET UNITYSDK_OFFSET(0xE8CCBA0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTCLIP_SET_TARGETFAR_OFFSET UNITYSDK_OFFSET(0xE8CCBD0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTCLIP_SET_TARGET_OFFSET UNITYSDK_OFFSET(0xE8CCBB0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xE8CCDD0)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int DOFTimelineEffectClip_TypeDefinitionIndex = 49021;

	class DOFTimelineEffectClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPGTools::Timeline::TimelineExposedReference Character; // 0x18
		::RPGTools::Timeline::TimelineExposedReference FarCharacter; // 0x38
		::UnityEngine::GameObject* _Target_k__BackingField; // 0x58
		::UnityEngine::GameObject* _TargetFar_k__BackingField; // 0x60
		::RPGTools::Timeline::PostProcessing::DOFTimelineEffectBehaviour* Template; // 0x68
		::System::Boolean useCustomRegion; // 0x70
		::UnityEngine::Vector3 customRegionNearPos; // 0x74
		::UnityEngine::Vector3 customRegionFarPos; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_Target()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTCLIP_GET_TARGET_OFFSET))(this);
		}

		::System::Void set_Target(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTCLIP_SET_TARGET_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_TargetFar()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTCLIP_GET_TARGETFAR_OFFSET))(this);
		}

		::System::Void set_TargetFar(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTCLIP_SET_TARGETFAR_OFFSET))(this, a1);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
