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

#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xB8FF2B0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xB8FF2A0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTCLIP_GET_TARGETFAR_OFFSET UNITYSDK_OFFSET(0xB8FF280)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTCLIP_GET_TARGET_OFFSET UNITYSDK_OFFSET(0xB8FF260)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTCLIP_SET_TARGETFAR_OFFSET UNITYSDK_OFFSET(0xB8FF290)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTCLIP_SET_TARGET_OFFSET UNITYSDK_OFFSET(0xB8FF270)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xB8FF4F0)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int DOFTimelineEffectClip_TypeDefinitionIndex = 45279;

	class DOFTimelineEffectClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPGTools::Timeline::TimelineExposedReference Character; // 0x18
		::RPGTools::Timeline::TimelineExposedReference FarCharacter; // 0x30
		::UnityEngine::GameObject* _Target_k__BackingField; // 0x48
		::UnityEngine::GameObject* _TargetFar_k__BackingField; // 0x50
		::RPGTools::Timeline::PostProcessing::DOFTimelineEffectBehaviour* Template; // 0x58
		::System::Boolean useCustomRegion; // 0x60
		::UnityEngine::Vector3 customRegionNearPos; // 0x64
		::UnityEngine::Vector3 customRegionFarPos; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_Target()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTCLIP_GET_TARGET_OFFSET))(this);
		}

		::System::Void set_Target(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTCLIP_SET_TARGET_OFFSET))(this, value);
		}

		::UnityEngine::GameObject* get_TargetFar()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTCLIP_GET_TARGETFAR_OFFSET))(this);
		}

		::System::Void set_TargetFar(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTCLIP_SET_TARGETFAR_OFFSET))(this, value);
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
