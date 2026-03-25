#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/StoryLightCharacterGroup.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPGTools::Timeline { class StoryLightControlBehaviour; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_STORYLIGHTCONTROLCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xABA5CE0)
#define RPGTOOLS_TIMELINE_STORYLIGHTCONTROLCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xABA5EF0)
#define RPGTOOLS_TIMELINE_STORYLIGHTCONTROLCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xABA5F00)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int StoryLightControlClip_TypeDefinitionIndex = 39166;

	class StoryLightControlClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Boolean IsSyncSceneLight; // 0x18
		::System::Boolean EnableRotation; // 0x19
		::UnityEngine::Vector3 Rotation; // 0x1C
		::RPGTools::Timeline::StoryLightControlBehaviour* template_; // 0x28
		::System::Boolean EnableCharacterGroup; // 0x30
		::System::Collections::Generic::List_1<::RPGTools::Timeline::StoryLightCharacterGroup>* CharacterGroupList; // 0x38
		::System::Boolean AutoReset; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYLIGHTCONTROLCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYLIGHTCONTROLCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYLIGHTCONTROLCLIP_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}
