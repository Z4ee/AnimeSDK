#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/GuijiDiceRollClip_GuijiDiceRollResultType.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_GUIJIDICEROLLCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x19A5D560)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x19A5D550)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLCLIP_GET_EFFECTPATH_OFFSET UNITYSDK_OFFSET(0x19A5D440)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLCLIP_GET_RESULTLOCALEULERANGLES_OFFSET UNITYSDK_OFFSET(0x19A5D040)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLCLIP_GET_WWISEEVENT_OFFSET UNITYSDK_OFFSET(0x19A5D4C0)
#define RPGTOOLS_TIMELINE_GUIJIDICEROLLCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x19A5D6C0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int GuijiDiceRollClip_TypeDefinitionIndex = 46357;

	class GuijiDiceRollClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		// static const ::System::String* DEFAULT_RESULT_NODE_PATH; // 0x0
		// static const ::System::String* ANIMATION_PATH; // 0x0
		// static const ::System::String* BIG_SUCCESS_EFFECT_PATH; // 0x0
		// static const ::System::String* SUCCESS_EFFECT_PATH; // 0x0
		// static const ::System::String* MISS_EFFECT_PATH; // 0x0
		// static const ::System::String* BIG_SUCCESS_WWISE_EVENT; // 0x0
		// static const ::System::String* SUCCESS_WWISE_EVENT; // 0x0
		// static const ::System::String* MISS_WWISE_EVENT; // 0x0
		// static const ::System::String* VFX_TRIGGER_ANIMATION_EVENT_NAME; // 0x0
		// static const ::System::String* EFFECT_UNIQUE_NAME; // 0x0
		::System::String* CharacterUniqueName; // 0x18
		::RPGTools::Timeline::GuijiDiceRollClip_GuijiDiceRollResultType ResultType; // 0x20
		::UnityEngine::Vector3 BigSuccessLocalEulerAngles; // 0x24
		::UnityEngine::Vector3 SuccessLocalEulerAngles; // 0x30
		::UnityEngine::Vector3 MissLocalEulerAngles; // 0x3C
		::System::String* AreaName; // 0x48
		::System::String* AnchorName; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::String* get_EffectPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLCLIP_GET_EFFECTPATH_OFFSET))(this);
		}

		::System::String* get_WwiseEvent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLCLIP_GET_WWISEEVENT_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_ResultLocalEulerAngles()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_GUIJIDICEROLLCLIP_GET_RESULTLOCALEULERANGLES_OFFSET))(this);
		}
	};
}
