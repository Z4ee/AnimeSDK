#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ExposedReference_1.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class CameraData; }
namespace RPGTools::Timeline { class MainCameraTimelineBehaviour; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xB8EBFA0)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xB8EBF90)
#define RPGTOOLS_TIMELINE_MAINCAMERATIMELINECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xB8EC210)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int MainCameraTimelineClip_TypeDefinitionIndex = 45171;

	class MainCameraTimelineClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPGTools::Timeline::MainCameraTimelineBehaviour* template_; // 0x18
		::RPGTools::Timeline::CameraData* cameraData; // 0x20
		::System::Boolean lookAtMode; // 0x28
		::UnityEngine::ExposedReference_1<::UnityEngine::GameObject*> lookAtTarget; // 0x30
		::System::Boolean ignoreTimeScale; // 0x40
		::System::Boolean enterLerp; // 0x41
		::System::Single enterLerpDuration; // 0x44
		::System::Boolean exitLerp; // 0x48
		::System::Single exitLerpDuration; // 0x4C
		::System::Boolean pauseLevel; // 0x50
		::System::Boolean hideUIInstant; // 0x51
		::System::Single nearClip; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERATIMELINECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERATIMELINECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MAINCAMERATIMELINECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
